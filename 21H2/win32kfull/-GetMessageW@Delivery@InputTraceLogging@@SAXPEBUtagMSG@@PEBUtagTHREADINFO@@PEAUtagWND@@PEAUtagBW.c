/*
 * XREFs of ?GetMessageW@Delivery@InputTraceLogging@@SAXPEBUtagMSG@@PEBUtagTHREADINFO@@PEAUtagWND@@PEAUtagBWND@@_N@Z @ 0x1C0057C50
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0055720 (xxxRealInternalGetMessage.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0030648 (_tlgKeywordOn.c)
 *     ?IsMouseInputMessage@InputTraceLogging@@CA_NI@Z @ 0x1C006A30C (-IsMouseInputMessage@InputTraceLogging@@CA_NI@Z.c)
 *     IsPointerInputMessage @ 0x1C006B374 (IsPointerInputMessage.c)
 *     ??$Write@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapperByVal@$07@@U3@U3@U2@U3@U2@U2@U3@U?$_tlgWrapSz@G@@U2@U2@U2@U2@U4@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapperByVal@$07@@5545445AEBU?$_tlgWrapSz@G@@44446AEBU?$_tlgWrapSz@D@@@Z @ 0x1C01DE960 (--$Write@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapperByVal@$07@@U3@U3@U2@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@U1@U2@U1@U2@U?$_tlgWrapSz@G@@U1@U1@U1@U1@U3@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@3434AEBU?$_tlgWrapSz@G@@33335AEBU?$_tlgWrapSz@D@@@Z @ 0x1C01DEB98 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@U1@U2@U1@U2@U-$_tlgWrapSz@G@@U1@U1.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@U2@U2@U1@U2@U1@U1@U2@U?$_tlgWrapSz@G@@U1@U1@U1@U1@U3@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@4434334AEBU?$_tlgWrapSz@G@@33335AEBU?$_tlgWrapSz@D@@@Z @ 0x1C01DED84 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@U2@U2@U1@U2@U1@U1@U2@U-$_tlgWrapSz.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@U2@U2@U1@U2@U1@U2@U?$_tlgWrapSz@G@@U1@U1@U1@U1@U3@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@443434AEBU?$_tlgWrapSz@G@@33335AEBU?$_tlgWrapSz@D@@@Z @ 0x1C01DEFB0 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@U2@U2@U1@U2@U1@U2@U-$_tlgWrapSz@G@.c)
 *     ?GetWindowDetails@InputTraceLogging@@CA?AUWindowDetails@1@PEAUtagWND@@PEAUtagBWND@@@Z @ 0x1C01E0820 (-GetWindowDetails@InputTraceLogging@@CA-AUWindowDetails@1@PEAUtagWND@@PEAUtagBWND@@@Z.c)
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
  int v11; // edx
  unsigned int v12; // ecx
  __int64 v13; // rcx
  __int64 v14; // rcx
  int v15; // edx
  const int *v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // [rsp+B0h] [rbp-80h] BYREF
  __int64 v20; // [rsp+B8h] [rbp-78h] BYREF
  __int64 v21; // [rsp+C0h] [rbp-70h] BYREF
  __int64 v22; // [rsp+C8h] [rbp-68h] BYREF
  __int64 v23; // [rsp+D0h] [rbp-60h] BYREF
  __int64 v24; // [rsp+D8h] [rbp-58h] BYREF
  __int64 v25; // [rsp+E0h] [rbp-50h] BYREF
  __int64 v26; // [rsp+E8h] [rbp-48h] BYREF
  __int64 v27; // [rsp+F0h] [rbp-40h] BYREF
  __int64 v28; // [rsp+F8h] [rbp-38h] BYREF
  __int64 v29; // [rsp+100h] [rbp-30h] BYREF
  __int64 v30; // [rsp+108h] [rbp-28h] BYREF
  __int128 v31; // [rsp+110h] [rbp-20h]
  __int128 v32; // [rsp+120h] [rbp-10h]
  __int64 v33; // [rsp+130h] [rbp+0h]
  int v34; // [rsp+138h] [rbp+8h] BYREF
  int v35; // [rsp+13Ch] [rbp+Ch] BYREF
  _BYTE v36[48]; // [rsp+140h] [rbp+10h] BYREF
  __int64 v37; // [rsp+198h] [rbp+68h] BYREF

  v37 = (__int64)a4;
  if ( !dword_1C0330B20 || !tlgKeywordOn((__int64)&dword_1C0330B20, 0LL) )
    return;
  WindowDetails = InputTraceLogging::GetWindowDetails(v36, v7);
  v9 = *((unsigned int *)a1 + 2);
  v10 = *(_OWORD *)(WindowDetails + 16);
  v31 = *(_OWORD *)WindowDetails;
  v33 = *(_QWORD *)(WindowDetails + 32);
  v32 = v10;
  if ( (unsigned int)IsPointerInputMessage(v9) )
  {
    if ( *((_WORD *)a1 + 8) == 1 )
    {
      if ( (unsigned int)dword_1C0330B20 > 4
        && (qword_1C0330B30 & 0x10) != 0
        && (qword_1C0330B38 & 0x10) == qword_1C0330B38 )
      {
        v13 = *(_QWORD *)a1;
        v28 = *((_QWORD *)&v31 + 1);
        v22 = v31;
        LODWORD(v37) = HIDWORD(v33);
        v34 = v33;
        v35 = HIDWORD(v32);
        LODWORD(v19) = DWORD2(v32);
        v29 = v32;
        HIDWORD(v19) = a5;
        LODWORD(v20) = *((unsigned __int16 *)a1 + 9);
        v24 = *((_QWORD *)a2 + 54);
        HIDWORD(v20) = *((_DWORD *)a1 + 8);
        v25 = *((_QWORD *)a1 + 3);
        v26 = *((_QWORD *)a1 + 2);
        v23 = v13;
        v27 = v13;
        LODWORD(v21) = v11;
        HIDWORD(v21) = v11;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>>(
          (int)&dword_1C0330B20,
          (int)&dword_1C02F2176,
          (__int64)&v21 + 4,
          (__int64)&v21,
          (__int64)&v27,
          (__int64)&v26,
          (__int64)&v25,
          (__int64)&v20 + 4,
          (__int64)&v24,
          (__int64)&v20,
          (__int64)&v19 + 4,
          (__int64)&v23,
          (__int64)&v29,
          (__int64)&v19,
          (__int64)&v35,
          (__int64)&v34,
          (__int64)&v37,
          (__int64)&v28,
          (__int64)&v22);
      }
    }
    else if ( (unsigned int)dword_1C0330B20 > 4
           && (qword_1C0330B30 & 0x10) != 0
           && (qword_1C0330B38 & 0x10) == qword_1C0330B38 )
    {
      v14 = *(_QWORD *)a1;
      v26 = *((_QWORD *)&v31 + 1);
      v27 = v31;
      v21 = v33;
      v20 = *((_QWORD *)&v32 + 1);
      v25 = v32;
      HIDWORD(v19) = a5;
      LODWORD(v19) = *((unsigned __int16 *)a1 + 9);
      v23 = *((_QWORD *)a2 + 54);
      v35 = *((_DWORD *)a1 + 8);
      v29 = *((_QWORD *)a1 + 3);
      v28 = *((_QWORD *)a1 + 2);
      LOWORD(v37) = v28;
      v24 = v14;
      v30 = v14;
      v34 = v11;
      LODWORD(v22) = v11;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>>(
        (int)&dword_1C0330B20,
        (int)&dword_1C02F2276,
        (__int64)&v37,
        (__int64)&v22,
        (__int64)&v34,
        (__int64)&v30,
        (__int64)&v28,
        (__int64)&v29,
        (__int64)&v35,
        (__int64)&v23,
        (__int64)&v19,
        (__int64)&v19 + 4,
        (__int64)&v24,
        (__int64)&v25,
        (__int64)&v20,
        (__int64)&v20 + 4,
        (__int64)&v21,
        (__int64)&v21 + 4,
        (__int64)&v26,
        (__int64)&v27);
    }
    return;
  }
  if ( InputTraceLogging::IsMouseInputMessage(v12) )
  {
    if ( (unsigned int)dword_1C0330B20 <= 4
      || (qword_1C0330B30 & 0x10) == 0
      || (qword_1C0330B38 & 0x10) != qword_1C0330B38 )
    {
      return;
    }
    HIDWORD(v19) = v15;
    LODWORD(v19) = v15;
    v16 = (const int *)&unk_1C02F2385;
    goto LABEL_34;
  }
  if ( (unsigned int)(v15 - 256) > 9 )
  {
    if ( v15 == 255 )
    {
      if ( (unsigned int)dword_1C0330B20 <= 4
        || (qword_1C0330B30 & 0x10) == 0
        || (qword_1C0330B38 & 0x10) != qword_1C0330B38 )
      {
        return;
      }
      v19 = 0xFF000000FFLL;
      v16 = (const int *)&unk_1C02F2560;
    }
    else
    {
      if ( (unsigned int)(v15 - 571) > 1
        || (unsigned int)dword_1C0330B20 <= 4
        || (qword_1C0330B30 & 0x10) == 0
        || (qword_1C0330B38 & 0x10) != qword_1C0330B38 )
      {
        return;
      }
      HIDWORD(v19) = v15;
      LODWORD(v19) = v15;
      v16 = &dword_1C02F2657;
    }
LABEL_34:
    v18 = *(_QWORD *)a1;
    v27 = *((_QWORD *)&v31 + 1);
    v30 = v31;
    LODWORD(v37) = HIDWORD(v33);
    LODWORD(v22) = v33;
    v21 = *((_QWORD *)&v32 + 1);
    v26 = v32;
    HIDWORD(v20) = a5;
    v24 = *((_QWORD *)a2 + 54);
    LODWORD(v20) = *((_DWORD *)a1 + 8);
    v23 = *((_QWORD *)a1 + 3);
    v29 = *((_QWORD *)a1 + 2);
    v25 = v18;
    v28 = v18;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>>(
      (int)&dword_1C0330B20,
      (int)v16,
      (__int64)&v19,
      (__int64)&v19 + 4,
      (__int64)&v28,
      (__int64)&v29,
      (__int64)&v23,
      (__int64)&v20,
      (__int64)&v24,
      (__int64)&v20 + 4,
      (__int64)&v25,
      (__int64)&v26,
      (__int64)&v21,
      (__int64)&v21 + 4,
      (__int64)&v22,
      (__int64)&v37,
      (__int64)&v27,
      (__int64)&v30);
    return;
  }
  if ( (unsigned int)dword_1C0330B20 > 4 && (qword_1C0330B30 & 0x10) != 0 && (qword_1C0330B38 & 0x10) == qword_1C0330B38 )
  {
    v17 = *(_QWORD *)a1;
    v27 = *((_QWORD *)&v31 + 1);
    v30 = v31;
    LODWORD(v37) = HIDWORD(v33);
    LODWORD(v22) = v33;
    v21 = *((_QWORD *)&v32 + 1);
    v26 = v32;
    HIDWORD(v20) = a5;
    v24 = *((_QWORD *)a2 + 54);
    LODWORD(v20) = *((_DWORD *)a1 + 8);
    v25 = v17;
    v23 = v17;
    HIDWORD(v19) = v15;
    LODWORD(v19) = v15;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>>(
      (int)&dword_1C0330B20,
      (int)&dword_1C02F2479,
      (__int64)&v19,
      (__int64)&v19 + 4,
      (__int64)&v23,
      (__int64)&v20,
      (__int64)&v24,
      (__int64)&v20 + 4,
      (__int64)&v25,
      (__int64)&v26,
      (__int64)&v21,
      (__int64)&v21 + 4,
      (__int64)&v22,
      (__int64)&v37,
      (__int64)&v27,
      (__int64)&v30);
  }
}
