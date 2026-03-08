/*
 * XREFs of _CmGetInstallerClassMappedPropertyFromCoInstallers @ 0x14087E160
 * Callers:
 *     _CmGetInstallerClassMappedProperty @ 0x14074D838 (_CmGetInstallerClassMappedProperty.c)
 *     _CmGetInstallerClassMappedPropertyKeys @ 0x140A6601C (_CmGetInstallerClassMappedPropertyKeys.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140246490 (RtlInitUnicodeStringEx.c)
 *     ZwDeleteValueKey @ 0x140413EB0 (ZwDeleteValueKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1406D3680 (_PnpCtxGetCachedContextBaseKey.c)
 *     _RegRtlQueryValue @ 0x1406D3E98 (_RegRtlQueryValue.c)
 */

__int64 __fastcall CmGetInstallerClassMappedPropertyFromCoInstallers(
        __int64 a1,
        const WCHAR *a2,
        __int64 a3,
        _DWORD *a4,
        unsigned __int64 a5,
        int a6,
        __int64 a7)
{
  _DWORD *v7; // r15
  unsigned int v8; // ebx
  unsigned __int64 v9; // rsi
  int v12; // edi
  int CachedContextBaseKey; // eax
  unsigned int v14; // ecx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  int v17; // [rsp+80h] [rbp+40h] BYREF
  int v18; // [rsp+84h] [rbp+44h]
  HANDLE KeyHandle; // [rsp+88h] [rbp+48h] BYREF

  v18 = HIDWORD(a3);
  v7 = (_DWORD *)a7;
  v8 = 0;
  v9 = a5;
  v17 = 0;
  KeyHandle = 0LL;
  *a4 = 0;
  *v7 = 0;
  if ( v9 )
  {
    v12 = a6;
    v9 &= -(__int64)(a6 != 0);
  }
  else
  {
    v12 = 0;
  }
  CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(a1, 13, (__int64)&KeyHandle);
  if ( CachedContextBaseKey < 0 )
  {
    return (unsigned int)CachedContextBaseKey;
  }
  else
  {
    LODWORD(a7) = v12;
    v14 = RegRtlQueryValue(KeyHandle, a2, &v17, (void *)v9, (unsigned int *)&a7);
    if ( v14 == -1073741772 || v14 == -1073741444 )
    {
      return (unsigned int)-1073741275;
    }
    else if ( !v14 || v14 == -1073741789 )
    {
      if ( v17 == 7 )
      {
        *v7 = a7;
        *a4 = 8210;
        if ( v14 || !v12 )
          return (unsigned int)-1073741789;
      }
      else
      {
        DestinationString = 0LL;
        if ( RtlInitUnicodeStringEx(&DestinationString, a2) >= 0 )
          ZwDeleteValueKey(KeyHandle, &DestinationString);
      }
    }
    else
    {
      return v14;
    }
  }
  return v8;
}
