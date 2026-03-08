/*
 * XREFs of ?TraceLoggingPTPKeyToGestureTiming@@YAX_J0PEBUtagTPTELEMTIMINGS@@00@Z @ 0x1C0204B7C
 * Callers:
 *     TraceLoggingPTPAAPKeyPress @ 0x1C0205520 (TraceLoggingPTPAAPKeyPress.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0102BC4 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@444444444@Z @ 0x1C02042C8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@@-$_tlgWri.c)
 */

void __fastcall TraceLoggingPTPKeyToGestureTiming(
        __int64 a1,
        __int64 a2,
        const struct tagTPTELEMTIMINGS *a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r10
  __int64 v9; // r11
  int v10; // [rsp+80h] [rbp+1Fh] BYREF
  int v11; // [rsp+84h] [rbp+23h] BYREF
  int v12; // [rsp+88h] [rbp+27h] BYREF
  int v13; // [rsp+8Ch] [rbp+2Bh] BYREF
  int v14; // [rsp+90h] [rbp+2Fh] BYREF
  int v15; // [rsp+94h] [rbp+33h] BYREF
  int v16; // [rsp+98h] [rbp+37h] BYREF
  int v17; // [rsp+9Ch] [rbp+3Bh] BYREF
  int v18; // [rsp+A0h] [rbp+3Fh] BYREF
  int v19; // [rsp+A4h] [rbp+43h] BYREF
  __int64 v20; // [rsp+A8h] [rbp+47h] BYREF

  if ( (unsigned int)dword_1C0357098 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_1C0357098, 0x200000000000LL) )
    {
      v20 = 0x1000000LL;
      v10 = 1000 * v7 / a5;
      v11 = *(_DWORD *)(v8 + 44);
      v12 = *(_DWORD *)(v8 + 40);
      v13 = 1000LL * *(_QWORD *)(v8 + 32) / a5;
      v14 = 1000LL * *(_QWORD *)(v8 + 24) / a5;
      v15 = 1000LL * *(_QWORD *)(v8 + 16) / a5;
      v16 = 1000LL * *(_QWORD *)(v8 + 8) / a5;
      v17 = 1000LL * *(_QWORD *)v8 / a5;
      v18 = 1000 * v9 / a5;
      v19 = 1000 * a1 / a5;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        a5,
        byte_1C031E54F,
        v6,
        v7,
        (__int64)&v20,
        (__int64)&v19,
        (__int64)&v18,
        (__int64)&v17,
        (__int64)&v16,
        (__int64)&v15,
        (__int64)&v14,
        (__int64)&v13,
        (__int64)&v12,
        (__int64)&v11,
        (__int64)&v10);
    }
  }
}
