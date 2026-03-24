/*
 * XREFs of HalpHvEnterSleepState @ 0x1404C292C
 * Callers:
 *     HaliAcpiSleep @ 0x140385840 (HaliAcpiSleep.c)
 *     HalpShutdown @ 0x1404BE3DC (HalpShutdown.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 */

__int64 HalpHvEnterSleepState()
{
  __int64 result; // rax

  result = 0LL;
  if ( qword_140C4A218 )
    return ((__int64 (*)(void))qword_140C4A218)();
  return result;
}
