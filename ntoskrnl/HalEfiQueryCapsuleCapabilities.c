/*
 * XREFs of HalEfiQueryCapsuleCapabilities @ 0x14050AC0C
 * Callers:
 *     HalpQueryCapsuleCapabilities @ 0x14051EE50 (HalpQueryCapsuleCapabilities.c)
 * Callees:
 *     HalpEfiDecrementEfiCall @ 0x1402AF954 (HalpEfiDecrementEfiCall.c)
 *     HalpConvertEfiToNtStatus @ 0x1402AF97C (HalpConvertEfiToNtStatus.c)
 *     HalpEfiIncrementEfiCall @ 0x1402AF9B0 (HalpEfiIncrementEfiCall.c)
 *     HalpEfiStartRuntimeCode @ 0x1402AF9D8 (HalpEfiStartRuntimeCode.c)
 */

__int64 __fastcall HalEfiQueryCapsuleCapabilities(__int64 a1)
{
  __int64 v2; // r10
  __int64 v3; // r11
  __int64 v4; // r8

  if ( !HalEfiRuntimeServicesTable || !HalEfiRuntimeServicesTable[7] )
    return 3221225474LL;
  HalpEfiIncrementEfiCall(&HalpEfiCapsuleCalls);
  HalpEfiStartRuntimeCode(0x80u);
  ((void (__fastcall *)(__int64, __int64, __int64))HalEfiRuntimeServicesTable[7])(a1, v3, v2);
  _InterlockedAnd((volatile signed __int32 *)&KeGetPcr()->HalReserved[8], 0xFFFFFF7F);
  HalpEfiDecrementEfiCall(&HalpEfiCapsuleCalls);
  return HalpConvertEfiToNtStatus(v4);
}
