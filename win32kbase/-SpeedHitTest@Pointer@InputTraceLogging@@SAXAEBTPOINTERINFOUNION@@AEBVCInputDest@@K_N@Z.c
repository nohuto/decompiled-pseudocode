void __fastcall InputTraceLogging::Pointer::SpeedHitTest(
        const union POINTERINFOUNION *a1,
        const struct CInputDest *a2,
        int a3,
        char a4)
{
  int v8; // eax
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 WindowDetails; // rax
  __int128 v12; // xmm1
  int v13; // ecx
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // ecx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // [rsp+98h] [rbp-80h] BYREF
  int v20; // [rsp+9Ch] [rbp-7Ch] BYREF
  int v21; // [rsp+A0h] [rbp-78h] BYREF
  __int128 v22; // [rsp+A4h] [rbp-74h] BYREF
  __int128 v23; // [rsp+B8h] [rbp-60h] BYREF
  __int64 v24; // [rsp+C8h] [rbp-50h] BYREF
  __int64 v25; // [rsp+D0h] [rbp-48h] BYREF
  __int64 WindowHandle; // [rsp+D8h] [rbp-40h] BYREF
  __int64 v27; // [rsp+E0h] [rbp-38h] BYREF
  __int128 v28; // [rsp+E8h] [rbp-30h]
  _BYTE v29[24]; // [rsp+F8h] [rbp-20h]
  _BYTE v30[40]; // [rsp+110h] [rbp-8h] BYREF

  if ( !InputTraceLogging::Enabled(0) )
    return;
  v8 = *((_DWORD *)a2 + 23);
  if ( v8 == 1 )
  {
    v9 = *((_QWORD *)a2 + 10);
LABEL_4:
    v10 = 0LL;
    goto LABEL_5;
  }
  v9 = 0LL;
  if ( v8 != 2 )
    goto LABEL_4;
  v10 = *((_QWORD *)a2 + 10);
LABEL_5:
  WindowDetails = InputTraceLogging::GetWindowDetails((__int64)v30, v10, v9);
  v12 = *(_OWORD *)(WindowDetails + 16);
  v28 = *(_OWORD *)WindowDetails;
  *(_QWORD *)&v29[16] = *(_QWORD *)(WindowDetails + 32);
  *(_OWORD *)v29 = v12;
  if ( a4 )
  {
    if ( (unsigned int)dword_1C02CA7E0 > 4 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 32LL) )
    {
      v13 = *((_DWORD *)a2 + 1);
      v23 = v28;
      v19 = *(_DWORD *)&v29[20];
      v20 = *(_DWORD *)&v29[16];
      v21 = *(_DWORD *)&v29[12];
      LODWORD(v22) = *(_DWORD *)&v29[8];
      v24 = *(_QWORD *)v29;
      DWORD1(v22) = *((_DWORD *)a2 + 26);
      v25 = (__int64)InputTraceLogging::RoutingModeToString(v13);
      DWORD2(v22) = a3;
      WindowHandle = (__int64)CInputDest::GetWindowHandle(a2);
      HIDWORD(v22) = *((_DWORD *)a1 + 1);
      v27 = *((_QWORD *)a1 + 10);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>>(
        (__int64)&dword_1C02CA7E0,
        byte_1C029AE7B,
        v14,
        v15,
        (__int64)&v27,
        (__int64)&v22 + 12,
        (__int64)&WindowHandle,
        (__int64)&v22 + 8,
        (void **)&v25,
        (__int64)&v22 + 4,
        (const WCHAR **)&v24,
        (__int64)&v22,
        (__int64)&v21,
        (__int64)&v20,
        (__int64)&v19,
        (const WCHAR **)&v23 + 1,
        (void **)&v23);
    }
  }
  else if ( (unsigned int)dword_1C02CA7E0 > 4 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 32LL) )
  {
    v16 = *((_DWORD *)a2 + 1);
    WindowHandle = *((_QWORD *)&v28 + 1);
    v27 = v28;
    v22 = *(_OWORD *)&v29[8];
    v25 = *(_QWORD *)v29;
    v21 = *((_DWORD *)a2 + 26);
    v24 = (__int64)InputTraceLogging::RoutingModeToString(v16);
    v20 = a3;
    *((_QWORD *)&v23 + 1) = CInputDest::GetWindowHandle(a2);
    v19 = *((_DWORD *)a1 + 1);
    *(_QWORD *)&v23 = *((_QWORD *)a1 + 10);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>>(
      (__int64)&dword_1C02CA7E0,
      (unsigned __int8 *)dword_1C029AF54,
      v17,
      v18,
      (__int64)&v23,
      (__int64)&v19,
      (__int64)&v23 + 8,
      (__int64)&v20,
      (void **)&v24,
      (__int64)&v21,
      (const WCHAR **)&v25,
      (__int64)&v22,
      (__int64)&v22 + 4,
      (__int64)&v22 + 8,
      (__int64)&v22 + 12,
      (const WCHAR **)&WindowHandle,
      (void **)&v27);
  }
}
