/*
 * XREFs of HalpHvEnterSleepState @ 0x140509A3C
 * Callers:
 *     HalpShutdown @ 0x140504C74 (HalpShutdown.c)
 *     HaliAcpiSleep @ 0x140525AD0 (HaliAcpiSleep.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 HalpHvEnterSleepState()
{
  __int64 result; // rax

  result = 0LL;
  if ( qword_140C62138 )
    return ((__int64 (*)(void))qword_140C62138)();
  return result;
}
