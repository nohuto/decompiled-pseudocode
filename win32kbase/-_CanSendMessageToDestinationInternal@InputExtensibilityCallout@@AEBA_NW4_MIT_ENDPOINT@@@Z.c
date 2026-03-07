bool __fastcall InputExtensibilityCallout::_CanSendMessageToDestinationInternal(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rbx
  __int64 v6; // rsi
  char v7; // bl
  int v8; // edx
  int v9; // edx
  __int64 v10; // rdx
  PKDPC BufferChainingDpc; // rdi
  SINGLE_LIST_ENTRY *p_DpcListEntry; // rbx

  v4 = a2;
  if ( a2 >= 21 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 404LL);
  v6 = 5 * v4;
  if ( !*(_QWORD *)(a1 + 40 * v4 + 32) )
    return 0;
  v7 = 1;
  if ( !*(_QWORD *)(a1 + 24) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 410LL);
  v8 = *(_DWORD *)(a1 + 8 * v6 + 40);
  if ( v8 )
  {
    v9 = v8 - 1;
    if ( v9 )
    {
      v10 = (unsigned int)(v9 - 1);
      if ( !(_DWORD)v10 )
        return isRootPartition(a1, v10, a3, a4);
      if ( (_DWORD)v10 != 1 )
      {
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 431LL);
        return v7;
      }
      return isChildPartition();
    }
    else
    {
      BufferChainingDpc = WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc;
      p_DpcListEntry = &WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc->DpcListEntry;
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx(p_DpcListEntry, 0LL);
      LODWORD(BufferChainingDpc) = BufferChainingDpc->DeferredRoutine;
      ExReleasePushLockSharedEx(p_DpcListEntry, 0LL);
      KeLeaveCriticalRegion();
      return (_DWORD)BufferChainingDpc == 2;
    }
  }
  return v7;
}
