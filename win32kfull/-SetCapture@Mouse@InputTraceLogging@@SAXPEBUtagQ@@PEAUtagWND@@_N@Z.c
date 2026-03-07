void __fastcall InputTraceLogging::Mouse::SetCapture(const struct tagQ *a1, struct tagWND *a2, unsigned __int8 a3)
{
  int v4; // esi
  __int64 v6; // rbx
  __int64 WindowDetails; // rax
  __int128 v8; // xmm1
  int v9; // [rsp+70h] [rbp-49h] BYREF
  int v10; // [rsp+74h] [rbp-45h] BYREF
  int v11; // [rsp+78h] [rbp-41h] BYREF
  int v12; // [rsp+7Ch] [rbp-3Dh] BYREF
  __int128 v13; // [rsp+80h] [rbp-39h] BYREF
  __int64 v14; // [rsp+90h] [rbp-29h] BYREF
  __int64 v15; // [rsp+98h] [rbp-21h] BYREF
  __int64 v16; // [rsp+A0h] [rbp-19h] BYREF
  __int128 v17; // [rsp+A8h] [rbp-11h]
  __int128 v18; // [rsp+B8h] [rbp-1h]
  __int64 v19; // [rsp+C8h] [rbp+Fh]
  _BYTE v20[48]; // [rsp+D0h] [rbp+17h] BYREF
  __int64 v21; // [rsp+138h] [rbp+7Fh] BYREF

  v4 = a3;
  v6 = 0LL;
  if ( (unsigned __int8)InputTraceLogging::Enabled(0LL) )
  {
    WindowDetails = InputTraceLogging::GetWindowDetails(v20, a2);
    v8 = *(_OWORD *)(WindowDetails + 16);
    v17 = *(_OWORD *)WindowDetails;
    v19 = *(_QWORD *)(WindowDetails + 32);
    v18 = v8;
    if ( (unsigned int)dword_1C035C080 > 4 )
    {
      if ( (unsigned __int8)tlgKeywordOn(&dword_1C035C080, 64LL) )
      {
        v13 = v17;
        LODWORD(v21) = HIDWORD(v19);
        v9 = v19;
        v10 = HIDWORD(v18);
        v11 = DWORD2(v18);
        v14 = v18;
        if ( a2 )
          v6 = *(_QWORD *)a2;
        v15 = v6;
        v12 = v4;
        v16 = (__int64)a1;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>>(
          (int)&dword_1C035C080,
          (int)&dword_1C031E92B,
          (__int64)&v16,
          (__int64)&v12,
          (__int64)&v15,
          (__int64)&v14,
          (__int64)&v11,
          (__int64)&v10,
          (__int64)&v9,
          (__int64)&v21,
          (__int64)&v13 + 8,
          (__int64)&v13);
      }
    }
  }
}
