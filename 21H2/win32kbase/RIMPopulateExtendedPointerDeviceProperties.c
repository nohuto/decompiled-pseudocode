/*
 * XREFs of RIMPopulateExtendedPointerDeviceProperties @ 0x1C01A0784
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C0190190 (RIMCreatePointerDeviceInfo.c)
 * Callees:
 *     RIMRegOpenDeviceInstanceKey @ 0x1C00A196C (RIMRegOpenDeviceInstanceKey.c)
 *     RIMRegOpenKey @ 0x1C00D50AC (RIMRegOpenKey.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     ?PopulatePTPProperties@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAX1@Z @ 0x1C01A025C (-PopulatePTPProperties@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAX1@Z.c)
 *     ?RtlUnicodeStringCatString@@YAJPEAU_UNICODE_STRING@@PEBG@Z @ 0x1C01B86C8 (-RtlUnicodeStringCatString@@YAJPEAU_UNICODE_STRING@@PEBG@Z.c)
 *     RtlUnicodeStringValidateDestWorker @ 0x1C01B8744 (RtlUnicodeStringValidateDestWorker.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall RIMPopulateExtendedPointerDeviceProperties(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // ebx
  void *v5; // rdi
  void *v6; // rbx
  int v7; // r9d
  size_t v8; // rcx
  const WCHAR *v9; // r8
  wchar_t *v10; // r10
  __int64 v11; // rdx
  __int16 v12; // ax
  size_t v13; // [rsp+20h] [rbp-E0h]
  ULONG v14; // [rsp+28h] [rbp-D8h]
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-D0h] BYREF
  size_t pcchDest; // [rsp+40h] [rbp-C0h] BYREF
  wchar_t *ppszDest; // [rsp+48h] [rbp-B8h] BYREF
  char v18; // [rsp+50h] [rbp-B0h] BYREF

  v4 = a1;
  if ( (*(_DWORD *)(a1 + 184) & 0x2000) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  if ( *(_DWORD *)(a2 + 24) == 7 )
  {
    *(_QWORD *)&DestinationString.Length = 45875200LL;
    v5 = RIMRegOpenDeviceInstanceKey(v4, a2, a3);
    ppszDest = 0LL;
    pcchDest = 0LL;
    DestinationString.Buffer = (PWSTR)&v18;
    v6 = 0LL;
    if ( RtlUnicodeStringValidateDestWorker(&DestinationString, &ppszDest, &pcchDest, 0LL, v13, v14) >= 0 )
    {
      v8 = pcchDest;
      v9 = L"\\Registry\\Machine\\";
      v10 = ppszDest;
      v11 = 0x7FFFLL;
      v12 = 0;
      if ( !pcchDest )
        goto LABEL_12;
      do
      {
        if ( !v11 )
          break;
        if ( !*v9 )
          break;
        *v10++ = *v9++;
        --v11;
        ++v12;
        --v8;
      }
      while ( v8 );
      if ( !v8 && v11 && *v9 )
LABEL_12:
        v7 = -2147483643;
      DestinationString.Length = 2 * v12;
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
