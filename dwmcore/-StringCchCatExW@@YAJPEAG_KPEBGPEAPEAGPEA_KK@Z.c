HRESULT __fastcall StringCchCatExW(
        unsigned __int16 *a1,
        size_t a2,
        const unsigned __int16 *a3,
        unsigned __int16 **a4,
        unsigned __int64 *a5)
{
  HRESULT result; // eax
  __int64 v9; // r11
  size_t v10; // rbx
  wchar_t *v11; // rdi
  size_t v12; // [rsp+20h] [rbp-28h]
  size_t pcchLength[3]; // [rsp+30h] [rbp-18h] BYREF

  if ( a2 - 1 > 0x7FFFFFFE )
    return -2147024809;
  result = StringLengthWorkerW(a1, a2, pcchLength);
  if ( result < 0 )
    return result;
  v10 = a2 - pcchLength[0];
  v11 = (wchar_t *)(v9 + 2 * pcchLength[0]);
  result = 0;
  if ( v10 > 1 )
  {
    pcchLength[0] = 0LL;
    result = StringCopyWorkerW_0(v11, v10, pcchLength, a3, v12);
    v10 -= pcchLength[0];
    v11 += pcchLength[0];
    if ( (int)(result + 0x80000000) >= 0 && result != -2147024774 )
      return result;
  }
  else if ( *a3 )
  {
    if ( !v9 )
      return -2147024809;
    result = -2147024774;
  }
  if ( a4 )
    *a4 = v11;
  if ( a5 )
    *a5 = v10;
  return result;
}
