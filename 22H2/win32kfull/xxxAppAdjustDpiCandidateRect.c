/*
 * XREFs of xxxAppAdjustDpiCandidateRect @ 0x1C01E5D58
 * Callers:
 *     ?xxxNormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z @ 0x1C003E464 (-xxxNormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z.c)
 *     ?xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z @ 0x1C006AB4C (-xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z.c)
 *     xxxInheritWindowMonitor @ 0x1C006C7D8 (xxxInheritWindowMonitor.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C0070758 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     NtUserUpdateLayeredWindow @ 0x1C00F1880 (NtUserUpdateLayeredWindow.c)
 * Callees:
 *     xxxSendMessage @ 0x1C005D594 (xxxSendMessage.c)
 *     IsWindowBroadcastingDpiToChildrenX @ 0x1C010D0F4 (IsWindowBroadcastingDpiToChildrenX.c)
 *     ?HasMaximizedState@@YA_NPEAUtagWND@@@Z @ 0x1C01278A8 (-HasMaximizedState@@YA_NPEAUtagWND@@@Z.c)
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
