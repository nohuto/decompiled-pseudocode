/*
 * XREFs of rimReadSingleDigitizerToMonitorMappings @ 0x1C01BC984
 * Callers:
 *     RIMReadDigitizerToMonitorMappings @ 0x1C01BD6F0 (RIMReadDigitizerToMonitorMappings.c)
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0070E78 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C00CD374 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     wcsstr @ 0x1C00DA8B8 (wcsstr.c)
 *     memset @ 0x1C00E1980 (memset.c)
 */

int __fastcall rimReadSingleDigitizerToMonitorMappings(
        const UNICODE_STRING *a1,
        void *a2,
        unsigned int a3,
        __int64 a4,
        char *KeyValueInformation,
        __int64 a6,
        unsigned __int16 *a7)
{
  int v10; // edx
  int v11; // r8d
  wchar_t *v12; // rax
  int v13; // r9d
  const WCHAR *v14; // rdx
  wchar_t v15; // cx
  _UNKNOWN **v16; // rax
  PDEVICE_OBJECT v17; // rcx
  __int16 v18; // r9
  ULONG Length; // [rsp+40h] [rbp-C0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  WCHAR SourceString[256]; // [rsp+60h] [rbp-A0h] BYREF

  Length = 524;
  memset(SourceString, 0, sizeof(SourceString));
  DestinationString = 0LL;
  memset(KeyValueInformation, 0, 0x20CuLL);
  if ( (int)RtlStringCchPrintfW(SourceString, 256LL, L"%d-", a3) < 0 )
  {
    v17 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
    {
      LOBYTE(v10) = 0;
    }
    v16 = &WPP_RECORDER_INITIALIZED;
    LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v18 = 16;
      goto LABEL_39;
    }
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    DestinationString.MaximumLength = 512;
    if ( RtlAppendUnicodeStringToString(&DestinationString, a1 + 13) < 0 )
    {
      v17 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
      {
        LOBYTE(v10) = 0;
      }
      v16 = &WPP_RECORDER_INITIALIZED;
      LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v18 = 15;
        goto LABEL_39;
      }
    }
    else
    {
      v12 = wcsstr(DestinationString.Buffer, L"?");
      if ( v12 )
      {
        v13 = 1;
        v14 = L"\\";
        do
        {
          v15 = *v14++;
          *v12++ = v15;
          if ( !v15 )
            break;
          --v13;
        }
        while ( v13 );
      }
      LODWORD(v16) = ZwQueryValueKey(
                       a2,
                       &DestinationString,
                       KeyValuePartialInformation,
                       KeyValueInformation,
                       Length,
                       &Length);
      if ( (int)v16 >= 0 )
      {
        if ( *((_DWORD *)KeyValueInformation + 1) == 1 && Length <= 0x200 )
        {
          LODWORD(v16) = RtlStringCchCopyW(a7, 0x80uLL, (size_t *)(KeyValueInformation + 12));
          if ( (int)v16 < 0 )
          {
            v17 = WPP_GLOBAL_Control;
            if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
              || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
            {
              LOBYTE(v10) = 0;
            }
            v16 = &WPP_RECORDER_INITIALIZED;
            LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v18 = 13;
LABEL_39:
              LODWORD(v16) = WPP_RECORDER_AND_TRACE_SF_(
                               v17->AttachedDevice,
                               v10,
                               v11,
                               (_DWORD)gRimLog,
                               3,
                               1,
                               v18,
                               (__int64)&WPP_aa84a250efe730432bc7145be823620d_Traceguids);
            }
          }
        }
        else
        {
          v17 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
            || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
          {
            LOBYTE(v10) = 0;
          }
          v16 = &WPP_RECORDER_INITIALIZED;
          LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v18 = 14;
            goto LABEL_39;
          }
        }
      }
    }
  }
  return (int)v16;
}
