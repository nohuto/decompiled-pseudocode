__int64 __fastcall Command_ControllerResetPostResetSuccess(__int64 a1)
{
  __int64 v2; // rcx
  __int64 *v3; // r8
  int v4; // r9d
  __int64 **v5; // rcx
  __int64 *v6; // rax
  __int64 *v7; // rdx
  __int64 *v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v12; // [rsp+20h] [rbp-10h] BYREF
  __int64 *v13; // [rsp+28h] [rbp-8h]

  v2 = *(_QWORD *)(a1 + 112);
  v13 = &v12;
  v12 = (__int64)&v12;
  DynamicLock_Acquire(v2);
  v5 = (__int64 **)(a1 + 96);
  *(_DWORD *)(a1 + 36) = 1;
  while ( 1 )
  {
    v6 = *v5;
    if ( *v5 == (__int64 *)v5 )
      break;
    if ( (__int64 **)v6[1] != v5
      || (v7 = (__int64 *)*v6, *(__int64 **)(*v6 + 8) != v6)
      || (*v5 = v7, v7[1] = (__int64)v5, v8 = v13, (__int64 *)*v13 != &v12) )
    {
LABEL_11:
      __fastfail(3u);
    }
    v6[1] = (__int64)v13;
    v3 = &v12;
    *v6 = (__int64)&v12;
    *v8 = (__int64)v6;
    v13 = v6;
  }
  while ( 1 )
  {
    v9 = v12;
    if ( (__int64 *)v12 == &v12 )
      return DynamicLock_Release(*(_QWORD *)(a1 + 112));
    if ( *(__int64 **)(v12 + 8) != &v12 )
      goto LABEL_11;
    v10 = *(_QWORD *)v12;
    if ( *(_QWORD *)(*(_QWORD *)v12 + 8LL) != v12 )
      goto LABEL_11;
    v12 = *(_QWORD *)v12;
    *(_QWORD *)(v10 + 8) = &v12;
    Command_InternalSendCommand(a1, v9, (int)v3, v4);
  }
}
