/*
 * XREFs of TimeoutCallback @ 0x1C00551A0
 * Callers:
 *     <none>
 * Callees:
 *     RestartContext @ 0x1C00512E8 (RestartContext.c)
 */

void __fastcall TimeoutCallback(
        struct _KDPC *Dpc,
        _DWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  KIRQL v5; // al
  int v6; // ecx
  _QWORD *v7; // rax
  __int64 v8; // r8
  _QWORD *v9; // rdx

  v5 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
  NewIrql = v5;
  v6 = DeferredContext[16];
  if ( (v6 & 1) != 0 )
  {
    v7 = DeferredContext + 8;
    DeferredContext[16] = v6 & 0xFFFFFFFA | 4;
    v8 = *((_QWORD *)DeferredContext + 4);
    if ( *(_DWORD **)(v8 + 8) != DeferredContext + 8
      || (v9 = (_QWORD *)*((_QWORD *)DeferredContext + 5), (_QWORD *)*v9 != v7) )
    {
      __fastfail(3u);
    }
    *v9 = v8;
    *(_QWORD *)(v8 + 8) = v9;
    *((_QWORD *)DeferredContext + 5) = DeferredContext + 8;
    *v7 = v7;
    goto LABEL_8;
  }
  if ( (v6 & 2) != 0 )
  {
    DeferredContext[16] = v6 & 0xFFFFFFFD;
LABEL_8:
    KeReleaseSpinLock(&SpinLock, NewIrql);
    RestartContext((__int64)DeferredContext, (DeferredContext[16] & 0x100) == 0);
    return;
  }
  KeReleaseSpinLock(&SpinLock, v5);
}
