/*
 * XREFs of sub_18013EA90 @ 0x18013EA90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall sub_18013EA90(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8

  v2 = *(_QWORD *)(a1 + 96) - *a2;
  if ( !v2 )
    v2 = *(_QWORD *)(a1 + 104) - a2[1];
  return v2 == 0;
}
