/*
 * XREFs of HalpHvNotifyDebugDeviceAvailable @ 0x140509AC4
 * Callers:
 *     HalpAcpiPostSleep @ 0x140A93580 (HalpAcpiPostSleep.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 HalpHvNotifyDebugDeviceAvailable()
{
  __int64 result; // rax

  result = 0LL;
  if ( qword_140C62140 )
    return ((__int64 (*)(void))qword_140C62140)();
  return result;
}
