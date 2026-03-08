/*
 * XREFs of ?HandleResultFromUserMode@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@PEAX_NPEAUCInputPointerNode@@AEBVCInputDest@@@Z @ 0x1C01FB41C
 * Callers:
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H@Z @ 0x1C0202354 (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C007CE44 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z @ 0x1C007D0EC (-Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z.c)
 *     ?GetWindowDetails@InputTraceLogging@@SA?AUWindowDetails@1@PEBUtagWND@@PEBUtagBWND@@@Z @ 0x1C00F2AD6 (-GetWindowDetails@InputTraceLogging@@SA-AUWindowDetails@1@PEBUtagWND@@PEBUtagBWND@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@U1@U2@U1@U?$_tlgWrapSz@D@@U1@U?$_tlgWrapSz@G@@U2@U2@U2@U2@U4@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@4343AEBU?$_tlgWrapSz@D@@3AEBU?$_tlgWrapSz@G@@444465@Z @ 0x1C01E7244 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@U1@U2@U1@U-$_tlgWrapSz@D@@U1@U-.c)
 */

void __fastcall InputTraceLogging::Pointer::HandleResultFromUserMode(
        const struct CPointerInputFrame *a1,
        const struct tagPOINTEREVENTINT *a2,
        __int64 a3,
        unsigned __int8 a4,
        struct CInputPointerNode *a5,
        const struct CInputDest *a6)
{
  int v7; // esi
  int v10; // eax
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 WindowDetails; // rax
  __int128 v14; // xmm1
  __int64 v15; // r8
  __int64 v16; // r9
  const char *v17; // rax
  int v18; // ecx
  int v19; // ecx
  int v20; // [rsp+A8h] [rbp-80h] BYREF
  int v21; // [rsp+ACh] [rbp-7Ch] BYREF
  int v22; // [rsp+B0h] [rbp-78h] BYREF
  int v23; // [rsp+B4h] [rbp-74h] BYREF
  int v24; // [rsp+B8h] [rbp-70h] BYREF
  int v25; // [rsp+BCh] [rbp-6Ch] BYREF
  int v26; // [rsp+C0h] [rbp-68h] BYREF
  __int128 v27; // [rsp+C8h] [rbp-60h] BYREF
  __int64 v28; // [rsp+D8h] [rbp-50h] BYREF
  __int64 WindowHandle; // [rsp+E0h] [rbp-48h] BYREF
  __int64 v30; // [rsp+E8h] [rbp-40h] BYREF
  __int64 v31; // [rsp+F0h] [rbp-38h] BYREF
  __int64 v32; // [rsp+F8h] [rbp-30h] BYREF
  __int64 v33; // [rsp+100h] [rbp-28h] BYREF
  __int64 v34; // [rsp+108h] [rbp-20h] BYREF
  __int128 v35; // [rsp+110h] [rbp-18h]
  __int128 v36; // [rsp+120h] [rbp-8h]
  __int64 v37; // [rsp+130h] [rbp+8h]
  _BYTE v38[48]; // [rsp+138h] [rbp+10h] BYREF

  v7 = a4;
  if ( !InputTraceLogging::Enabled(0) )
    return;
  v10 = *((_DWORD *)a6 + 23);
  if ( v10 == 1 )
  {
    v11 = *((_QWORD *)a6 + 10);
  }
  else
  {
    v11 = 0LL;
    if ( v10 == 2 )
    {
      v12 = *((_QWORD *)a6 + 10);
      goto LABEL_5;
    }
  }
  v12 = 0LL;
LABEL_5:
  WindowDetails = InputTraceLogging::GetWindowDetails((__int64)v38, v12, v11);
  v14 = *(_OWORD *)(WindowDetails + 16);
  v35 = *(_OWORD *)WindowDetails;
  v37 = *(_QWORD *)(WindowDetails + 32);
  v36 = v14;
  if ( (unsigned int)dword_1C02CA7E0 > 4 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 32LL) )
  {
    v27 = v35;
    v20 = HIDWORD(v37);
    v21 = v37;
    v22 = HIDWORD(v36);
    v23 = DWORD2(v36);
    v28 = v36;
    WindowHandle = (__int64)CInputDest::GetWindowHandle(a6);
    if ( a5 )
    {
      v18 = *((_DWORD *)a5 + 74);
      if ( v18 )
      {
        v19 = v18 - 1;
        if ( v19 )
        {
          if ( v19 == 1 )
            v17 = "Implicit";
          else
            v17 = "UNKNOWN";
        }
        else
        {
          v17 = "Explicit";
        }
      }
      else
      {
        v17 = "NotRouted";
      }
    }
    else
    {
      v17 = "NullNode";
    }
    v30 = (__int64)v17;
    v25 = *((_DWORD *)a2 + 3);
    v26 = *((_DWORD *)a1 + 10);
    v33 = *((_QWORD *)a1 + 9);
    v34 = *((_QWORD *)a1 + 27);
    v31 = (__int64)a5;
    v24 = v7;
    v32 = a3;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>>(
      (__int64)&dword_1C02CA7E0,
      (unsigned __int8 *)dword_1C029A586,
      v15,
      v16,
      (__int64)&v34,
      (__int64)&v33,
      (__int64)&v26,
      (__int64)&v25,
      (__int64)&v32,
      (__int64)&v24,
      (__int64)&v31,
      (void **)&v30,
      (__int64)&WindowHandle,
      (const WCHAR **)&v28,
      (__int64)&v23,
      (__int64)&v22,
      (__int64)&v21,
      (__int64)&v20,
      (const WCHAR **)&v27 + 1,
      (void **)&v27);
  }
}
