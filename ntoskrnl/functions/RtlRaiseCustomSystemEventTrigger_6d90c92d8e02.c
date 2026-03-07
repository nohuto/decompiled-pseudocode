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
        Memory = RtlpCtAllocateMemory(4096LL);
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
