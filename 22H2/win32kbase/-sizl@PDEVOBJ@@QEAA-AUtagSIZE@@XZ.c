/*
 * XREFs of ?sizl@PDEVOBJ@@QEAA?AUtagSIZE@@XZ @ 0x1C00AAD9C
 * Callers:
 *     DrvpDisplayConfigGetDisplayDeviceInfo @ 0x1C0034688 (DrvpDisplayConfigGetDisplayDeviceInfo.c)
 *     GreCreateDisplayDC @ 0x1C003BFE0 (GreCreateDisplayDC.c)
 *     bDynamicModeChange @ 0x1C00C75B0 (bDynamicModeChange.c)
 *     ?bMakeInfoDC@DC@@QEAAHH@Z @ 0x1C0152020 (-bMakeInfoDC@DC@@QEAAHH@Z.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1C0155C9C (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 * Callees:
 *     <none>
 */

struct tagSIZE __fastcall PDEVOBJ::sizl(PDEVOBJ *this, _QWORD *a2)
{
  __int64 v2; // r8
  __int64 v3; // rax

  v2 = *(_QWORD *)this;
  if ( (*(_DWORD *)(*(_QWORD *)this + 40LL) & 0x20000) != 0 )
    v3 = *(_QWORD *)(v2 + 1688);
  else
    v3 = *(_QWORD *)(v2 + 2120);
  *a2 = v3;
  return (struct tagSIZE)a2;
}
