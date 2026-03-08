/*
 * XREFs of ?TypeSubtypeUpdated@Keyboard@InputTraceLogging@@SAXPEAUHKL__@@KKKK@Z @ 0x1C020A458
 * Callers:
 *     ?ProcessInputNoLock@CKeyboardProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_INPUT_DATA@@K_NPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@@Z @ 0x1C000ED44 (-ProcessInputNoLock@CKeyboardProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYB.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3333@Z @ 0x1C020A2C0 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEB.c)
 */

void __fastcall InputTraceLogging::Keyboard::TypeSubtypeUpdated(
        HKL a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5)
{
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // r10d
  int v8; // r11d
  unsigned int v9; // [rsp+50h] [rbp-28h] BYREF
  int v10; // [rsp+54h] [rbp-24h] BYREF
  int v11; // [rsp+58h] [rbp-20h] BYREF
  int v12; // [rsp+5Ch] [rbp-1Ch] BYREF
  _DWORD v13[6]; // [rsp+60h] [rbp-18h] BYREF

  if ( (unsigned int)dword_1C02CA7E0 > 4 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 0x4000LL) )
  {
    v9 = a5;
    v10 = v6;
    v11 = v5;
    v12 = v7;
    v13[0] = v8;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1C02CA7E0,
      byte_1C029B541,
      v5,
      v6,
      (__int64)v13,
      (__int64)&v12,
      (__int64)&v11,
      (__int64)&v10,
      (__int64)&v9);
  }
}
