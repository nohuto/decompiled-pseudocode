/*
 * XREFs of ?_UploadTelemetryData@KeyboardInputTelemetry@@AEAAXXZ @ 0x1C0005824
 * Callers:
 *     ?_BeginKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@AEAAXI@Z @ 0x1C00066A0 (-_BeginKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@AEAAXI@Z.c)
 *     ?_UpdateTelemetryBuffer@KeyboardInputTelemetry@@AEAAX_NK@Z @ 0x1C000683C (-_UpdateTelemetryBuffer@KeyboardInputTelemetry@@AEAAX_NK@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@444444444444444444444444444444444444@Z @ 0x1C0005B98 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@.c)
 *     ?GetKeyboardInputLatency@KeyboardInputTelemetry@@CAK_K@Z @ 0x1C0006668 (-GetKeyboardInputLatency@KeyboardInputTelemetry@@CAK_K@Z.c)
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     memset @ 0x1C00E1980 (memset.c)
 */

void __fastcall KeyboardInputTelemetry::_UploadTelemetryData(
        KeyboardInputTelemetry *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // rbx
  unsigned int KeyboardInputLatency; // eax
  unsigned int v8; // edx
  unsigned int v9; // r8d
  unsigned int v10; // ecx
  unsigned int v11; // eax
  __int64 v12; // rcx

  v5 = SGDGetUserSessionState(this, a2, a3, a4);
  v6 = v5 + 14168;
  if ( *(_DWORD *)(v5 + 14176) )
  {
    KeyboardInputLatency = KeyboardInputTelemetry::GetKeyboardInputLatency(*(_QWORD *)v6);
    v8 = *(_DWORD *)(v6 + 12);
    v9 = v8 + *(_DWORD *)(v6 + 8);
    if ( v9 >= v8 )
    {
      v10 = *(_DWORD *)(v6 + 20);
      v11 = v10 + KeyboardInputLatency;
      if ( v11 >= v10 )
      {
        ++*(_DWORD *)(v6 + 16);
        *(_DWORD *)(v6 + 20) = v11;
        *(_DWORD *)(v6 + 12) = v9;
      }
    }
    *(_DWORD *)(v6 + 8) = 0;
  }
  if ( (unsigned int)dword_1C02C93D8 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1C02C93D8, 0x400000000000LL) )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v12,
      &unk_1C029506F);
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 5) = 0;
  memset((char *)this + 56, 0, 0x80uLL);
}
