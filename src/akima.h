
#include <R.h>
#include <stdint.h>

/* ACM 526, soon to be removed: */
extern void F77_NAME(idbvip) (int *md, int *ncp, int *ndp,
                      double *xd, double *yd, double *zd,
                      int *nip, double *xi, double *yi, double *zi,
                      int *iwk, double *wk, void *missi);

extern void F77_NAME(idsfft) (int *md, int *ncp, int *ndp,
                      double *xd, double *yd,double *zd,
                      int *nxi, int *nyi,
                      double *xi, double *yi, double *zi,
                      int *iwk, double *wk, void *missi);

/* ACM 679: */
extern void F77_NAME(uvip3p) (int *np, int *nd, double *xd, double *yd,
		      int *ni, double *xi, double *yi, double *err);

/* ACM 433: */
extern void F77_NAME(intrpl) (int *l,double *x, double *y, int *n,
		      double *u, double *v, int *err);

/* ACM 760: */
extern void F77_NAME(rgbi3p) (int *md, int *nxd, int *nyd, double *xd, double *yd, double *zd,
		      int *nip, double *xi, double *yi, double *zi, int *err, double *wk);

/* ACM 761: */
extern void F77_NAME(sdsf3p) (int *md, int *ndp, double *xd, double *yd, double *zd,
		      int *nxi, double *xi, int *nyi, double *yi, double *zi,
		      int *ier, double *wk, int *iwk,
		      void *extrpi, int *near, int *next, double *dist,
		      void *linear);
extern void F77_NAME(sdbi3p) (int *md, int *ndp, double *xd, double *yd, double *zd,
		      int *nip, double *xi, double *yi, double *zi,
		      int *ier, double *wk, int *iwk,
		      void *extrpi, int *near, int *next, double *dist, void *linear);

/* bilinear, A. Gebhardt: */
extern void F77_NAME(biliip) (double *x0, double *y0, double *z0,
                      int*n0, double *x, double *y, double *z,
                      int *nx, int *ny);
