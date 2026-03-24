/*
 * XREFs of ?sizl@PDEVOBJ@@QEAA?AUtagSIZE@@XZ @ 0x1C002193C
 * Callers:
 *     ?bMakeInfoDC@DC@@QEAAHH@Z @ 0x1C0021840 (-bMakeInfoDC@DC@@QEAAHH@Z.c)
 *     DrvpDisplayConfigGetDisplayDeviceInfo @ 0x1C0021BE8 (DrvpDisplayConfigGetDisplayDeviceInfo.c)
 *     GreCreateDisplayDC @ 0x1C003CAC0 (GreCreateDisplayDC.c)
 *     bDynamicModeChange @ 0x1C00BAA30 (bDynamicModeChange.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1C013DEC4 (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 * Callees:
 *     <none>
 */

struct tagSIZE __fastcall PDEVOBJ::sizl(PDEVOBJ *this, _QWORD *a2)
{
  __int64 v2; // r8
  __int64 v3; // rax

  v2 = *(_QWORD *)this;
  if ( (*(_DWORD *)(*(_QWORD *)this + 40LL) & 0x20000) != 0 )
    v3 = *(_QWORD *)(v2 + 1720);
  else
    v3 = *(_QWORD *)(v2 + 2152);
  *a2 = v3;
  return (struct tagSIZE)a2;
}
