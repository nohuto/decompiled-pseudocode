/*
 * XREFs of ?InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z @ 0x1C0166A18
 * Callers:
 *     RIMIDEInjectDeviceInput @ 0x1C0168B48 (RIMIDEInjectDeviceInput.c)
 *     RIMIDEInjectKeyboardFromKeybdInputStruct @ 0x1C01694C0 (RIMIDEInjectKeyboardFromKeybdInputStruct.c)
 *     RIMIDEInjectMouseFromMouseInputStruct @ 0x1C0169844 (RIMIDEInjectMouseFromMouseInputStruct.c)
 *     RIMIDE_InjectGenericHidInput @ 0x1C016B900 (RIMIDE_InjectGenericHidInput.c)
 *     SynthesizeMitTouchInput @ 0x1C01B398C (SynthesizeMitTouchInput.c)
 *     SynthesizeTouchInputContainer @ 0x1C01B3C60 (SynthesizeTouchInputContainer.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C004A640 (_tlgKeywordOn.c)
 *     ?PointerDeviceTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x1C0151434 (-PointerDeviceTypeToString@InputTraceLogging@@CAPEBDK@Z.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C01665CC (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U2@U?$_tlgWrapperByVal@$03@@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@4AEBU?$_tlgWrapperByVal@$03@@55@Z @ 0x1C0166690 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@U2@U-$_tlgWrapperByVal@$03@@U3@U3@@-$_tlgWrit.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@5@Z @ 0x1C0166794 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U3@@-$_tlgWriteTempl.c)
 *     ?InjectionSourceToString@InputTraceLogging@@CAPEBDW4InputTracing_RimInjectionSource@@@Z @ 0x1C0166C4C (-InjectionSourceToString@InputTraceLogging@@CAPEBDW4InputTracing_RimInjectionSource@@@Z.c)
 */

char __fastcall InputTraceLogging::RIM::InjectInput(__int64 a1)
{
  int v1; // eax
  __int64 v2; // r9
  __int64 v3; // r11
  int v4; // eax
  BOOL v5; // ecx
  __int64 v6; // rax
  int v7; // edx
  int v8; // r8d
  unsigned int v9; // r10d
  __int64 v10; // r9
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // r10d
  __int64 v14; // rax
  int v15; // ecx
  __int64 v16; // r9
  __int64 v17; // r8
  int v18; // r8d
  __int64 v19; // r9
  unsigned int v20; // r10d
  __int64 v21; // rax
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned __int8 *v24; // rdx
  int v25; // r8d
  __int64 v26; // r9
  unsigned int v27; // r10d
  __int64 v29; // [rsp+50h] [rbp-20h] BYREF
  __int64 v30; // [rsp+58h] [rbp-18h] BYREF
  __int64 v31; // [rsp+60h] [rbp-10h] BYREF
  __int64 v32; // [rsp+68h] [rbp-8h] BYREF
  __int64 v33; // [rsp+80h] [rbp+10h] BYREF
  __int64 v34; // [rsp+98h] [rbp+28h] BYREF

  LOBYTE(v1) = *(_BYTE *)(a1 + 48);
  if ( (_BYTE)v1 != 2 )
  {
    if ( (_BYTE)v1 )
    {
      if ( (_BYTE)v1 != 1 )
        return v1;
      if ( (unsigned int)dword_1C024BA90 <= 4 )
        return v1;
      LOBYTE(v1) = tlgKeywordOn((__int64)&dword_1C024BA90, 256LL);
      if ( !(_BYTE)v1 )
        return v1;
      LODWORD(v33) = v25;
      v34 = v26;
      v21 = InputTraceLogging::InjectionSourceToString(v27);
      v24 = (unsigned __int8 *)&unk_1C021BDB1;
    }
    else
    {
      if ( (unsigned int)dword_1C024BA90 <= 4 )
        return v1;
      LOBYTE(v1) = tlgKeywordOn((__int64)&dword_1C024BA90, 256LL);
      if ( !(_BYTE)v1 )
        return v1;
      LODWORD(v33) = v18;
      v34 = v19;
      v21 = InputTraceLogging::InjectionSourceToString(v20);
      v24 = (unsigned __int8 *)&unk_1C021BCC0;
    }
    v32 = v21;
    LOBYTE(v1) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
                   (__int64)&dword_1C024BA90,
                   v24,
                   v22,
                   v23,
                   (void **)&v32,
                   (__int64)&v34,
                   (__int64)&v33);
    return v1;
  }
  v1 = *(_DWORD *)(a1 + 200);
  if ( (v1 & 0x80u) == 0 )
  {
    if ( (unsigned int)dword_1C024BA90 > 4 )
    {
      LOBYTE(v1) = tlgKeywordOn((__int64)&dword_1C024BA90, 256LL);
      if ( (_BYTE)v1 )
      {
        v14 = *(_QWORD *)(v12 + 472);
        v15 = *(unsigned __int16 *)(v14 + 16);
        LODWORD(v14) = *(unsigned __int16 *)(v14 + 18);
        LODWORD(v34) = v15;
        LODWORD(v33) = v14;
        v32 = InputTraceLogging::InjectionSourceToString(v13);
        v31 = v16;
        LOBYTE(v1) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                       (__int64)&dword_1C024BA90,
                       byte_1C021BCFD,
                       v17,
                       v16,
                       (__int64)&v31,
                       (void **)&v32,
                       (__int64)&v34,
                       (__int64)&v33);
      }
    }
  }
  else if ( (unsigned int)dword_1C024BA90 > 4 )
  {
    LOBYTE(v1) = tlgKeywordOn((__int64)&dword_1C024BA90, 256LL);
    if ( (_BYTE)v1 )
    {
      v3 = *(_QWORD *)(v2 + 480);
      v4 = *(_DWORD *)(v3 + 312);
      v5 = (v4 & 8) != 0 && (v4 & 0x2000) == 0;
      v6 = *(_QWORD *)(v2 + 472);
      v7 = *(unsigned __int16 *)(v6 + 18);
      v8 = *(unsigned __int16 *)(v6 + 16);
      LODWORD(v33) = v5;
      LODWORD(v34) = v7;
      LODWORD(v29) = v8;
      v30 = (__int64)InputTraceLogging::PointerDeviceTypeToString(*(_DWORD *)(v3 + 24));
      v31 = InputTraceLogging::InjectionSourceToString(v9);
      v32 = v10;
      LOBYTE(v1) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                     (__int64)&dword_1C024BA90,
                     (unsigned __int8 *)dword_1C021BD43,
                     v11,
                     v10,
                     (__int64)&v32,
                     (void **)&v31,
                     (void **)&v30,
                     (__int64)&v29,
                     (__int64)&v34,
                     (__int64)&v33);
    }
  }
  return v1;
}
