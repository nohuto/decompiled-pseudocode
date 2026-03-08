/*
 * XREFs of SetKeyboardInputRoutingPolicy @ 0x1C00CD7B4
 * Callers:
 *     NtMITSetKeyboardInputRoutingPolicy @ 0x1C00CD720 (NtMITSetKeyboardInputRoutingPolicy.c)
 * Callees:
 *     ?IsInputThread@CInputThreadBase@@QEBA_NXZ @ 0x1C007CCB8 (-IsInputThread@CInputThreadBase@@QEBA_NXZ.c)
 *     _anonymous_namespace_::GetKeyboardProcessor @ 0x1C0080388 (_anonymous_namespace_--GetKeyboardProcessor.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall SetKeyboardInputRoutingPolicy(__int32 a1)
{
  PKDPC BufferChainingDpc; // rdi
  SINGLE_LIST_ENTRY *p_DpcListEntry; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 KeyboardProcessor; // rbx

  if ( !CInputThreadBase::IsInputThread((CInputThreadBase *)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc)
    || (BufferChainingDpc = WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc,
        p_DpcListEntry = &WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc->DpcListEntry,
        KeEnterCriticalRegion(),
        ExAcquirePushLockSharedEx(p_DpcListEntry, 0LL),
        LODWORD(BufferChainingDpc) = BufferChainingDpc->DeferredRoutine,
        ExReleasePushLockSharedEx(p_DpcListEntry, 0LL),
        KeLeaveCriticalRegion(),
        (_DWORD)BufferChainingDpc != 2) )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2150LL);
  }
  KeyboardProcessor = anonymous_namespace_::GetKeyboardProcessor(v5, v4, v6, v7);
  if ( !CInputThreadBase::IsInputThread((CInputThreadBase *)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 495LL);
  _InterlockedExchange((volatile __int32 *)(KeyboardProcessor + 16), a1);
  return 0LL;
}
