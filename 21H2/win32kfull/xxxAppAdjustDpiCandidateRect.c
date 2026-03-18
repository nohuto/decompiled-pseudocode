/*
 * XREFs of xxxAppAdjustDpiCandidateRect @ 0x1C01E0A3C
 * Callers:
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C004DF70 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     xxxInheritWindowMonitor @ 0x1C0075834 (xxxInheritWindowMonitor.c)
 *     ?xxxSendDpiChangedMsgs@@YA_NPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z @ 0x1C0078980 (-xxxSendDpiChangedMsgs@@YA_NPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z.c)
 *     NtUserUpdateLayeredWindow @ 0x1C008FA50 (NtUserUpdateLayeredWindow.c)
 *     _anonymous_namespace_::xxxNormalizeRect @ 0x1C00B2264 (_anonymous_namespace_--xxxNormalizeRect.c)
 * Callees:
 *     xxxSendMessage @ 0x1C0050D34 (xxxSendMessage.c)
 *     ?IsWindowBroadcastingDpiToChildrenX@@YA_NPEAUtagWND@@@Z @ 0x1C006A6D8 (-IsWindowBroadcastingDpiToChildrenX@@YA_NPEAUtagWND@@@Z.c)
 *     ?HasMaximizedState@@YA_NPEBUtagWND@@@Z @ 0x1C006F94C (-HasMaximizedState@@YA_NPEBUtagWND@@@Z.c)
 */

__int64 __fastcall xxxAppAdjustDpiCandidateRect(struct tagWND *a1, __int64 a2, _DWORD *a3, _DWORD *a4)
{
  unsigned int v6; // ebx
  const struct tagWND *v7; // r11
  ULONG_PTR v8; // r11
  int v10; // [rsp+20h] [rbp-18h]
  int v11; // [rsp+24h] [rbp-14h]

  v6 = 0;
  if ( IsWindowBroadcastingDpiToChildrenX(a1) )
  {
    if ( !HasMaximizedState(v7) )
    {
      v10 = a3[2] - *a3;
      v11 = a3[3] - a3[1];
      if ( xxxSendMessage(v8) )
      {
        v6 = 1;
        a4[1] = a3[1];
        *a4 = *a3;
        a4[2] = v10 + *a3;
        a4[3] = v11 + a3[1];
      }
    }
  }
  return v6;
}
