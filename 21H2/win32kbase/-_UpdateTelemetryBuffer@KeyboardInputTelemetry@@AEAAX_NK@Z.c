/*
 * XREFs of ?_UpdateTelemetryBuffer@KeyboardInputTelemetry@@AEAAX_NK@Z @ 0x1C0001974
 * Callers:
 *     HandleDeferredInput @ 0x1C0001240 (HandleDeferredInput.c)
 * Callees:
 *     ?_UploadTelemetryData@KeyboardInputTelemetry@@AEAAXXZ @ 0x1C0001180 (-_UploadTelemetryData@KeyboardInputTelemetry@@AEAAXXZ.c)
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@44@Z @ 0x1C0168804 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U2@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProv.c)
 */

void __fastcall KeyboardInputTelemetry::_UpdateTelemetryBuffer(
        KeyboardInputTelemetry *this,
        unsigned __int8 a2,
        unsigned int a3)
{
  unsigned int v4; // eax
  unsigned int *v6; // rcx
  __int64 v7; // rsi
  unsigned int v8; // edx
  __int64 v9; // rcx
  _DWORD v10[8]; // [rsp+58h] [rbp-28h] BYREF

  v10[7] = -1;
  v4 = 0;
  v10[0] = 10;
  v10[1] = 20;
  v10[2] = 30;
  v6 = v10;
  v10[3] = 40;
  v10[4] = 50;
  v10[5] = 60;
  v10[6] = 100;
  while ( a3 > *v6 )
  {
    ++v4;
    ++v6;
    if ( v4 >= 8 )
      goto LABEL_7;
  }
  v7 = (int)v4 + 8LL * a2;
  v8 = *((_DWORD *)this + 2 * v7 + 14);
  if ( v8 + 1 < v8 || *((_DWORD *)this + 2 * v7 + 15) + a3 < *((_DWORD *)this + 2 * v7 + 15) || v8 >= 0x3E8 )
  {
    KeyboardInputTelemetry::_UploadTelemetryData(this);
    v8 = *((_DWORD *)this + 2 * v7 + 14);
  }
  *((_DWORD *)this + 2 * v7 + 15) += a3;
  *((_DWORD *)this + 2 * v7 + 14) = v8 + 1;
LABEL_7:
  if ( a3 > 0xC8 && (unsigned int)dword_1C028D6F0 > 5 )
  {
    if ( (unsigned __int8)tlgKeywordOn(&dword_1C028D6F0, 0x400000000000LL) )
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v9,
        &unk_1C025BF1F);
  }
}
