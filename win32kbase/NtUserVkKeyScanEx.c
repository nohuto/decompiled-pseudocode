__int64 __fastcall NtUserVkKeyScanEx(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  unsigned __int16 v6; // si
  struct tagTHREADINFO *v7; // rax
  __int64 v8; // rax
  __int16 v9; // bx

  v4 = a3;
  v6 = a1;
  PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal(a1, a2, a3, a4);
  v7 = PtiCurrentShared();
  if ( v4 )
    v8 = HKLtoPKL(v7, a2);
  else
    v8 = *((_QWORD *)v7 + 55);
  if ( v8 )
    v9 = InternalVkKeyScanEx(v6, *(_QWORD *)(*(_QWORD *)(v8 + 48) + 32LL));
  else
    v9 = -1;
  UserSessionSwitchLeaveCrit();
  return v9;
}
