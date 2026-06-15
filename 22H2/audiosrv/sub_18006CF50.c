/*
 * XREFs of sub_18006CF50 @ 0x18006CF50
 * Callers:
 *     sub_18006D2A4 @ 0x18006D2A4 (sub_18006D2A4.c)
 * Callees:
 *     sub_18006CDF4 @ 0x18006CDF4 (sub_18006CDF4.c)
 *     sub_18006CFE4 @ 0x18006CFE4 (sub_18006CFE4.c)
 */

__int64 sub_18006CF50(volatile signed __int32 *a1, unsigned __int8 a2, __int64 a3, ...)
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
    v3 = *(_QWORD *)sub_18006CDF4(a1, (signed __int32 *)va);
    v9 = v3;
  }
  LODWORD(v9) = 0;
  v7 = 0;
  BYTE4(v9) = 2;
  v8 = WORD2(v9);
  return sub_18006CFE4(a1 + 2, 36390724LL, ((unsigned int)v3 >> 10) & 1, ((unsigned int)v3 >> 11) & 1, &v7, v5, 3);
}
