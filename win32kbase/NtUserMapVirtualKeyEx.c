__int64 __fastcall NtUserMapVirtualKeyEx(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  unsigned int v6; // ebp
  unsigned int v7; // r14d
  unsigned int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  struct tagTHREADINFO *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax

  v4 = a4;
  v6 = a2;
  v7 = a1;
  PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal(a1, a2, a3, a4);
  v8 = 0;
  v13 = PtiCurrentShared(v10, v9, v11, v12);
  if ( v4 )
    v18 = HKLtoPKL(v13, a3);
  else
    v18 = *((_QWORD *)v13 + 55);
  if ( v18 )
    v8 = InternalMapVirtualKeyEx(v7, v6, *(_QWORD *)(*(_QWORD *)(v18 + 48) + 32LL));
  UserSessionSwitchLeaveCrit(v15, v14, v16, v17);
  return v8;
}
