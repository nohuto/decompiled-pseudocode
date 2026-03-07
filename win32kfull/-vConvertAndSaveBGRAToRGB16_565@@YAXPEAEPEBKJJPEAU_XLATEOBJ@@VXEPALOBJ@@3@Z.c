unsigned __int8 __fastcall vConvertAndSaveBGRAToRGB16_565(__int64 a1, int *a2, int a3, int a4)
{
  _WORD *v5; // r9
  unsigned __int8 result; // al
  _WORD *v7; // r8
  unsigned int v8; // eax
  int v9; // ecx

  v5 = (_WORD *)(a1 + 2LL * a4);
  result = a3;
  v7 = &v5[a3];
  while ( v5 != v7 )
  {
    v8 = *a2;
    v9 = *a2++;
    LOWORD(v9) = (v8 >> 8) & 0xFC;
    result = (unsigned __int8)v8 >> 3;
    *v5++ = result | (unsigned __int16)(8 * (v9 | (32 * (BYTE2(v9) & 0xF8))));
  }
  return result;
}
