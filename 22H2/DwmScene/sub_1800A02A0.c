/*
 * XREFs of sub_1800A02A0 @ 0x1800A02A0
 * Callers:
 *     sub_18008CE5C @ 0x18008CE5C (sub_18008CE5C.c)
 *     sub_18009F7B4 @ 0x18009F7B4 (sub_18009F7B4.c)
 *     sub_1800A0450 @ 0x1800A0450 (sub_1800A0450.c)
 *     sub_1800A495C @ 0x1800A495C (sub_1800A495C.c)
 *     sub_18010C0A0 @ 0x18010C0A0 (sub_18010C0A0.c)
 * Callees:
 *     sub_1800A1C7C @ 0x1800A1C7C (sub_1800A1C7C.c)
 */

__int64 __fastcall sub_1800A02A0(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0LL;
  v2 = (_QWORD *)(a1 + 16);
  sub_1800A1C7C(a1 + 16, &v4, a2);
  if ( v4 == *v2 )
    return 0xFFFFFFFFLL;
  else
    return *(unsigned int *)(v4 + 64);
}
