/*
 * XREFs of MiCheckForConflictingVad @ 0x14034C30C
 * Callers:
 *     MiLocateLowestConflictingVad @ 0x1402A6F9C (MiLocateLowestConflictingVad.c)
 *     MiCheckForConflictingVadExistence @ 0x14034C2EC (MiCheckForConflictingVadExistence.c)
 *     MmGetImageInformation @ 0x14077582C (MmGetImageInformation.c)
 * Callees:
 *     <none>
 */

__int64 **__fastcall MiCheckForConflictingVad(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 **v3; // r9
  unsigned __int64 v4; // r8

  v3 = *(__int64 ***)(a1 + 2008);
  v4 = a3 >> 12;
  while ( v3 )
  {
    if ( v4 < (*((unsigned int *)v3 + 6) | ((unsigned __int64)*((unsigned __int8 *)v3 + 32) << 32)) )
    {
      v3 = (__int64 **)*v3;
    }
    else
    {
      if ( a2 >> 12 <= (*((unsigned int *)v3 + 7) | ((unsigned __int64)*((unsigned __int8 *)v3 + 33) << 32)) )
        return v3;
      v3 = (__int64 **)v3[1];
    }
  }
  return v3;
}
