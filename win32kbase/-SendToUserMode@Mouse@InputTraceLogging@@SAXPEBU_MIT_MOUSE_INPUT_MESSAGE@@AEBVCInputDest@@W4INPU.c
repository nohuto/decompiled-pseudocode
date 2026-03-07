char __fastcall InputTraceLogging::Mouse::SendToUserMode(__int64 a1, __int64 a2, int a3)
{
  __int64 WindowDetails; // rax
  __int64 v6; // r9
  int v7; // eax
  __int64 v8; // r8
  __int64 v9; // rdx
  __int128 v10; // xmm1
  __int64 v11; // r8
  __int64 v12; // r9
  int v14; // [rsp+70h] [rbp-39h] BYREF
  int v15; // [rsp+74h] [rbp-35h] BYREF
  int v16; // [rsp+78h] [rbp-31h] BYREF
  int v17; // [rsp+7Ch] [rbp-2Dh] BYREF
  __int128 v18; // [rsp+80h] [rbp-29h] BYREF
  __int64 v19; // [rsp+90h] [rbp-19h] BYREF
  __int64 v20; // [rsp+98h] [rbp-11h] BYREF
  __int64 v21; // [rsp+A0h] [rbp-9h] BYREF
  __int128 v22; // [rsp+A8h] [rbp-1h]
  __int128 v23; // [rsp+B8h] [rbp+Fh]
  __int64 v24; // [rsp+C8h] [rbp+1Fh]
  _BYTE v25[48]; // [rsp+D0h] [rbp+27h] BYREF
  __int64 v26; // [rsp+128h] [rbp+7Fh] BYREF

  LOBYTE(WindowDetails) = InputTraceLogging::Enabled(0);
  if ( !(_BYTE)WindowDetails )
    return WindowDetails;
  v7 = *(_DWORD *)(v6 + 92);
  if ( v7 == 1 )
  {
    v8 = *(_QWORD *)(v6 + 80);
  }
  else
  {
    v8 = 0LL;
    if ( v7 == 2 )
    {
      v9 = *(_QWORD *)(v6 + 80);
      goto LABEL_5;
    }
  }
  v9 = 0LL;
LABEL_5:
  WindowDetails = InputTraceLogging::GetWindowDetails((__int64)v25, v9, v8);
  v10 = *(_OWORD *)(WindowDetails + 16);
  v22 = *(_OWORD *)WindowDetails;
  v24 = *(_QWORD *)(WindowDetails + 32);
  v23 = v10;
  if ( (unsigned int)dword_1C02CA7E0 > 4 )
  {
    LOBYTE(WindowDetails) = tlgKeywordOn((__int64)&dword_1C02CA7E0, 64LL);
    if ( (_BYTE)WindowDetails )
    {
      v18 = v22;
      LODWORD(v26) = HIDWORD(v24);
      v14 = v24;
      v15 = HIDWORD(v23);
      v16 = DWORD2(v23);
      v19 = v23;
      v20 = (__int64)InputTraceLogging::RoutingModeToString(a3);
      v17 = *(_DWORD *)(a1 + 192);
      v21 = *(_QWORD *)(a1 + 40);
      LOBYTE(WindowDetails) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>>(
                                (__int64)&dword_1C02CA7E0,
                                (unsigned __int8 *)dword_1C029D3C7,
                                v11,
                                v12,
                                (__int64)&v21,
                                (__int64)&v17,
                                (void **)&v20,
                                (const WCHAR **)&v19,
                                (__int64)&v16,
                                (__int64)&v15,
                                (__int64)&v14,
                                (__int64)&v26,
                                (const WCHAR **)&v18 + 1,
                                (void **)&v18);
    }
  }
  return WindowDetails;
}
