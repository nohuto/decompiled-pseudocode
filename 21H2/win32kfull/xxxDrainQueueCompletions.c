/*
 * XREFs of xxxDrainQueueCompletions @ 0x1C00A5010
 * Callers:
 *     NtUserGetQueueStatus @ 0x1C00A4E20 (NtUserGetQueueStatus.c)
 *     _GetQueueStatus @ 0x1C014B0C4 (_GetQueueStatus.c)
 * Callees:
 *     ?xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagTHREADINFO@@QEAU_FILE_IO_COMPLETION_INFORMATION@@W4tagQUEUE_COMPLETION_DRAINER@@@Z @ 0x1C00A5D18 (-xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagTHREADINFO@@QEAU_FILE_IO_COMPLETION_INFORMATIO.c)
 */

__int64 __fastcall xxxDrainQueueCompletions(unsigned int a1)
{
  _QWORD *v2; // rbx
  _QWORD *ThreadWin32Thread; // rax
  int v4; // edi
  __int64 result; // rax
  int v6; // [rsp+28h] [rbp-40h]
  _OWORD v7[2]; // [rsp+40h] [rbp-28h] BYREF
  int v8; // [rsp+78h] [rbp+10h] BYREF
  __int64 v9; // [rsp+80h] [rbp+18h] BYREF

  v2 = 0LL;
  ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v2 = (_QWORD *)*ThreadWin32Thread;
  v8 = 0;
  v4 = 0;
  v9 = 0LL;
  memset(v7, 0, sizeof(v7));
  ZwSetIoCompletionEx(v2[178], v2[182], 0LL, 2LL, 0, 0LL);
  while ( 1 )
  {
    LOBYTE(v6) = 0;
    result = ZwRemoveIoCompletionEx(v2[178], v7, 1LL, &v8, &v9, v6);
    if ( (_DWORD)result )
      break;
    result = DWORD2(v7[0]);
    if ( DWORD2(v7[0]) == 1 )
    {
      v4 = 1;
    }
    else
    {
      if ( DWORD2(v7[0]) || !v2[183] )
        break;
      xxxHandleCoreMessagingQueueCompletion(v2, v7, a1);
    }
  }
  if ( v4 )
    return ZwAssociateWaitCompletionPacket(v2[181], v2[178], v2[180], 0LL, 1LL, 0, 0LL, 0LL);
  return result;
}
