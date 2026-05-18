/*
 * XREFs of sub_1800A2130 @ 0x1800A2130
 * Callers:
 *     sub_1800A1FF8 @ 0x1800A1FF8 (sub_1800A1FF8.c)
 *     sub_1800A2130 @ 0x1800A2130 (sub_1800A2130.c)
 * Callees:
 *     sub_18009C518 @ 0x18009C518 (sub_18009C518.c)
 *     sub_1800A2130 @ 0x1800A2130 (sub_1800A2130.c)
 */

__int64 __fastcall sub_1800A2130(__int64 *a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v8; // rsi
  _QWORD *v9; // rdi
  __int64 v10; // r9
  __int64 v11; // r9
  __int64 v13; // rbx
  __int64 v14; // rax

  v8 = *a1;
  if ( !*(_BYTE *)(a2 + 25) )
  {
    v9 = sub_18009C518((__int64)a1, *a1, a2 + 32);
    v9[1] = a3;
    *((_BYTE *)v9 + 24) = *(_BYTE *)(a2 + 24);
    if ( *(_BYTE *)(v8 + 25) )
      v8 = (__int64)v9;
    LOBYTE(v10) = a4;
    try
    {
      *v9 = sub_1800A2130(a1, *(_QWORD *)a2, v9, v10);
      LOBYTE(v11) = a4;
      v9[2] = sub_1800A2130(a1, *(_QWORD *)(a2 + 16), v9, v11);
    }
    catch ( ... )
    {
      v13 = sub_180010A94((__int64)a1);
      v14 = sub_180010A94((__int64)a1);
      sub_18009C7EC(v14, v13, (__int64 *)v8);
      throw;
    }
  }
  return v8;
}
