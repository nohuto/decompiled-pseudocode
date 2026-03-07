void __fastcall DripsBlockerTrackingHelper::EmitSleepStudyBlockerTelemetry(
        DripsBlockerTrackingHelper *this,
        __int64 a2,
        const unsigned __int64 *a3,
        struct _UNICODE_STRING *a4,
        unsigned int a5)
{
  __int64 v6; // r8
  unsigned __int16 *v7; // r9
  __int64 v8; // r10
  __int64 *v9; // r11
  __int64 v10; // rcx
  __int64 v11; // [rsp+90h] [rbp-21h] BYREF
  __int64 v12; // [rsp+98h] [rbp-19h] BYREF
  __int64 v13; // [rsp+A0h] [rbp-11h] BYREF
  __int64 v14; // [rsp+A8h] [rbp-9h] BYREF
  __int64 v15; // [rsp+B0h] [rbp-1h] BYREF
  __int64 v16; // [rsp+B8h] [rbp+7h] BYREF
  __int64 v17; // [rsp+C0h] [rbp+Fh] BYREF
  __int64 v18; // [rsp+C8h] [rbp+17h] BYREF
  __int64 v19; // [rsp+D0h] [rbp+1Fh] BYREF
  __int64 v20; // [rsp+D8h] [rbp+27h] BYREF
  __int64 v21; // [rsp+E0h] [rbp+2Fh] BYREF
  unsigned __int16 *v22; // [rsp+E8h] [rbp+37h] BYREF
  __int64 v23; // [rsp+F0h] [rbp+3Fh] BYREF
  __int64 v24; // [rsp+F8h] [rbp+47h] BYREF

  if ( (unsigned int)dword_1C013A918 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_1C013A918, 0x400000002000LL) )
    {
      v10 = 4720LL * a5;
      v11 = 50331648LL;
      v22 = v7;
      v23 = a2;
      v24 = 16LL;
      v12 = *(_QWORD *)(v10 + v8);
      v13 = *(unsigned int *)(v10 + v8 + 96);
      v14 = *(unsigned int *)(v10 + v8 + 88);
      v15 = *(_QWORD *)(v10 + v8 + 80);
      v16 = *(_QWORD *)(v10 + v8 + 72);
      v17 = *(_QWORD *)(v10 + v8 + 48);
      v18 = *(unsigned int *)(v10 + v8 + 92);
      v19 = *(_QWORD *)(v10 + v8 + 64);
      v20 = *(_QWORD *)(v10 + v8 + 56);
      v21 = *v9;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        v10,
        byte_1C009E5F2,
        v6,
        (__int64)v7,
        (__int64)&v24,
        (__int64)&v23,
        &v22,
        (__int64)&v21,
        (__int64)&v20,
        (__int64)&v19,
        (__int64)&v18,
        (__int64)&v17,
        (__int64)&v16,
        (__int64)&v15,
        (__int64)&v14,
        (__int64)&v13,
        (__int64)&v12,
        (__int64)&v11);
    }
  }
}
