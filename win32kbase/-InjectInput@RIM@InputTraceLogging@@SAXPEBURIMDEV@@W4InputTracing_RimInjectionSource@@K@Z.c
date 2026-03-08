/*
 * XREFs of ?InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z @ 0x1C0004188
 * Callers:
 *     RIMIDEInjectKeyboardFromKeybdInputStruct @ 0x1C0003708 (RIMIDEInjectKeyboardFromKeybdInputStruct.c)
 *     RIMIDEInjectDeviceInput @ 0x1C01C39C8 (RIMIDEInjectDeviceInput.c)
 *     RIMIDEInjectMouseFromMouseInputStruct @ 0x1C01C4968 (RIMIDEInjectMouseFromMouseInputStruct.c)
 *     RIMIDE_InjectGenericHidInput @ 0x1C01C6EA0 (RIMIDE_InjectGenericHidInput.c)
 *     SynthesizeMitTouchInput @ 0x1C0223400 (SynthesizeMitTouchInput.c)
 *     SynthesizeTouchInputContainer @ 0x1C022370C (SynthesizeTouchInputContainer.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     ?PointerDeviceTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x1C00EF4BE (-PointerDeviceTypeToString@InputTraceLogging@@CAPEBDK@Z.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C01C094C (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U2@U?$_tlgWrapperByVal@$03@@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@4AEBU?$_tlgWrapperByVal@$03@@55@Z @ 0x1C01C0A10 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@U2@U-$_tlgWrapperByVal@$03@@U3@U3@@-$_tlgWrit.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@5@Z @ 0x1C01C0B14 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U3@@-$_tlgWriteTempl.c)
 *     ?InjectionSourceToString@InputTraceLogging@@CAPEBDW4InputTracing_RimInjectionSource@@@Z @ 0x1C01C0DB4 (-InjectionSourceToString@InputTraceLogging@@CAPEBDW4InputTracing_RimInjectionSource@@@Z.c)
 */

void __fastcall InputTraceLogging::RIM::InjectInput(__int64 a1)
{
  char v2; // cl
  __int64 v3; // r9
  __int64 v4; // rcx
  int v5; // eax
  BOOL v6; // eax
  __int64 v7; // rdx
  unsigned int v8; // r10d
  __int64 v9; // r9
  __int64 v10; // r9
  unsigned int v11; // r10d
  __int64 v12; // rcx
  __int64 v13; // r9
  int v14; // r8d
  __int64 v15; // r9
  unsigned int v16; // r10d
  __int64 v17; // [rsp+50h] [rbp-20h] BYREF
  __int64 v18; // [rsp+58h] [rbp-18h] BYREF
  __int64 v19; // [rsp+60h] [rbp-10h] BYREF
  __int64 v20; // [rsp+68h] [rbp-8h] BYREF
  __int64 v21; // [rsp+80h] [rbp+10h] BYREF
  __int64 v22; // [rsp+98h] [rbp+28h] BYREF

  v2 = *(_BYTE *)(a1 + 48);
  if ( v2 == 2 )
  {
    if ( (*(_DWORD *)(a1 + 200) & 0x80u) == 0 )
    {
      if ( (unsigned int)dword_1C02CA7E0 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1C02CA7E0, 256LL) )
      {
        v12 = *(_QWORD *)(v10 + 464);
        LODWORD(v21) = *(unsigned __int16 *)(v12 + 18);
        LODWORD(v22) = *(unsigned __int16 *)(v12 + 16);
        v20 = InputTraceLogging::InjectionSourceToString(v11);
        v19 = v13;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          (int)&dword_1C02CA7E0,
          (__int64)&v19,
          (__int64)&v20,
          (__int64)&v22,
          (__int64)&v21);
      }
    }
    else if ( (unsigned int)dword_1C02CA7E0 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1C02CA7E0, 256LL) )
    {
      v4 = *(_QWORD *)(v3 + 472);
      v5 = *(_DWORD *)(v4 + 360);
      v6 = (v5 & 8) != 0 && (v5 & 0x2000) == 0;
      v7 = *(_QWORD *)(v3 + 464);
      LODWORD(v21) = v6;
      LODWORD(v22) = *(unsigned __int16 *)(v7 + 18);
      LODWORD(v17) = *(unsigned __int16 *)(v7 + 16);
      v18 = (__int64)InputTraceLogging::PointerDeviceTypeToString(*(_DWORD *)(v4 + 24));
      v19 = InputTraceLogging::InjectionSourceToString(v8);
      v20 = v9;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (int)&dword_1C02CA7E0,
        (int)&dword_1C0297049,
        (__int64)&v20,
        (__int64)&v19,
        (__int64)&v18,
        (__int64)&v17,
        (__int64)&v22,
        (__int64)&v21);
    }
  }
  else if ( v2 )
  {
    if ( (unsigned int)dword_1C02CA7E0 > 4 && v2 == 1 && (unsigned __int8)tlgKeywordOn(&dword_1C02CA7E0, 256LL) )
    {
LABEL_21:
      LODWORD(v21) = v14;
      v22 = v15;
      v20 = InputTraceLogging::InjectionSourceToString(v16);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        (int)&dword_1C02CA7E0,
        (__int64)&v20,
        (__int64)&v22,
        (__int64)&v21);
    }
  }
  else if ( (unsigned int)dword_1C02CA7E0 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1C02CA7E0, 256LL) )
  {
    goto LABEL_21;
  }
}
