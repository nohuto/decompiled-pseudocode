/*
 * XREFs of ?sizl@PDEVOBJ@@QEAA?AUtagSIZE@@XZ @ 0x1C0071D24
 * Callers:
 *     GreCreateDisplayDC @ 0x1C002F6A0 (GreCreateDisplayDC.c)
 *     DrvpDisplayConfigGetDisplayDeviceInfo @ 0x1C0070D14 (DrvpDisplayConfigGetDisplayDeviceInfo.c)
 *     bDynamicModeChange @ 0x1C00C9250 (bDynamicModeChange.c)
 *     ?bMakeInfoDC@DC@@QEAAHH@Z @ 0x1C00CBD30 (-bMakeInfoDC@DC@@QEAAHH@Z.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1C016AB74 (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
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
