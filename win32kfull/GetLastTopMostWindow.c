/*
 * XREFs of GetLastTopMostWindow @ 0x1C0044610
 * Callers:
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1C0008920 (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 *     ?ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z @ 0x1C0025E8C (-ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z.c)
 *     ?TrackBackground@@YAHPEAUtagWINDOWPOS@@PEAUtagWND@@1111@Z @ 0x1C0026330 (-TrackBackground@@YAHPEAUtagWINDOWPOS@@PEAUtagWND@@1111@Z.c)
 *     ?CheckTopmost@@YAHPEAUtagWINDOWPOS@@@Z @ 0x1C0026674 (-CheckTopmost@@YAHPEAUtagWINDOWPOS@@@Z.c)
 *     CalcForegroundInsertAfter @ 0x1C0041090 (CalcForegroundInsertAfter.c)
 *     LinkWindow @ 0x1C00639C0 (LinkWindow.c)
 *     ?ValidateZorder@@YAHPEAUtagCVR@@@Z @ 0x1C00A5428 (-ValidateZorder@@YAHPEAUtagCVR@@@Z.c)
 *     _GetNextQueueWindow @ 0x1C01CB3B8 (_GetNextQueueWindow.c)
 * Callees:
 *     GetThreadDesktopWindow @ 0x1C003BE08 (GetThreadDesktopWindow.c)
 *     _GetDesktopWindow @ 0x1C0044670 (_GetDesktopWindow.c)
 */

__int64 __fastcall GetLastTopMostWindow(__int64 a1, __int64 a2)
{
  __int64 ThreadDesktopWindow; // rax
  __int64 v3; // rdx
  __int64 i; // r8

  if ( !a1 || (ThreadDesktopWindow = GetDesktopWindow(a1, a2)) == 0 )
  {
    ThreadDesktopWindow = GetThreadDesktopWindow(gptiCurrent);
    if ( !ThreadDesktopWindow )
      return 0LL;
  }
  v3 = *(_QWORD *)(ThreadDesktopWindow + 112);
  if ( !v3 || (*(_BYTE *)(*(_QWORD *)(v3 + 40) + 24LL) & 8) == 0 )
    return 0LL;
  for ( i = *(_QWORD *)(v3 + 88); i && (*(_BYTE *)(*(_QWORD *)(i + 40) + 24LL) & 8) != 0; i = *(_QWORD *)(i + 88) )
    v3 = i;
  return v3;
}
