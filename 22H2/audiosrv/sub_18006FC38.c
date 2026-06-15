/*
 * XREFs of sub_18006FC38 @ 0x18006FC38
 * Callers:
 *     sub_1800ED858 @ 0x1800ED858 (sub_1800ED858.c)
 *     sub_1800EDD68 @ 0x1800EDD68 (sub_1800EDD68.c)
 * Callees:
 *     sub_18007001C @ 0x18007001C (sub_18007001C.c)
 */

__int64 __fastcall sub_18006FC38(__int64 a1)
{
  __int64 result; // rax
  _QWORD v2[7]; // [rsp+20h] [rbp-38h] BYREF

  if ( *(_BYTE *)(a1 + 48) )
  {
    *(_BYTE *)(a1 + 48) = 0;
    v2[0] = *(_QWORD *)a1;
    v2[1] = *(_QWORD *)(a1 + 8);
    v2[2] = *(_QWORD *)(a1 + 16);
    v2[3] = *(_QWORD *)(a1 + 24);
    v2[4] = *(_QWORD *)(a1 + 32);
    v2[5] = *(_QWORD *)(a1 + 40);
    return sub_18007001C(v2);
  }
  return result;
}
