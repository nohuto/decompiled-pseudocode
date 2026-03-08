/*
 * XREFs of NtUserGetForegroundWindow @ 0x1C0035A50
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C0035AC4 (-GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall NtUserGetForegroundWindow(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  const struct tagWND *v4; // rcx
  struct tagTHREADINFO *v5; // rax

  EnterSharedCrit(a1, a2, a3);
  v3 = 0LL;
  v4 = (const struct tagWND *)gpqForeground;
  if ( gpqForeground )
  {
    if ( *(_QWORD *)(gpqForeground + 128LL) )
    {
      v5 = PtiCurrentShared();
      v4 = *(const struct tagWND **)(gpqForeground + 128LL);
      if ( *((_QWORD *)v5 + 57) == *((_QWORD *)v4 + 3) )
        v3 = *(_QWORD *)CoreWindowProp::GetCompositeAppFrameWindowOrSelf(v4);
    }
  }
  UserSessionSwitchLeaveCrit(v4);
  return v3;
}
