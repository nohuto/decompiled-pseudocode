/*
 * XREFs of CreateTlgAggregateSession @ 0x1C030188C
 * Callers:
 *     TlgRegisterAggregateProviderEx @ 0x1C03016EC (TlgRegisterAggregateProviderEx.c)
 * Callees:
 *     memset @ 0x1C00E1980 (memset.c)
 *     DestroyAggregateSession @ 0x1C0301A30 (DestroyAggregateSession.c)
 */

_QWORD *__fastcall CreateTlgAggregateSession(char a1, char a2)
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v5; // rbx
  char *v7; // rax
  char *v8; // rdi
  _QWORD *v9; // rax
  __int64 Timer; // rax

  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)(a1 != 0 ? PagedPool : 512), 0x178uLL, 0x47417254u);
  v5 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_10;
  memset(PoolWithTag, 0, 0x178uLL);
  v5[34] = 0LL;
  if ( a2 || !a1 )
  {
    v7 = (char *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x40uLL, 0x47417254u);
    v8 = v7;
    if ( v7 )
      memset(v7, 0, 0x40uLL);
    v5[33] = v8;
    if ( !v8 )
      goto LABEL_10;
    KeInitializeEvent((PRKEVENT)(v8 + 32), NotificationEvent, 0);
    v9 = (_QWORD *)v5[33];
    v9[2] = TlgAggregateInternalFlushWorkItemRoutineKernelMode;
    v9[3] = v5;
    *v9 = 0LL;
    *(_WORD *)(v5[33] + 56LL) = 0;
    if ( a2 )
    {
      Timer = ExAllocateTimer(TlgAggregateInternalFlushTimerCallbackKernelMode, v5[33], 8LL);
      v5[45] = Timer;
      if ( !Timer )
      {
LABEL_10:
        DestroyAggregateSession(v5);
        return 0LL;
      }
    }
  }
  return v5;
}
