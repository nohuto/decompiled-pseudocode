void __fastcall CMouseProcessor::MoveMouseWindowManagement(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebp
  __int64 v6; // rbx
  PKDPC BufferChainingDpc; // rdi
  SINGLE_LIST_ENTRY *p_DpcListEntry; // rbx
  int DeferredRoutine; // edi
  int v10; // ecx
  int v11; // [rsp+30h] [rbp-58h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+38h] [rbp-50h] BYREF
  int *v13; // [rsp+58h] [rbp-30h]
  __int64 v14; // [rsp+60h] [rbp-28h]

  v4 = a2;
  v6 = SGDGetUserSessionState(a1, a2, a3, a4);
  if ( !*(_DWORD *)(v6 + 3456) )
    *(_DWORD *)(v6 + 3456) = ApiSetEditionGetExecutionEvironment();
  if ( *(_DWORD *)(v6 + 3456) != 1 )
  {
    v11 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1514LL);
  }
  BufferChainingDpc = WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc;
  p_DpcListEntry = &WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc->DpcListEntry;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(p_DpcListEntry, 0LL);
  DeferredRoutine = (int)BufferChainingDpc->DeferredRoutine;
  ExReleasePushLockSharedEx(p_DpcListEntry, 0LL);
  KeLeaveCriticalRegion();
  if ( (v4 & 1) != 0 )
  {
    v10 = *((_DWORD *)gpsi + 1241);
    *(_DWORD *)(a1 + 60) = *((_DWORD *)gpsi + 1240);
    *(_DWORD *)(a1 + 64) = v10;
    *(_DWORD *)(a1 + 68) = 18;
    *((_QWORD *)gpsi + 619) = 0LL;
    *(struct tagPOINT *)(a1 + 3440) = gptCursorAsync;
    *(_QWORD *)(a1 + 3448) = 0LL;
  }
  if ( (v4 & 2) != 0 )
  {
    if ( gpqCursor )
    {
      v11 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1547LL);
    }
    RIMLockExclusive(a1 + 3824);
    *(_BYTE *)(a1 + 3840) = 1;
    *(_QWORD *)(a1 + 3832) = 0LL;
    ExReleasePushLockExclusiveEx(a1 + 3824, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( (unsigned int)dword_1C02CA7E0 > 4 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 64LL) )
  {
    v11 = v4;
    v13 = &v11;
    v14 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C02CA7E0, (int)&dword_1C029DD9C, 0, 0, 3u, &v12);
  }
  if ( DeferredRoutine == 2 )
    ApiSetEditionUpdateCursorAsync();
  else
    CMouseProcessor::ExecuteMoveMouseWindowManagement((CMouseProcessor *)a1);
}
