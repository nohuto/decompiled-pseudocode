/*
 * XREFs of ?Find@?$DynArray@PEAUHMONITOR__@@$0A@@@QEAAHAEBQEAUHMONITOR__@@@Z @ 0x180089764
 * Callers:
 *     ?AcceptBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z @ 0x180089368 (-AcceptBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z.c)
 *     ?RegisterBitmapInUse@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@_N@Z @ 0x180089C0C (-RegisterBitmapInUse@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@_N@Z.c)
 *     ?_AddToAnimatingMonitors@CAppArrangementBase@@IEAAXAEBUtagRECT@@@Z @ 0x1800B0988 (-_AddToAnimatingMonitors@CAppArrangementBase@@IEAAXAEBUtagRECT@@@Z.c)
 *     ?_IsOnAnimatingMonitor@CAppArrangementBase@@IEAA_NAEBUtagRECT@@@Z @ 0x1800B1C90 (-_IsOnAnimatingMonitor@CAppArrangementBase@@IEAA_NAEBUtagRECT@@@Z.c)
 *     ?v_ShouldIncludeInSnapshot@CVirtualDesktopThumbnail@@MEAA_NPEAVCWindowData@@@Z @ 0x1800B7B10 (-v_ShouldIncludeInSnapshot@CVirtualDesktopThumbnail@@MEAA_NPEAVCWindowData@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DynArray<HMONITOR__ *,0>::Find(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // r9d
  __int64 v3; // r8

  v2 = *(_DWORD *)(a1 + 24);
  v3 = 0LL;
  if ( !v2 )
    return 0LL;
  while ( *a2 != *(_QWORD *)(*(_QWORD *)a1 + 8 * v3) )
  {
    v3 = (unsigned int)(v3 + 1);
    if ( (unsigned int)v3 >= v2 )
      return 0LL;
  }
  return 1LL;
}
