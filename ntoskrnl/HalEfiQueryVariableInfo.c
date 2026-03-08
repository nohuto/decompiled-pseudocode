/*
 * XREFs of HalEfiQueryVariableInfo @ 0x14050AC9C
 * Callers:
 *     HalQueryEnvironmentVariableInfoEx @ 0x1405028B0 (HalQueryEnvironmentVariableInfoEx.c)
 * Callees:
 *     HalpEfiDecrementEfiCall @ 0x1402AF954 (HalpEfiDecrementEfiCall.c)
 *     HalpConvertEfiToNtStatus @ 0x1402AF97C (HalpConvertEfiToNtStatus.c)
 *     HalpEfiIncrementEfiCall @ 0x1402AF9B0 (HalpEfiIncrementEfiCall.c)
 *     HalpEfiStartRuntimeCode @ 0x1402AF9D8 (HalpEfiStartRuntimeCode.c)
 */

__int64 __fastcall HalEfiQueryVariableInfo(unsigned int a1)
{
  __int64 v2; // r10
  __int64 v3; // r11
  __int64 v4; // r8

  if ( !HalEfiRuntimeServicesTable || !HalEfiRuntimeServicesTable[8] )
    return 3221225474LL;
  HalpEfiIncrementEfiCall(0LL);
  HalpEfiStartRuntimeCode(0x100u);
  ((void (__fastcall *)(_QWORD, __int64, __int64))HalEfiRuntimeServicesTable[8])(a1, v3, v2);
  _InterlockedAnd((volatile signed __int32 *)&KeGetPcr()->HalReserved[8], 0xFFFFFEFF);
  HalpEfiDecrementEfiCall(0LL);
  return HalpConvertEfiToNtStatus(v4);
}
