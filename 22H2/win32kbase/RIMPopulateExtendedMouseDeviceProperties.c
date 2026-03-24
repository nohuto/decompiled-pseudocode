/*
 * XREFs of RIMPopulateExtendedMouseDeviceProperties @ 0x1C00CC988
 * Callers:
 *     RIMCreateDev @ 0x1C0055530 (RIMCreateDev.c)
 * Callees:
 *     RIMRegOpenKey @ 0x1C006D0C0 (RIMRegOpenKey.c)
 *     RIMRegOpenDeviceInstanceKey @ 0x1C006D818 (RIMRegOpenDeviceInstanceKey.c)
 *     __security_check_cookie @ 0x1C00C5400 (__security_check_cookie.c)
 *     ?PopulateMouseProperties@@YAXPEAURIMDEV@@PEAX1@Z @ 0x1C00CC878 (-PopulateMouseProperties@@YAXPEAURIMDEV@@PEAX1@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?RtlUnicodeStringCatString@@YAJPEAU_UNICODE_STRING@@PEBG@Z @ 0x1C0181D94 (-RtlUnicodeStringCatString@@YAJPEAU_UNICODE_STRING@@PEBG@Z.c)
 *     RtlUnicodeStringValidateDestWorker @ 0x1C0181E10 (RtlUnicodeStringValidateDestWorker.c)
 */

void __fastcall RIMPopulateExtendedMouseDeviceProperties(struct RIMDEV *a1, __int64 a2, __int64 a3)
{
  void *v4; // rdi
  void *v5; // rbx
  int v6; // r9d
  size_t v7; // rdx
  const WCHAR *v8; // rcx
  __int64 v9; // r8
  __int16 v10; // ax
  signed __int64 v11; // r11
  size_t v12; // [rsp+28h] [rbp-E0h]
  ULONG v13; // [rsp+30h] [rbp-D8h]
  size_t pcchDest; // [rsp+38h] [rbp-D0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C8h] BYREF
  wchar_t *ppszDest; // [rsp+50h] [rbp-B8h] BYREF
  char v17; // [rsp+58h] [rbp-B0h] BYREF

  if ( (*((_DWORD *)a1 + 46) & 0x2000) != 0 )
  {
    LODWORD(pcchDest) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 334LL);
  }
  v4 = RIMRegOpenDeviceInstanceKey((struct _UNICODE_STRING *)a1, a2, a3);
  *(_QWORD *)&DestinationString.Length = 45875200LL;
  ppszDest = 0LL;
  DestinationString.Buffer = (PWSTR)&v17;
  pcchDest = 0LL;
  v5 = 0LL;
  if ( RtlUnicodeStringValidateDestWorker(&DestinationString, &ppszDest, &pcchDest, 0LL, v12, v13) >= 0 )
  {
    v7 = pcchDest;
    v8 = L"\\Registry\\Machine\\";
    v9 = 0x7FFFLL;
    v10 = 0;
    if ( !pcchDest )
      goto LABEL_12;
    v11 = (char *)ppszDest - (char *)L"\\Registry\\Machine\\";
    do
    {
      if ( !v9 )
        break;
      if ( !*v8 )
        break;
      *(const WCHAR *)((char *)v8 + v11) = *v8;
      --v9;
      ++v8;
      ++v10;
      --v7;
    }
    while ( v7 );
    if ( !v7 && v9 && *v8 )
LABEL_12:
      v6 = -2147483643;
    DestinationString.Length = 2 * v10;
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
