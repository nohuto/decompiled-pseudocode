/*
 * XREFs of ?PostInputMessage@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@PEBUtagQ@@@Z @ 0x1C0037EC0
 * Callers:
 *     PostInputMessage @ 0x1C0037A48 (PostInputMessage.c)
 * Callees:
 *     IsPointerInputClientMessage @ 0x1C00385AC (IsPointerInputClientMessage.c)
 *     ?IsMouseInputMessage@InputTraceLogging@@CA_NI@Z @ 0x1C003889C (-IsMouseInputMessage@InputTraceLogging@@CA_NI@Z.c)
 *     _tlgKeywordOn @ 0x1C0102BC4 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$01@@U1@U?$_tlgWrapperByVal@$03@@U3@U1@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$01@@3AEBU?$_tlgWrapperByVal@$03@@535@Z @ 0x1C01B52C4 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$01@@U1@U-$_tlgWrapperByVal@$03@@U3@U1@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1C01B539C (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U1@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@34@Z @ 0x1C01B5430 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U1@U2@@-$_tlgWriteTemplate@$$A6AJP.c)
 */

void __fastcall InputTraceLogging::Delivery::PostInputMessage(const struct tagQMSG *a1, const struct tagQ *a2)
{
  unsigned int v2; // r9d
  unsigned int v3; // ecx
  int v4; // r9d
  int v5; // r8d
  int v6; // r9d
  __int64 v7; // r10
  __int64 v8; // r11
  bool v9; // cf
  void *v11; // rdx
  int v13; // r8d
  int v14; // r9d
  __int64 v15; // r10
  __int64 v16; // r11
  int v17; // r8d
  int v18; // r9d
  __int64 v19; // r10
  __int64 v20; // r11
  __int64 v21; // [rsp+60h] [rbp+27h] BYREF
  __int64 v22; // [rsp+68h] [rbp+2Fh] BYREF
  __int64 v23; // [rsp+70h] [rbp+37h] BYREF
  __int64 v24; // [rsp+78h] [rbp+3Fh] BYREF
  __int64 v25; // [rsp+80h] [rbp+47h] BYREF
  int v26; // [rsp+A0h] [rbp+67h] BYREF
  __int64 v27; // [rsp+B0h] [rbp+77h] BYREF
  __int64 v28; // [rsp+B8h] [rbp+7Fh] BYREF

  v2 = *((_DWORD *)a1 + 6);
  if ( v2 - 577 <= 3 || (unsigned int)IsPointerInputClientMessage(v2) )
  {
    if ( (unsigned int)dword_1C035C080 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1C035C080, 16LL) )
    {
      v9 = __CFSHR__(*(_DWORD *)(v19 + 100), 6);
      LODWORD(v28) = v18;
      v24 = v20;
      LODWORD(v27) = -v9;
      v22 = *(_QWORD *)(v19 + 16);
      LODWORD(v21) = *(unsigned __int16 *)(v19 + 34);
      v23 = *(_QWORD *)(v19 + 40);
      LOWORD(v26) = *(_WORD *)(v19 + 32);
      v25 = *(_QWORD *)(v19 + 136);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        (unsigned int)&dword_1C035C080,
        (unsigned int)&unk_1C031C2B2,
        v17,
        v18,
        (__int64)&v25,
        (__int64)&v24,
        (__int64)&v26,
        (__int64)&v23,
        (__int64)&v21,
        (__int64)&v28,
        (__int64)&v22,
        (__int64)&v27);
    }
  }
  else
  {
    if ( !InputTraceLogging::IsMouseInputMessage(v3) )
    {
      if ( (unsigned int)(v4 - 256) <= 9 )
      {
        if ( (unsigned int)dword_1C035C080 <= 4 )
          return;
        if ( !(unsigned __int8)tlgKeywordOn(&dword_1C035C080, 16LL) )
          return;
        v11 = &unk_1C031C3A1;
      }
      else
      {
        if ( (unsigned int)dword_1C035C080 <= 4 )
          return;
        if ( v4 != 255 )
          return;
        if ( !(unsigned __int8)tlgKeywordOn(&dword_1C035C080, 16LL) )
          return;
        v11 = &unk_1C031C3FC;
      }
      v27 = *(_QWORD *)(v15 + 16);
      v22 = *(_QWORD *)(v15 + 136);
      v28 = v16;
      v26 = v14;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        (unsigned int)&dword_1C035C080,
        (_DWORD)v11,
        v13,
        v14,
        (__int64)&v22,
        (__int64)&v28,
        (__int64)&v26,
        (__int64)&v27);
      return;
    }
    if ( (unsigned int)dword_1C035C080 > 4 )
    {
      if ( (unsigned __int8)tlgKeywordOn(&dword_1C035C080, 16LL) )
      {
        v9 = __CFSHR__(*(_DWORD *)(v7 + 100), 6);
        LODWORD(v27) = v6;
        v21 = v8;
        v26 = -v9;
        v28 = *(_QWORD *)(v7 + 16);
        v22 = *(_QWORD *)(v7 + 136);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
          (unsigned int)&dword_1C035C080,
          (unsigned int)&unk_1C031C33E,
          v5,
          v6,
          (__int64)&v22,
          (__int64)&v21,
          (__int64)&v27,
          (__int64)&v28,
          (__int64)&v26);
      }
    }
  }
}
