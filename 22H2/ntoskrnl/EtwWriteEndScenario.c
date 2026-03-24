/*
 * XREFs of EtwWriteEndScenario @ 0x1407882D0
 * Callers:
 *     PnpCompleteSystemStartProcess @ 0x1403C3078 (PnpCompleteSystemStartProcess.c)
 *     PopDiagTracePowerTransitionEnd @ 0x14077534C (PopDiagTracePowerTransitionEnd.c)
 *     PopGracefulShutdown @ 0x1409B10A0 (PopGracefulShutdown.c)
 * Callees:
 *     EtwEventEnabled @ 0x14021BEF0 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14025D4F0 (EtwWrite.c)
 *     EtwGetProviderIdFromHandle @ 0x14039E928 (EtwGetProviderIdFromHandle.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     WdipStartEndScenario @ 0x14078946C (WdipStartEndScenario.c)
 */

NTSTATUS __fastcall EtwWriteEndScenario(
        ULONG_PTR *RegHandle,
        PCEVENT_DESCRIPTOR EventDescriptor,
        LPCGUID ActivityId,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  NTSTATUS result; // eax
  __int128 v10; // [rsp+30h] [rbp-48h] BYREF

  v10 = 0LL;
  if ( !EventDescriptor || !ActivityId )
    return -1073741811;
  if ( !EtwEventEnabled((REGHANDLE)RegHandle, EventDescriptor) )
    return -1073741816;
  result = EtwGetProviderIdFromHandle(RegHandle, 0, &v10);
  if ( result >= 0 )
  {
    WdipStartEndScenario(&v10, ActivityId, EventDescriptor, 11LL);
    return EtwWrite((REGHANDLE)RegHandle, EventDescriptor, ActivityId, UserDataCount, UserData);
  }
  return result;
}
