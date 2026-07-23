/*
 * XREFs of _CmValidateDeviceInterfaceName @ 0x1406367DC
 * Callers:
 *     _CmSetDeviceInterfacePathFormat @ 0x14062F75C (_CmSetDeviceInterfacePathFormat.c)
 *     _PnpDispatchDeviceInterface @ 0x140631090 (_PnpDispatchDeviceInterface.c)
 *     _CmGetDeviceInterfaceSubkeyPath @ 0x140635664 (_CmGetDeviceInterfaceSubkeyPath.c)
 *     IoGetDeviceInterfaceAlias @ 0x14072B4C0 (IoGetDeviceInterfaceAlias.c)
 *     _CmGetDeviceInterfacePathFormat @ 0x14072B824 (_CmGetDeviceInterfacePathFormat.c)
 *     _CmGetDeviceInterfaceReferenceString @ 0x14072B8B8 (_CmGetDeviceInterfaceReferenceString.c)
 *     _CmGetDeviceInterfaceSymbolicLinkName @ 0x1407498E0 (_CmGetDeviceInterfaceSymbolicLinkName.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x1407B11A0 (_CmDeviceClassesSubkeyCallback.c)
 * Callees:
 *     RtlStringCchCopyNExW @ 0x140253584 (RtlStringCchCopyNExW.c)
 *     RtlInitUnicodeStringEx @ 0x140253A90 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     RtlGUIDFromString @ 0x140639680 (RtlGUIDFromString.c)
 *     RtlPrefixUnicodeString @ 0x1406DD340 (RtlPrefixUnicodeString.c)
 */

__int64 __fastcall CmValidateDeviceInterfaceName(__int64 a1, const WCHAR *a2)
{
  int v3; // r14d
  _WORD *v4; // rsi
  NTSTATUS inited; // ebx
  _WORD *i; // rax
  unsigned __int64 v7; // rsi
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-49h] BYREF
  GUID Guid; // [rsp+50h] [rbp-39h] BYREF
  wchar_t pszDest[40]; // [rsp+60h] [rbp-29h] BYREF

  DestinationString = 0LL;
  v3 = 0;
  v4 = 0LL;
  Guid = 0LL;
  inited = RtlInitUnicodeStringEx(&DestinationString, a2);
  if ( inited >= 0
    && (DestinationString.MaximumLength & 0xFFFEu) >= 0x62
    && (RtlPrefixUnicodeString(&stru_1400045D0, &DestinationString, 0)
     || RtlPrefixUnicodeString(&stru_1400045B0, &DestinationString, 0)) )
  {
    for ( i = a2 + 4; *i; ++i )
    {
      if ( *i == 92 )
      {
        if ( (unsigned int)++v3 > 1 )
        {
          inited = -1073741773;
          break;
        }
        v4 = i;
      }
    }
    if ( inited >= 0 )
    {
      if ( v4 )
        v7 = v4 - a2;
      else
        v7 = (unsigned __int64)DestinationString.Length >> 1;
      if ( v7 > 0xFFFFFFFF || (unsigned int)v7 < 0x30 )
      {
        return (unsigned int)-1073741773;
      }
      else
      {
        inited = RtlStringCchCopyNExW(pszDest, 0x27uLL, &a2[(unsigned int)v7 - 38], 0x26uLL, 0LL, 0LL, 0x800u);
        if ( inited >= 0 )
        {
          inited = RtlInitUnicodeStringEx(&DestinationString, pszDest);
          if ( inited >= 0 )
          {
            inited = RtlGUIDFromString(&DestinationString, &Guid);
            if ( inited < 0 )
              return (unsigned int)-1073741773;
          }
        }
      }
    }
  }
  else
  {
    return (unsigned int)-1073741773;
  }
  return (unsigned int)inited;
}
