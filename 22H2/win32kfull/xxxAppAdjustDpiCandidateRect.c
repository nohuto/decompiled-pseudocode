/*
 * XREFs of xxxAppAdjustDpiCandidateRect @ 0x1C01BA7E4
 * Callers:
 *     _anonymous_namespace_::xxxNormalizeRect @ 0x1C00C190C (_anonymous_namespace_--xxxNormalizeRect.c)
 *     xxxInheritWindowMonitor @ 0x1C00D0C30 (xxxInheritWindowMonitor.c)
 *     ?xxxSendDpiChangedMsgs@@YA_NPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z @ 0x1C00D1ABC (-xxxSendDpiChangedMsgs@@YA_NPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C0123FE0 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     NtUserUpdateLayeredWindow @ 0x1C01DF6D0 (NtUserUpdateLayeredWindow.c)
 * Callees:
 *     ?HasMaximizedState@@YA_NPEBUtagWND@@@Z @ 0x1C0096E98 (-HasMaximizedState@@YA_NPEBUtagWND@@@Z.c)
 *     ?IsWindowBroadcastingDpiToChildrenX@@YA_NPEAUtagWND@@@Z @ 0x1C00A770C (-IsWindowBroadcastingDpiToChildrenX@@YA_NPEAUtagWND@@@Z.c)
 *     xxxSendMessage @ 0x1C0127178 (xxxSendMessage.c)
 */

__int64 __fastcall xxxAppAdjustDpiCandidateRect(struct tagWND *a1, __int64 a2, _DWORD *a3, _DWORD *a4)
{
  unsigned int v6; // ebx
  const struct tagWND *v7; // rcx
  ULONG_PTR v8; // r10
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
