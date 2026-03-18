/*
 * XREFs of FxRegisterBugCheckCallback @ 0x1C009086C
 * Callers:
 *     FxInitialize @ 0x1C00570B8 (FxInitialize.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D510 (_guard_dispatch_icall_nop.c)
 *     ?Register@_FX_DRIVER_TRACKER_CACHE_AWARE@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0090314 (-Register@_FX_DRIVER_TRACKER_CACHE_AWARE@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     FxpGetImageBase @ 0x1C0090BF8 (FxpGetImageBase.c)
 */

void __fastcall FxRegisterBugCheckCallback(_FX_DRIVER_GLOBALS *FxDriverGlobals, _DRIVER_OBJECT *DriverObject)
{
  unsigned __int8 FxTrackDriverForMiniDumpLog; // bp
  _KBUGCHECK_REASON_CALLBACK_RECORD *p_BugCheckCallbackRecord; // rdi
  _FX_DRIVER_GLOBALS *v5; // rdx
  void (__fastcall *SystemRoutineAddress)(_KBUGCHECK_REASON_CALLBACK_RECORD *, _QWORD, __int64, char *); // rsi
  _UNICODE_STRING funcName; // [rsp+30h] [rbp-18h] BYREF

  FxTrackDriverForMiniDumpLog = FxDriverGlobals->FxTrackDriverForMiniDumpLog;
  p_BugCheckCallbackRecord = &FxDriverGlobals->BugCheckCallbackRecord;
  FxDriverGlobals->FxTrackDriverForMiniDumpLog = 0;
  FxDriverGlobals->BugCheckCallbackRecord.Entry = 0LL;
  *(_OWORD *)&FxDriverGlobals->BugCheckCallbackRecord.CallbackRoutine = 0LL;
  *(_OWORD *)&FxDriverGlobals->BugCheckCallbackRecord.Checksum = 0LL;
  FxDriverGlobals->ImageAddress = 0LL;
  FxDriverGlobals->ImageSize = 0;
  funcName = 0LL;
  if ( FxpGetImageBase(DriverObject, &FxDriverGlobals->ImageAddress, &FxDriverGlobals->ImageSize) >= 0
    && !FxLibraryGlobals.StaticallyLinked )
  {
    RtlInitUnicodeString(&funcName, L"KeRegisterBugCheckReasonCallback");
    SystemRoutineAddress = (void (__fastcall *)(_KBUGCHECK_REASON_CALLBACK_RECORD *, _QWORD, __int64, char *))MmGetSystemRoutineAddress(&funcName);
    if ( SystemRoutineAddress )
    {
      if ( FxTrackDriverForMiniDumpLog )
      {
        if ( (int)_FX_DRIVER_TRACKER_CACHE_AWARE::Register(&FxLibraryGlobals.DriverTracker, v5) >= 0 )
          FxDriverGlobals->FxTrackDriverForMiniDumpLog = 1;
      }
      p_BugCheckCallbackRecord->State = 0;
      SystemRoutineAddress(p_BugCheckCallbackRecord, FxpBugCheckCallback, 2LL, FxDriverGlobals->Public.DriverName);
    }
  }
}
