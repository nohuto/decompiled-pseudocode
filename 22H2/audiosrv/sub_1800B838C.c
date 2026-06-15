/*
 * XREFs of sub_1800B838C @ 0x1800B838C
 * Callers:
 *     sub_180069484 @ 0x180069484 (sub_180069484.c)
 * Callees:
 *     sub_180033A70 @ 0x180033A70 (sub_180033A70.c)
 *     sub_180038398 @ 0x180038398 (sub_180038398.c)
 *     sub_180068DF0 @ 0x180068DF0 (sub_180068DF0.c)
 *     sub_1800B89D0 @ 0x1800B89D0 (sub_1800B89D0.c)
 *     sub_1800BB260 @ 0x1800BB260 (sub_1800BB260.c)
 */

__int64 __fastcall sub_1800B838C(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx
  struct _TP_TIMER *v4; // rcx

  *(_BYTE *)a1 = 0;
  sub_180068DF0((struct _TP_TIMER **)(a1 + 16), 0LL);
  *(_BYTE *)a1 = 0;
  sub_180038398(a1);
  v2 = *(void **)(a1 + 104);
  *(_QWORD *)(a1 + 104) = 0LL;
  if ( v2 )
    sub_180033A70(v2);
  v3 = *(void **)(a1 + 72);
  *(_QWORD *)(a1 + 72) = 0LL;
  if ( v3 )
    sub_180033A70(v3);
  if ( *(_QWORD *)(a1 + 40) )
    sub_1800BB260();
  if ( *(_QWORD *)(a1 + 32) )
    sub_1800BB260();
  v4 = *(struct _TP_TIMER **)(a1 + 16);
  if ( v4 )
    sub_1800B89D0(v4);
  return a1;
}
