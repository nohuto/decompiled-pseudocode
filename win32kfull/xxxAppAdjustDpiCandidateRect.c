/*
 * XREFs of xxxAppAdjustDpiCandidateRect @ 0x1C01BB984
 * Callers:
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C006A610 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     ?xxxSendDpiChangedMsgs@@YA_NPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z @ 0x1C00994C4 (-xxxSendDpiChangedMsgs@@YA_NPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z.c)
 *     xxxInheritWindowMonitor @ 0x1C00ADDA0 (xxxInheritWindowMonitor.c)
 *     _anonymous_namespace_::xxxNormalizeRect @ 0x1C00FB938 (_anonymous_namespace_--xxxNormalizeRect.c)
 *     NtUserUpdateLayeredWindow @ 0x1C01E0780 (NtUserUpdateLayeredWindow.c)
 * Callees:
 *     xxxSendMessage @ 0x1C006E518 (xxxSendMessage.c)
 *     ?IsWindowBroadcastingDpiToChildrenX@@YA_NPEAUtagWND@@@Z @ 0x1C00DE17C (-IsWindowBroadcastingDpiToChildrenX@@YA_NPEAUtagWND@@@Z.c)
 *     ?HasMaximizedState@@YA_NPEBUtagWND@@@Z @ 0x1C00E6C80 (-HasMaximizedState@@YA_NPEBUtagWND@@@Z.c)
 */

__int64 __fastcall xxxAppAdjustDpiCandidateRect(struct tagWND *a1, __int64 a2, _DWORD *a3, _DWORD *a4)
{
  unsigned int v6; // ebx
  const struct tagWND *v7; // rcx
  struct tagWND *v8; // r10
  int v10; // [rsp+20h] [rbp-18h]
  int v11; // [rsp+24h] [rbp-14h]

  v6 = 0;
  if ( IsWindowBroadcastingDpiToChildrenX(a1) )
  {
    if ( !HasMaximizedState(v7) )
    {
      v10 = a3[2] - *a3;
      v11 = a3[3] - a3[1];
      if ( xxxSendMessage(v8, 0x2E4u) )
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
