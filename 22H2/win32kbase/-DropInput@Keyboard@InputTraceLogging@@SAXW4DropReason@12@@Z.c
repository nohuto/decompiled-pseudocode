/*
 * XREFs of ?DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z @ 0x1C01B5B8C
 * Callers:
 *     ?ProcessInputNoLock@CKeyboardProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_INPUT_DATA@@K_NPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@@Z @ 0x1C000242C (-ProcessInputNoLock@CKeyboardProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYB.c)
 *     ProcessKeyboardInjectedInputViaRim @ 0x1C00024FC (ProcessKeyboardInjectedInputViaRim.c)
 *     xxxKeyEventEx @ 0x1C006A7C8 (xxxKeyEventEx.c)
 *     xxxUpdateGlobalsAndSendKeyEvent @ 0x1C006B3FC (xxxUpdateGlobalsAndSendKeyEvent.c)
 *     KEOEMProcs @ 0x1C00AF534 (KEOEMProcs.c)
 *     xxxKELocaleProcs @ 0x1C00B042C (xxxKELocaleProcs.c)
 *     xxxProcessKeyEvent @ 0x1C00C90C0 (xxxProcessKeyEvent.c)
 *     ?AccessProceduresStream@@YAHPEAUtagKE@@KH@Z @ 0x1C00E3A10 (-AccessProceduresStream@@YAHPEAUtagKE@@KH@Z.c)
 *     ProcessKeyboardInputWorker @ 0x1C01EA900 (ProcessKeyboardInputWorker.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0053E90 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x1C01321D0 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?DropReasonToString@InputTraceLogging@@CAPEBDW4DropReason@Keyboard@1@@Z @ 0x1C01B5BF0 (-DropReasonToString@InputTraceLogging@@CAPEBDW4DropReason@Keyboard@1@@Z.c)
 */

void InputTraceLogging::Keyboard::DropInput()
{
  unsigned int v0; // r8d
  __int64 v1; // [rsp+48h] [rbp+10h] BYREF

  if ( (unsigned int)dword_1C0289810 > 4 && tlgKeywordOn((__int64)&dword_1C0289810, 0x4000LL) )
  {
    v1 = InputTraceLogging::DropReasonToString(v0);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
      (__int64)&dword_1C0289810,
      byte_1C025AE47,
      0LL,
      0LL,
      (void **)&v1);
  }
}
