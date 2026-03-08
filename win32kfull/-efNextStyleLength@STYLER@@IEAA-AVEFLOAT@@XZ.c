/*
 * XREFs of ?efNextStyleLength@STYLER@@IEAA?AVEFLOAT@@XZ @ 0x1C01510A6
 * Callers:
 *     ?vNextStyleEvent@STYLER@@QEAAXXZ @ 0x1C02F4D64 (-vNextStyleEvent@STYLER@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall STYLER::efNextStyleLength(_QWORD *a1, _DWORD *a2)
{
  int *v2; // rax
  int v3; // xmm0_4

  v2 = (int *)a1[91];
  v3 = *v2++;
  a1[91] = v2;
  if ( (unsigned __int64)v2 >= a1[92] )
    a1[91] = a1[90];
  *a2 = v3;
  return a2;
}
