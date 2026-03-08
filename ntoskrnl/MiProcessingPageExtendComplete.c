/*
 * XREFs of MiProcessingPageExtendComplete @ 0x140623220
 * Callers:
 *     MiProcessDereferenceList @ 0x140622C74 (MiProcessDereferenceList.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 */

KIRQL __fastcall MiProcessingPageExtendComplete(__int64 a1, struct _KEVENT *a2, __int64 a3)
{
  volatile LONG *v5; // rcx
  KIRQL v6; // di

  v5 = (volatile LONG *)(a3 + 1408);
  if ( (*(_BYTE *)(a1 + 79) & 4) != 0 )
  {
    _InterlockedExchange(&a2[3].Header.Lock, 0);
    return ExAcquireSpinLockExclusive(v5);
  }
  else
  {
    v6 = ExAcquireSpinLockExclusive(v5);
    if ( *(_QWORD *)(a1 + 80) )
    {
      a2[1].Header.WaitListHead.Blink = *(struct _LIST_ENTRY **)(a1 + 40);
      KeSetEvent(a2 + 2, 0, 0);
    }
  }
  return v6;
}
