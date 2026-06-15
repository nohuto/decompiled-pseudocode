/*
 * XREFs of sub_1800367E0 @ 0x1800367E0
 * Callers:
 *     sub_18001D9E0 @ 0x18001D9E0 (sub_18001D9E0.c)
 *     sub_180036510 @ 0x180036510 (sub_180036510.c)
 *     sub_18004B9F0 @ 0x18004B9F0 (sub_18004B9F0.c)
 *     sub_18005D590 @ 0x18005D590 (sub_18005D590.c)
 * Callees:
 *     sub_180063FC0 @ 0x180063FC0 (sub_180063FC0.c)
 *     sub_18006CFE4 @ 0x18006CFE4 (sub_18006CFE4.c)
 */

__int64 sub_1800367E0(_DWORD *a1, unsigned __int8 a2, __int64 a3, ...)
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
    v3 = *(_QWORD *)sub_180063FC0(a1, (__int64 *)va);
    v9 = v3;
  }
  LODWORD(v9) = 0;
  BYTE4(v9) = 0;
  v7 = 0;
  v8 = WORD2(v9);
  return sub_18006CFE4(a1 + 2, 10011581LL, ((unsigned int)v3 >> 10) & 1, ((unsigned int)v3 >> 11) & 1, &v7, v5, 3);
}
