__int64 __fastcall NtUserGetUnpredictedMessagePos(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx
  struct tagTHREADINFO *v4; // rax
  __int64 v5; // rcx
  unsigned int v6; // ebx

  EnterSharedCrit(a1, a2, a3);
  v4 = PtiCurrentShared(v3);
  v5 = *((unsigned __int16 *)v4 + 682);
  v6 = v5 | (*((unsigned __int16 *)v4 + 684) << 16);
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
