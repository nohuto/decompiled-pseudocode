/*
 * XREFs of KiIsPrcbThread @ 0x1402AEFCC
 * Callers:
 *     KiExecuteAllDpcs @ 0x140252F60 (KiExecuteAllDpcs.c)
 *     KiEnterLongDpcProcessing @ 0x140254490 (KiEnterLongDpcProcessing.c)
 *     KiScheduleThreadToRescheduleContext @ 0x140258C90 (KiScheduleThreadToRescheduleContext.c)
 *     KiGroupSchedulingGenerationEnd @ 0x1402ABBFC (KiGroupSchedulingGenerationEnd.c)
 *     KiSearchForNewThreadOnProcessor @ 0x1402AC810 (KiSearchForNewThreadOnProcessor.c)
 *     KiDeferGroupSchedulingPreemption @ 0x1402ADC48 (KiDeferGroupSchedulingPreemption.c)
 *     KiDirectSwitchThread @ 0x1403414A0 (KiDirectSwitchThread.c)
 *     KiUpdateThreadHgsFeedback @ 0x140576260 (KiUpdateThreadHgsFeedback.c)
 *     KiParkCurrentProcessor @ 0x14057BAA4 (KiParkCurrentProcessor.c)
 *     KiAdjustRescheduleContextForParking @ 0x14057DB98 (KiAdjustRescheduleContextForParking.c)
 * Callees:
 *     <none>
 */

char __fastcall KiIsPrcbThread(__int64 a1)
{
  char result; // al

  result = 0;
  if ( a1 )
  {
    if ( *(_UNKNOWN **)(a1 + 544) == &KiInitialProcess )
      return 1;
  }
  return result;
}
