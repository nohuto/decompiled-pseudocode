/*
 * XREFs of HUBPSM20_CheckingForOverCurrentOnResume @ 0x1C0012AC0
 * Callers:
 *     <none>
 * Callees:
 *     HUBREG_UpdateSqmHubOvercurrentDetected @ 0x1C0034B00 (HUBREG_UpdateSqmHubOvercurrentDetected.c)
 */

__int64 __fastcall HUBPSM20_CheckingForOverCurrentOnResume(__int64 a1)
{
  __int64 *v1; // rbx
  unsigned int v2; // edx
  __int64 v3; // rcx
  __int64 v4; // r8

  v1 = *(__int64 **)(a1 + 960);
  v2 = 3061;
  v3 = *v1;
  if ( (*(_DWORD *)(*v1 + 44) & 0x40) != 0 )
  {
    v4 = *((unsigned __int16 *)v1 + 93);
    if ( (v1[23] & 8) != 0 )
    {
      HUBREG_UpdateSqmHubOvercurrentDetected(v3, 3061LL, v4);
      v2 = 3065;
LABEL_6:
      *((_DWORD *)v1 + 356) = 4;
      return v2;
    }
    if ( (v4 & 8) != 0 )
    {
      HUBREG_UpdateSqmHubOvercurrentDetected(v3, 3061LL, v4);
      v2 = 3069;
      goto LABEL_6;
    }
  }
  return v2;
}
