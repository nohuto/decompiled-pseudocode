__int64 __fastcall xxxCsEvent(void *Src, unsigned __int16 a2)
{
  __int64 v4; // rdi
  _WORD *v5; // rax
  _WORD *v6; // rbx
  int v7; // edi
  PKDPC BufferChainingDpc; // rax
  int v9; // edx
  int *v10; // rax
  int *v11; // rsi
  int v12; // r15d
  PKDPC i; // r14
  int j; // edi
  _QWORD *v15; // rax
  __int64 v16; // r14
  __int128 v18; // [rsp+30h] [rbp-78h] BYREF
  __int64 v19; // [rsp+40h] [rbp-68h]
  __int128 v20; // [rsp+50h] [rbp-58h] BYREF
  __int64 v21; // [rsp+60h] [rbp-48h]
  __int128 v22; // [rsp+68h] [rbp-40h] BYREF
  __int64 v23; // [rsp+78h] [rbp-30h]

  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v4 = (unsigned int)a2 + 8;
  v5 = (_WORD *)Win32AllocPoolWithQuotaZInit(v4, 895775573LL);
  v6 = v5;
  if ( !v5 )
    return 16392LL;
  memmove(v5, Src, (unsigned int)v4);
  v6[3] = a2;
  v7 = 0;
  BufferChainingDpc = WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc;
  if ( WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc )
  {
    v9 = *(_DWORD *)v6;
    do
    {
      if ( (((__int64)BufferChainingDpc->SystemArgument1 & v9) == 0 || v6[2])
        && (((__int64)BufferChainingDpc->SystemArgument1 & v9) != 0 || !v6[2]) )
      {
        ++v7;
      }
      BufferChainingDpc = (PKDPC)BufferChainingDpc->DeferredRoutine;
    }
    while ( BufferChainingDpc );
  }
  v10 = (int *)Win32AllocPoolWithQuotaZInit(8LL * v7 + 8, 912552789LL);
  v11 = v10;
  if ( !v10 )
  {
    Win32FreePool(v6);
    return 16392LL;
  }
  *v10 = v7;
  v12 = 0;
  for ( i = WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc; i && v12 < v7; i = (PKDPC)i->DeferredRoutine )
  {
    if ( ((*(_DWORD *)v6 & (__int64)i->SystemArgument1) == 0 || v6[2])
      && ((*(_DWORD *)v6 & (__int64)i->SystemArgument1) != 0 || !v6[2]) )
    {
      *(_QWORD *)&v18 = &v11[2 * v12 + 2];
      *((_QWORD *)&v18 + 1) = i->SystemArgument2;
      HMAssignmentLock(&v18, 0LL);
      ++v12;
      v7 = *v11;
    }
  }
  PushW32ThreadLock(v6, &v22, Win32FreePool);
  PushW32ThreadLock(v11, &v20, DestroyEventPacketTargets);
  for ( j = 0; j < *v11; ++j )
  {
    v18 = 0LL;
    v19 = 0LL;
    v15 = (_QWORD *)HMAssignmentUnlock(&v11[2 * j + 2]);
    if ( v15 )
    {
      v16 = ValidateHwnd(*v15);
      if ( v16 )
      {
        *(_QWORD *)&v18 = *(_QWORD *)(gptiCurrent + 416LL);
        *(_QWORD *)(gptiCurrent + 416LL) = &v18;
        *((_QWORD *)&v18 + 1) = v16;
        HMLockObject(v16);
        xxxSendMessage(v16, 60LL, 0LL, v6);
        ThreadUnlock1();
      }
    }
  }
  PopAndFreeAlwaysW32ThreadLock(&v20);
  PopAndFreeAlwaysW32ThreadLock(&v22);
  return 0LL;
}
