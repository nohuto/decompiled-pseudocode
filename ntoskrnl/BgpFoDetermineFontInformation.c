__int64 __fastcall BgpFoDetermineFontInformation(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4,
        unsigned int *a5,
        __int64 **a6)
{
  __int64 result; // rax
  unsigned int v9; // ebx
  __int64 *v10; // rdi
  unsigned int v11; // r15d
  int v12; // ecx
  unsigned int *v13; // rax
  _DWORD v14[2]; // [rsp+20h] [rbp-20h] BYREF
  __int64 *v15; // [rsp+28h] [rbp-18h]
  unsigned int v16; // [rsp+30h] [rbp-10h]
  int v17; // [rsp+34h] [rbp-Ch]
  __int64 *v18; // [rsp+78h] [rbp+38h] BYREF
  __int64 v19; // [rsp+80h] [rbp+40h] BYREF

  v16 = 0;
  v18 = 0LL;
  v19 = 0LL;
  result = BgpFoGetFontHandle(0LL, &v18);
  if ( (int)result >= 0 )
  {
    v14[0] = 0;
    v9 = 4;
    v14[1] = -1;
    v10 = v18;
    v17 = 0;
    v15 = v18;
    do
    {
      v11 = v9++;
      v16 = v9;
      result = BgpFoGetTextMetrics((__int64)v14, (__int64)&v19);
      if ( (int)result < 0 )
        return result;
      v12 = HIDWORD(v19);
    }
    while ( HIDWORD(v19) < a1 );
    if ( HIDWORD(v19) <= a1 )
    {
LABEL_6:
      *a4 = v19;
      v13 = a5;
      a4[1] = v12;
      *v13 = v9;
      *a6 = v10;
      return 0LL;
    }
    if ( v9 <= 5 )
    {
      return 3221225473LL;
    }
    else
    {
      v9 = v11;
      v16 = v11;
      result = BgpFoGetTextMetrics((__int64)v14, (__int64)&v19);
      if ( (int)result >= 0 )
      {
        v12 = HIDWORD(v19);
        goto LABEL_6;
      }
    }
  }
  return result;
}
