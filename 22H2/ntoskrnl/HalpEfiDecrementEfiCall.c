/*
 * XREFs of HalpEfiDecrementEfiCall @ 0x14035E4B4
 * Callers:
 *     HalEfiGetEnvironmentVariable @ 0x14035E41C (HalEfiGetEnvironmentVariable.c)
 *     HalpEnumerateEnvironmentVariablesWithFilter @ 0x14039C450 (HalpEnumerateEnvironmentVariablesWithFilter.c)
 *     HalEfiGetTime @ 0x14050CABC (HalEfiGetTime.c)
 *     HalEfiQueryCapsuleCapabilities @ 0x14050CCEC (HalEfiQueryCapsuleCapabilities.c)
 *     HalEfiQueryVariableInfo @ 0x14050CD7C (HalEfiQueryVariableInfo.c)
 *     HalEfiResetSystem @ 0x14050CE00 (HalEfiResetSystem.c)
 *     HalEfiSetEnvironmentVariable @ 0x14050CE9C (HalEfiSetEnvironmentVariable.c)
 *     HalEfiSetTime @ 0x14050CF50 (HalEfiSetTime.c)
 *     HalEfiUpdateCapsule @ 0x14050D18C (HalEfiUpdateCapsule.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpEfiDecrementEfiCall(volatile signed __int32 *a1)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedDecrement(&HalpEfiCalls);
  if ( a1 )
    return (unsigned int)_InterlockedDecrement(a1);
  return result;
}
