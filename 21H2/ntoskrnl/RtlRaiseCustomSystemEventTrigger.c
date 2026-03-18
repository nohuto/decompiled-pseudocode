/*
 * XREFs of RtlRaiseCustomSystemEventTrigger @ 0x1405EDBA0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwQueryWnfStateData @ 0x14041E4C0 (ZwQueryWnfStateData.c)
 *     ZwQueryWnfStateNameInformation @ 0x14041E4E0 (ZwQueryWnfStateNameInformation.c)
 *     ZwUpdateWnfStateData @ 0x14041F2A0 (ZwUpdateWnfStateData.c)
 *     RtlGUIDFromString @ 0x1407814E0 (RtlGUIDFromString.c)
 *     RtlpCtAllocateMemory @ 0x1409BE958 (RtlpCtAllocateMemory.c)
 *     RtlpCtContextFree @ 0x1409BE97C (RtlpCtContextFree.c)
 *     RtlpCtContextInit @ 0x1409BE9D8 (RtlpCtContextInit.c)
 *     RtlpCtFreeMemory @ 0x1409BEAA0 (RtlpCtFreeMemory.c)
 *     RtlpCtQueueWorkItem @ 0x1409BEB64 (RtlpCtQueueWorkItem.c)
 */

__int64 __fastcall RtlRaiseCustomSystemEventTrigger(__int64 a1)
{
  int WnfStateData; // ebx
  __int64 Memory; // rdi
  PVOID P; // [rsp+50h] [rbp+7h]
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp+Fh] BYREF
  __int128 v6; // [rsp+68h] [rbp+1Fh]
  __int64 v7; // [rsp+78h] [rbp+2Fh] BYREF
  GUID Guid; // [rsp+80h] [rbp+37h] BYREF

  P = 0LL;
  v7 = WNF_SEB_DEV_MNF_CUSTOM_NOTIFICATION_RECEIVED;
  v6 = 0LL;
  DestinationString = 0LL;
  Guid = 0LL;
  if ( a1 )
  {
    RtlInitUnicodeString(&DestinationString, *(PCWSTR *)(a1 + 8));
    WnfStateData = RtlGUIDFromString(&DestinationString, &Guid);
    if ( WnfStateData >= 0 )
    {
      if ( _InterlockedExchange(&RtlpCtPublishInProgress, 1) )
      {
        return (unsigned int)-1073741823;
      }
      else
      {
        Memory = RtlpCtAllocateMemory(0x1000uLL);
        if ( Memory )
        {
          WnfStateData = ZwQueryWnfStateData((__int64)&v7, 0LL);
          if ( WnfStateData >= 0 )
          {
            WnfStateData = ZwQueryWnfStateNameInformation((__int64)&v7, 2LL);
            if ( WnfStateData >= 0 )
              WnfStateData = -1073741823;
          }
        }
        else
        {
          WnfStateData = -1073741670;
        }
        _InterlockedExchange(&RtlpCtPublishInProgress, 0);
        if ( Memory )
          RtlpCtFreeMemory(Memory);
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)WnfStateData;
}
