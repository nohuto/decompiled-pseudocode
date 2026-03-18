/*
 * XREFs of HalpHvEnterSleepState @ 0x14050BB1C
 * Callers:
 *     HalpShutdown @ 0x140506D54 (HalpShutdown.c)
 *     HaliAcpiSleep @ 0x140528000 (HaliAcpiSleep.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 */

__int64 HalpHvEnterSleepState()
{
  __int64 result; // rax

  result = 0LL;
  if ( qword_140C62598 )
    return ((__int64 (*)(void))qword_140C62598)();
  return result;
}
