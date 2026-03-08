/*
 * XREFs of ?SecondaryHitTest@Mouse@InputTraceLogging@@SAXPEBUtagQMSG@@AEBUtagPOINT@@PEAUtagWND@@@Z @ 0x1C00D6C70
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00725D0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ?Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z @ 0x1C00D6CC4 (-Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z.c)
 *     _tlgKeywordOn @ 0x1C0102BC4 (_tlgKeywordOn.c)
 *     ?GetWindowDetails@InputTraceLogging@@SA?AUWindowDetails@1@PEBUtagWND@@PEBUtagBWND@@@Z @ 0x1C0143726 (-GetWindowDetails@InputTraceLogging@@SA-AUWindowDetails@1@PEBUtagWND@@PEBUtagBWND@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapSz@G@@U2@U2@U2@U2@U3@U?$_tlgWrapSz@D@@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapSz@G@@44445AEBU?$_tlgWrapSz@D@@4444@Z @ 0x1C01B5E18 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapSz@G@@U2@U2@U2@U2@U3@U-.c)
 */

void __fastcall InputTraceLogging::Mouse::SecondaryHitTest(
        const struct tagQMSG *a1,
        const struct tagPOINT *a2,
        struct tagWND *a3)
{
  __int64 v6; // rbx
  __int64 WindowDetails; // rax
  __int128 v8; // xmm1
  LONG x; // [rsp+90h] [rbp-80h] BYREF
  int v10; // [rsp+94h] [rbp-7Ch] BYREF
  int v11; // [rsp+98h] [rbp-78h] BYREF
  int v12; // [rsp+9Ch] [rbp-74h] BYREF
  int v13; // [rsp+A0h] [rbp-70h] BYREF
  int v14; // [rsp+A4h] [rbp-6Ch] BYREF
  int v15; // [rsp+A8h] [rbp-68h] BYREF
  int v16; // [rsp+ACh] [rbp-64h] BYREF
  __int128 v17; // [rsp+B0h] [rbp-60h] BYREF
  __int64 v18; // [rsp+C0h] [rbp-50h] BYREF
  __int64 v19; // [rsp+C8h] [rbp-48h] BYREF
  __int64 v20; // [rsp+D0h] [rbp-40h] BYREF
  __int128 v21; // [rsp+D8h] [rbp-38h]
  __int128 v22; // [rsp+E8h] [rbp-28h]
  __int64 v23; // [rsp+F8h] [rbp-18h]
  _BYTE v24[48]; // [rsp+100h] [rbp-10h] BYREF
  __int64 v25; // [rsp+168h] [rbp+58h] BYREF

  v6 = 0LL;
  if ( (unsigned __int8)InputTraceLogging::Enabled(0LL) )
  {
    WindowDetails = InputTraceLogging::GetWindowDetails(v24, a3);
    v8 = *(_OWORD *)(WindowDetails + 16);
    v21 = *(_OWORD *)WindowDetails;
    v23 = *(_QWORD *)(WindowDetails + 32);
    v22 = v8;
    if ( (unsigned int)dword_1C035C080 > 4 )
    {
      if ( (unsigned __int8)tlgKeywordOn(&dword_1C035C080, 64LL) )
      {
        LODWORD(v25) = a2->y;
        x = a2->x;
        v10 = *((_DWORD *)a1 + 21);
        v11 = *((_DWORD *)a1 + 20);
        v17 = v21;
        v12 = HIDWORD(v23);
        v13 = v23;
        v14 = HIDWORD(v22);
        v15 = DWORD2(v22);
        v18 = v22;
        if ( a3 )
          v6 = *(_QWORD *)a3;
        v16 = *((_DWORD *)a1 + 6);
        v20 = *((_QWORD *)a1 + 17);
        v19 = v6;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          (int)&dword_1C035C080,
          (int)&dword_1C031C19F,
          (__int64)&v20,
          (__int64)&v16,
          (__int64)&v19,
          (__int64)&v18,
          (__int64)&v15,
          (__int64)&v14,
          (__int64)&v13,
          (__int64)&v12,
          (__int64)&v17 + 8,
          (__int64)&v17,
          (__int64)&v11,
          (__int64)&v10,
          (__int64)&x,
          (__int64)&v25);
      }
    }
  }
}
