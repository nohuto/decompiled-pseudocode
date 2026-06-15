/*
 * XREFs of sub_1800E6D80 @ 0x1800E6D80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800E6D80(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx

  v1 = a1 + 8;
  v2 = 0LL;
  if ( qword_18019EE58 )
    v2 = qword_18019EE58 - 8;
  return sub_1800EDDB4(v2, v1);
}
