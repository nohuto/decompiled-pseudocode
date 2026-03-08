/*
 * XREFs of RIMPopulateExtendedPointerDeviceProperties @ 0x1C01C74DC
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C01B3FEC (RIMCreatePointerDeviceInfo.c)
 * Callees:
 *     RtlUnicodeStringValidateDestWorker @ 0x1C003098C (RtlUnicodeStringValidateDestWorker.c)
 *     ?RtlUnicodeStringCatString@@YAJPEAU_UNICODE_STRING@@PEBG@Z @ 0x1C0030A10 (-RtlUnicodeStringCatString@@YAJPEAU_UNICODE_STRING@@PEBG@Z.c)
 *     RIMRegOpenKey @ 0x1C0030AE8 (RIMRegOpenKey.c)
 *     RIMRegOpenDeviceInstanceKey @ 0x1C0030CF0 (RIMRegOpenDeviceInstanceKey.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?PopulatePTPProperties@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAX1@Z @ 0x1C01C70F8 (-PopulatePTPProperties@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAX1@Z.c)
 */

void __fastcall RIMPopulateExtendedPointerDeviceProperties(__int64 a1, __int64 a2, int a3)
{
  int v4; // ebx
  void *v5; // rdi
  void *v6; // rbx
  NTSTATUS v7; // r9d
  size_t v8; // rcx
  const WCHAR *v9; // r8
  wchar_t *v10; // r10
  __int64 v11; // rdx
  __int16 v12; // ax
  size_t v13; // [rsp+20h] [rbp-E0h]
  ULONG v14; // [rsp+28h] [rbp-D8h]
  size_t pcchDest; // [rsp+30h] [rbp-D0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-C8h] BYREF
  wchar_t *ppszDest; // [rsp+48h] [rbp-B8h] BYREF
  char v18; // [rsp+50h] [rbp-B0h] BYREF

  v4 = a1;
  if ( (*(_DWORD *)(a1 + 184) & 0x2000) != 0 )
  {
    LODWORD(pcchDest) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 325);
  }
  if ( *(_DWORD *)(a2 + 24) == 7 )
  {
    v5 = RIMRegOpenDeviceInstanceKey(v4, a2, a3);
    *(_QWORD *)&DestinationString.Length = 45875200LL;
    ppszDest = 0LL;
    DestinationString.Buffer = (PWSTR)&v18;
    pcchDest = 0LL;
    v6 = 0LL;
    v7 = RtlUnicodeStringValidateDestWorker(&DestinationString, &ppszDest, &pcchDest, 0LL, v13, v14);
    if ( v7 >= 0 )
    {
      v8 = pcchDest;
      v9 = L"\\Registry\\Machine\\";
      v10 = ppszDest;
      v11 = 0x7FFFLL;
      v7 = 0;
      v12 = 0;
      if ( pcchDest )
      {
        while ( v11 )
        {
          if ( *v9 )
          {
            *v10++ = *v9++;
            --v11;
            ++v12;
            if ( --v8 )
              continue;
          }
          if ( v8 || !v11 || !*v9 )
            break;
          goto LABEL_12;
        }
      }
      else
      {
LABEL_12:
        v7 = -2147483643;
      }
      DestinationString.Length = 2 * v12;
    }
    if ( v7 >= 0
      && RtlUnicodeStringCatString(
           &DestinationString,
           L"Software\\Microsoft\\Windows\\CurrentVersion\\PrecisionTouchPad") >= 0 )
    {
      v6 = RIMRegOpenKey(&DestinationString);
    }
    PopulatePTPProperties((struct tagHID_POINTER_DEVICE_INFO *)a2, v5, v6);
    if ( v5 )
      ZwClose(v5);
    if ( v6 )
      ZwClose(v6);
  }
}
