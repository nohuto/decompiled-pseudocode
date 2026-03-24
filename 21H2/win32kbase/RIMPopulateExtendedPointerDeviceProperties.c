/*
 * XREFs of RIMPopulateExtendedPointerDeviceProperties @ 0x1C016BE68
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C015C02C (RIMCreatePointerDeviceInfo.c)
 * Callees:
 *     RIMRegOpenKey @ 0x1C006C610 (RIMRegOpenKey.c)
 *     RIMRegOpenDeviceInstanceKey @ 0x1C006CD68 (RIMRegOpenDeviceInstanceKey.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?PopulatePTPProperties@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAX1@Z @ 0x1C016BAD4 (-PopulatePTPProperties@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAX1@Z.c)
 *     ?RtlUnicodeStringCatString@@YAJPEAU_UNICODE_STRING@@PEBG@Z @ 0x1C0181E64 (-RtlUnicodeStringCatString@@YAJPEAU_UNICODE_STRING@@PEBG@Z.c)
 *     RtlUnicodeStringValidateDestWorker @ 0x1C0181EE0 (RtlUnicodeStringValidateDestWorker.c)
 */

void __fastcall RIMPopulateExtendedPointerDeviceProperties(__int64 a1, __int64 a2, __int64 a3)
{
  void *v5; // rdi
  void *v6; // rbx
  int v7; // r9d
  size_t v8; // rdx
  const WCHAR *v9; // rcx
  __int64 v10; // r8
  __int16 v11; // ax
  signed __int64 v12; // r11
  size_t v13; // [rsp+20h] [rbp-E0h]
  ULONG v14; // [rsp+28h] [rbp-D8h]
  size_t pcchDest; // [rsp+30h] [rbp-D0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-C8h] BYREF
  wchar_t *ppszDest; // [rsp+48h] [rbp-B8h] BYREF
  char v18; // [rsp+50h] [rbp-B0h] BYREF

  if ( (*(_DWORD *)(a1 + 184) & 0x2000) != 0 )
  {
    LODWORD(pcchDest) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 377);
  }
  if ( *(_DWORD *)(a2 + 24) == 7 )
  {
    v5 = RIMRegOpenDeviceInstanceKey((struct _UNICODE_STRING *)a1, a2, a3);
    *(_QWORD *)&DestinationString.Length = 45875200LL;
    ppszDest = 0LL;
    DestinationString.Buffer = (PWSTR)&v18;
    pcchDest = 0LL;
    v6 = 0LL;
    if ( RtlUnicodeStringValidateDestWorker(&DestinationString, &ppszDest, &pcchDest, 0LL, v13, v14) >= 0 )
    {
      v8 = pcchDest;
      v9 = L"\\Registry\\Machine\\";
      v10 = 0x7FFFLL;
      v11 = 0;
      if ( !pcchDest )
        goto LABEL_13;
      v12 = (char *)ppszDest - (char *)L"\\Registry\\Machine\\";
      do
      {
        if ( !v10 )
          break;
        if ( !*v9 )
          break;
        *(const WCHAR *)((char *)v9 + v12) = *v9;
        --v10;
        ++v9;
        ++v11;
        --v8;
      }
      while ( v8 );
      if ( !v8 && v10 && *v9 )
LABEL_13:
        v7 = -2147483643;
      DestinationString.Length = 2 * v11;
      if ( v7 >= 0
        && RtlUnicodeStringCatString(
             &DestinationString,
             L"Software\\Microsoft\\Windows\\CurrentVersion\\PrecisionTouchPad") >= 0 )
      {
        v6 = RIMRegOpenKey(&DestinationString);
      }
    }
    PopulatePTPProperties((struct tagHID_POINTER_DEVICE_INFO *)a2, v5, v6);
    if ( v5 )
      ZwClose(v5);
    if ( v6 )
      ZwClose(v6);
  }
}
