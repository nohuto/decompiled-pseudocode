/*
 * XREFs of HalpEfiIncrementEfiCall @ 0x1402AF9B0
 * Callers:
 *     HalEfiGetEnvironmentVariable @ 0x1402AF8BC (HalEfiGetEnvironmentVariable.c)
 *     HalpEnumerateEnvironmentVariablesWithFilter @ 0x140398850 (HalpEnumerateEnvironmentVariablesWithFilter.c)
 *     HalEfiGetTime @ 0x14050A9DC (HalEfiGetTime.c)
 *     HalEfiQueryCapsuleCapabilities @ 0x14050AC0C (HalEfiQueryCapsuleCapabilities.c)
 *     HalEfiQueryVariableInfo @ 0x14050AC9C (HalEfiQueryVariableInfo.c)
 *     HalEfiResetSystem @ 0x14050AD20 (HalEfiResetSystem.c)
 *     HalEfiSetEnvironmentVariable @ 0x14050ADBC (HalEfiSetEnvironmentVariable.c)
 *     HalEfiSetTime @ 0x14050AE70 (HalEfiSetTime.c)
 *     HalEfiUpdateCapsule @ 0x14050B0AC (HalEfiUpdateCapsule.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpEfiIncrementEfiCall(volatile signed __int32 *a1)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedIncrement(&HalpEfiCalls);
  if ( a1 )
    return (unsigned int)_InterlockedIncrement(a1);
  return result;
}
