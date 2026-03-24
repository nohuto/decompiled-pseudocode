/*
 * XREFs of xxxAppAdjustDpiCandidateRect @ 0x1C01E6318
 * Callers:
 *     ?xxxNormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z @ 0x1C003E504 (-xxxNormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z.c)
 *     ?xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z @ 0x1C006ABEC (-xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z.c)
 *     xxxInheritWindowMonitor @ 0x1C006C878 (xxxInheritWindowMonitor.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C00707F8 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     NtUserUpdateLayeredWindow @ 0x1C00F1BD0 (NtUserUpdateLayeredWindow.c)
 * Callees:
 *     xxxSendMessage @ 0x1C005D634 (xxxSendMessage.c)
 *     IsWindowBroadcastingDpiToChildrenX @ 0x1C010D474 (IsWindowBroadcastingDpiToChildrenX.c)
 *     ?HasMaximizedState@@YA_NPEAUtagWND@@@Z @ 0x1C0127C28 (-HasMaximizedState@@YA_NPEAUtagWND@@@Z.c)
 */

__int64 __fastcall xxxAppAdjustDpiCandidateRect(__int64 a1, unsigned __int16 a2, _DWORD *a3, _DWORD *a4)
{
  unsigned int v5; // ebp
  unsigned int v7; // ebx
  struct tagWND *v8; // r11
  unsigned __int64 v9; // r11
  int v11; // [rsp+20h] [rbp-18h] BYREF
  int v12; // [rsp+24h] [rbp-14h]

  v5 = a2;
  v7 = 0;
  if ( (unsigned int)IsWindowBroadcastingDpiToChildrenX(a1) )
  {
    if ( !HasMaximizedState(v8) )
    {
      v11 = a3[2] - *a3;
      v12 = a3[3] - a3[1];
      if ( xxxSendMessage(v9, 0x2E4u, v5, (struct _LARGE_STRING *)&v11) )
      {
        v7 = 1;
        a4[1] = a3[1];
        *a4 = *a3;
        a4[2] = v11 + *a3;
        a4[3] = v12 + a3[1];
      }
    }
  }
  return v7;
}
