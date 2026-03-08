/*
 * XREFs of ?vHorizontalLine24@@YAXPEAEJJK@Z @ 0x1C02FE230
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vHorizontalLine24(unsigned __int8 *a1, int a2, int a3, int a4)
{
  unsigned __int8 *v4; // r8
  unsigned __int8 *i; // r10

  v4 = &a1[3 * a3];
  for ( i = &a1[3 * a2]; i < v4; i += 3 )
  {
    *(_WORD *)i = a4;
    i[2] = BYTE2(a4);
  }
}
