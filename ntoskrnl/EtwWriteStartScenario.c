/*
 * XREFs of EtwWriteStartScenario @ 0x14085A170
 * Callers:
 *     PopDiagTracePowerTransitionStart @ 0x14098E148 (PopDiagTracePowerTransitionStart.c)
 *     IoInitSystemPreDrivers @ 0x140B409E8 (IoInitSystemPreDrivers.c)
 *     PerfDiagInitialize @ 0x140B6C6B4 (PerfDiagInitialize.c)
 * Callees:
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     EtwWrite @ 0x1402338C0 (EtwWrite.c)
 *     EtwGetProviderIdFromHandle @ 0x1402FDB04 (EtwGetProviderIdFromHandle.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwTraceControl @ 0x140415D70 (ZwTraceControl.c)
 *     WdipStartEndScenario @ 0x140796650 (WdipStartEndScenario.c)
 */

__int64 __fastcall EtwWriteStartScenario(
        ULONG_PTR *RegHandle,
        PCEVENT_DESCRIPTOR EventDescriptor,
        LPCGUID ActivityId,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  int ProviderIdFromHandle; // edi
  __int128 v11; // [rsp+38h] [rbp-50h] BYREF

  v11 = 0LL;
  if ( EventDescriptor && ActivityId )
  {
    if ( EtwEventEnabled((REGHANDLE)RegHandle, EventDescriptor) )
    {
      ProviderIdFromHandle = EtwGetProviderIdFromHandle(RegHandle, 0, &v11);
      if ( ProviderIdFromHandle >= 0 )
      {
        if ( ActivityId->Data1
          || ActivityId->Data2
          || ActivityId->Data3
          || ActivityId->Data4[0]
          || ActivityId->Data4[1]
          || ActivityId->Data4[2]
          || ActivityId->Data4[3]
          || ActivityId->Data4[4]
          || ActivityId->Data4[5]
          || ActivityId->Data4[6]
          || ActivityId->Data4[7]
          || (ProviderIdFromHandle = ZwTraceControl(12LL, 0LL), ProviderIdFromHandle >= 0) )
        {
          ProviderIdFromHandle = EtwWrite((REGHANDLE)RegHandle, EventDescriptor, ActivityId, UserDataCount, UserData);
          WdipStartEndScenario((__int64)&v11, (__int64)ActivityId, &EventDescriptor->Id, 10);
        }
      }
    }
    else
    {
      return (unsigned int)-1073741816;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)ProviderIdFromHandle;
}
