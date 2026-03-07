__int64 **__fastcall Command_FailAllCommands(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 *v4; // rcx
  __int64 **v5; // rcx
  __int64 v6; // rdx
  __int64 *v7; // rax
  __int64 v8; // rcx
  int v9; // edx
  __int64 *v10; // rbx
  __int64 **result; // rax
  __int64 *v12; // rax
  __int64 **v13; // rcx
  __int64 *v14; // [rsp+40h] [rbp-10h] BYREF
  __int64 **v15; // [rsp+48h] [rbp-8h]

  v2 = *(_QWORD *)(a1 + 112);
  v15 = &v14;
  v14 = (__int64 *)&v14;
  DynamicLock_Acquire(v2);
  v3 = a1 + 80;
  *(_DWORD *)(a1 + 36) = 5;
  v4 = *(__int64 **)(a1 + 80);
  if ( v4 == (__int64 *)(a1 + 80) )
  {
    v5 = v15;
  }
  else
  {
    *v15 = v4;
    *(_QWORD *)(*(_QWORD *)v3 + 8LL) = v15;
    **(_QWORD **)(a1 + 88) = &v14;
    v5 = *(__int64 ***)(a1 + 88);
    v15 = v5;
    *(_QWORD *)(a1 + 88) = a1 + 80;
    *(_QWORD *)v3 = v3;
  }
  v6 = a1 + 96;
  v7 = *(__int64 **)(a1 + 96);
  if ( v7 != (__int64 *)(a1 + 96) )
  {
    *v5 = v7;
    *(_QWORD *)(*(_QWORD *)v6 + 8LL) = v15;
    **(_QWORD **)(a1 + 104) = &v14;
    v15 = *(__int64 ***)(a1 + 104);
    *(_QWORD *)(a1 + 104) = a1 + 96;
    *(_QWORD *)v6 = v6;
  }
  v8 = *(_QWORD *)(a1 + 112);
  *(_BYTE *)(a1 + 128) = 1;
  DynamicLock_Release(v8);
  while ( 1 )
  {
    v10 = v14;
    result = &v14;
    if ( v14 == (__int64 *)&v14 )
      break;
    if ( (__int64 **)v14[1] != &v14 || (v12 = (__int64 *)*v14, *(__int64 **)(*v14 + 8) != v14) )
      __fastfail(3u);
    v13 = &v14;
    v14 = (__int64 *)*v14;
    v12[1] = (__int64)&v14;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 4;
      WPP_RECORDER_SF_qL(
        *(_QWORD *)(a1 + 16),
        v9,
        7,
        60,
        (__int64)&WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids,
        (char)v10,
        (unsigned __int8)HIBYTE(*((_WORD *)v10 + 18)) >> 2);
    }
    Etw_CommandCompleteError(v13, a1, v10, 3LL);
    ((void (__fastcall *)(__int64 *, __int64))v10[5])(v10, 3LL);
  }
  return result;
}
