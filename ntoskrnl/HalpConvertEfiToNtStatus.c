/*
 * XREFs of HalpConvertEfiToNtStatus @ 0x1402AF97C
 * Callers:
 *     HalEfiGetEnvironmentVariable @ 0x1402AF8BC (HalEfiGetEnvironmentVariable.c)
 *     HalEfiGetTime @ 0x14050A9DC (HalEfiGetTime.c)
 *     HalEfiQueryCapsuleCapabilities @ 0x14050AC0C (HalEfiQueryCapsuleCapabilities.c)
 *     HalEfiQueryVariableInfo @ 0x14050AC9C (HalEfiQueryVariableInfo.c)
 *     HalEfiSetEnvironmentVariable @ 0x14050ADBC (HalEfiSetEnvironmentVariable.c)
 *     HalEfiSetTime @ 0x14050AE70 (HalEfiSetTime.c)
 *     HalEfiUpdateCapsule @ 0x14050B0AC (HalEfiUpdateCapsule.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpConvertEfiToNtStatus(__int64 a1)
{
  __int64 v1; // rax
  __int64 *i; // rdx

  v1 = 0LL;
  for ( i = HalEfiToNtStatusMappings; *i != a1; i += 2 )
  {
    v1 = (unsigned int)(v1 + 1);
    if ( (unsigned int)v1 >= 0x20 )
      return 3221225473LL;
  }
  return LODWORD(HalEfiToNtStatusMappings[2 * v1 + 1]);
}
