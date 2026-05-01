/*
 * XREFs of ??_ESurfaceHubPositioner@@UEAAPEAXI@Z @ 0x180447640
 * Callers:
 *     ??_ESurfaceHubPositioner@@WCI@EAAPEAXI@Z @ 0x18016FD80 (--_ESurfaceHubPositioner@@WCI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800901A4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1SurfaceHubPositioner@@UEAA@XZ @ 0x180447534 (--1SurfaceHubPositioner@@UEAA@XZ.c)
 */

SurfaceHubPositioner *__fastcall SurfaceHubPositioner::`vector deleting destructor'(
        SurfaceHubPositioner *this,
        char a2)
{
  SurfaceHubPositioner::~SurfaceHubPositioner(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x248);
  return this;
}
