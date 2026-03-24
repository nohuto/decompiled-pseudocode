/*
 * XREFs of NtUserGetForegroundWindow @ 0x1C00668F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C0066A2C (-GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 */

__int64 NtUserGetForegroundWindow()
{
  __int64 v0; // rbx
  __int64 v1; // rcx
  __int64 ThreadWin32Thread; // rax

  EnterSharedCrit(0LL, 1LL);
  v0 = 0LL;
  v1 = gpqForeground;
  if ( gpqForeground )
  {
    if ( *(_QWORD *)(gpqForeground + 120LL) )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
      v1 = *(_QWORD *)(gpqForeground + 120LL);
      if ( *(_QWORD *)(ThreadWin32Thread + 456) == *(_QWORD *)(v1 + 24) )
        v0 = *(_QWORD *)CoreWindowProp::GetCompositeAppFrameWindowOrSelf((const struct tagWND *)v1);
    }
  }
  UserSessionSwitchLeaveCrit(v1);
  return v0;
}
