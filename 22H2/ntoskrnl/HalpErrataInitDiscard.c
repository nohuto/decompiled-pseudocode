/*
 * XREFs of HalpErrataInitDiscard @ 0x140B36040
 * Callers:
 *     HalpErrataInitSystem @ 0x140A8B0B0 (HalpErrataInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 (__fastcall *HalpErrataInitDiscard())(int a1)
{
  __int64 (__fastcall *result)(int); // rax

  result = HalpStopLegacyUsbInterrupts;
  off_140C01AD0[0] = (__int64 (__fastcall *)())HalpStopLegacyUsbInterrupts;
  return result;
}
