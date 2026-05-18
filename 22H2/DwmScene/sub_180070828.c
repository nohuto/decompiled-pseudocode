/*
 * XREFs of sub_180070828 @ 0x180070828
 * Callers:
 *     sub_180072CA0 @ 0x180072CA0 (sub_180072CA0.c)
 * Callees:
 *     sub_18006C8D4 @ 0x18006C8D4 (sub_18006C8D4.c)
 *     sub_18006E980 @ 0x18006E980 (sub_18006E980.c)
 */

__int64 __fastcall sub_180070828(__int64 **a1, __int64 a2, _QWORD *a3)
{
  __int64 *v3; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // rdx
  __int64 v8; // rdx
  _QWORD *v9; // rax
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF
  _QWORD *v12; // [rsp+58h] [rbp+20h] BYREF

  v3 = *a1;
  v6 = (*a1)[1];
  if ( *(_BYTE *)(v6 + 25) )
    goto LABEL_10;
  v7 = a3[1];
  do
  {
    if ( *(_QWORD *)(v6 + 40) >= v7 )
    {
      v3 = (__int64 *)v6;
      v6 = *(_QWORD *)v6;
    }
    else
    {
      v6 = *(_QWORD *)(v6 + 16);
    }
  }
  while ( !*(_BYTE *)(v6 + 25) );
  if ( v3 == *a1 || v7 < v3[5] )
  {
LABEL_10:
    v8 = (__int64)*a1;
    v12 = a3;
    v9 = sub_18006C8D4((__int64)a1, v8, (__int64)&unk_1801C53C8, &v12);
    sub_18006E980(a1, &v11, v3, (__int64)(v9 + 4), v9);
    *(_QWORD *)a2 = v11;
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v3;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
