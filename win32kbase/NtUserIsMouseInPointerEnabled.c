__int64 __fastcall NtUserIsMouseInPointerEnabled(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rcx
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9

  PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal(a1, a2, a3, a4);
  v8 = *((_QWORD *)PtiCurrentShared(v5, v4, v6, v7) + 53);
  v9 = (*(_DWORD *)(v8 + 812) >> 2) & 1;
  UserSessionSwitchLeaveCrit(v8, v10, v11, v12);
  return v9;
}
