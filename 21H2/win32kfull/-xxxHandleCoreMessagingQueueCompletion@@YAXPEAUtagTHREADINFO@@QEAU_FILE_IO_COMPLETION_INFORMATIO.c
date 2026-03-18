/*
 * XREFs of ?xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagTHREADINFO@@QEAU_FILE_IO_COMPLETION_INFORMATION@@W4tagQUEUE_COMPLETION_DRAINER@@@Z @ 0x1C00A5D18
 * Callers:
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C0052EC0 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     xxxRealInternalGetMessage @ 0x1C0055460 (xxxRealInternalGetMessage.c)
 *     xxxDrainQueueCompletions @ 0x1C00A5010 (xxxDrainQueueCompletions.c)
 *     ?xxxHandleQueueCompletion@@YA?AW4QueueCompletionStatus@@PEAUtagTHREADINFO@@JQEAU_FILE_IO_COMPLETION_INFORMATION@@W4tagQUEUE_COMPLETION_DRAINER@@@Z @ 0x1C00A5CC0 (-xxxHandleQueueCompletion@@YA-AW4QueueCompletionStatus@@PEAUtagTHREADINFO@@JQEAU_FILE_IO_COMPLET.c)
 * Callees:
 *     xxxSendMessage @ 0x1C0050D34 (xxxSendMessage.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     _PostMessageExtended @ 0x1C00A5EEC (_PostMessageExtended.c)
 */

ULONG64 __fastcall xxxHandleCoreMessagingQueueCompletion(__int64 a1, ULONG64 *a2, int a3)
{
  __int64 v5; // rbx
  __int64 *v6; // rsi
  ULONG64 v7; // rcx
  __int64 *v8; // rax
  __int64 v9; // r15
  ULONG64 v10; // rdi
  _QWORD *v11; // rcx
  ULONG64 result; // rax
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int128 v17; // [rsp+50h] [rbp-38h] BYREF
  __int64 v18; // [rsp+60h] [rbp-28h]

  v17 = 0LL;
  v18 = 0LL;
  v5 = 0LL;
  v6 = (__int64 *)((char *)KeGetPcr()->NtTib.Self[45].StackLimit + 8);
  v7 = MmUserProbeAddress;
  v8 = v6;
  if ( (unsigned __int64)v6 >= MmUserProbeAddress )
    v8 = (__int64 *)MmUserProbeAddress;
  v9 = *v8;
  if ( a3 && !v9 )
  {
    v13 = PostMessageExtended(*(_QWORD *)(a1 + 1464), 96, 1, 0, 0LL);
    v7 = (ULONG64)MmSystemRangeStart;
    if ( v13 >= (unsigned __int64)MmSystemRangeStart )
    {
      if ( v13 )
        goto LABEL_4;
      LODWORD(v13) = 0;
    }
    if ( !(_DWORD)v13 )
    {
      ThreadLock(*(_QWORD *)(a1 + 1464), (__int64 *)&v17);
      xxxSendMessage(*(_QWORD *)(a1 + 1464));
      ThreadUnlock1(v15, v14, v16);
    }
  }
LABEL_4:
  v10 = *a2;
  if ( !PsGetCurrentProcessWow64Process(v7) )
    v5 = 3LL;
  if ( (v5 & *a2) != 0 )
    ExRaiseDatatypeMisalignment();
  v11 = (_QWORD *)v10;
  if ( v10 >= MmUserProbeAddress )
    v11 = (_QWORD *)MmUserProbeAddress;
  *v11 = v9;
  result = MmUserProbeAddress;
  if ( (unsigned __int64)v6 >= MmUserProbeAddress )
    v6 = (__int64 *)MmUserProbeAddress;
  *v6 = v10;
  return result;
}
