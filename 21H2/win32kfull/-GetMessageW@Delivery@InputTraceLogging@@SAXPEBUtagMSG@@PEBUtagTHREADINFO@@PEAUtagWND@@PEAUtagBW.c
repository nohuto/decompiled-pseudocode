/*
 * XREFs of ?GetMessageW@Delivery@InputTraceLogging@@SAXPEBUtagMSG@@PEBUtagTHREADINFO@@PEAUtagWND@@PEAUtagBWND@@_N@Z @ 0x1C0057F44
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0055460 (xxxRealInternalGetMessage.c)
 * Callees:
 *     ?IsMouseInputMessage@InputTraceLogging@@CA_NI@Z @ 0x1C00AC168 (-IsMouseInputMessage@InputTraceLogging@@CA_NI@Z.c)
 *     IsPointerInputMessage @ 0x1C00AC3A0 (IsPointerInputMessage.c)
 *     _tlgKeywordOn @ 0x1C00CD6B0 (_tlgKeywordOn.c)
 *     ?GetWindowDetails@InputTraceLogging@@SA?AUWindowDetails@1@PEBUtagWND@@PEBUtagBWND@@@Z @ 0x1C016AEDA (-GetWindowDetails@InputTraceLogging@@SA-AUWindowDetails@1@PEBUtagWND@@PEBUtagBWND@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapperByVal@$07@@U3@U3@U2@U3@U2@U2@U3@U?$_tlgWrapSz@G@@U2@U2@U2@U2@U4@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapperByVal@$07@@5545445AEBU?$_tlgWrapSz@G@@44446AEBU?$_tlgWrapSz@D@@@Z @ 0x1C01DA130 (--$Write@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapperByVal@$07@@U3@U3@U2@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@U1@U2@U1@U2@U?$_tlgWrapSz@G@@U1@U1@U1@U1@U3@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@3434AEBU?$_tlgWrapSz@G@@33335AEBU?$_tlgWrapSz@D@@@Z @ 0x1C01DA368 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@U1@U2@U1@U2@U-$_tlgWrapSz@G@@U1@U1.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@U2@U2@U1@U2@U1@U1@U2@U?$_tlgWrapSz@G@@U1@U1@U1@U1@U3@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@4434334AEBU?$_tlgWrapSz@G@@33335AEBU?$_tlgWrapSz@D@@@Z @ 0x1C01DA554 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@U2@U2@U1@U2@U1@U1@U2@U-$_tlgWrapSz.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@U2@U2@U1@U2@U1@U2@U?$_tlgWrapSz@G@@U1@U1@U1@U1@U3@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@443434AEBU?$_tlgWrapSz@G@@33335AEBU?$_tlgWrapSz@D@@@Z @ 0x1C01DA780 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@U2@U2@U1@U2@U1@U2@U-$_tlgWrapSz@G@.c)
 */

void __fastcall InputTraceLogging::Delivery::GetMessageW(
        const struct tagMSG *a1,
        const struct tagTHREADINFO *a2,
        struct tagWND *a3,
        struct tagBWND *a4,
        bool a5)
{
  __int64 v7; // r9
  __int64 WindowDetails; // rax
  __int64 v9; // rcx
  __int128 v10; // xmm1
  unsigned int v11; // ecx
  int v12; // r9d
  __int64 v13; // rcx
  int v14; // r9d
  __int16 v15; // r10
  __int64 v16; // rcx
  int v17; // r9d
  BOOL v18; // r9d
  const int *v19; // rdx
  BOOL v20; // r9d
  __int64 v21; // rcx
  BOOL v22; // r10d
  __int64 v23; // rcx
  int v24; // [rsp+B8h] [rbp-80h] BYREF
  BOOL v25; // [rsp+BCh] [rbp-7Ch] BYREF
  __int64 v26; // [rsp+C0h] [rbp-78h] BYREF
  __int64 v27; // [rsp+C8h] [rbp-70h] BYREF
  __int64 v28; // [rsp+D0h] [rbp-68h] BYREF
  __int64 v29; // [rsp+D8h] [rbp-60h] BYREF
  __int64 v30; // [rsp+E0h] [rbp-58h] BYREF
  __int64 v31; // [rsp+E8h] [rbp-50h] BYREF
  __int64 v32; // [rsp+F0h] [rbp-48h] BYREF
  __int64 v33; // [rsp+F8h] [rbp-40h] BYREF
  __int64 v34; // [rsp+100h] [rbp-38h] BYREF
  __int64 v35; // [rsp+108h] [rbp-30h] BYREF
  __int64 v36; // [rsp+110h] [rbp-28h] BYREF
  __int128 v37; // [rsp+118h] [rbp-20h]
  __int128 v38; // [rsp+128h] [rbp-10h]
  __int64 v39; // [rsp+138h] [rbp+0h]
  int v40; // [rsp+140h] [rbp+8h] BYREF
  int v41; // [rsp+144h] [rbp+Ch] BYREF
  _BYTE v42[48]; // [rsp+148h] [rbp+10h] BYREF
  __int64 v43; // [rsp+1A0h] [rbp+68h] BYREF

  v43 = (__int64)a4;
  if ( !dword_1C032BE20 || !(unsigned __int8)tlgKeywordOn(&dword_1C032BE20, 0LL) )
    return;
  WindowDetails = InputTraceLogging::GetWindowDetails(v42, v7);
  v9 = *((unsigned int *)a1 + 2);
  v10 = *(_OWORD *)(WindowDetails + 16);
  v37 = *(_OWORD *)WindowDetails;
  v39 = *(_QWORD *)(WindowDetails + 32);
  v38 = v10;
  if ( (unsigned int)IsPointerInputMessage(v9) )
  {
    if ( *((_WORD *)a1 + 8) == 1 )
    {
      if ( (unsigned int)dword_1C032BE20 > 4 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C032BE20, 16LL) )
        {
          v13 = *(_QWORD *)a1;
          v34 = *((_QWORD *)&v37 + 1);
          v28 = v37;
          LODWORD(v43) = HIDWORD(v39);
          v40 = v39;
          v41 = HIDWORD(v38);
          v24 = DWORD2(v38);
          v35 = v38;
          v25 = a5;
          LODWORD(v26) = *((unsigned __int16 *)a1 + 9);
          v30 = *((_QWORD *)a2 + 54);
          HIDWORD(v26) = *((_DWORD *)a1 + 8);
          v31 = *((_QWORD *)a1 + 3);
          v32 = *((_QWORD *)a1 + 2);
          v29 = v13;
          v33 = v13;
          LODWORD(v27) = v12;
          HIDWORD(v27) = v12;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>>(
            (int)&dword_1C032BE20,
            (int)&dword_1C02EEE29,
            (__int64)&v27 + 4,
            (__int64)&v27,
            (__int64)&v33,
            (__int64)&v32,
            (__int64)&v31,
            (__int64)&v26 + 4,
            (__int64)&v30,
            (__int64)&v26,
            (__int64)&v25,
            (__int64)&v29,
            (__int64)&v35,
            (__int64)&v24,
            (__int64)&v41,
            (__int64)&v40,
            (__int64)&v43,
            (__int64)&v34,
            (__int64)&v28);
        }
      }
    }
    else if ( (unsigned int)dword_1C032BE20 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1C032BE20, 16LL) )
    {
      v16 = *(_QWORD *)a1;
      v32 = *((_QWORD *)&v37 + 1);
      v33 = v37;
      v27 = v39;
      v26 = *((_QWORD *)&v38 + 1);
      v31 = v38;
      v25 = a5;
      v24 = *((unsigned __int16 *)a1 + 9);
      v29 = *((_QWORD *)a2 + 54);
      v41 = *((_DWORD *)a1 + 8);
      v35 = *((_QWORD *)a1 + 3);
      v34 = *((_QWORD *)a1 + 2);
      v30 = v16;
      v36 = v16;
      v40 = v14;
      LODWORD(v28) = v14;
      LOWORD(v43) = v15;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>>(
        (int)&dword_1C032BE20,
        (int)&dword_1C02EEF29,
        (__int64)&v43,
        (__int64)&v28,
        (__int64)&v40,
        (__int64)&v36,
        (__int64)&v34,
        (__int64)&v35,
        (__int64)&v41,
        (__int64)&v29,
        (__int64)&v24,
        (__int64)&v25,
        (__int64)&v30,
        (__int64)&v31,
        (__int64)&v26,
        (__int64)&v26 + 4,
        (__int64)&v27,
        (__int64)&v27 + 4,
        (__int64)&v32,
        (__int64)&v33);
    }
    return;
  }
  if ( InputTraceLogging::IsMouseInputMessage(v11) )
  {
    if ( (unsigned int)dword_1C032BE20 <= 4 || !(unsigned __int8)tlgKeywordOn(&dword_1C032BE20, 16LL) )
      return;
    v19 = (const int *)&unk_1C02EF038;
    goto LABEL_28;
  }
  if ( (unsigned int)(v17 - 256) > 9 )
  {
    if ( v17 == 255 )
    {
      if ( (unsigned int)dword_1C032BE20 <= 4 || !(unsigned __int8)tlgKeywordOn(&dword_1C032BE20, 16LL) )
        return;
      v25 = v22;
      v19 = (const int *)&unk_1C02EF213;
      v24 = v22;
LABEL_29:
      v23 = *(_QWORD *)a1;
      v33 = *((_QWORD *)&v37 + 1);
      v36 = v37;
      LODWORD(v43) = HIDWORD(v39);
      LODWORD(v28) = v39;
      v27 = *((_QWORD *)&v38 + 1);
      v32 = v38;
      HIDWORD(v26) = a5;
      v30 = *((_QWORD *)a2 + 54);
      LODWORD(v26) = *((_DWORD *)a1 + 8);
      v29 = *((_QWORD *)a1 + 3);
      v35 = *((_QWORD *)a1 + 2);
      v31 = v23;
      v34 = v23;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>>(
        (int)&dword_1C032BE20,
        (int)v19,
        (__int64)&v24,
        (__int64)&v25,
        (__int64)&v34,
        (__int64)&v35,
        (__int64)&v29,
        (__int64)&v26,
        (__int64)&v30,
        (__int64)&v26 + 4,
        (__int64)&v31,
        (__int64)&v32,
        (__int64)&v27,
        (__int64)&v27 + 4,
        (__int64)&v28,
        (__int64)&v43,
        (__int64)&v33,
        (__int64)&v36);
      return;
    }
    if ( (unsigned int)(v17 - 571) > 1
      || (unsigned int)dword_1C032BE20 <= 4
      || !(unsigned __int8)tlgKeywordOn(&dword_1C032BE20, 16LL) )
    {
      return;
    }
    v19 = &dword_1C02EF30A;
LABEL_28:
    v24 = v18;
    v25 = v18;
    goto LABEL_29;
  }
  if ( (unsigned int)dword_1C032BE20 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1C032BE20, 16LL) )
  {
    v21 = *(_QWORD *)a1;
    v33 = *((_QWORD *)&v37 + 1);
    v36 = v37;
    LODWORD(v43) = HIDWORD(v39);
    LODWORD(v28) = v39;
    v27 = *((_QWORD *)&v38 + 1);
    v32 = v38;
    HIDWORD(v26) = a5;
    v30 = *((_QWORD *)a2 + 54);
    LODWORD(v26) = *((_DWORD *)a1 + 8);
    v31 = v21;
    v29 = v21;
    v25 = v20;
    v24 = v20;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>>(
      (int)&dword_1C032BE20,
      (int)&dword_1C02EF12C,
      (__int64)&v24,
      (__int64)&v25,
      (__int64)&v29,
      (__int64)&v26,
      (__int64)&v30,
      (__int64)&v26 + 4,
      (__int64)&v31,
      (__int64)&v32,
      (__int64)&v27,
      (__int64)&v27 + 4,
      (__int64)&v28,
      (__int64)&v43,
      (__int64)&v33,
      (__int64)&v36);
  }
}
