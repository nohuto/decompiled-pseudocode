void __fastcall InputTraceLogging::Win32k::RemoveInertiaInfo(const struct INERTIA_INFO_INTERNAL *a1)
{
  __int64 v1; // r8
  int v2; // ecx
  __int64 v3; // rax
  int v4; // ecx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // [rsp+50h] [rbp-20h] BYREF
  __int64 v8; // [rsp+58h] [rbp-18h] BYREF
  __int64 v9; // [rsp+60h] [rbp-10h] BYREF
  __int64 v10; // [rsp+88h] [rbp+18h] BYREF
  __int64 v11; // [rsp+90h] [rbp+20h] BYREF
  __int64 v12; // [rsp+98h] [rbp+28h] BYREF

  if ( (unsigned int)dword_1C02CA7E0 > 4 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 2LL) )
  {
    v2 = *(_DWORD *)(v1 + 184);
    LODWORD(v10) = -__CFSHR__(v2, 4);
    LODWORD(v11) = -__CFSHR__(v2, 3);
    LODWORD(v12) = -__CFSHR__(v2, 5);
    v3 = *(_QWORD *)(v1 + 120);
    LODWORD(v7) = -__CFSHR__(v2, 2);
    v4 = *(_DWORD *)(v1 + 24);
    v8 = v3;
    v9 = (__int64)InputTraceLogging::InertiaSourceToString(v4);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1C02CA7E0,
      byte_1C029C0B2,
      v5,
      v6,
      (void **)&v9,
      (__int64)&v8,
      (__int64)&v7,
      (__int64)&v12,
      (__int64)&v11,
      (__int64)&v10);
  }
}
