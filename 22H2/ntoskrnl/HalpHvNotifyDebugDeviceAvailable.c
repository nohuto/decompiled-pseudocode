/*
 * XREFs of HalpHvNotifyDebugDeviceAvailable @ 0x1404C29B4
 * Callers:
 *     HalpAcpiPostSleep @ 0x140995B1C (HalpAcpiPostSleep.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 */

__int64 HalpHvNotifyDebugDeviceAvailable()
{
  __int64 result; // rax

  result = 0LL;
  if ( qword_140C4A220 )
    return ((__int64 (*)(void))qword_140C4A220)();
  return result;
}
