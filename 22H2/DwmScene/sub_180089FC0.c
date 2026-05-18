/*
 * XREFs of sub_180089FC0 @ 0x180089FC0
 * Callers:
 *     sub_18008A104 @ 0x18008A104 (sub_18008A104.c)
 * Callees:
 *     sub_180084C98 @ 0x180084C98 (sub_180084C98.c)
 *     sub_180089D5C @ 0x180089D5C (sub_180089D5C.c)
 *     sub_18008A050 @ 0x18008A050 (sub_18008A050.c)
 */

_QWORD *__fastcall sub_180089FC0(_QWORD *a1, _QWORD *a2, _QWORD *a3, _QWORD *a4)
{
  _QWORD **v4; // r14
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  unsigned __int64 *v10; // rcx
  _QWORD *v11; // r8
  unsigned __int64 v13[5]; // [rsp+20h] [rbp-28h] BYREF

  v4 = (_QWORD **)(a1 + 1);
  v6 = (_QWORD *)a1[1];
  v7 = a3;
  if ( a3 == (_QWORD *)*v6 && a4 == v6 )
  {
    sub_180089D5C(a1 + 1);
    v10 = (unsigned __int64 *)a1[3];
    v13[0] = (unsigned __int64)*v4;
    sub_180084C98(v10, a1[4], v13);
    *a2 = **v4;
  }
  else
  {
    while ( v7 != a4 )
    {
      v11 = v7;
      v7 = (_QWORD *)*v7;
      sub_18008A050(a1, v13, v11);
    }
    *a2 = v7;
  }
  return a2;
}
