/*
 * XREFs of OSReadAcpiConfigurationData @ 0x1C00AA2F4
 * Callers:
 *     ACPIInitializeAMLI @ 0x1C00A92D4 (ACPIInitializeAMLI.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00019D0 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_ @ 0x1C000ABD8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C000ACAC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_SL @ 0x1C003BFAC (WPP_RECORDER_SF_SL.c)
 *     OSCloseHandle @ 0x1C008DB38 (OSCloseHandle.c)
 *     OSGetRegistryValue @ 0x1C008DCAC (OSGetRegistryValue.c)
 *     OSOpenUnicodeHandle @ 0x1C008E3DC (OSOpenUnicodeHandle.c)
 */

__int64 __fastcall OSReadAcpiConfigurationData(PVOID *a1)
{
  int v2; // eax
  int v3; // edx
  int v4; // ebx
  ULONG v5; // edi
  int v6; // edx
  int v7; // r8d
  int v8; // r9d
  HANDLE v9; // rcx
  int v10; // edx
  _WORD *v11; // rcx
  wchar_t *v12; // r8
  int v13; // edx
  __int64 v14; // rcx
  BOOLEAN v15; // bl
  NTSTATUS v16; // ebx
  HANDLE KeyHandle; // [rsp+40h] [rbp-9h] BYREF
  void *v19; // [rsp+48h] [rbp-1h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp+7h] BYREF
  UNICODE_STRING String2; // [rsp+60h] [rbp+17h] BYREF
  UNICODE_STRING String1; // [rsp+70h] [rbp+27h] BYREF
  char v23; // [rsp+80h] [rbp+37h] BYREF

  *a1 = 0LL;
  KeyHandle = 0LL;
  v19 = 0LL;
  String1 = 0LL;
  DestinationString = 0LL;
  String2 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Hardware\\Description\\System\\MultiFunctionAdapter");
  v2 = OSOpenUnicodeHandle(&DestinationString, 0LL, &v19);
  v4 = v2;
  if ( v2 >= 0 )
  {
    RtlInitUnicodeString(&String1, L"ACPI BIOS");
    v5 = 0;
    DestinationString.Buffer = (wchar_t *)&v23;
    DestinationString.MaximumLength = 8;
    while ( 1 )
    {
      DestinationString.Length = 0;
      RtlIntegerToUnicodeString(v5, 0xAu, &DestinationString);
      v4 = OSOpenUnicodeHandle(&DestinationString, v19, &KeyHandle);
      if ( v4 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_SL(WPP_GLOBAL_Control->DeviceExtension, v6, v7, v8);
        OSCloseHandle(v19);
        return (unsigned int)v4;
      }
      if ( OSGetRegistryValue(KeyHandle, L"Identifier", a1) >= 0 )
      {
        v11 = *a1;
        v12 = (wchar_t *)((char *)*a1 + 8);
        String2.Buffer = v12;
        String2.MaximumLength = v11[2];
        v13 = *((_DWORD *)v11 + 1) >> 1;
        if ( v13 )
        {
          do
          {
            v14 = (unsigned int)(v13 - 1);
            if ( v12[v14] )
              break;
            --v13;
          }
          while ( (_DWORD)v14 );
        }
        String2.Length = 2 * v13;
        v15 = RtlEqualUnicodeString(&String1, &String2, 1u);
        ExFreePoolWithTag(*a1, 0);
        v9 = KeyHandle;
        if ( v15 )
        {
          v16 = OSGetRegistryValue(KeyHandle, L"Configuration Data", a1);
          OSCloseHandle(KeyHandle);
          if ( v16 >= 0 )
          {
            OSCloseHandle(v19);
            return 0LL;
          }
          goto LABEL_14;
        }
      }
      else
      {
        v9 = KeyHandle;
      }
      OSCloseHandle(v9);
LABEL_14:
      if ( ++v5 >= 0x3E7 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v10) = 2;
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            v10,
            22,
            18,
            (__int64)&WPP_0ff02685c5363f18e09d8afa1fc83b4b_Traceguids);
        }
        return 3221225524LL;
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v3) = 2;
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      v3,
      22,
      16,
      (__int64)&WPP_0ff02685c5363f18e09d8afa1fc83b4b_Traceguids,
      v2);
  }
  return (unsigned int)v4;
}
