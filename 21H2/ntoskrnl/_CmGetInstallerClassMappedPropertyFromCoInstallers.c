/*
 * XREFs of _CmGetInstallerClassMappedPropertyFromCoInstallers @ 0x1406BE094
 * Callers:
 *     _CmGetInstallerClassMappedProperty @ 0x1406BD3A8 (_CmGetInstallerClassMappedProperty.c)
 *     _CmGetInstallerClassMappedPropertyKeys @ 0x140A2B950 (_CmGetInstallerClassMappedPropertyKeys.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     ZwDeleteValueKey @ 0x14041D2E0 (ZwDeleteValueKey.c)
 *     _RegRtlQueryValue @ 0x14077FC64 (_RegRtlQueryValue.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x14078014C (_PnpCtxGetCachedContextBaseKey.c)
 */

__int64 __fastcall CmGetInstallerClassMappedPropertyFromCoInstallers(
        __int64 a1,
        const WCHAR *a2,
        __int64 a3,
        _DWORD *a4,
        __int64 a5,
        int a6,
        __int64 a7)
{
  _DWORD *v7; // r15
  unsigned int v8; // ebx
  __int64 v9; // rsi
  int v11; // edi
  int CachedContextBaseKey; // eax
  unsigned int Value; // ecx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  HANDLE KeyHandle; // [rsp+88h] [rbp+48h] BYREF

  v7 = (_DWORD *)a7;
  v8 = 0;
  v9 = a5;
  KeyHandle = 0LL;
  *a4 = 0;
  *v7 = 0;
  if ( v9 )
    v11 = a6;
  else
    v11 = 0;
  CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(a1, 13LL, &KeyHandle);
  if ( CachedContextBaseKey < 0 )
  {
    return (unsigned int)CachedContextBaseKey;
  }
  else
  {
    LODWORD(a7) = v11;
    Value = RegRtlQueryValue(KeyHandle, (__int64)&a7);
    if ( Value == -1073741772 || Value == -1073741444 )
    {
      return (unsigned int)-1073741275;
    }
    else if ( !Value || Value == -1073741789 )
    {
      DestinationString = 0LL;
      if ( RtlInitUnicodeStringEx(&DestinationString, a2) >= 0 )
        ZwDeleteValueKey(KeyHandle, &DestinationString);
    }
    else
    {
      return Value;
    }
  }
  return v8;
}
