/*
 * XREFs of ?CoalesceMessage@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@_K@Z @ 0x1C00E10F4
 * Callers:
 *     PostInputMessage @ 0x1C0037A48 (PostInputMessage.c)
 * Callees:
 *     IsPointerInputMessage @ 0x1C0038580 (IsPointerInputMessage.c)
 *     ?IsMouseInputMessage@InputTraceLogging@@CA_NI@Z @ 0x1C003889C (-IsMouseInputMessage@InputTraceLogging@@CA_NI@Z.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00F8FF0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1C0102BC4 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@43@Z @ 0x1C01B54D4 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@U1@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1C01B5C70 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 */

void __fastcall InputTraceLogging::Delivery::CoalesceMessage(const struct tagQMSG *a1)
{
  int v1; // ecx
  int v2; // r9d
  int v3; // edx
  int v4; // r9d
  __int64 v5; // r10
  __int64 v6; // r11
  int v7; // eax
  int v8; // r8d
  int v9; // r9d
  __int64 v10; // r10
  __int64 v11; // r11
  int v12; // r8d
  int v13; // r9d
  __int64 v14; // r10
  __int64 v15; // r11
  int v16; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v17; // [rsp+54h] [rbp-ACh] BYREF
  int v18; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v19; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v20; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v21[2]; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v22; // [rsp+80h] [rbp-80h] BYREF
  __int64 *v23; // [rsp+A0h] [rbp-60h]
  int v24; // [rsp+A8h] [rbp-58h]
  int v25; // [rsp+ACh] [rbp-54h]
  __int16 *v26; // [rsp+B0h] [rbp-50h]
  int v27; // [rsp+B8h] [rbp-48h]
  int v28; // [rsp+BCh] [rbp-44h]
  __int64 *v29; // [rsp+C0h] [rbp-40h]
  int v30; // [rsp+C8h] [rbp-38h]
  int v31; // [rsp+CCh] [rbp-34h]
  int *v32; // [rsp+D0h] [rbp-30h]
  int v33; // [rsp+D8h] [rbp-28h]
  int v34; // [rsp+DCh] [rbp-24h]
  int *v35; // [rsp+E0h] [rbp-20h]
  int v36; // [rsp+E8h] [rbp-18h]
  int v37; // [rsp+ECh] [rbp-14h]
  _QWORD *v38; // [rsp+F0h] [rbp-10h]
  int v39; // [rsp+F8h] [rbp-8h]
  int v40; // [rsp+FCh] [rbp-4h]

  if ( IsPointerInputMessage(*((_DWORD *)a1 + 6)) )
  {
    if ( (unsigned int)dword_1C035C080 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1C035C080, 16LL) )
    {
      v7 = *(unsigned __int16 *)(v5 + 34);
      v40 = 0;
      v37 = 0;
      v34 = 0;
      v31 = 0;
      v28 = 0;
      v25 = 0;
      v16 = v7;
      v19 = *(_QWORD *)(v5 + 40);
      v17 = *(_WORD *)(v5 + 32);
      v20 = *(_QWORD *)(v5 + 136);
      v38 = v21;
      v35 = &v18;
      v32 = &v16;
      v29 = &v19;
      v26 = &v17;
      v23 = &v20;
      v18 = v4;
      v39 = v3 - 8;
      v30 = v3 - 8;
      v24 = v3 - 8;
      v21[0] = v6;
      v36 = 4;
      v33 = 4;
      v27 = 2;
      tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C035C080, (int)&dword_1C031C457, 0, 0, v3 - 8, &v22);
    }
  }
  else if ( (unsigned int)(v2 - 256) <= 9 )
  {
    if ( (unsigned int)dword_1C035C080 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1C035C080, 16LL) )
    {
      v18 = *(unsigned __int16 *)(v10 + 40);
      v19 = *(_QWORD *)(v10 + 32);
      v21[0] = *(_QWORD *)(v10 + 136);
      v20 = v11;
      v16 = v9;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        (unsigned int)&dword_1C035C080,
        (unsigned int)&unk_1C031C4F1,
        v8,
        v9,
        (__int64)v21,
        (__int64)&v19,
        (__int64)&v18,
        (__int64)&v16,
        (__int64)&v20);
    }
  }
  else if ( InputTraceLogging::IsMouseInputMessage(v1) && (unsigned int)dword_1C035C080 > 4 )
  {
    if ( (unsigned __int8)tlgKeywordOn(&dword_1C035C080, 16LL) )
    {
      v19 = *(_QWORD *)(v14 + 136);
      v20 = v15;
      v16 = v13;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        (unsigned int)&dword_1C035C080,
        (unsigned int)&unk_1C031C57E,
        v12,
        v13,
        (__int64)&v19,
        (__int64)&v16,
        (__int64)&v20);
    }
  }
}
