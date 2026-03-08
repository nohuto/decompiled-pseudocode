/*
 * XREFs of HalpHvSetSleepStateProperty @ 0x140509CA8
 * Callers:
 *     HaliAcpiMachineStateInit @ 0x14085A4F0 (HaliAcpiMachineStateInit.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 HalpHvSetSleepStateProperty()
{
  __int64 result; // rax

  result = 0LL;
  if ( qword_140C62130 )
    return ((__int64 (*)(void))qword_140C62130)();
  return result;
}
