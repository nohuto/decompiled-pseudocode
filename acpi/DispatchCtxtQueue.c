/*
 * XREFs of DispatchCtxtQueue @ 0x1C0051220
 * Callers:
 *     <none>
 * Callees:
 *     RunContext @ 0x1C0053F34 (RunContext.c)
 */

void DispatchCtxtQueue()
{
  KIRQL v0; // al
  char v1; // cl
  __int64 v2; // rcx
  __int64 v3; // rax

  v0 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
  v1 = gReadyQueue & 0xFD;
  NewIrql = v0;
  gReadyQueue &= ~2u;
  if ( (__int64 *)qword_1C0070038 != &qword_1C0070038
    && ((__int64 *)RunningContextListHead == &RunningContextListHead || (gdwfAMLI & 4) != 0)
    && (v1 & 8) == 0 )
  {
    while ( 1 )
    {
      v2 = qword_1C0070038;
      if ( (__int64 *)qword_1C0070038 == &qword_1C0070038 )
        break;
      if ( *(__int64 **)(qword_1C0070038 + 8) != &qword_1C0070038
        || (v3 = *(_QWORD *)qword_1C0070038, *(_QWORD *)(*(_QWORD *)qword_1C0070038 + 8LL) != qword_1C0070038) )
      {
        __fastfail(3u);
      }
      qword_1C0070038 = *(_QWORD *)qword_1C0070038;
      *(_QWORD *)(v3 + 8) = &qword_1C0070038;
      *(_DWORD *)(v2 + 32) &= ~0x40u;
      *(_QWORD *)(v2 + 8) = v2;
      *(_QWORD *)v2 = v2;
      RunContext((PVOID)(v2 - 32));
    }
  }
  KeReleaseSpinLock(&SpinLock, NewIrql);
}
