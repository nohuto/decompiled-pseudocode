/*
 * XREFs of RIMPopulateExtendedMouseDeviceProperties @ 0x1C01A05FC
 * Callers:
 *     RIMCreateDev @ 0x1C0045A34 (RIMCreateDev.c)
 * Callees:
 *     RIMRegOpenDeviceInstanceKey @ 0x1C00A196C (RIMRegOpenDeviceInstanceKey.c)
 *     RIMRegOpenKey @ 0x1C00D50AC (RIMRegOpenKey.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     ?PopulateMouseProperties@@YAXPEAURIMDEV@@PEAX1@Z @ 0x1C00DC500 (-PopulateMouseProperties@@YAXPEAURIMDEV@@PEAX1@Z.c)
 *     ?RtlUnicodeStringCatString@@YAJPEAU_UNICODE_STRING@@PEBG@Z @ 0x1C01B86C8 (-RtlUnicodeStringCatString@@YAJPEAU_UNICODE_STRING@@PEBG@Z.c)
 *     RtlUnicodeStringValidateDestWorker @ 0x1C01B8744 (RtlUnicodeStringValidateDestWorker.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall RIMPopulateExtendedMouseDeviceProperties(struct RIMDEV *a1, __int64 a2, __int64 a3)
{
  void *v4; // rdi
  void *v5; // rbx
  int v6; // r9d
  size_t v7; // rcx
  const WCHAR *v8; // r8
  wchar_t *v9; // r10
  __int64 v10; // rdx
  __int16 v11; // ax
  size_t v12; // [rsp+20h] [rbp-E0h]
  ULONG v13; // [rsp+28h] [rbp-D8h]
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-D0h] BYREF
  size_t pcchDest; // [rsp+40h] [rbp-C0h] BYREF
  wchar_t *ppszDest; // [rsp+48h] [rbp-B8h] BYREF
  char v17; // [rsp+50h] [rbp-B0h] BYREF

  if ( (*((_DWORD *)a1 + 46) & 0x2000) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  *(_QWORD *)&DestinationString.Length = 45875200LL;
  v4 = RIMRegOpenDeviceInstanceKey((int)a1, a2, a3);
  ppszDest = 0LL;
  pcchDest = 0LL;
  DestinationString.Buffer = (PWSTR)&v17;
  v5 = 0LL;
  if ( RtlUnicodeStringValidateDestWorker(&DestinationString, &ppszDest, &pcchDest, 0LL, v12, v13) >= 0 )
  {
    v7 = pcchDest;
    v8 = L"\\Registry\\Machine\\";
    v9 = ppszDest;
    v10 = 0x7FFFLL;
    v11 = 0;
    if ( !pcchDest )
      goto LABEL_11;
    do
    {
      if ( !v10 )
        break;
      if ( !*v8 )
        break;
      *v9++ = *v8++;
      --v10;
      ++v11;
      --v7;
    }
    while ( v7 );
    if ( !v7 && v10 && *v8 )
LABEL_11:
      v6 = -2147483643;
    DestinationString.Length = 2 * v11;
    if ( v6 >= 0
      && RtlUnicodeStringCatString(&DestinationString, L"Software\\Microsoft\\Windows NT\\CurrentVersion\\Windows") >= 0 )
    {
      v5 = RIMRegOpenKey(&DestinationString);
    }
  }
  if ( v4 || v5 )
  {
    PopulateMouseProperties(a1, v4, v5);
    if ( v4 )
      ZwClose(v4);
    if ( v5 )
      ZwClose(v5);
  }
}
