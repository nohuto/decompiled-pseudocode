/*
 * XREFs of ?ProcessInput@Mouse@InputTraceLogging@@SAXPEBURIMDEV@@PEBVMouseInputDataEx@CMouseProcessor@@_N@Z @ 0x1C0041CD0
 * Callers:
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@PEAU_PTPMouseLatencyTracker@@@Z @ 0x1C0041834 (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@PEAU_PTPMou.c)
 *     ?ProcessInput@CMouseProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x1C01C125C (-ProcessInput@CMouseProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_D.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C004A640 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@U2@U2@U?$_tlgWrapperByVal@$01@@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@344AEBU?$_tlgWrapperByVal@$01@@4444@Z @ 0x1C01BE008 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@U2@U2@U-$_tlgWrapperByVal@$01@@U2@.c)
 */

void __fastcall InputTraceLogging::Mouse::ProcessInput(
        const struct RIMDEV *a1,
        const struct CMouseProcessor::MouseInputDataEx *a2,
        __int64 a3)
{
  int v3; // r8d
  __int64 v4; // r9
  __int64 v5; // r10
  int v6; // [rsp+70h] [rbp+27h] BYREF
  int v7; // [rsp+74h] [rbp+2Bh] BYREF
  int v8; // [rsp+78h] [rbp+2Fh] BYREF
  int v9; // [rsp+7Ch] [rbp+33h] BYREF
  int v10; // [rsp+80h] [rbp+37h] BYREF
  int v11; // [rsp+84h] [rbp+3Bh] BYREF
  int v12; // [rsp+88h] [rbp+3Fh] BYREF
  __int64 v13; // [rsp+90h] [rbp+47h] BYREF
  __int64 v14; // [rsp+98h] [rbp+4Fh] BYREF
  __int16 v15; // [rsp+C8h] [rbp+7Fh] BYREF

  if ( (unsigned int)dword_1C024BA90 > 4 )
  {
    if ( (unsigned __int8)tlgKeywordOn(&dword_1C024BA90, 64LL, a3, a2) )
    {
      v6 = *(_DWORD *)(v4 + 72);
      v7 = *(_DWORD *)(v4 + 20);
      v8 = *(_DWORD *)(v4 + 16);
      v9 = *(_DWORD *)(v4 + 12);
      v15 = *(_WORD *)(v4 + 6);
      v10 = *(unsigned __int16 *)(v4 + 4);
      v11 = *(unsigned __int16 *)(v4 + 2);
      v13 = *(_QWORD *)(v4 + 56);
      v12 = (unsigned __int8)v3;
      v14 = v5;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (unsigned int)&dword_1C024BA90,
        (unsigned int)&unk_1C0220F68,
        v3,
        v4,
        (__int64)&v14,
        (__int64)&v12,
        (__int64)&v13,
        (__int64)&v11,
        (__int64)&v10,
        (__int64)&v15,
        (__int64)&v9,
        (__int64)&v8,
        (__int64)&v7,
        (__int64)&v6);
    }
  }
}
