/*
 * XREFs of GetLastTopMostWindow @ 0x1C00ECD80
 * Callers:
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1C0008AF0 (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 *     ?ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z @ 0x1C0025824 (-ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z.c)
 *     ?TrackBackground@@YAHPEAUtagWINDOWPOS@@PEAUtagWND@@1111@Z @ 0x1C0025CC8 (-TrackBackground@@YAHPEAUtagWINDOWPOS@@PEAUtagWND@@1111@Z.c)
 *     ?CheckTopmost@@YAHPEAUtagWINDOWPOS@@@Z @ 0x1C002600C (-CheckTopmost@@YAHPEAUtagWINDOWPOS@@@Z.c)
 *     CalcForegroundInsertAfter @ 0x1C00EC140 (CalcForegroundInsertAfter.c)
 *     ?ValidateZorder@@YAHPEAUtagCVR@@@Z @ 0x1C00F23B0 (-ValidateZorder@@YAHPEAUtagCVR@@@Z.c)
 *     LinkWindow @ 0x1C00F2760 (LinkWindow.c)
 *     _GetNextQueueWindow @ 0x1C01CA2B8 (_GetNextQueueWindow.c)
 * Callees:
 *     GetThreadDesktopWindow @ 0x1C00EC080 (GetThreadDesktopWindow.c)
 *     _GetDesktopWindow @ 0x1C00ECDE0 (_GetDesktopWindow.c)
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
