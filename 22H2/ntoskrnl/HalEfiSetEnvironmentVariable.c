/*
 * XREFs of HalEfiSetEnvironmentVariable @ 0x14050CE9C
 * Callers:
 *     HalSetEnvironmentVariableEx @ 0x140504B70 (HalSetEnvironmentVariableEx.c)
 * Callees:
 *     HalpEfiDecrementEfiCall @ 0x14035E4B4 (HalpEfiDecrementEfiCall.c)
 *     HalpConvertEfiToNtStatus @ 0x14035E4DC (HalpConvertEfiToNtStatus.c)
 *     HalpEfiIncrementEfiCall @ 0x14035E510 (HalpEfiIncrementEfiCall.c)
 *     HalpEfiStartRuntimeCode @ 0x14035E538 (HalpEfiStartRuntimeCode.c)
 */

__int64 __fastcall HalEfiSetEnvironmentVariable(__int64 a1)
{
  unsigned int v2; // r10d
  __int64 v3; // r11
  __int64 v4; // r8

  if ( !HalEfiRuntimeServicesTable || !HalEfiRuntimeServicesTable[5] )
    return 3221225474LL;
  HalpEfiIncrementEfiCall(&HalpEfiVariableCalls);
  HalpEfiIncrementEfiCall(&HalpEfiVariableWrites);
  HalpEfiStartRuntimeCode(0x20u);
  ((void (__fastcall *)(__int64, __int64, _QWORD))HalEfiRuntimeServicesTable[5])(a1, v3, v2);
  _InterlockedAnd((volatile signed __int32 *)&KeGetPcr()->HalReserved[8], 0xFFFFFFDF);
  HalpEfiDecrementEfiCall(&HalpEfiVariableWrites);
  HalpEfiDecrementEfiCall(&HalpEfiVariableCalls);
  return HalpConvertEfiToNtStatus(v4);
}
