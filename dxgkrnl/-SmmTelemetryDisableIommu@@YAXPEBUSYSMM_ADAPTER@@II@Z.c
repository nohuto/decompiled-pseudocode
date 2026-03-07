void __fastcall SmmTelemetryDisableIommu(const struct SYSMM_ADAPTER *a1)
{
  __int64 v1; // r8
  __int64 v2; // r9
  int v3; // r10d
  __int64 *v4; // r11
  __int64 v5; // rax
  unsigned __int16 *v6; // rcx
  int v7; // [rsp+50h] [rbp-28h] BYREF
  int v8; // [rsp+54h] [rbp-24h] BYREF
  unsigned __int16 *v9; // [rsp+58h] [rbp-20h] BYREF
  __int64 v10[3]; // [rsp+60h] [rbp-18h] BYREF
  __int16 v11; // [rsp+98h] [rbp+20h] BYREF

  if ( (unsigned int)dword_1C013A918 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_1C013A918, 0x400000800000LL) )
    {
      v5 = *v4;
      v7 = v2;
      v8 = v3;
      v6 = (unsigned __int16 *)(*(_QWORD *)(v5 + 64) + 2744LL);
      v11 = 0;
      v9 = v6;
      v10[0] = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)v6,
        byte_1C00A1F1D,
        v1,
        v2,
        (__int64)v10,
        (__int64)&v11,
        &v9,
        (__int64)&v8,
        (__int64)&v7);
    }
  }
}
