/*
 * XREFs of sub_1800585BC @ 0x1800585BC
 * Callers:
 *     sub_18000E9C0 @ 0x18000E9C0 (sub_18000E9C0.c)
 * Callees:
 *     sub_1800461B8 @ 0x1800461B8 (sub_1800461B8.c)
 *     sub_180047458 @ 0x180047458 (sub_180047458.c)
 *     sub_180058660 @ 0x180058660 (sub_180058660.c)
 *     sub_18005AD24 @ 0x18005AD24 (sub_18005AD24.c)
 *     sub_18006A18C @ 0x18006A18C (sub_18006A18C.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800585BC(__int64 *a1, _QWORD *a2, unsigned int *a3)
{
  __int64 v6; // rax
  __int64 v7; // rdi
  int v8; // ebx
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF
  __int64 v11; // [rsp+68h] [rbp+20h]

  *a1 = 0LL;
  v6 = sub_18006A18C(8736LL, &unk_18019F848);
  v11 = v6;
  v10 = v6;
  if ( v6 )
  {
    v7 = sub_18005AD24(v6);
    v10 = v7;
    v11 = 0LL;
    v8 = sub_180058660(v7, *a2, *a3);
    if ( v8 >= 0 )
    {
      sub_180047458(&v10);
      *a1 = v7;
      v8 = 0;
    }
    sub_1800461B8(&v10);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v8;
}
