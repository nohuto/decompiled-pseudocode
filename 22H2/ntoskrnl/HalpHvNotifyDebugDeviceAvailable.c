/*
 * XREFs of HalpHvNotifyDebugDeviceAvailable @ 0x14050BBA4
 * Callers:
 *     HalpAcpiPostSleep @ 0x140A966C0 (HalpAcpiPostSleep.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 */

__int64 HalpHvNotifyDebugDeviceAvailable()
{
  __int64 result; // rax

  result = 0LL;
  if ( qword_140C625A0 )
    return ((__int64 (*)(void))qword_140C625A0)();
  return result;
}
