/*
 * XREFs of HalpInitNonBusHandler @ 0x140B3208C
 * Callers:
 *     HalpPciInitSystem @ 0x140A8E250 (HalpPciInitSystem.c)
 * Callees:
 *     <none>
 */

char (__fastcall *HalpInitNonBusHandler())(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4, char a5)
{
  char (__fastcall *result)(__int64, __int64, _QWORD *, _QWORD *, char); // rax

  off_140C019D8[0] = (void (__fastcall __noreturn *)())HalpTranslateBusAddress;
  off_140C019E0[0] = (void (__fastcall __noreturn *)())xHalAllocatePmcCounterSet;
  result = HalpFindBusAddressTranslation;
  qword_140C019F0 = (__int64)HalpFindBusAddressTranslation;
  return result;
}
