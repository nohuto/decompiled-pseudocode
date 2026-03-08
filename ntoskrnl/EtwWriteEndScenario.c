/*
 * XREFs of EtwWriteEndScenario @ 0x140842920
 * Callers:
 *     PnpCompleteSystemStartProcess @ 0x14039C088 (PnpCompleteSystemStartProcess.c)
 *     PopDiagTracePowerTransitionEnd @ 0x14098DF28 (PopDiagTracePowerTransitionEnd.c)
 *     PopGracefulShutdown @ 0x140A9D970 (PopGracefulShutdown.c)
 * Callees:
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     EtwWrite @ 0x1402338C0 (EtwWrite.c)
 *     EtwGetProviderIdFromHandle @ 0x1402FDB04 (EtwGetProviderIdFromHandle.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     WdipStartEndScenario @ 0x140796650 (WdipStartEndScenario.c)
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
    WdipStartEndScenario((__int64)&v10, (__int64)ActivityId, &EventDescriptor->Id, 11);
    return EtwWrite((REGHANDLE)RegHandle, EventDescriptor, ActivityId, UserDataCount, UserData);
  }
  return result;
}
