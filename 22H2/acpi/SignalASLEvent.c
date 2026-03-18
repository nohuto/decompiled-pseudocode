/*
 * XREFs of SignalASLEvent @ 0x1C0054E4C
 * Callers:
 *     ResetSignal @ 0x1C00559E0 (ResetSignal.c)
 * Callees:
 *     DequeueAndReadyContext @ 0x1C00548C4 (DequeueAndReadyContext.c)
 */

void __fastcall SignalASLEvent(__int64 a1)
{
  KIRQL v2; // si

  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 24));
  if ( !DequeueAndReadyContext((char **)(a1 + 8)) )
    ++*(_DWORD *)a1;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 24), v2);
}
