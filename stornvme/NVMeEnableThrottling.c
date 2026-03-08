/*
 * XREFs of NVMeEnableThrottling @ 0x1C000ECF4
 * Callers:
 *     NVMeControllerInitPart3 @ 0x1C000DCDC (NVMeControllerInitPart3.c)
 * Callees:
 *     NVMeRegisterThrottling @ 0x1C0016BF8 (NVMeRegisterThrottling.c)
 */

__int64 __fastcall NVMeEnableThrottling(__int64 a1)
{
  __int64 result; // rax

  if ( !*(_BYTE *)(a1 + 20) )
  {
    NVMeRegisterThrottling(a1, 0LL, *(unsigned int *)(a1 + 140));
    NVMeRegisterThrottling(a1, 1LL, *(unsigned int *)(a1 + 140));
    NVMeRegisterThrottling(a1, 2LL, *(unsigned int *)(a1 + 140));
    NVMeRegisterThrottling(a1, 3LL, *(unsigned int *)(a1 + 140));
    NVMeRegisterThrottling(a1, 4LL, *(unsigned int *)(a1 + 140));
    NVMeRegisterThrottling(a1, 6LL, *(unsigned int *)(a1 + 140));
    NVMeRegisterThrottling(a1, 7LL, *(unsigned int *)(a1 + 140));
    result = *(unsigned int *)(a1 + 32);
    if ( (result & 0x80u) == 0LL )
      return NVMeRegisterThrottling(a1, 5LL, *(unsigned int *)(a1 + 144));
  }
  return result;
}
