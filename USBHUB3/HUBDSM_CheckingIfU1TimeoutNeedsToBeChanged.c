/*
 * XREFs of HUBDSM_CheckingIfU1TimeoutNeedsToBeChanged @ 0x1C0025010
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBDSM_CheckingIfU1TimeoutNeedsToBeChanged(__int64 a1)
{
  __int64 v1; // rax
  char v2; // cl

  v1 = *(_QWORD *)(a1 + 960);
  v2 = *(_BYTE *)(v1 + 2214);
  if ( v2 == *(_BYTE *)(v1 + 2212) )
    return 4061LL;
  *(_BYTE *)(v1 + 2212) = v2;
  return 4089LL;
}
