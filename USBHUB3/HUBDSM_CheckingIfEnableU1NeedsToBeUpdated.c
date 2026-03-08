/*
 * XREFs of HUBDSM_CheckingIfEnableU1NeedsToBeUpdated @ 0x1C0024EE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBDSM_CheckingIfEnableU1NeedsToBeUpdated(__int64 a1)
{
  unsigned int v1; // edx
  int v2; // ecx

  v1 = 4077;
  v2 = *(_DWORD *)(*(_QWORD *)(a1 + 960) + 2216LL);
  if ( (v2 & 0x10) == 0 && (v2 & 4) != 0 )
    v1 = 4009;
  if ( (v2 & 0x14) == 0x10 )
    return 4013;
  return v1;
}
