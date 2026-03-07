__int64 __fastcall DpiPersistence::SortMonitorSetIdAndAppendHash(
        struct _UNICODE_STRING *this,
        struct _UNICODE_STRING *a2)
{
  CCD_SET_STRING_ID *v3; // rax
  CCD_SET_STRING_ID *v4; // rbx
  const struct _STRING *ConnectedSetStr; // rax
  int v6; // eax
  __int64 v7; // rdi
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-18h] BYREF

  DestinationString = 0LL;
  v3 = (CCD_SET_STRING_ID *)operator new[](0x38uLL, 0x63644356u, 256LL);
  if ( v3 )
    v4 = CCD_SET_STRING_ID::CCD_SET_STRING_ID(v3, this);
  else
    v4 = 0LL;
  ConnectedSetStr = CCD_SET_STRING_ID::GetConnectedSetStr(v4);
  v6 = CCD_SET_STRING_ID::_CcdCreateKeyFromSetIdStr(&DestinationString, ConnectedSetStr);
  v7 = v6;
  if ( v6 < 0 )
  {
    WdLogSingleEntry1(2LL, v6);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"_CcdCreateKeyFromSetIdStr failed: (Status = 0x%I64x)",
      v7,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  else
  {
    memset(this->Buffer, 0, this->MaximumLength);
    this->Length = 0;
    RtlUnicodeStringCopy(this, &DestinationString);
    operator delete(DestinationString.Buffer);
    DestinationString = 0LL;
    if ( v4 )
      CCD_SET_STRING_ID::`scalar deleting destructor'(v4);
  }
  return (unsigned int)v7;
}
