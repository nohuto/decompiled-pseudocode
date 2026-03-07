void __fastcall InputTraceLogging::Pointer::SecondaryHitTest(
        const union POINTERINFOUNION *a1,
        __int64 a2,
        int a3,
        const struct CInputDest *a4,
        const struct tagPOINT *a5)
{
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 WindowDetails; // rax
  __int128 v12; // xmm1
  __int64 v13; // r8
  __int64 v14; // r9
  LONG y; // [rsp+A8h] [rbp-80h] BYREF
  LONG x; // [rsp+ACh] [rbp-7Ch] BYREF
  int v17; // [rsp+B0h] [rbp-78h] BYREF
  int v18; // [rsp+B4h] [rbp-74h] BYREF
  int v19; // [rsp+B8h] [rbp-70h] BYREF
  int v20; // [rsp+BCh] [rbp-6Ch] BYREF
  int v21; // [rsp+C0h] [rbp-68h] BYREF
  int v22; // [rsp+C4h] [rbp-64h] BYREF
  int v23; // [rsp+C8h] [rbp-60h] BYREF
  __int128 v24; // [rsp+D0h] [rbp-58h] BYREF
  __int64 v25; // [rsp+E0h] [rbp-48h] BYREF
  __int64 WindowHandle; // [rsp+E8h] [rbp-40h] BYREF
  __int64 v27; // [rsp+F0h] [rbp-38h] BYREF
  __int64 v28; // [rsp+F8h] [rbp-30h] BYREF
  __int128 v29; // [rsp+100h] [rbp-28h]
  __int128 v30; // [rsp+110h] [rbp-18h]
  __int64 v31; // [rsp+120h] [rbp-8h]
  _BYTE v32[48]; // [rsp+128h] [rbp+0h] BYREF

  if ( InputTraceLogging::Enabled(0) )
  {
    if ( *(_DWORD *)(v9 + 92) == 2 )
      v10 = *(_QWORD *)(v9 + 80);
    else
      v10 = 0LL;
    WindowDetails = InputTraceLogging::GetWindowDetails((__int64)v32, v10, 0LL);
    v12 = *(_OWORD *)(WindowDetails + 16);
    v29 = *(_OWORD *)WindowDetails;
    v31 = *(_QWORD *)(WindowDetails + 32);
    v30 = v12;
    if ( (unsigned int)dword_1C02CA7E0 > 4 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 32LL) )
    {
      y = a5->y;
      x = a5->x;
      v24 = v29;
      v17 = HIDWORD(v31);
      v18 = v31;
      v19 = HIDWORD(v30);
      v20 = DWORD2(v30);
      v25 = v30;
      WindowHandle = (__int64)CInputDest::GetWindowHandle(a4);
      v22 = *((_DWORD *)a1 + 3);
      v23 = *((_DWORD *)a1 + 1);
      v28 = *((_QWORD *)a1 + 10);
      v21 = a3;
      v27 = a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)&dword_1C02CA7E0,
        (unsigned __int8 *)dword_1C0299BAB,
        v13,
        v14,
        (__int64)&v28,
        (__int64)&v23,
        (__int64)&v27,
        (__int64)&v22,
        (__int64)&v21,
        (__int64)&WindowHandle,
        (const WCHAR **)&v25,
        (__int64)&v20,
        (__int64)&v19,
        (__int64)&v18,
        (__int64)&v17,
        (const WCHAR **)&v24 + 1,
        (void **)&v24,
        (__int64)&x,
        (__int64)&y);
    }
  }
}
