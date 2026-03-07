void __fastcall GetDefaultWallpaperName(unsigned __int16 *a1, unsigned int a2)
{
  __int64 v3; // rbx
  wchar_t *v4; // r8
  __int64 v5; // rcx
  unsigned __int16 *v6; // rax
  __int64 v7; // rax
  unsigned __int16 *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  char *v11; // r9
  unsigned __int16 v12; // ax
  unsigned __int16 *v13; // rax
  int v14; // [rsp+40h] [rbp+18h] BYREF

  v3 = a2;
  v14 = 0;
  RtlGetNtProductType((PNT_PRODUCT_TYPE)&v14);
  v4 = L"winnt";
  if ( v14 != 1 )
    v4 = (wchar_t *)L"lanmannt";
  RtlStringCchCopyW(a1, (unsigned int)v3, (size_t *)v4);
  if ( *(unsigned __int8 *)(gpsi + 7002LL) * (unsigned int)*(unsigned __int8 *)(gpsi + 7003LL) > 4
    && (unsigned __int64)(v3 - 1) <= 0x7FFFFFFE )
  {
    v5 = v3;
    v6 = a1;
    do
    {
      if ( !*v6 )
        break;
      ++v6;
      --v5;
    }
    while ( v5 );
    v7 = v5 ? v3 - v5 : 0LL;
    if ( v5 )
    {
      v8 = &a1[v7];
      v9 = v3 - v7;
      if ( v3 != v7 )
      {
        v10 = 2147483646LL;
        v11 = (char *)((char *)L"256" - (char *)v8);
        do
        {
          if ( !v10 )
            break;
          v12 = *(unsigned __int16 *)((char *)v8 + (_QWORD)v11);
          if ( !v12 )
            break;
          *v8 = v12;
          --v10;
          ++v8;
          --v9;
        }
        while ( v9 );
      }
      v13 = v8 - 1;
      if ( v9 )
        v13 = v8;
      *v13 = 0;
    }
  }
}
