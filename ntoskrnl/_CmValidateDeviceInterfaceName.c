/*
 * XREFs of _CmValidateDeviceInterfaceName @ 0x1406D3FF0
 * Callers:
 *     _CmGetDeviceInterfaceSymbolicLinkName @ 0x140683BDC (_CmGetDeviceInterfaceSymbolicLinkName.c)
 *     _CmSetDeviceInterfacePathFormat @ 0x1406C3E94 (_CmSetDeviceInterfacePathFormat.c)
 *     _PnpDispatchDeviceInterface @ 0x1406C8CF0 (_PnpDispatchDeviceInterface.c)
 *     _CmGetDeviceInterfaceSubkeyPath @ 0x1406D208C (_CmGetDeviceInterfaceSubkeyPath.c)
 *     IoGetDeviceInterfaceAlias @ 0x14078E260 (IoGetDeviceInterfaceAlias.c)
 *     _CmGetDeviceInterfacePathFormat @ 0x14078E5C4 (_CmGetDeviceInterfacePathFormat.c)
 *     _CmGetDeviceInterfaceReferenceString @ 0x14078E658 (_CmGetDeviceInterfaceReferenceString.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x140824A50 (_CmDeviceClassesSubkeyCallback.c)
 * Callees:
 *     RtlStringCchCopyNExW @ 0x140245AC0 (RtlStringCchCopyNExW.c)
 *     RtlInitUnicodeStringEx @ 0x140246490 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     RtlGUIDFromString @ 0x1406D1AA0 (RtlGUIDFromString.c)
 *     RtlPrefixUnicodeString @ 0x1406D5A70 (RtlPrefixUnicodeString.c)
 */

NTSTATUS __fastcall CmValidateDeviceInterfaceName(__int64 a1, __int64 a2)
{
  int v3; // edi
  __int64 v4; // rbx
  __int16 v5; // ax
  __int64 v6; // rcx
  unsigned __int64 v7; // rbx
  NTSTATUS result; // eax
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-88h] BYREF
  GUID Guid; // [rsp+50h] [rbp-78h] BYREF
  wchar_t pszDest[40]; // [rsp+60h] [rbp-68h] BYREF

  DestinationString = 0LL;
  v3 = 0;
  v4 = 0LL;
  Guid = 0LL;
  if ( RtlInitUnicodeStringEx(&DestinationString, (PCWSTR)a2) < 0
    || (DestinationString.MaximumLength & 0xFFFEu) < 0x62
    || !RtlPrefixUnicodeString(&stru_1400016C8, &DestinationString, 0)
    && !RtlPrefixUnicodeString(&stru_1400016B8, &DestinationString, 0) )
  {
    return -1073741773;
  }
  v5 = *(_WORD *)(a2 + 8);
  v6 = a2 + 8;
  if ( !v5 )
    goto LABEL_18;
  do
  {
    if ( v5 == 92 )
    {
      if ( (unsigned int)++v3 > 1 )
        return -1073741773;
      v4 = v6;
    }
    v5 = *(_WORD *)(v6 + 2);
    v6 += 2LL;
  }
  while ( v5 );
  if ( v4 )
    v7 = (v4 - a2) >> 1;
  else
LABEL_18:
    v7 = (unsigned __int64)DestinationString.Length >> 1;
  if ( v7 > 0xFFFFFFFF )
    return -1073741773;
  if ( (unsigned int)v7 < 0x30 )
    return -1073741773;
  result = RtlStringCchCopyNExW(
             pszDest,
             0x27uLL,
             (STRSAFE_PCNZWCH)(a2 + 2 * ((unsigned int)v7 - 38LL)),
             0x26uLL,
             0LL,
             0LL,
             0x800u);
  if ( result >= 0 )
  {
    result = RtlInitUnicodeStringEx(&DestinationString, pszDest);
    if ( result >= 0 )
    {
      result = RtlGUIDFromString(&DestinationString, &Guid);
      if ( result < 0 )
        return -1073741773;
    }
  }
  return result;
}
