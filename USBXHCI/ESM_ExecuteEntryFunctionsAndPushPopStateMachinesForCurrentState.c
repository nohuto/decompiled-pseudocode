/*
 * XREFs of ESM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState @ 0x1C000C99C
 * Callers:
 *     ESM_AddEvent @ 0x1C000C3E8 (ESM_AddEvent.c)
 *     ESM_RunStateMachine @ 0x1C000C510 (ESM_RunStateMachine.c)
 *     ESM_SmWorker @ 0x1C00513B0 (ESM_SmWorker.c)
 * Callees:
 *     WPP_RECORDER_SF_qLLL @ 0x1C000CAE4 (WPP_RECORDER_SF_qLLL.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 *     ESM_ShouldQueueWorkItem @ 0x1C0051340 (ESM_ShouldQueueWorkItem.c)
 */

__int64 __fastcall ESM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState(unsigned int *Context)
{
  unsigned int v1; // r15d
  __int64 v3; // r14
  __int64 v4; // rbp
  __int64 v5; // rdi
  int v6; // eax
  _DWORD *v7; // rcx
  int v8; // edx
  int v9; // r8d
  unsigned int v10; // r9d
  KIRQL v11; // r13
  __int64 v12; // r12
  int *v13; // rcx
  unsigned int v14; // ebx
  char v16; // r10
  int v17; // eax
  char v18; // cl
  __int64 v19; // r8
  unsigned int v20; // r9d
  __int64 v21; // rdx
  _DWORD *v22; // rax
  unsigned int v23; // ebx
  bool v24; // zf
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rax
  unsigned int v28; // edi
  int v29; // [rsp+20h] [rbp-68h]
  int v30; // [rsp+90h] [rbp+8h]

  v1 = Context[244];
  v3 = *((_QWORD *)Context + 121);
  v4 = Context[220];
  v5 = *(_QWORD *)(v3 + 8LL * (Context[v4 + 213] - v1));
  v6 = (*(__int64 (**)(void))(v5 + 8))();
  v7 = *(_DWORD **)(v5 + 24);
  v30 = v6;
  if ( v7 )
  {
    while ( 1 )
    {
      v19 = 0LL;
      if ( v7[1] == 1002 )
        goto LABEL_19;
      v20 = Context[238];
      v21 = 0LL;
      v22 = v7;
      while ( (v20 & *v22) != v20 )
      {
        v19 = (unsigned int)(v19 + 1);
        v21 = (unsigned int)v19;
        v22 = &v7[2 * v19];
        if ( v22[1] == 1002 )
          goto LABEL_19;
      }
      v23 = v7[2 * v21 + 1];
      if ( v23 == 1002 )
      {
LABEL_19:
        v30 = 1001;
        goto LABEL_2;
      }
      v4 = (unsigned int)(v4 + 1);
      Context[v4 + 213] = v23;
      v24 = Context[244] == 2000;
      Context[220] = v4;
      if ( v24 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qLLL(
          WPP_GLOBAL_Control->DeviceExtension,
          v21,
          v19,
          v20,
          v29,
          *((_QWORD *)Context + 120),
          Context[3 * ((*((_BYTE *)Context + 832) - 1) & 0x3F) + 1],
          232,
          v23);
      Context[3 * *((unsigned __int8 *)Context + 832) + 1] = v23;
      Context[3 * *((unsigned __int8 *)Context + 832) + 2] = v4;
      Context[3 * *((unsigned __int8 *)Context + 832)] = 1000;
      *((_BYTE *)Context + 832) = (*((_BYTE *)Context + 832) + 1) & 0x3F;
      v5 = *(_QWORD *)(v3 + 8LL * (v23 - v1));
      LOBYTE(v21) = *(_BYTE *)(v5 + 16) & 0x10;
      if ( (unsigned __int8)ESM_ShouldQueueWorkItem(Context, v21, v19) )
        break;
      v25 = (*(__int64 (__fastcall **)(unsigned int *))(v5 + 8))(Context);
      v7 = *(_DWORD **)(v5 + 24);
      v30 = v25;
      if ( !v7 )
        goto LABEL_2;
    }
    IoQueueWorkItem(*((PIO_WORKITEM *)Context + 123), ESM_SmWorker, DelayedWorkQueue, Context);
    return 1003;
  }
  else
  {
LABEL_2:
    v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 105);
    while ( 1 )
    {
      LODWORD(v12) = 0;
      if ( *(_DWORD *)(v5 + 32) != 1000 )
      {
        v13 = (int *)(v5 + 32);
        do
        {
          if ( v13[1] != 1000 )
            break;
          LOBYTE(v8) = *((_BYTE *)Context + 948);
          v16 = 0;
          LOBYTE(v10) = *((_BYTE *)Context + 949);
          LOBYTE(v9) = v8;
          v17 = *v13;
          if ( (_BYTE)v8 != (_BYTE)v10 )
          {
            do
            {
              v10 = Context[(unsigned __int8)v9 + 221];
              if ( v10 == v17 )
              {
                v16 = 1;
              }
              else
              {
                v26 = (unsigned __int8)v8;
                LOBYTE(v8) = (v8 + 1) & 0xF;
                Context[v26 + 221] = v10;
              }
              LOBYTE(v10) = *((_BYTE *)Context + 949);
              LOBYTE(v9) = (v9 + 1) & 0xF;
            }
            while ( (_BYTE)v9 != (_BYTE)v10 );
          }
          v18 = v8;
          if ( (_BYTE)v8 != (_BYTE)v10 )
          {
            do
            {
              v27 = v18 & 0xF;
              v18 = (v18 + 1) & 0xF;
              Context[v27 + 221] = 1000;
            }
            while ( v18 != *((_BYTE *)Context + 949) );
          }
          *((_BYTE *)Context + 949) = v8;
          if ( v16 )
          {
            KeReleaseSpinLock((PKSPIN_LOCK)Context + 105, v11);
            v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 105);
          }
          v12 = (unsigned int)(v12 + 1);
          v13 = (int *)(v5 + 32 + 8 * v12);
        }
        while ( *v13 != 1000 );
      }
      if ( (*(_DWORD *)(v5 + 16) & 8) == 0 )
        break;
      v4 = (unsigned int)(v4 - 1);
      v28 = Context[v4 + 213];
      if ( Context[244] == 2000 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qLLL(
          WPP_GLOBAL_Control->DeviceExtension,
          v8,
          v9,
          v10,
          v29,
          *((_QWORD *)Context + 120),
          Context[3 * ((*((_BYTE *)Context + 832) - 1) & 0x3F) + 1],
          232,
          Context[v4 + 213]);
      Context[3 * *((unsigned __int8 *)Context + 832) + 1] = v28;
      Context[3 * *((unsigned __int8 *)Context + 832) + 2] = v4;
      Context[3 * *((unsigned __int8 *)Context + 832)] = 1000;
      *((_BYTE *)Context + 832) = (*((_BYTE *)Context + 832) + 1) & 0x3F;
      v5 = *(_QWORD *)(v3 + 8LL * (Context[v4 + 213] - v1));
    }
    KeReleaseSpinLock((PKSPIN_LOCK)Context + 105, v11);
    v14 = v30;
    Context[220] = v4;
  }
  return v14;
}
