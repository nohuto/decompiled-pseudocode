/*
 * XREFs of CreateTlgAggregateSession @ 0x1C0210C04
 * Callers:
 *     TlgRegisterAggregateProviderEx @ 0x1C0210A1C (TlgRegisterAggregateProviderEx.c)
 * Callees:
 *     memset @ 0x1C0027640 (memset.c)
 *     DestroyAggregateSession @ 0x1C03D3654 (DestroyAggregateSession.c)
 */

_QWORD *__fastcall CreateTlgAggregateSession(char a1, char a2)
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v5; // rbx
  char *v6; // rax
  char *v7; // rdi
  _QWORD *v8; // rax
  __int64 Timer; // rax

  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)(a1 != 0 ? PagedPool : 512), 0x178uLL, 0x47417254u);
  v5 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_11;
  memset(PoolWithTag, 0, 0x178uLL);
  v5[34] = 0LL;
  if ( a2 || !a1 )
  {
    v6 = (char *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x40uLL, 0x47417254u);
    v7 = v6;
    if ( v6 )
      memset(v6, 0, 0x40uLL);
    v5[33] = v7;
    if ( !v7 )
      goto LABEL_11;
    KeInitializeEvent((PRKEVENT)(v7 + 32), NotificationEvent, 0);
    v8 = (_QWORD *)v5[33];
    v8[2] = TlgAggregateInternalFlushWorkItemRoutineKernelMode;
    v8[3] = v5;
    *v8 = 0LL;
    *(_WORD *)(v5[33] + 56LL) = 0;
    if ( a2 )
    {
      Timer = ExAllocateTimer(TlgAggregateInternalFlushTimerCallbackKernelMode, v5[33], 8LL);
      v5[45] = Timer;
      if ( !Timer )
      {
LABEL_11:
        DestroyAggregateSession(v5);
        return 0LL;
      }
    }
  }
  return v5;
}
