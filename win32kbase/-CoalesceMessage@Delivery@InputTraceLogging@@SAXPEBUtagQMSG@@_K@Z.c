/*
 * XREFs of ?CoalesceMessage@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@_K@Z @ 0x1C01EBD78
 * Callers:
 *     ?CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z @ 0x1C01EC428 (-CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0088924 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1C00F08D6 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     IsPointerInputMessage @ 0x1C00F3132 (IsPointerInputMessage.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@43@Z @ 0x1C01E71A0 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@U1@@-$_tlgWriteTemplate@$$A6AJP.c)
 */

void __fastcall InputTraceLogging::Delivery::CoalesceMessage(const struct tagQMSG *a1)
{
  int v1; // r8d
  int v2; // edx
  int v3; // r8d
  __int64 v4; // r9
  __int64 v5; // r10
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r10
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r10
  int v12; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v13; // [rsp+54h] [rbp-ACh] BYREF
  int v14; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v15; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v16; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v17[2]; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+80h] [rbp-80h] BYREF
  __int64 *v19; // [rsp+A0h] [rbp-60h]
  __int64 v20; // [rsp+A8h] [rbp-58h]
  __int16 *v21; // [rsp+B0h] [rbp-50h]
  __int64 v22; // [rsp+B8h] [rbp-48h]
  __int64 *v23; // [rsp+C0h] [rbp-40h]
  __int64 v24; // [rsp+C8h] [rbp-38h]
  int *v25; // [rsp+D0h] [rbp-30h]
  __int64 v26; // [rsp+D8h] [rbp-28h]
  int *v27; // [rsp+E0h] [rbp-20h]
  __int64 v28; // [rsp+E8h] [rbp-18h]
  _QWORD *v29; // [rsp+F0h] [rbp-10h]

  if ( IsPointerInputMessage(*((_DWORD *)a1 + 6)) )
  {
    if ( (unsigned int)dword_1C02CA7E0 > 4 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 16LL) )
    {
      v12 = *(unsigned __int16 *)(v4 + 34);
      v15 = *(_QWORD *)(v4 + 40);
      v13 = *(_WORD *)(v4 + 32);
      v16 = *(_QWORD *)(v4 + 136);
      v29 = v17;
      v27 = &v14;
      v25 = &v12;
      v23 = &v15;
      v21 = &v13;
      v19 = &v16;
      v14 = v3;
      v24 = (unsigned int)(v2 - 8);
      v20 = v24;
      v17[0] = v5;
      v28 = 4LL;
      v26 = 4LL;
      v22 = 2LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C02CA7E0,
        (unsigned __int8 *)dword_1C0299605,
        0LL,
        0LL,
        v2 - 8,
        &v18);
    }
  }
  else if ( (unsigned int)(v1 - 256) > 9 )
  {
    if ( ((unsigned int)(v1 - 512) <= 0xE || (unsigned int)(v1 - 160) <= 0xD)
      && (unsigned int)dword_1C02CA7E0 > 4
      && tlgKeywordOn((__int64)&dword_1C02CA7E0, 16LL) )
    {
      v15 = *(_QWORD *)(v10 + 136);
      v16 = v11;
      v12 = v9;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        (__int64)&dword_1C02CA7E0,
        byte_1C029969F,
        v9,
        v10,
        (__int64)&v15,
        (__int64)&v12,
        (__int64)&v16);
    }
  }
  else if ( (unsigned int)dword_1C02CA7E0 > 4 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 16LL) )
  {
    v14 = *(unsigned __int16 *)(v7 + 40);
    v15 = *(_QWORD *)(v7 + 32);
    v17[0] = *(_QWORD *)(v7 + 136);
    v16 = v8;
    v12 = v6;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      (__int64)&dword_1C02CA7E0,
      byte_1C0299578,
      v6,
      v7,
      (__int64)v17,
      (__int64)&v15,
      (__int64)&v14,
      (__int64)&v12,
      (__int64)&v16);
  }
}
