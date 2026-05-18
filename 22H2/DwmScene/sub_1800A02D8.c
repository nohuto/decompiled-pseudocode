/*
 * XREFs of sub_1800A02D8 @ 0x1800A02D8
 * Callers:
 *     sub_18009F8D4 @ 0x18009F8D4 (sub_18009F8D4.c)
 *     sub_1800D6CAC @ 0x1800D6CAC (sub_1800D6CAC.c)
 *     sub_1800ED08C @ 0x1800ED08C (sub_1800ED08C.c)
 * Callees:
 *     sub_1800A1C7C @ 0x1800A1C7C (sub_1800A1C7C.c)
 */

__int64 __fastcall sub_1800A02D8(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0LL;
  v2 = (_QWORD *)(a1 + 2088);
  sub_1800A1C7C(a1 + 2088, &v4, a2);
  if ( v4 == *v2 )
    return 511LL;
  else
    return *(unsigned __int16 *)(v4 + 64);
}
