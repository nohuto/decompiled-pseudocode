__int64 __fastcall vConvertAndSaveBGRAToRGB24(__int64 a1, _DWORD *a2, int a3, int a4)
{
  __int64 result; // rax
  _BYTE *v5; // r9
  _BYTE *v6; // r8
  int v7; // ecx

  result = (unsigned int)(3 * a3);
  v5 = (_BYTE *)(a1 + 3 * a4);
  v6 = &v5[(int)result];
  while ( v5 != v6 )
  {
    result = (unsigned int)*a2;
    v7 = HIWORD(*a2++);
    *v5 = v7;
    v5[1] = BYTE1(result);
    v5[2] = result;
    v5 += 3;
  }
  return result;
}
