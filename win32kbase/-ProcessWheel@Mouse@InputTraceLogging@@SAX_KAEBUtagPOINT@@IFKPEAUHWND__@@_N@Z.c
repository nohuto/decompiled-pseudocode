/*
 * XREFs of ?ProcessWheel@Mouse@InputTraceLogging@@SAX_KAEBUtagPOINT@@IFKPEAUHWND__@@_N@Z @ 0x1C0230BD8
 * Callers:
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C023042C (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U?$_tlgWrapperByVal@$01@@U2@U1@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@44AEBU?$_tlgWrapperByVal@$01@@434@Z @ 0x1C022A444 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U-$_tlgWrapperByVal@$01@@U2@U1@.c)
 */

void __fastcall InputTraceLogging::Mouse::ProcessWheel(
        __int64 a1,
        const struct tagPOINT *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        HWND a6,
        bool a7)
{
  __int64 v7; // r8
  __int64 v8; // r9
  int *v9; // r10
  __int64 v10; // r11
  _WORD v11[2]; // [rsp+60h] [rbp+Fh] BYREF
  BOOL v12; // [rsp+64h] [rbp+13h] BYREF
  unsigned int v13; // [rsp+68h] [rbp+17h] BYREF
  int v14; // [rsp+6Ch] [rbp+1Bh] BYREF
  int v15; // [rsp+70h] [rbp+1Fh] BYREF
  int v16; // [rsp+74h] [rbp+23h] BYREF
  HWND v17; // [rsp+78h] [rbp+27h] BYREF
  __int64 v18; // [rsp+80h] [rbp+2Fh] BYREF

  if ( (unsigned int)dword_1C02CA7E0 > 4 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 64LL) )
  {
    v12 = a7;
    v17 = a6;
    v13 = a5;
    v15 = v9[1];
    v16 = *v9;
    v11[0] = v8;
    v14 = v7;
    v18 = v10;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1C02CA7E0,
      byte_1C029DA16,
      v7,
      v8,
      (__int64)&v18,
      (__int64)&v16,
      (__int64)&v15,
      (__int64)&v14,
      (__int64)v11,
      (__int64)&v13,
      (__int64)&v17,
      (__int64)&v12);
  }
}
