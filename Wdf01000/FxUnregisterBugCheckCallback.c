/*
 * XREFs of FxUnregisterBugCheckCallback @ 0x1C0088DE8
 * Callers:
 *     FxDestroy @ 0x1C0043AD0 (FxDestroy.c)
 * Callees:
 *     <none>
 */

void __fastcall FxUnregisterBugCheckCallback(_FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  _KBUGCHECK_REASON_CALLBACK_RECORD *p_BugCheckCallbackRecord; // rbx
  unsigned int i; // ecx
  _FX_DRIVER_GLOBALS **v4; // rdx

  p_BugCheckCallbackRecord = &FxDriverGlobals->BugCheckCallbackRecord;
  if ( FxDriverGlobals->BugCheckCallbackRecord.CallbackRoutine )
  {
    KeDeregisterBugCheckReasonCallback(&FxDriverGlobals->BugCheckCallbackRecord);
    p_BugCheckCallbackRecord->CallbackRoutine = 0LL;
    if ( FxDriverGlobals->FxTrackDriverForMiniDumpLog )
    {
      if ( stru_1C009FEF8.m_PoolToFree )
      {
        for ( i = 0; i < stru_1C009FEF8.m_Number; ++i )
        {
          v4 = (_FX_DRIVER_GLOBALS **)((char *)&stru_1C009FEF8.m_DriverUsage->FxDriverGlobals
                                     + stru_1C009FEF8.m_EntrySize * i);
          if ( *v4 == FxDriverGlobals )
            *v4 = 0LL;
        }
      }
    }
  }
}
