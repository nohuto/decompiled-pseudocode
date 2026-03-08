/*
 * XREFs of HUBPSM30_CheckingIfLinkStateIsU0 @ 0x1C0012F10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBPSM30_CheckingIfLinkStateIsU0(__int64 a1)
{
  __int64 v1; // rax
  __int16 v2; // cx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 960);
  if ( (*(_WORD *)(v1 + 184) & 0x1E0) == 0 )
    return 3089LL;
  v2 = (*(_WORD *)(v1 + 184) & 0x1E0) - 32;
  result = 3005LL;
  if ( (v2 & 0xFFDF) == 0 )
    return 3089LL;
  return result;
}
