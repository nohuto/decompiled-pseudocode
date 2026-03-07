void __fastcall InputTraceLogging::Mouse::SetSystemCapture(const struct CInputDest *a1)
{
  __int64 v1; // r9
  int v2; // eax
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 WindowDetails; // rax
  __int128 v6; // xmm1
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // [rsp+60h] [rbp-19h] BYREF
  __int128 v10; // [rsp+68h] [rbp-11h] BYREF
  __int64 v11; // [rsp+78h] [rbp-1h] BYREF
  __int128 v12; // [rsp+80h] [rbp+7h]
  __int128 v13; // [rsp+90h] [rbp+17h]
  __int64 v14; // [rsp+A0h] [rbp+27h]
  _BYTE v15[40]; // [rsp+A8h] [rbp+2Fh] BYREF
  __int64 v16; // [rsp+E8h] [rbp+6Fh] BYREF
  __int64 v17; // [rsp+F0h] [rbp+77h] BYREF
  __int64 v18; // [rsp+F8h] [rbp+7Fh] BYREF

  if ( !InputTraceLogging::Enabled(0) )
    return;
  v2 = *(_DWORD *)(v1 + 92);
  if ( v2 == 1 )
  {
    v3 = *(_QWORD *)(v1 + 80);
LABEL_4:
    v4 = 0LL;
    goto LABEL_5;
  }
  v3 = 0LL;
  if ( v2 != 2 )
    goto LABEL_4;
  v4 = *(_QWORD *)(v1 + 80);
LABEL_5:
  WindowDetails = InputTraceLogging::GetWindowDetails((__int64)v15, v4, v3);
  v6 = *(_OWORD *)(WindowDetails + 16);
  v12 = *(_OWORD *)WindowDetails;
  v14 = *(_QWORD *)(WindowDetails + 32);
  v13 = v6;
  if ( (unsigned int)dword_1C02CA7E0 > 4 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 64LL) )
  {
    v10 = v12;
    LODWORD(v16) = HIDWORD(v14);
    LODWORD(v17) = v14;
    LODWORD(v18) = HIDWORD(v13);
    LODWORD(v9) = DWORD2(v13);
    v11 = v13;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>>(
      (__int64)&dword_1C02CA7E0,
      (unsigned __int8 *)dword_1C029D491,
      v7,
      v8,
      (const WCHAR **)&v11,
      (__int64)&v9,
      (__int64)&v18,
      (__int64)&v17,
      (__int64)&v16,
      (const WCHAR **)&v10 + 1,
      (void **)&v10);
  }
}
