/*
 * XREFs of NtUserDrainThreadCoreMessagingCompletions @ 0x1C0047980
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     ?xxxHandleQueueCompletion@@YA?AW4QueueCompletionStatus@@PEAUtagTHREADINFO@@JQEAU_FILE_IO_COMPLETION_INFORMATION@@W4tagQUEUE_COMPLETION_DRAINER@@@Z @ 0x1C0047B0C (-xxxHandleQueueCompletion@@YA-AW4QueueCompletionStatus@@PEAUtagTHREADINFO@@JQEAU_FILE_IO_COMPLET.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C0130974 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall NtUserDrainThreadCoreMessagingCompletions(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 *ThreadWin32Thread; // rax
  struct tagTHREADINFO *v8; // rax
  struct tagTHREADINFO *v9; // rdi
  int v10; // esi
  unsigned int v11; // eax
  int v12; // eax
  __int64 v13; // rcx
  int v15; // [rsp+28h] [rbp-50h]
  _OWORD v16[3]; // [rsp+40h] [rbp-38h] BYREF
  int v17; // [rsp+80h] [rbp+8h] BYREF
  __int64 v18; // [rsp+88h] [rbp+10h] BYREF

  EnterSharedCrit(a1, a2, a3);
  v4 = SGDGetUserSessionState(v3);
  v5 = 0LL;
  if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v4 + 8)) )
  {
    v17 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 207LL);
  }
  v6 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v6 = *ThreadWin32Thread;
  if ( *(_QWORD *)(v6 + 1504) )
  {
    v8 = PtiCurrentShared();
    v17 = 0;
    memset(v16, 0, 32);
    v18 = 0LL;
    v9 = v8;
    v10 = 0;
    ZwSetIoCompletionEx(*((_QWORD *)v8 + 183), *((_QWORD *)v8 + 187), 0LL, 2LL, 0, 0LL);
    do
    {
      while ( 1 )
      {
        LOBYTE(v15) = 0;
        v11 = ZwRemoveIoCompletionEx(*((_QWORD *)v9 + 183), v16, 1LL, &v17, &v18, v15);
        v12 = xxxHandleQueueCompletion(v9, v11, v16, 0LL);
        if ( v12 != 3 )
          break;
        v10 = 1;
      }
    }
    while ( v12 == 4 );
    if ( v10 )
      ZwAssociateWaitCompletionPacket(
        *((_QWORD *)v9 + 186),
        *((_QWORD *)v9 + 183),
        *((_QWORD *)v9 + 185),
        0LL,
        1LL,
        0,
        0LL,
        0LL);
    v5 = 1LL;
  }
  else
  {
    UserSetLastError(5);
  }
  UserSessionSwitchLeaveCrit(v13);
  return v5;
}
