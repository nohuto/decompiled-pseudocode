/*
 * XREFs of CiConfigReadDWORD @ 0x1C000E830
 * Callers:
 *     CiConfigInitialize @ 0x1C000E4E0 (CiConfigInitialize.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003050 (__security_check_cookie.c)
 *     WPP_SF_Zd @ 0x1C0004774 (WPP_SF_Zd.c)
 */

__int64 __fastcall CiConfigReadDWORD(void *a1, struct _UNICODE_STRING *a2, unsigned int a3)
{
  __int64 Length; // [rsp+20h] [rbp-38h]
  ULONG ResultLength; // [rsp+30h] [rbp-28h] BYREF
  __int128 KeyValueInformation; // [rsp+38h] [rbp-20h] BYREF

  ResultLength = 0;
  KeyValueInformation = 0LL;
  if ( ZwQueryValueKey(a1, a2, KeyValuePartialInformation, &KeyValueInformation, 0x10u, &ResultLength) >= 0
    && DWORD1(KeyValueInformation) == 4 )
  {
    return HIDWORD(KeyValueInformation);
  }
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
  {
    LODWORD(Length) = a3;
    WPP_SF_Zd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x11u,
      (__int64)&WPP_350503daac883abe7be9cf63f89038d9_Traceguids,
      &a2->Length,
      Length);
  }
  return a3;
}
