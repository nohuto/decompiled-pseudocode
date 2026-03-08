/*
 * XREFs of ?ScanSysQueue@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@PEBUtagMSG@@PEBUtagTHREADINFO@@_N@Z @ 0x1C00375B4
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00725D0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     IsPointerInputMessage @ 0x1C0038580 (IsPointerInputMessage.c)
 *     ?IsMouseInputMessage@InputTraceLogging@@CA_NI@Z @ 0x1C003889C (-IsMouseInputMessage@InputTraceLogging@@CA_NI@Z.c)
 *     _tlgKeywordOn @ 0x1C0102BC4 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@U1@U1@U1@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@43334444@Z @ 0x1C01B5578 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@U1@U1@U1@U2@U2@U2@U2@@-$_tlgWri.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@U1@U1@U1@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@433344444@Z @ 0x1C01B568C (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@U1@U1@U1@U2@U2@U2@U2@U2@@-$_tlg.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@U1@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@434444@Z @ 0x1C01B57BC (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@U1@U2@U2@U2@U2@@-$_tlgWriteTemp.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$01@@U1@U?$_tlgWrapperByVal@$03@@U1@U3@U3@U1@U1@U1@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$01@@3AEBU?$_tlgWrapperByVal@$03@@3553335555@Z @ 0x1C01B58A4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$01@@U1@U-$_tlgWrapperByVal@$03@@U1@U3@U3@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@U2@U2@U1@U1@U1@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@344333444@Z @ 0x1C01B5D04 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@U2@U2@U1@U1@U1@U2@U2@U2@@-$_tlgWri.c)
 */

void __fastcall InputTraceLogging::Delivery::ScanSysQueue(
        const struct tagQMSG *a1,
        const struct tagMSG *a2,
        const struct tagTHREADINFO *a3,
        unsigned __int8 a4)
{
  unsigned int v4; // ebx
  int v6; // r15d
  __int64 v8; // rdx
  unsigned int v9; // ecx
  __int16 v10; // si
  int v11; // r8d
  int v12; // r9d
  __int64 *v13; // r11
  unsigned int v14; // ecx
  int v15; // r8d
  int v16; // r9d
  __int64 *v17; // r11
  unsigned int v18; // ecx
  int v19; // edx
  int v20; // r8d
  __int64 *v21; // r11
  unsigned int v22; // ecx
  int v24; // edx
  int v25; // r8d
  __int64 *v26; // r11
  unsigned int v27; // ecx
  int v29; // edx
  int v30; // r8d
  unsigned int v31; // r10d
  __int64 *v32; // r11
  int v33; // eax
  unsigned int v34; // [rsp+98h] [rbp-9h] BYREF
  int v35; // [rsp+9Ch] [rbp-5h] BYREF
  int v36; // [rsp+A0h] [rbp-1h] BYREF
  int v37; // [rsp+A4h] [rbp+3h] BYREF
  __int64 v38; // [rsp+A8h] [rbp+7h] BYREF
  __int64 v39; // [rsp+B0h] [rbp+Fh] BYREF
  unsigned int v40; // [rsp+B8h] [rbp+17h] BYREF
  int v41; // [rsp+BCh] [rbp+1Bh] BYREF
  __int64 v42; // [rsp+C0h] [rbp+1Fh] BYREF
  __int64 v43; // [rsp+C8h] [rbp+27h] BYREF
  __int64 v44; // [rsp+D0h] [rbp+2Fh] BYREF
  __int64 v45; // [rsp+D8h] [rbp+37h] BYREF
  __int64 v46; // [rsp+E0h] [rbp+3Fh] BYREF
  int v47; // [rsp+110h] [rbp+6Fh] BYREF

  v4 = *((_DWORD *)a2 + 2);
  v6 = a4;
  if ( (unsigned int)IsPointerInputMessage(v4) )
  {
    v10 = *(_WORD *)(v8 + 16);
    if ( v10 == 1 )
    {
      if ( (unsigned int)dword_1C035C080 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1C035C080, 16LL) )
      {
        v14 = *((_DWORD *)a3 + 318);
        v40 = v6;
        v47 = v12 & (v14 >> 29);
        v34 = *((unsigned __int16 *)v13 + 9);
        v35 = *((_DWORD *)v13 + 8);
        v38 = v13[3];
        v46 = v13[2];
        v42 = *v13;
        v43 = *((_QWORD *)a3 + 54);
        v39 = *((_QWORD *)a1 + 17);
        v41 = v12 & (v14 >> 13);
        v36 = v4;
        v37 = v4;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          (unsigned int)&dword_1C035C080,
          (unsigned int)&unk_1C031BCF3,
          v11,
          v12,
          (__int64)&v39,
          (__int64)&v43,
          (__int64)&v37,
          (__int64)&v36,
          (__int64)&v42,
          (__int64)&v46,
          (__int64)&v38,
          (__int64)&v35,
          (__int64)&v34,
          (__int64)&v41,
          (__int64)&v40,
          (__int64)&v47);
      }
    }
    else if ( (unsigned int)dword_1C035C080 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1C035C080, 16LL) )
    {
      v18 = *((_DWORD *)a3 + 318);
      v36 = v6;
      v37 = v16 & (v18 >> 29);
      v34 = *((_DWORD *)v17 + 8);
      v39 = v17[3];
      v43 = v17[2];
      v42 = *v17;
      v46 = *((_QWORD *)a3 + 54);
      LODWORD(v38) = *((unsigned __int16 *)v17 + 9);
      v44 = *((_QWORD *)a1 + 5);
      v45 = *((_QWORD *)a1 + 17);
      v35 = v16 & (v18 >> 13);
      v41 = v4;
      v40 = v4;
      LOWORD(v47) = v10;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (unsigned int)&dword_1C035C080,
        (unsigned int)&unk_1C031BDBF,
        v15,
        v16,
        (__int64)&v45,
        (__int64)&v47,
        (__int64)&v44,
        (__int64)&v38,
        (__int64)&v46,
        (__int64)&v40,
        (__int64)&v41,
        (__int64)&v42,
        (__int64)&v43,
        (__int64)&v39,
        (__int64)&v34,
        (__int64)&v35,
        (__int64)&v36,
        (__int64)&v37);
    }
  }
  else if ( InputTraceLogging::IsMouseInputMessage(v9) )
  {
    if ( (unsigned int)dword_1C035C080 > 4 )
    {
      if ( (unsigned __int8)tlgKeywordOn(&dword_1C035C080, 16LL) )
      {
        v22 = *((_DWORD *)a3 + 318);
        LODWORD(v38) = v6;
        v47 = (v19 - 15) & (v22 >> 29);
        v36 = *((_DWORD *)v21 + 8);
        v45 = v21[3];
        v44 = v21[2];
        v39 = *v21;
        v43 = *((_QWORD *)a3 + 54);
        v42 = *((_QWORD *)a1 + 17);
        v37 = (v19 - 15) & (v22 >> 13);
        v35 = v4;
        v34 = v4;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          (unsigned int)&dword_1C035C080,
          (unsigned int)&unk_1C031BEA8,
          v20,
          v19 - 15,
          (__int64)&v42,
          (__int64)&v43,
          (__int64)&v34,
          (__int64)&v35,
          (__int64)&v39,
          (__int64)&v44,
          (__int64)&v45,
          (__int64)&v36,
          (__int64)&v37,
          (__int64)&v38,
          (__int64)&v47);
      }
    }
  }
  else if ( v4 - 256 <= 9 )
  {
    if ( (unsigned int)dword_1C035C080 > 4 )
    {
      if ( (unsigned __int8)tlgKeywordOn(&dword_1C035C080, 16LL) )
      {
        v27 = *((_DWORD *)a3 + 318);
        LODWORD(v38) = v6;
        v47 = (v24 - 15) & (v27 >> 29);
        v36 = *((_DWORD *)v26 + 8);
        v45 = *v26;
        v44 = *((_QWORD *)a3 + 54);
        v39 = *((_QWORD *)a1 + 17);
        v37 = (v24 - 15) & (v27 >> 13);
        v35 = v4;
        v34 = v4;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          (unsigned int)&dword_1C035C080,
          (unsigned int)&unk_1C031BF68,
          v25,
          v24 - 15,
          (__int64)&v39,
          (__int64)&v44,
          (__int64)&v34,
          (__int64)&v35,
          (__int64)&v45,
          (__int64)&v36,
          (__int64)&v37,
          (__int64)&v38,
          (__int64)&v47);
      }
    }
  }
  else if ( (unsigned int)dword_1C035C080 > 4 && v4 == 255 )
  {
    if ( (unsigned __int8)tlgKeywordOn(&dword_1C035C080, 16LL) )
    {
      v33 = (unsigned __int8)(v29 - 15) & (*((_DWORD *)a3 + 318) >> 29);
      v44 = v32[2];
      v47 = v33;
      v37 = *((_DWORD *)v32 + 8);
      LOBYTE(v31) = (_BYTE)v44 == (unsigned __int8)(v29 - 15);
      v45 = v32[3];
      v39 = *v32;
      v43 = *((_QWORD *)a3 + 54);
      v42 = *((_QWORD *)a1 + 17);
      LODWORD(v38) = v6;
      v36 = 255;
      v35 = 255;
      v34 = v31;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (unsigned int)&dword_1C035C080,
        (unsigned int)&unk_1C031C01B,
        v30,
        v29 - 15,
        (__int64)&v42,
        (__int64)&v34,
        (__int64)&v43,
        (__int64)&v35,
        (__int64)&v36,
        (__int64)&v39,
        (__int64)&v44,
        (__int64)&v45,
        (__int64)&v37,
        (__int64)&v38,
        (__int64)&v47);
    }
  }
}
