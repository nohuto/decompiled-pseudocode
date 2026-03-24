/*
 * XREFs of HalpHvSetSleepStateProperty @ 0x1404C2B98
 * Callers:
 *     HaliAcpiMachineStateInit @ 0x1407CEA70 (HaliAcpiMachineStateInit.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 */

__int64 HalpHvSetSleepStateProperty()
{
  __int64 result; // rax

  result = 0LL;
  if ( qword_140C4A210 )
    return ((__int64 (*)(void))qword_140C4A210)();
  return result;
}
