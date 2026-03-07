void __fastcall __noreturn KiSchedulerDpc(
        struct _KDPC *Dpc,
        ULONG_PTR *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  ULONG_PTR *v4; // r10
  unsigned __int64 v5; // rcx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v11; // rax
  unsigned __int8 CurrentIrql; // cl
  _DWORD *SchedulerAssist; // r9
  int v14; // eax

  v4 = DeferredContext;
  v5 = DeferredContext[13] % 0xA;
  if ( v5 <= 9 )
  {
    v6 = v5 - 5;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        v8 = v7 - 1;
        if ( v8 )
        {
          v9 = v8 - 1;
          if ( v9 )
          {
            if ( v9 == 1 )
              _disable();
          }
          else
          {
            CurrentThread = KeGetCurrentThread();
            --CurrentThread->SpecialApcDisable;
          }
        }
        else
        {
          v11 = KeGetCurrentThread();
          --v11->KernelApcDisable;
        }
      }
      else
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
        {
          SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
          v14 = 4;
          if ( CurrentIrql != 2 )
            v14 = (-1LL << (CurrentIrql + 1)) & 4;
          SchedulerAssist[5] |= v14;
        }
      }
    }
    else
    {
      RtlWriteTryAcquireTickLock((signed __int64 *)0xFFFFF78000000340LL);
    }
  }
  KiMcaDeferredRecoveryService(__ROL4__(-2071986176, 137), v4[9], v4[10], v4[11], v4[12]);
}
