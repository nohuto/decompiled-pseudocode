/*
 * XREFs of ?SpeedHitTest@Pointer@InputTraceLogging@@SAXAEBTPOINTERINFOUNION@@AEBVCInputDest@@K_N@Z @ 0x1C01D77F4
 * Callers:
 *     ?UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA?AVCInputDest@@PEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@PEAUCInputPointerNode@@IPEAGPEAIK@Z @ 0x1C01D9608 (-UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA-AVCInputDest@@PEBUCPointerInputFrame@@PEBU.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C00344F0 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z @ 0x1C003802C (-Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z.c)
 *     ?GetWindowDetails@InputTraceLogging@@SA?AUWindowDetails@1@PEBUtagWND@@PEBUtagBWND@@@Z @ 0x1C00E8416 (-GetWindowDetails@InputTraceLogging@@SA-AUWindowDetails@1@PEBUtagWND@@PEBUtagBWND@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@U2@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@U2@U2@U2@U2@U4@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@34AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@444465@Z @ 0x1C01BC56C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@U2@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@.c)
 *     ?RoutingModeToString@InputTraceLogging@@CAPEBDW4INPUT_DESTINATION_ROUTING_MODE@@@Z @ 0x1C01D3C70 (-RoutingModeToString@InputTraceLogging@@CAPEBDW4INPUT_DESTINATION_ROUTING_MODE@@@Z.c)
 */

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
  int v19; // [rsp+88h] [rbp-80h] BYREF
  int v20; // [rsp+8Ch] [rbp-7Ch] BYREF
  __int64 v21; // [rsp+90h] [rbp-78h] BYREF
  __int64 v22; // [rsp+98h] [rbp-70h] BYREF
  __int128 v23; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v24; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v25; // [rsp+B8h] [rbp-50h] BYREF
  __int64 WindowHandle; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v27; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v28; // [rsp+D0h] [rbp-38h]
  __int128 v29; // [rsp+E0h] [rbp-28h]
  __int64 v30; // [rsp+F0h] [rbp-18h]
  _BYTE v31[48]; // [rsp+F8h] [rbp-10h] BYREF

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
  WindowDetails = InputTraceLogging::GetWindowDetails((__int64)v31, v10, v9);
  v12 = *(_OWORD *)(WindowDetails + 16);
  v28 = *(_OWORD *)WindowDetails;
  v30 = *(_QWORD *)(WindowDetails + 32);
  v29 = v12;
  if ( a4 )
  {
    if ( (unsigned int)dword_1C028EE70 > 4 && tlgKeywordOn((__int64)&dword_1C028EE70, 32LL) )
    {
      v13 = *((_DWORD *)a2 + 1);
      v23 = v28;
      v19 = HIDWORD(v30);
      v20 = v30;
      v21 = __PAIR64__(DWORD2(v29), HIDWORD(v29));
      v24 = v29;
      v25 = (__int64)InputTraceLogging::RoutingModeToString(v13);
      LODWORD(v22) = a3;
      WindowHandle = (__int64)CInputDest::GetWindowHandle(a2);
      HIDWORD(v22) = *((_DWORD *)a1 + 1);
      v27 = *((_QWORD *)a1 + 10);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>>(
        (__int64)&dword_1C028EE70,
        byte_1C026190E,
        v14,
        v15,
        (__int64)&v27,
        (__int64)&v22 + 4,
        (__int64)&WindowHandle,
        (__int64)&v22,
        (void **)&v25,
        (const WCHAR **)&v24,
        (__int64)&v21 + 4,
        (__int64)&v21,
        (__int64)&v20,
        (__int64)&v19,
        (const WCHAR **)&v23 + 1,
        (void **)&v23);
    }
  }
  else if ( (unsigned int)dword_1C028EE70 > 4 && tlgKeywordOn((__int64)&dword_1C028EE70, 32LL) )
  {
    v16 = *((_DWORD *)a2 + 1);
    WindowHandle = *((_QWORD *)&v28 + 1);
    v27 = v28;
    v22 = v30;
    v21 = *((_QWORD *)&v29 + 1);
    v25 = v29;
    v24 = (__int64)InputTraceLogging::RoutingModeToString(v16);
    v20 = a3;
    *((_QWORD *)&v23 + 1) = CInputDest::GetWindowHandle(a2);
    v19 = *((_DWORD *)a1 + 1);
    *(_QWORD *)&v23 = *((_QWORD *)a1 + 10);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>>(
      (__int64)&dword_1C028EE70,
      (unsigned __int8 *)dword_1C0261840,
      v17,
      v18,
      (__int64)&v23,
      (__int64)&v19,
      (__int64)&v23 + 8,
      (__int64)&v20,
      (void **)&v24,
      (const WCHAR **)&v25,
      (__int64)&v21,
      (__int64)&v21 + 4,
      (__int64)&v22,
      (__int64)&v22 + 4,
      (const WCHAR **)&WindowHandle,
      (void **)&v27);
  }
}
