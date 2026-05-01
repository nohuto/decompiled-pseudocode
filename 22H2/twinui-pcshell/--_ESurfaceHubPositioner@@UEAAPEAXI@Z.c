/*
 * XREFs of ??_ESurfaceHubPositioner@@UEAAPEAXI@Z @ 0x1804472B0
 * Callers:
 *     ??_ESurfaceHubPositioner@@WCI@EAAPEAXI@Z @ 0x18016FBD0 (--_ESurfaceHubPositioner@@WCI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180090184 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1SurfaceHubPositioner@@UEAA@XZ @ 0x1804471A4 (--1SurfaceHubPositioner@@UEAA@XZ.c)
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
