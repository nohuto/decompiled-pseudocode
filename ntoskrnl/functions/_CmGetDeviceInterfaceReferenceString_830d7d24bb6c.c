int __fastcall CmGetDeviceInterfaceReferenceString(__int64 a1, __int64 a2, wchar_t *a3, unsigned int a4, _DWORD *a5)
{
  size_t v5; // rdi
  int result; // eax
  wchar_t *v9; // rax
  const wchar_t *v10; // r8
  wchar_t v11; // ax
  const wchar_t *v12; // rcx
  __int64 v13; // rax
  unsigned __int64 v14; // rax

  v5 = a4;
  result = CmValidateDeviceInterfaceName(a1, a2);
  if ( result >= 0 )
  {
    v9 = wcschr((const wchar_t *)(a2 + 8), 0x5Cu);
    if ( v9 )
    {
      v10 = v9 + 1;
      v11 = v9[1];
      v12 = v10;
      while ( v11 )
      {
        if ( v11 == 92 || v11 == 47 )
          return -1073741767;
        v11 = *++v12;
      }
      v13 = -1LL;
      do
        ++v13;
      while ( v10[v13] );
      v14 = v13 + 1;
      if ( v14 > 0xFFFFFFFF )
      {
        return -1073741675;
      }
      else
      {
        if ( a5 )
          *a5 = v14;
        if ( (unsigned int)v14 > (unsigned int)v5 )
          return -1073741789;
        else
          return RtlStringCchCopyExW(a3, v5, v10, 0LL, 0LL, 0x900u);
      }
    }
    else
    {
      return -1073741772;
    }
  }
  return result;
}
