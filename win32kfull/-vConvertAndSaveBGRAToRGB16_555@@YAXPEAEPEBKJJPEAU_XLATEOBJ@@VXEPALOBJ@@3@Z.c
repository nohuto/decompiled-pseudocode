unsigned __int8 __fastcall vConvertAndSaveBGRAToRGB16_555(__int64 a1, unsigned int *a2, int a3, int a4)
{
  _WORD *v5; // r9
  unsigned __int8 result; // al
  _WORD *i; // r8
  unsigned int v8; // eax
  unsigned int v9; // edx
  __int16 v10; // cx

  v5 = (_WORD *)(a1 + 2LL * a4);
  result = a3;
  for ( i = &v5[a3]; v5 != i; ++v5 )
  {
    v8 = *a2;
    v9 = HIWORD(*a2++);
    v10 = (v8 >> 8) & 0xF8;
    result = (unsigned __int8)v8 >> 3;
    *v5 = result | (unsigned __int16)(4 * (v10 | (32 * (v9 & 0xF8))));
  }
  return result;
}
