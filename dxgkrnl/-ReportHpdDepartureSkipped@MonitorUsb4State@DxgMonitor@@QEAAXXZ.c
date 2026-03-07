void __fastcall DxgMonitor::MonitorUsb4State::ReportHpdDepartureSkipped(DxgMonitor::MonitorUsb4State *this)
{
  __int64 v2; // rcx
  int v3; // eax
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  char v7; // [rsp+50h] [rbp+8h] BYREF
  int v8; // [rsp+58h] [rbp+10h] BYREF
  __int64 v9; // [rsp+60h] [rbp+18h] BYREF
  char v10; // [rsp+68h] [rbp+20h] BYREF

  if ( !*((_BYTE *)this + 57) && (unsigned int)dword_1C013A8A8 > 5 && tlgKeywordOn((__int64)&dword_1C013A8A8, 0x8000LL) )
  {
    v2 = *(_QWORD *)this;
    v7 = 1;
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    v4 = *(_QWORD *)this;
    v8 = v3;
    v9 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v4 + 8LL))(v4, &v10);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
      v9,
      byte_1C00A1972,
      v5,
      v6,
      (__int64)&v9,
      (__int64)&v8,
      (__int64)&v7);
  }
  *((_BYTE *)this + 57) = 1;
}
