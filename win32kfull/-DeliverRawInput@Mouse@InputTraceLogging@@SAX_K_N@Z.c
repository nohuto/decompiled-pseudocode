/*
 * XREFs of ?DeliverRawInput@Mouse@InputTraceLogging@@SAX_K_N@Z @ 0x1C01423C6
 * Callers:
 *     EditionPostRawMouseInputMessage @ 0x1C0142A40 (EditionPostRawMouseInputMessage.c)
 *     ?PostRawMouseInputToBackgroundListener@@YAXPEAUtagPROCESS_HID_TABLE@@PEAXPEBUtagRAWMOUSE@@_KK@Z @ 0x1C01AC288 (-PostRawMouseInputToBackgroundListener@@YAXPEAUtagPROCESS_HID_TABLE@@PEAXPEBUtagRAWMOUSE@@_KK@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0102BC4 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C01AA5DC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 */

void __fastcall InputTraceLogging::Mouse::DeliverRawInput()
{
  int v0; // r8d
  int v1; // r9d
  __int64 v2; // r10
  int v3; // [rsp+50h] [rbp+18h] BYREF
  __int64 v4; // [rsp+58h] [rbp+20h] BYREF

  if ( (unsigned int)dword_1C035C080 > 4 )
  {
    if ( tlgKeywordOn((__int64)&dword_1C035C080, 64LL) )
    {
      v3 = v1;
      v4 = v2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        (unsigned int)&dword_1C035C080,
        (unsigned int)&unk_1C031BAF4,
        v0,
        v1,
        (__int64)&v4,
        (__int64)&v3);
    }
  }
}
