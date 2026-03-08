/*
 * XREFs of HalpEfiStartRuntimeCode @ 0x1402AF9D8
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
