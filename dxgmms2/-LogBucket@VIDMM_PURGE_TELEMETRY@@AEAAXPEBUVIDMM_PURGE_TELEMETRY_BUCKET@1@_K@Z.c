void __fastcall VIDMM_PURGE_TELEMETRY::LogBucket(
        VIDMM_PURGE_TELEMETRY *this,
        const struct VIDMM_PURGE_TELEMETRY::VIDMM_PURGE_TELEMETRY_BUCKET *a2)
{
  __int64 v3; // r8
  unsigned __int64 *v4; // r9
  unsigned __int64 v5; // r10
  __int64 v6; // r11
  unsigned __int64 v7; // rtt
  __int64 v8; // rcx
  unsigned __int64 v9; // [rsp+60h] [rbp+27h] BYREF
  unsigned __int64 v10; // [rsp+68h] [rbp+2Fh] BYREF
  __int64 v11; // [rsp+70h] [rbp+37h] BYREF
  __int64 v12; // [rsp+78h] [rbp+3Fh] BYREF
  __int64 v13; // [rsp+80h] [rbp+47h] BYREF
  __int16 v14; // [rsp+A8h] [rbp+6Fh] BYREF
  int v15; // [rsp+B8h] [rbp+7Fh] BYREF

  if ( *((_DWORD *)a2 + 6) && (unsigned int)dword_1C0076048 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_1C0076048, 0x400000000008LL) )
    {
      v9 = v4[1];
      v7 = *v4;
      v11 = v6;
      v10 = v7 / v5;
      v8 = *(_QWORD *)(*(_QWORD *)this + 24LL);
      v12 = *(_QWORD *)(v8 + 404);
      v14 = 2;
      v15 = v5;
      v13 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        v8,
        byte_1C00561E4,
        v3,
        (__int64)v4,
        (__int64)&v13,
        (__int64)&v14,
        (__int64)&v15,
        (__int64)&v12,
        (__int64)&v11,
        (__int64)&v10,
        (__int64)&v9);
    }
  }
}
