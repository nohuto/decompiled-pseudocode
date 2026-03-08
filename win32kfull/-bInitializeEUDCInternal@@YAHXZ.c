/*
 * XREFs of ?bInitializeEUDCInternal@@YAHXZ @ 0x1C00B8C30
 * Callers:
 *     ?AddInitialFonts@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C00B842C (-AddInitialFonts@UmfdHostLifeTimeManager@@SA_NXZ.c)
 * Callees:
 *     ?vInitializeFontAssocStatus@@YAXXZ @ 0x1C00B7C2C (-vInitializeFontAssocStatus@@YAXXZ.c)
 *     bAddAllFlEntry @ 0x1C00B8F0C (bAddAllFlEntry.c)
 */

__int64 bInitializeEUDCInternal(void)
{
  int v0; // edi
  __int64 v1; // rcx
  __int64 v2; // rbx
  int *v3; // rsi
  __int16 v4; // ax
  int v5; // ecx
  __int64 v6; // rcx
  struct _UNICODE_STRING String; // [rsp+30h] [rbp-10h] BYREF
  USHORT AnsiCodePage; // [rsp+70h] [rbp+30h] BYREF
  USHORT OemCodePage; // [rsp+78h] [rbp+38h] BYREF
  int v11; // [rsp+80h] [rbp+40h] BYREF
  int v12; // [rsp+88h] [rbp+48h] BYREF

  v0 = 0;
  AnsiCodePage = 0;
  OemCodePage = 0;
  RtlGetDefaultCodePage(&AnsiCodePage, &OemCodePage);
  *(_DWORD *)(&String.MaximumLength + 1) = 0;
  String.Length = 0;
  v2 = *(_QWORD *)(SGDGetSessionState(v1) + 32);
  String.MaximumLength = 20;
  String.Buffer = (PWSTR)(v2 + 13944);
  RtlIntegerToUnicodeString(AnsiCodePage, 0xAu, &String);
  *(_DWORD *)(v2 + 13976) = 292;
  *(_QWORD *)(v2 + 13968) = 0LL;
  v3 = (int *)(v2 + 13308);
  *(_QWORD *)(v2 + 13984) = L"FontLinkControl";
  *(_QWORD *)(v2 + 13992) = v2 + 13308;
  *(_DWORD *)(v2 + 14000) = 67108868;
  *(_QWORD *)(v2 + 14008) = 0LL;
  *(_DWORD *)(v2 + 14016) = 0;
  *(_QWORD *)(v2 + 14024) = 0LL;
  *(_DWORD *)(v2 + 14032) = 0;
  *(_QWORD *)(v2 + 14040) = 0LL;
  if ( RtlQueryRegistryValues(3u, L"FontLink", (PRTL_QUERY_REGISTRY_TABLE)(v2 + 13968), 0LL, 0LL) < 0 )
    *v3 = 0;
  v11 = 0;
  *(_QWORD *)(v2 + 13984) = L"FontLinkDefaultChar";
  *(_QWORD *)(v2 + 13992) = &v11;
  if ( RtlQueryRegistryValues(3u, L"FontLink", (PRTL_QUERY_REGISTRY_TABLE)(v2 + 13968), 0LL, 0LL) < 0 )
    v4 = 12539;
  else
    v4 = v11;
  *(_WORD *)(v2 + 13268) = v4;
  v12 = 0;
  *(_QWORD *)(v2 + 13984) = L"AllowSCPUAFontFallback";
  *(_QWORD *)(v2 + 13992) = &v12;
  if ( RtlQueryRegistryValues(3u, L"FontLink", (PRTL_QUERY_REGISTRY_TABLE)(v2 + 13968), 0LL, 0LL) >= 0 )
  {
    LOBYTE(v0) = v12 != 0;
    *(_DWORD *)(v2 + 13964) = v0;
  }
  v5 = *v3;
  *(_QWORD *)(v2 + 13920) = v2 + 13912;
  *(_QWORD *)(v2 + 13912) = v2 + 13912;
  if ( (v5 & 1) == 0 )
  {
    *(_DWORD *)(v2 + 13312) = 3;
    bAddAllFlEntry(0LL);
    *(_DWORD *)(v2 + 13312) = 12;
    vInitializeFontAssocStatus(v6);
  }
  return 1LL;
}
