__int64 __fastcall CCD_SET_STRING_ID::QueryUnicodeMonitorId(
        CCD_SET_STRING_ID *this,
        unsigned int a2,
        struct _UNICODE_STRING *a3)
{
  __int64 v4; // rsi
  int v6; // eax
  __int64 v7; // rbx
  NTSTATUS v8; // eax
  struct _STRING SourceString; // [rsp+30h] [rbp-18h] BYREF

  v4 = a2;
  SourceString = 0LL;
  v6 = CCD_SET_STRING_ID::QueryMonitorId(this, a2, &SourceString);
  v7 = v6;
  if ( v6 < 0 || (v8 = RtlAnsiStringToUnicodeString(a3, &SourceString, 1u), v7 = v8, v8 < 0) )
    WdLogSingleEntry4(2LL, v7, v4, a3, this);
  return (unsigned int)v7;
}
