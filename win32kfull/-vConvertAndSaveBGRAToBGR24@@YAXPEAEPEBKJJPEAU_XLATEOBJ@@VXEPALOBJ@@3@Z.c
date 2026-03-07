__int64 __fastcall vConvertAndSaveBGRAToBGR24(__int64 a1, unsigned int *a2, int a3, int a4)
{
  __int64 result; // rax
  _BYTE *v5; // r9
  _BYTE *v6; // r8
  unsigned int v7; // eax
  unsigned int v8; // ecx

  result = (unsigned int)(3 * a3);
  v5 = (_BYTE *)(a1 + 3 * a4);
  v6 = &v5[(int)result];
  while ( v5 != v6 )
  {
    v7 = *a2;
    *v5 = *a2++;
    v8 = v7 >> 8;
    result = HIWORD(v7);
    v5[1] = v8;
    v5[2] = result;
    v5 += 3;
  }
  return result;
}
