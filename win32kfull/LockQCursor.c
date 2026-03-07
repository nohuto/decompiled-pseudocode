__int64 __fastcall LockQCursor(__int64 a1, struct tagCURSOR *a2)
{
  _QWORD v5[5]; // [rsp+40h] [rbp-28h] BYREF
  __int64 v6; // [rsp+70h] [rbp+8h] BYREF
  __int64 v7; // [rsp+78h] [rbp+10h] BYREF
  __int64 v8; // [rsp+80h] [rbp+18h] BYREF

  if ( (*(_DWORD *)(a1 + 396) & 0x200) != 0 )
  {
    LODWORD(v6) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 588LL);
  }
  if ( (unsigned int)dword_1C035C080 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1C035C080, 8LL) )
  {
    v6 = a1;
    v7 = (__int64)a2;
    v8 = (__int64)InputTraceLogging::CursorToString(a2);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      (int)&dword_1C035C080,
      (__int64)&v8,
      (__int64)&v7,
      (__int64)&v6);
  }
  v5[1] = a2;
  v5[0] = a1 + 384;
  return HMAssignmentLock(v5, 1LL);
}
