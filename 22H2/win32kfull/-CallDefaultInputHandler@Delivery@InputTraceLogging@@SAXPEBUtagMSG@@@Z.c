/*
 * XREFs of ?CallDefaultInputHandler@Delivery@InputTraceLogging@@SAXPEBUtagMSG@@@Z @ 0x1C0227D84
 * Callers:
 *     xxxClientCallDefaultInputHandler @ 0x1C0231320 (xxxClientCallDefaultInputHandler.c)
 * Callees:
 *     ?IsMouseInputMessage@InputTraceLogging@@CA_NI@Z @ 0x1C006A26C (-IsMouseInputMessage@InputTraceLogging@@CA_NI@Z.c)
 *     IsPointerInputMessage @ 0x1C006B2D4 (IsPointerInputMessage.c)
 *     ??$Write@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapperByVal@$07@@U3@U3@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapperByVal@$07@@5544@Z @ 0x1C0227B38 (--$Write@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapperByVal@$_ea_1C0227B38.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@U2@U2@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@443@Z @ 0x1C0227C10 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@U2@U2@U1@@-$_tlgWriteTemplate@$$A6.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@U2@U2@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@4433@Z @ 0x1C0227CBC (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@U2@U2@U1@U1@@-$_tlgWriteTemplate@$.c)
 */

void __fastcall InputTraceLogging::Delivery::CallDefaultInputHandler(const struct tagMSG *a1)
{
  __int64 *v1; // rdx
  int v2; // ecx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 *v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // [rsp+60h] [rbp-20h] BYREF
  __int64 v9; // [rsp+68h] [rbp-18h] BYREF
  __int64 v10; // [rsp+70h] [rbp-10h] BYREF
  __int64 v11; // [rsp+78h] [rbp-8h] BYREF
  int v12; // [rsp+90h] [rbp+10h] BYREF
  int v13; // [rsp+98h] [rbp+18h] BYREF
  int v14; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v15; // [rsp+A8h] [rbp+28h] BYREF

  if ( IsPointerInputMessage(*((_DWORD *)a1 + 2)) )
  {
    v4 = *((unsigned __int16 *)v1 + 8);
    if ( (_WORD)v4 == 1 )
    {
      if ( (unsigned int)dword_1C032FB20 > 4
        && (qword_1C032FB30 & 0x10) != 0
        && (qword_1C032FB38 & 0x10) == qword_1C032FB38 )
      {
        v12 = *((unsigned __int16 *)v1 + 9);
        v13 = *((_DWORD *)v1 + 8);
        v8 = v1[3];
        v9 = v1[2];
        v10 = *v1;
        v14 = v3;
        LODWORD(v15) = v3;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          (__int64)&dword_1C032FB20,
          byte_1C02F2D34,
          v3,
          v4,
          (__int64)&v15,
          (__int64)&v14,
          (__int64)&v10,
          (__int64)&v9,
          (__int64)&v8,
          (__int64)&v13,
          (__int64)&v12);
      }
    }
    else if ( (unsigned int)dword_1C032FB20 > 4
           && (qword_1C032FB30 & 0x10) != 0
           && (qword_1C032FB38 & 0x10) == qword_1C032FB38 )
    {
      v13 = *((unsigned __int16 *)v1 + 9);
      v14 = *((_DWORD *)v1 + 8);
      v10 = v1[3];
      v9 = v1[2];
      v11 = *v1;
      LODWORD(v15) = v3;
      LODWORD(v8) = v3;
      LOWORD(v12) = v4;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)&dword_1C032FB20,
        byte_1C02F2DC8,
        v3,
        v4,
        (__int64)&v12,
        (__int64)&v8,
        (__int64)&v15,
        (__int64)&v11,
        (__int64)&v9,
        (__int64)&v10,
        (__int64)&v14,
        (__int64)&v13);
    }
  }
  else if ( InputTraceLogging::IsMouseInputMessage(v2)
         && (unsigned int)dword_1C032FB20 > 4
         && (qword_1C032FB30 & 0x10) != 0
         && (qword_1C032FB38 & 0x10) == qword_1C032FB38 )
  {
    v12 = *((_DWORD *)v5 + 8);
    v15 = v5[3];
    v11 = v5[2];
    v10 = *v5;
    v13 = v6;
    v14 = v6;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1C032FB20,
      byte_1C02F2E6B,
      v6,
      v7,
      (__int64)&v14,
      (__int64)&v13,
      (__int64)&v10,
      (__int64)&v11,
      (__int64)&v15,
      (__int64)&v12);
  }
}
