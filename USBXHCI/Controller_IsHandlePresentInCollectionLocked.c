/*
 * XREFs of Controller_IsHandlePresentInCollectionLocked @ 0x1C0034180
 * Callers:
 *     Controller_IsHandlePresentInCollection @ 0x1C0034130 (Controller_IsHandlePresentInCollection.c)
 *     Controller_StopTimeTrackingForHandle @ 0x1C0034904 (Controller_StopTimeTrackingForHandle.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 */

char __fastcall Controller_IsHandlePresentInCollectionLocked(__int64 a1, __int64 a2)
{
  unsigned int i; // ebx

  for ( i = 0;
        i < (*(unsigned int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 112))(
              WdfDriverGlobals,
              a1);
        ++i )
  {
    if ( (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 144))(
           WdfDriverGlobals,
           a1,
           i) == a2 )
      return 1;
  }
  return 0;
}
