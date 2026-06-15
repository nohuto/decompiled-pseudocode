/*
 * XREFs of sub_18004C23C @ 0x18004C23C
 * Callers:
 *     sub_18004997C @ 0x18004997C (sub_18004997C.c)
 *     sub_180125A30 @ 0x180125A30 (sub_180125A30.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall sub_18004C23C(_OWORD *a1, int a2, __int64 a3)
{
  __int64 v4; // rax

  *a1 = xmmword_180160A18;
  if ( !a2 )
    goto LABEL_2;
  if ( a2 == 3 && *(_DWORD *)a3 )
  {
    v4 = *(_QWORD *)(a3 + 12);
    if ( !v4 )
      v4 = *(_QWORD *)(a3 + 20);
    if ( v4 )
LABEL_2:
      *a1 = *(_OWORD *)(a3 + 12);
  }
  return a1;
}
