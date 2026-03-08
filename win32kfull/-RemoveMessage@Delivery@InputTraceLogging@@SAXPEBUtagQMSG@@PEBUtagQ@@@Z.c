/*
 * XREFs of ?RemoveMessage@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@PEBUtagQ@@@Z @ 0x1C00379E8
 * Callers:
 *     ?xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z @ 0x1C003768C (-xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z.c)
 * Callees:
 *     IsPointerInputClientMessage @ 0x1C00385AC (IsPointerInputClientMessage.c)
 *     ?IsMouseInputMessage@InputTraceLogging@@CA_NI@Z @ 0x1C003889C (-IsMouseInputMessage@InputTraceLogging@@CA_NI@Z.c)
 *     _tlgKeywordOn @ 0x1C0102BC4 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1C01B5C70 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 */

void __fastcall InputTraceLogging::Delivery::RemoveMessage(const struct tagQMSG *a1, const struct tagQ *a2)
{
  unsigned int v2; // r9d
  unsigned int v3; // ecx
  int v4; // r9d
  int v5; // r8d
  int v6; // r9d
  __int64 v7; // r10
  __int64 v8; // r11
  int v9; // [rsp+50h] [rbp+8h] BYREF
  __int64 v10; // [rsp+60h] [rbp+18h] BYREF
  __int64 v11; // [rsp+68h] [rbp+20h] BYREF

  v2 = *((_DWORD *)a1 + 6);
  if ( (v2 - 577 <= 3
     || (unsigned int)IsPointerInputClientMessage(v2)
     || InputTraceLogging::IsMouseInputMessage(v3)
     || (unsigned int)(v4 - 256) <= 9
     || v4 == 255)
    && (unsigned int)dword_1C035C080 > 5 )
  {
    if ( (unsigned __int8)tlgKeywordOn(&dword_1C035C080, 16LL) )
    {
      v11 = *(_QWORD *)(v7 + 136);
      v10 = v8;
      v9 = v6;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        (unsigned int)&dword_1C035C080,
        (unsigned int)&unk_1C031C271,
        v5,
        v6,
        (__int64)&v11,
        (__int64)&v9,
        (__int64)&v10);
    }
  }
}
