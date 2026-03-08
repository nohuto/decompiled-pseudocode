/*
 * XREFs of ?DequeueUserModeInput@Mouse@InputTraceLogging@@SAX_KPEBVCInputDest@@@Z @ 0x1C022C4B4
 * Callers:
 *     ?ResolveIdToMessage@BufferedMouseInputList@CMouseProcessor@@QEAAPEAUMouseInputMessage@2@_K@Z @ 0x1C0230F1C (-ResolveIdToMessage@BufferedMouseInputList@CMouseProcessor@@QEAAPEAUMouseInputMessage@2@_K@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     ?Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z @ 0x1C007D0EC (-Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0088924 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     ?GetWindowDetails@InputTraceLogging@@SA?AUWindowDetails@1@PEBUtagWND@@PEBUtagBWND@@@Z @ 0x1C00F2AD6 (-GetWindowDetails@InputTraceLogging@@SA-AUWindowDetails@1@PEBUtagWND@@PEBUtagBWND@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U2@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@5554AEBU?$_tlgWrapSz@D@@@Z @ 0x1C022A004 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U3@U3@U3@U2@U-$_tlgW.c)
 */

void __fastcall InputTraceLogging::Mouse::DequeueUserModeInput(__int64 a1, const struct CInputDest *a2)
{
  __int64 v3; // r9
  int v4; // eax
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 WindowDetails; // rax
  __int128 v8; // xmm1
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // [rsp+60h] [rbp-39h] BYREF
  int v12; // [rsp+64h] [rbp-35h] BYREF
  int v13; // [rsp+68h] [rbp-31h] BYREF
  int v14; // [rsp+6Ch] [rbp-2Dh] BYREF
  __int64 v15; // [rsp+70h] [rbp-29h] BYREF
  __int128 v16; // [rsp+78h] [rbp-21h] BYREF
  __int64 v17; // [rsp+88h] [rbp-11h] BYREF
  __int128 v18; // [rsp+90h] [rbp-9h]
  __int128 v19; // [rsp+A0h] [rbp+7h]
  __int64 v20; // [rsp+B0h] [rbp+17h]
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+B8h] [rbp+1Fh] BYREF
  __int64 *v22; // [rsp+D8h] [rbp+3Fh]
  int v23; // [rsp+E0h] [rbp+47h]
  int v24; // [rsp+E4h] [rbp+4Bh]

  if ( !InputTraceLogging::Enabled(0) )
    return;
  if ( v3 )
  {
    v4 = *(_DWORD *)(v3 + 92);
    if ( v4 == 1 )
    {
      v5 = *(_QWORD *)(v3 + 80);
    }
    else
    {
      v5 = 0LL;
      if ( v4 == 2 )
      {
        v6 = *(_QWORD *)(v3 + 80);
LABEL_6:
        WindowDetails = InputTraceLogging::GetWindowDetails((__int64)&v21, v6, v5);
        v8 = *(_OWORD *)(WindowDetails + 16);
        v18 = *(_OWORD *)WindowDetails;
        v20 = *(_QWORD *)(WindowDetails + 32);
        v19 = v8;
        if ( (unsigned int)dword_1C02CA7E0 > 4 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 64LL) )
        {
          v16 = v18;
          v11 = HIDWORD(v20);
          v12 = v20;
          v13 = HIDWORD(v19);
          v14 = DWORD2(v19);
          v17 = v19;
          v15 = a1;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>>(
            (__int64)&dword_1C02CA7E0,
            (unsigned __int8 *)dword_1C029D5AC,
            v9,
            v10,
            (__int64)&v15,
            (const WCHAR **)&v17,
            (__int64)&v14,
            (__int64)&v13,
            (__int64)&v12,
            (__int64)&v11,
            (const WCHAR **)&v16 + 1,
            (void **)&v16);
        }
        return;
      }
    }
    v6 = 0LL;
    goto LABEL_6;
  }
  if ( (unsigned int)dword_1C02CA7E0 > 4 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 64LL) )
  {
    v24 = 0;
    v22 = &v15;
    v15 = a1;
    v23 = 8;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C02CA7E0, (unsigned __int8 *)dword_1C029D571, 0LL, 0LL, 3u, &v21);
  }
}
