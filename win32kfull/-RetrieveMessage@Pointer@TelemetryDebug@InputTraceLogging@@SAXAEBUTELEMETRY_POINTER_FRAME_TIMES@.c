void __fastcall InputTraceLogging::TelemetryDebug::Pointer::RetrieveMessage(
        const struct TELEMETRY_POINTER_FRAME_TIMES *a1)
{
  int v2; // r8d
  int v3; // r9d
  int v4; // r8d
  int v5; // r9d
  __int64 v6; // [rsp+B0h] [rbp-80h] BYREF
  __int64 v7; // [rsp+B8h] [rbp-78h] BYREF
  __int64 v8; // [rsp+C0h] [rbp-70h] BYREF
  __int64 v9; // [rsp+C8h] [rbp-68h] BYREF
  __int64 v10; // [rsp+D0h] [rbp-60h] BYREF
  __int64 v11; // [rsp+D8h] [rbp-58h] BYREF
  __int64 v12; // [rsp+E0h] [rbp-50h] BYREF
  __int64 v13; // [rsp+E8h] [rbp-48h] BYREF
  __int64 v14; // [rsp+F0h] [rbp-40h] BYREF
  __int64 v15; // [rsp+F8h] [rbp-38h] BYREF
  __int64 v16; // [rsp+100h] [rbp-30h] BYREF
  __int64 v17; // [rsp+108h] [rbp-28h] BYREF
  __int64 v18; // [rsp+110h] [rbp-20h] BYREF
  __int64 v19; // [rsp+118h] [rbp-18h] BYREF
  __int64 v20; // [rsp+120h] [rbp-10h] BYREF
  __int64 v21; // [rsp+148h] [rbp+18h] BYREF
  __int64 v22; // [rsp+150h] [rbp+20h] BYREF
  __int64 v23; // [rsp+158h] [rbp+28h] BYREF

  if ( (unsigned __int8)isChildPartition() )
  {
    if ( (unsigned int)dword_1C035C080 > 7 && tlgKeywordOn((__int64)&dword_1C035C080, 0x10000LL) )
    {
      v21 = *((_QWORD *)a1 + 17);
      v22 = *((_QWORD *)a1 + 16);
      v23 = *((_QWORD *)a1 + 15);
      v10 = *((_QWORD *)a1 + 14);
      v9 = *((_QWORD *)a1 + 13);
      v8 = *((_QWORD *)a1 + 12);
      v7 = *((_QWORD *)a1 + 11);
      v6 = *((_QWORD *)a1 + 10);
      v11 = *((_QWORD *)a1 + 9);
      v12 = *((_QWORD *)a1 + 8);
      v13 = *((_QWORD *)a1 + 7);
      v14 = *((_QWORD *)a1 + 6);
      v15 = *((_QWORD *)a1 + 5);
      v16 = *((_QWORD *)a1 + 4);
      v17 = *((_QWORD *)a1 + 3);
      v18 = *((_QWORD *)a1 + 2);
      v19 = *((_QWORD *)a1 + 1);
      v20 = *(_QWORD *)a1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        (unsigned int)&dword_1C035C080,
        (unsigned int)&unk_1C031D12F,
        v4,
        v5,
        (__int64)&v20,
        (__int64)&v19,
        (__int64)&v18,
        (__int64)&v17,
        (__int64)&v16,
        (__int64)&v15,
        (__int64)&v14,
        (__int64)&v13,
        (__int64)&v12,
        (__int64)&v11,
        (__int64)&v6,
        (__int64)&v7,
        (__int64)&v8,
        (__int64)&v9,
        (__int64)&v10,
        (__int64)&v23,
        (__int64)&v22,
        (__int64)&v21);
    }
  }
  else if ( (unsigned int)dword_1C035C080 > 7 )
  {
    if ( tlgKeywordOn((__int64)&dword_1C035C080, 0x10000LL) )
    {
      v21 = *((_QWORD *)a1 + 7);
      v22 = *((_QWORD *)a1 + 6);
      v23 = *((_QWORD *)a1 + 5);
      v6 = *((_QWORD *)a1 + 4);
      v7 = *((_QWORD *)a1 + 3);
      v8 = *((_QWORD *)a1 + 2);
      v9 = *((_QWORD *)a1 + 1);
      v10 = *(_QWORD *)a1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        (unsigned int)&dword_1C035C080,
        (unsigned int)&unk_1C031D044,
        v2,
        v3,
        (__int64)&v10,
        (__int64)&v9,
        (__int64)&v8,
        (__int64)&v7,
        (__int64)&v6,
        (__int64)&v23,
        (__int64)&v22,
        (__int64)&v21);
    }
  }
}
