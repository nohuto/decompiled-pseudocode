__int64 __fastcall DxgCreateLiveDumpWithDriverBlob(
        struct _DEVICE_OBJECT *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        struct _DXGKARG_COLLECTDIAGNOSTICINFO *a7)
{
  __int64 v11; // r8
  __int64 v12; // rcx
  struct _DEVICE_OBJECT *v13; // rcx
  struct _WD_DEBUG_REPORT *v14; // rax
  struct _WD_DEBUG_REPORT *v15; // rsi
  int v17; // ebx
  int v18; // [rsp+30h] [rbp-40h]
  struct _UNICODE_STRING UnicodeString; // [rsp+50h] [rbp-20h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-10h] BYREF

  if ( bTracingEnabled && a7 )
  {
    UnicodeString = 0LL;
    DestinationString = 0LL;
    DxgUnicodeStringFromCharBuffer(&UnicodeString, (char *)a7 + 12, 0x40u);
    DxgUnicodeStringFromCharBuffer(&DestinationString, (char *)a7 + 76, 0x80u);
    v12 = (unsigned int)(*((_DWORD *)a7 + 2) - 1);
    if ( *((_DWORD *)a7 + 2) == 1 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000000) != 0 )
        McTemplateK0pzzzq_EtwWriteTransfer(
          v12,
          &AddDeviceFailed,
          v11,
          a1,
          L"Add Device Failed",
          UnicodeString.Buffer,
          DestinationString.Buffer,
          a4);
    }
    else if ( *((_DWORD *)a7 + 2) == 2 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000000) != 0 )
    {
      McTemplateK0pzzzq_EtwWriteTransfer(
        v12,
        &StartDeviceFailed,
        v11,
        a1,
        L"Start Device Failed",
        UnicodeString.Buffer,
        DestinationString.Buffer,
        a4);
    }
    if ( UnicodeString.Buffer )
      RtlFreeUnicodeString(&UnicodeString);
    if ( DestinationString.Buffer )
      RtlFreeUnicodeString(&DestinationString);
  }
  v13 = a1;
  LOBYTE(v18) = 0;
  if ( *((_DWORD *)a7 + 2) != 3 )
    v13 = 0LL;
  v14 = (struct _WD_DEBUG_REPORT *)WdDbgReportCreate(v13, a2, a3, a4, a5, a6, v18);
  v15 = v14;
  if ( v14 )
  {
    v17 = DxgkAddDiagnosticInfoIntoReport(v14, a1, a7);
    if ( v17 < 0 )
    {
      WdLogSingleEntry1(2LL, 11095LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"DxgkAddDiagnosticInfoIntoReport failed to add all information while building live dump",
        11095LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v17 = -1073741823;
    }
    WdDbgReportComplete(v15);
    return (unsigned int)v17;
  }
  else
  {
    WdLogSingleEntry1(2LL, 11083LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"WdDbgReportCreate failed", 11083LL, 0LL, 0LL, 0LL, 0LL);
    return 3221225473LL;
  }
}
