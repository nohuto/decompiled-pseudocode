/*
 * XREFs of xxxDrainQueueCompletions @ 0x1C008AFF0
 * Callers:
 *     NtUserGetQueueStatus @ 0x1C008ADB0 (NtUserGetQueueStatus.c)
 *     _GetQueueStatus @ 0x1C01B3518 (_GetQueueStatus.c)
 * Callees:
 *     ?xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagTHREADINFO@@QEAU_FILE_IO_COMPLETION_INFORMATION@@W4tagQUEUE_COMPLETION_DRAINER@@@Z @ 0x1C011E130 (-xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagTHREADINFO@@QEAU_FILE_IO_COMPLETION_INFORMATIO.c)
 *     ??B?$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ @ 0x1C0138C00 (--B-$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C01410D8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall xxxDrainQueueCompletions(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // esi
  PERESOURCE *v5; // rax
  _QWORD *v6; // rbx
  _QWORD *ThreadWin32Thread; // rax
  int v8; // edi
  __int64 result; // rax
  int v10; // [rsp+28h] [rbp-60h]
  _OWORD v11[4]; // [rsp+40h] [rbp-48h] BYREF
  int v12; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v13; // [rsp+A8h] [rbp+20h] BYREF

  v4 = a1;
  v5 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(a1, a2, a3, a4);
  if ( !ExIsResourceAcquiredSharedLite(*v5) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 151LL);
  v6 = 0LL;
  ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v6 = (_QWORD *)*ThreadWin32Thread;
  v12 = 0;
  memset(v11, 0, 32);
  v13 = 0LL;
  v8 = 0;
  ZwSetIoCompletionEx(v6[183], v6[187], 0LL, 2LL, 0, 0LL);
  while ( 1 )
  {
    LOBYTE(v10) = 0;
    result = ZwRemoveIoCompletionEx(v6[183], v11, 1LL, &v12, &v13, v10);
    if ( (_DWORD)result )
      break;
    result = DWORD2(v11[0]);
    if ( DWORD2(v11[0]) == 1 )
    {
      v8 = 1;
    }
    else
    {
      if ( DWORD2(v11[0]) || !v6[188] )
        break;
      xxxHandleCoreMessagingQueueCompletion(v6, v11, v4);
    }
  }
  if ( v8 )
    return ZwAssociateWaitCompletionPacket(v6[186], v6[183], v6[185], 0LL, 1LL, 0, 0LL, 0LL);
  return result;
}
