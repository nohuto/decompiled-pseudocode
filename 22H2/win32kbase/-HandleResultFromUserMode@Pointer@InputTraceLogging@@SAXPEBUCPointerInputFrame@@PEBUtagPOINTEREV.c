/*
 * XREFs of ?HandleResultFromUserMode@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@PEAXAEBVCInputDest@@@Z @ 0x1C01963C8
 * Callers:
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z @ 0x1C019BBCC (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z.c)
 * Callees:
 *     ?Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z @ 0x1C0044CEC (-Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z.c)
 *     _tlgKeywordOn @ 0x1C004BCA0 (_tlgKeywordOn.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C0095988 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@U1@U1@U?$_tlgWrapSz@G@@U2@U2@U2@U2@U3@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@433AEBU?$_tlgWrapSz@G@@44445AEBU?$_tlgWrapSz@D@@@Z @ 0x1C01862F0 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@U1@U1@U-$_tlgWrapSz@G@@U2@U2@U2.c)
 *     ?GetWindowDetails@InputTraceLogging@@CA?AUWindowDetails@1@PEAUtagWND@@PEAUtagBWND@@@Z @ 0x1C0195DAC (-GetWindowDetails@InputTraceLogging@@CA-AUWindowDetails@1@PEAUtagWND@@PEAUtagBWND@@@Z.c)
 */

void __fastcall InputTraceLogging::Pointer::HandleResultFromUserMode(
        const struct CPointerInputFrame *a1,
        const struct tagPOINTEREVENTINT *a2,
        __int64 a3,
        const struct CInputDest *a4)
{
  __int64 v8; // r9
  int v9; // eax
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 WindowDetails; // rax
  __int128 v13; // xmm1
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // [rsp+98h] [rbp-80h] BYREF
  int v17; // [rsp+9Ch] [rbp-7Ch] BYREF
  int v18; // [rsp+A0h] [rbp-78h] BYREF
  int v19; // [rsp+A4h] [rbp-74h] BYREF
  int v20; // [rsp+A8h] [rbp-70h] BYREF
  int v21; // [rsp+ACh] [rbp-6Ch] BYREF
  __int128 v22; // [rsp+B0h] [rbp-68h] BYREF
  __int64 v23; // [rsp+C0h] [rbp-58h] BYREF
  __int64 WindowHandle; // [rsp+C8h] [rbp-50h] BYREF
  __int64 v25; // [rsp+D0h] [rbp-48h] BYREF
  __int64 v26; // [rsp+D8h] [rbp-40h] BYREF
  __int64 v27; // [rsp+E0h] [rbp-38h] BYREF
  __int128 v28; // [rsp+E8h] [rbp-30h]
  __int128 v29; // [rsp+F8h] [rbp-20h]
  __int64 v30; // [rsp+108h] [rbp-10h]
  _BYTE v31[40]; // [rsp+110h] [rbp-8h] BYREF

  if ( !InputTraceLogging::Enabled(0, (__int64)a2, a3, (__int64)a4) )
    return;
  v9 = *(_DWORD *)(v8 + 92);
  if ( v9 == 1 )
  {
    v10 = *(_QWORD *)(v8 + 80);
LABEL_4:
    v11 = 0LL;
    goto LABEL_5;
  }
  v10 = 0LL;
  if ( v9 != 2 )
    goto LABEL_4;
  v11 = *(_QWORD *)(v8 + 80);
LABEL_5:
  WindowDetails = InputTraceLogging::GetWindowDetails((__int64)v31, v11, v10);
  v13 = *(_OWORD *)(WindowDetails + 16);
  v28 = *(_OWORD *)WindowDetails;
  v30 = *(_QWORD *)(WindowDetails + 32);
  v29 = v13;
  if ( (unsigned int)dword_1C024AA90 > 4 && tlgKeywordOn((__int64)&dword_1C024AA90, 32LL) )
  {
    WindowHandle = (__int64)CInputDest::GetWindowHandle(a4);
    v20 = *((_DWORD *)a2 + 3);
    v21 = *((_DWORD *)a1 + 10);
    v26 = *((_QWORD *)a1 + 9);
    v27 = *((_QWORD *)a1 + 14);
    v22 = v28;
    v16 = HIDWORD(v30);
    v17 = v30;
    v18 = HIDWORD(v29);
    v19 = DWORD2(v29);
    v23 = v29;
    v25 = a3;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>>(
      (__int64)&dword_1C024AA90,
      (unsigned __int8 *)dword_1C021DC3E,
      v14,
      v15,
      (__int64)&v27,
      (__int64)&v26,
      (__int64)&v21,
      (__int64)&v20,
      (__int64)&v25,
      (__int64)&WindowHandle,
      (const WCHAR **)&v23,
      (__int64)&v19,
      (__int64)&v18,
      (__int64)&v17,
      (__int64)&v16,
      (const WCHAR **)&v22 + 1,
      (void **)&v22);
  }
}
