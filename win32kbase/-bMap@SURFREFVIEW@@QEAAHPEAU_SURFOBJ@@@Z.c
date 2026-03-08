/*
 * XREFs of ?bMap@SURFREFVIEW@@QEAAHPEAU_SURFOBJ@@@Z @ 0x1C0021450
 * Callers:
 *     bMigrateSurfaceForConversion @ 0x1C0186E60 (bMigrateSurfaceForConversion.c)
 * Callees:
 *     ?Map@SURFACE@@QEAA?AW4SurfaceMapStatus@1@PEAXPEAVDC@@@Z @ 0x1C00214A0 (-Map@SURFACE@@QEAA-AW4SurfaceMapStatus@1@PEAXPEAVDC@@@Z.c)
 */

__int64 __fastcall SURFREFVIEW::bMap(SURFREFVIEW *this, struct _SURFOBJ *a2)
{
  int v3; // eax

  if ( a2 )
  {
    *(_QWORD *)this = (char *)a2 - 24;
    v3 = SURFACE::Map(&a2[-1].pvScan0, this, 0LL);
    *((_DWORD *)this + 2) = v3;
    if ( v3 != 2 )
      return 1LL;
    *(_QWORD *)this = 0LL;
  }
  return 0LL;
}
