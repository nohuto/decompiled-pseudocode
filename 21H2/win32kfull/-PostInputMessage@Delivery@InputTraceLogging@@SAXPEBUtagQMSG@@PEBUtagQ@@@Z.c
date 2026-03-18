/*
 * XREFs of ?PostInputMessage@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@PEBUtagQ@@@Z @ 0x1C00AC048
 * Callers:
 *     PostInputMessage @ 0x1C00AB69C (PostInputMessage.c)
 * Callees:
 *     ?IsMouseInputMessage@InputTraceLogging@@CA_NI@Z @ 0x1C00AC168 (-IsMouseInputMessage@InputTraceLogging@@CA_NI@Z.c)
 *     IsPointerInputMessage @ 0x1C00AC3A0 (IsPointerInputMessage.c)
 *     _tlgKeywordOn @ 0x1C00CD6B0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$01@@U1@U?$_tlgWrapperByVal@$03@@U3@U1@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$01@@3AEBU?$_tlgWrapperByVal@$03@@535@Z @ 0x1C01DA998 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$01@@U1@U-$_tlgWrapperByVal@$03@@U3@U1@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1C01DAA70 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U1@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@34@Z @ 0x1C01DAB04 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U1@U2@@-$_tlgWriteTemplate@$$A6AJP.c)
 */

void __fastcall InputTraceLogging::Delivery::PostInputMessage(const struct tagQMSG *a1, const struct tagQ *a2)
{
  unsigned int v2; // ecx
  int v3; // r10d
  int v4; // r8d
  __int64 v5; // r9
  int v6; // r10d
  __int64 v7; // r11
  bool v8; // cf
  int v9; // r8d
  __int64 v10; // r9
  int v11; // r10d
  __int64 v12; // r11
  int v14; // r8d
  __int64 v15; // r9
  int v16; // r10d
  __int64 v17; // r11
  void *v18; // rdx
  int v19; // r10d
  int v20; // [rsp+60h] [rbp+27h] BYREF
  __int64 v21; // [rsp+68h] [rbp+2Fh] BYREF
  __int64 v22; // [rsp+70h] [rbp+37h] BYREF
  __int64 v23; // [rsp+78h] [rbp+3Fh] BYREF
  _QWORD v24[2]; // [rsp+80h] [rbp+47h] BYREF
  int v25; // [rsp+A0h] [rbp+67h] BYREF
  __int64 v26; // [rsp+B0h] [rbp+77h] BYREF
  __int64 v27; // [rsp+B8h] [rbp+7Fh] BYREF

  if ( (unsigned int)IsPointerInputMessage(*((unsigned int *)a1 + 6)) )
  {
    if ( (unsigned int)dword_1C032BE20 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1C032BE20, 16LL) )
    {
      v8 = __CFSHR__(*(_DWORD *)(v5 + 100), 6);
      LODWORD(v27) = v6;
      v23 = v7;
      LODWORD(v26) = -v8;
      v21 = *(_QWORD *)(v5 + 16);
      v20 = *(unsigned __int16 *)(v5 + 34);
      v22 = *(_QWORD *)(v5 + 40);
      LOWORD(v25) = *(_WORD *)(v5 + 32);
      v24[0] = *(_QWORD *)(v5 + 136);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        (unsigned int)&dword_1C032BE20,
        (unsigned int)&unk_1C02EEAEC,
        v4,
        v5,
        (__int64)v24,
        (__int64)&v23,
        (__int64)&v25,
        (__int64)&v22,
        (__int64)&v20,
        (__int64)&v27,
        (__int64)&v21,
        (__int64)&v26);
    }
  }
  else
  {
    if ( !InputTraceLogging::IsMouseInputMessage(v2) )
    {
      if ( (unsigned int)(v3 - 256) > 9 )
      {
        if ( (unsigned int)dword_1C032BE20 <= 4 || v3 != 255 || !(unsigned __int8)tlgKeywordOn(&dword_1C032BE20, 16LL) )
          return;
        v25 = v19;
        v18 = &unk_1C02EEC36;
      }
      else
      {
        if ( (unsigned int)dword_1C032BE20 <= 4 )
          return;
        if ( !(unsigned __int8)tlgKeywordOn(&dword_1C032BE20, 16LL) )
          return;
        v25 = v16;
        v18 = &unk_1C02EEBDB;
      }
      v26 = *(_QWORD *)(v15 + 16);
      v24[0] = *(_QWORD *)(v15 + 136);
      v27 = v17;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        (unsigned int)&dword_1C032BE20,
        (_DWORD)v18,
        v14,
        v15,
        (__int64)v24,
        (__int64)&v27,
        (__int64)&v25,
        (__int64)&v26);
      return;
    }
    if ( (unsigned int)dword_1C032BE20 > 4 )
    {
      if ( (unsigned __int8)tlgKeywordOn(&dword_1C032BE20, 16LL) )
      {
        v8 = __CFSHR__(*(_DWORD *)(v10 + 100), 6);
        LODWORD(v26) = v11;
        v24[0] = v12;
        v25 = -v8;
        v27 = *(_QWORD *)(v10 + 16);
        v23 = *(_QWORD *)(v10 + 136);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
          (unsigned int)&dword_1C032BE20,
          (unsigned int)&unk_1C02EEB78,
          v9,
          v10,
          (__int64)&v23,
          (__int64)v24,
          (__int64)&v26,
          (__int64)&v27,
          (__int64)&v25);
      }
    }
  }
}
