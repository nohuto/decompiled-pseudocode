/*
 * XREFs of HalpHvSetSleepStateProperty @ 0x14050BD88
 * Callers:
 *     HaliAcpiMachineStateInit @ 0x14085E4B0 (HaliAcpiMachineStateInit.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 */

__int64 HalpHvSetSleepStateProperty()
{
  __int64 result; // rax

  result = 0LL;
  if ( qword_140C62590 )
    return ((__int64 (*)(void))qword_140C62590)();
  return result;
}
