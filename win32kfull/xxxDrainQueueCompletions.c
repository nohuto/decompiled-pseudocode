__int64 __fastcall xxxDrainQueueCompletions(__int64 a1)
{
  int v1; // esi
  __int64 v2; // rax
  _QWORD *v3; // rbx
  _QWORD **ThreadWin32Thread; // rax
  int v5; // edi
  __int64 result; // rax
  int v7; // [rsp+28h] [rbp-60h]
  _OWORD v8[4]; // [rsp+40h] [rbp-48h] BYREF
  int v9; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v10; // [rsp+A8h] [rbp+20h] BYREF

  v1 = a1;
  v2 = SGDGetUserSessionState(a1);
  if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v2 + 8)) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 207LL);
  v3 = 0LL;
  ThreadWin32Thread = (_QWORD **)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v3 = *ThreadWin32Thread;
  v9 = 0;
  memset(v8, 0, 32);
  v10 = 0LL;
  v5 = 0;
  ZwSetIoCompletionEx(v3[183], v3[187], 0LL, 2LL, 0, 0LL);
  while ( 1 )
  {
    LOBYTE(v7) = 0;
    result = ZwRemoveIoCompletionEx(v3[183], v8, 1LL, &v9, &v10, v7);
    if ( (_DWORD)result )
      break;
    result = DWORD2(v8[0]);
    if ( DWORD2(v8[0]) == 1 )
    {
      v5 = 1;
    }
    else
    {
      if ( DWORD2(v8[0]) || !v3[188] )
        break;
      xxxHandleCoreMessagingQueueCompletion((__int64)v3, (ULONG64 *)v8, v1);
    }
  }
  if ( v5 )
    return ZwAssociateWaitCompletionPacket(v3[186], v3[183], v3[185], 0LL, 1LL, 0, 0LL, 0LL);
  return result;
}
