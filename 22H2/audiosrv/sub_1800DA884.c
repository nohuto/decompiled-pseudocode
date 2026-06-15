/*
 * XREFs of sub_1800DA884 @ 0x1800DA884
 * Callers:
 *     sub_1800DEC00 @ 0x1800DEC00 (sub_1800DEC00.c)
 *     sub_1800DF480 @ 0x1800DF480 (sub_1800DF480.c)
 * Callees:
 *     sub_180055F40 @ 0x180055F40 (sub_180055F40.c)
 *     sub_1800DA8EC @ 0x1800DA8EC (sub_1800DA8EC.c)
 */

__int64 *__fastcall sub_1800DA884(__int64 *a1, _QWORD *a2, _QWORD *a3, _QWORD *a4)
{
  LPVOID v8; // rcx
  __int64 v9; // rax

  v8 = sub_180055F40(0x18uLL);
  v9 = 0LL;
  if ( v8 )
    v9 = sub_1800DA8EC(v8, *a2, *a3, *a4);
  *a1 = v9;
  return a1;
}
