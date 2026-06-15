/*
 * XREFs of sub_180063D94 @ 0x180063D94
 * Callers:
 *     sub_180063460 @ 0x180063460 (sub_180063460.c)
 * Callees:
 *     sub_180063E28 @ 0x180063E28 (sub_180063E28.c)
 *     sub_18006CFE4 @ 0x18006CFE4 (sub_18006CFE4.c)
 */

__int64 sub_180063D94(_DWORD *a1, unsigned __int8 a2, __int64 a3, ...)
{
  __int64 v3; // r8
  int v5; // edi
  int v7; // [rsp+50h] [rbp+8h] BYREF
  __int16 v8; // [rsp+54h] [rbp+Ch]
  __int64 v9; // [rsp+68h] [rbp+20h] BYREF
  va_list va; // [rsp+68h] [rbp+20h]
  va_list va1; // [rsp+70h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v9 = va_arg(va1, _QWORD);
  LODWORD(v3) = *a1;
  v5 = a2;
  if ( (*a1 & 4) == 0 )
  {
    v3 = *(_QWORD *)sub_180063E28(a1, (__int64 *)va);
    v9 = v3;
  }
  LODWORD(v9) = 0;
  v7 = 0;
  BYTE4(v9) = 3;
  v8 = WORD2(v9);
  return sub_18006CFE4(a1 + 2, 16046125LL, ((unsigned int)v3 >> 10) & 1, ((unsigned int)v3 >> 11) & 1, &v7, v5, 3);
}
