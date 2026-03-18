/*
 * XREFs of HalpEfiStartRuntimeCode @ 0x14035E538
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

__int64 __fastcall HalpEfiStartRuntimeCode(unsigned int a1)
{
  unsigned int *HalReserved; // rdx
  __int64 result; // rax

  HalReserved = KeGetPcr()->HalReserved;
  result = KeGetCurrentIrql();
  if ( (unsigned __int8)result >= 2u )
  {
    _InterlockedOr((volatile signed __int32 *)HalReserved + 8, a1);
  }
  else
  {
    while ( 1 )
    {
      while ( (HalReserved[8] & 0x80000000) != 0 )
        _mm_pause();
      _m_prefetchw(HalReserved + 8);
      result = (unsigned int)_InterlockedOr((volatile signed __int32 *)HalReserved + 8, a1);
      if ( (int)result >= 0 )
        break;
      _InterlockedAnd((volatile signed __int32 *)HalReserved + 8, ~a1);
    }
  }
  return result;
}
