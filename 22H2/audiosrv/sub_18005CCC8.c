/*
 * XREFs of sub_18005CCC8 @ 0x18005CCC8
 * Callers:
 *     sub_18005C8D0 @ 0x18005C8D0 (sub_18005C8D0.c)
 *     sub_18005CB34 @ 0x18005CB34 (sub_18005CB34.c)
 *     sub_18007BFFC @ 0x18007BFFC (sub_18007BFFC.c)
 * Callees:
 *     sub_18005CBD8 @ 0x18005CBD8 (sub_18005CBD8.c)
 *     sub_18005CD40 @ 0x18005CD40 (sub_18005CD40.c)
 */

char __fastcall sub_18005CCC8(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rdi
  unsigned __int64 v3; // rsi
  unsigned __int64 v5; // rcx

  v2 = 0LL;
  v3 = a2;
  if ( !a2 )
  {
    if ( *a1 )
    {
      _o_free(*a1);
      *a1 = 0LL;
    }
    a1[2] = 0LL;
    goto LABEL_7;
  }
  if ( a2 <= a1[2] )
  {
    v5 = a1[1];
    if ( a2 <= v5 )
      goto LABEL_6;
    goto LABEL_5;
  }
  if ( sub_18005CBD8((__int64)a1, a2) )
  {
    v5 = a1[1];
    a2 = v3;
LABEL_5:
    sub_18005CD40(*a1 + (v5 << 6), a2 - v5);
LABEL_6:
    v2 = v3;
LABEL_7:
    a1[1] = v2;
    return 1;
  }
  return 0;
}
