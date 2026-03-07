void __fastcall DxgkpComponentIdleListTimerDpc(
        struct _KDPC *Dpc,
        KSPIN_LOCK *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  signed __int64 v5; // rbx
  KSPIN_LOCK *v6; // r14
  KSPIN_LOCK *v7; // rax
  KSPIN_LOCK *v8; // r8
  KSPIN_LOCK *v9; // rcx
  KSPIN_LOCK **v10; // rdx
  _QWORD *v11; // rcx
  __int64 v12; // rdx
  KSPIN_LOCK v13; // rcx
  int v14; // r8d
  _QWORD *i; // rdi
  unsigned int v16; // ebp
  _QWORD *v17; // rcx
  __int64 v18; // rdx
  _QWORD v19[2]; // [rsp+30h] [rbp-48h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-38h] BYREF

  if ( !*((_BYTE *)DeferredContext + 3462) )
  {
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0_EtwWriteTransfer(Dpc, &Dxgk_ProcessComponentIdleList, SystemArgument1, SystemArgument2);
    v5 = MEMORY[0xFFFFF78000000014];
    memset(&LockHandle, 0, sizeof(LockHandle));
    KeAcquireInStackQueuedSpinLockAtDpcLevel(DeferredContext + 445, &LockHandle);
    v19[1] = v19;
    v6 = DeferredContext + 439;
    v19[0] = v19;
    v7 = (KSPIN_LOCK *)DeferredContext[439];
    if ( v7 != DeferredContext + 439 )
    {
      do
      {
        v8 = v7;
        v9 = v7;
        v7 = (KSPIN_LOCK *)*v7;
        if ( (__int64)v8[6] > v5 )
          break;
        if ( (KSPIN_LOCK *)v7[1] == v9 )
        {
          v10 = (KSPIN_LOCK **)v9[1];
          if ( *v10 == v9 )
          {
            *v10 = v7;
            v7[1] = (KSPIN_LOCK)v10;
            *v9 = 0LL;
            v11 = v8 + 2;
            v12 = v19[0];
            if ( *(_QWORD **)(v19[0] + 8LL) == v19 )
              continue;
          }
        }
        __fastfail(3u);
        *v11 = v19[0];
        v8[3] = (KSPIN_LOCK)v19;
        *(_QWORD *)(v12 + 8) = v11;
        v19[0] = v8 + 2;
      }
      while ( v7 != v6 );
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    for ( i = (_QWORD *)v19[0]; i != v19; i = (_QWORD *)*i )
    {
      v16 = *((_DWORD *)i - 114);
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0pqq_EtwWriteTransfer(
          v13,
          (unsigned int)&Dxgk_ReportPowerComponentState,
          v14,
          (_DWORD)DeferredContext,
          v16,
          0);
      v13 = DeferredContext[379];
      if ( v13 )
        PoFxIdleComponent(v13, v16, 0LL);
    }
    KeAcquireInStackQueuedSpinLockAtDpcLevel(DeferredContext + 445, &LockHandle);
    *((_BYTE *)DeferredContext + 3461) = 0;
    v17 = (_QWORD *)*v6;
    if ( (KSPIN_LOCK *)*v6 != v6 )
    {
      if ( v17[5] > v5 )
      {
        v18 = v17[7];
        v17[5] = v5;
        v17[6] = v18 + v5;
      }
      else
      {
        v18 = v17[6] - v5;
      }
      DXGADAPTER::ScheduleComponentIdleListTimer((DXGADAPTER *)DeferredContext, v18);
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  }
}
