/*
 * XREFs of _CmDeleteInstallerClassMappedPropertyFromCoInstallers @ 0x140A64A9C
 * Callers:
 *     _CmSetInstallerClassMappedProperty @ 0x140A66C94 (_CmSetInstallerClassMappedProperty.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140246490 (RtlInitUnicodeStringEx.c)
 *     ZwDeleteValueKey @ 0x140413EB0 (ZwDeleteValueKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1406D3680 (_PnpCtxGetCachedContextBaseKey.c)
 */

__int64 __fastcall CmDeleteInstallerClassMappedPropertyFromCoInstallers(__int64 a1, const WCHAR *a2)
{
  unsigned int v2; // ebx
  int CachedContextBaseKey; // eax
  NTSTATUS inited; // eax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0;
  KeyHandle = 0LL;
  CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(a1, 13, (__int64)&KeyHandle);
  if ( CachedContextBaseKey >= 0 )
  {
    DestinationString = 0LL;
    inited = RtlInitUnicodeStringEx(&DestinationString, a2);
    if ( inited >= 0 )
      inited = ZwDeleteValueKey(KeyHandle, &DestinationString);
    if ( inited != -1073741772 && inited != -1073741444 && inited < 0 )
      return (unsigned int)inited;
  }
  else
  {
    return (unsigned int)CachedContextBaseKey;
  }
  return v2;
}
