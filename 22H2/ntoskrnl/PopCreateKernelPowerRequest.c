/*
 * XREFs of PopCreateKernelPowerRequest @ 0x140772488
 * Callers:
 *     PoRegisterSystemState @ 0x14056EE50 (PoRegisterSystemState.c)
 *     PoCreatePowerRequest @ 0x140772400 (PoCreatePowerRequest.c)
 *     PopInitializeHighPerfPowerRequest @ 0x140A710FC (PopInitializeHighPerfPowerRequest.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140345294 (PopReleaseRwLock.c)
 *     PopUmpoSendPowerRequestOverrideQuery @ 0x14034BDF0 (PopUmpoSendPowerRequestOverrideQuery.c)
 *     PopAcquirePowerRequestPushLock @ 0x1406F3F38 (PopAcquirePowerRequestPushLock.c)
 *     PopDiagTracePowerRequestCreate @ 0x1406F5728 (PopDiagTracePowerRequestCreate.c)
 *     PopCreatePowerRequestObject @ 0x1406F5E38 (PopCreatePowerRequestObject.c)
 *     PopInsertPowerRequestObject @ 0x1406F72F0 (PopInsertPowerRequestObject.c)
 */

__int64 __fastcall PopCreateKernelPowerRequest(_QWORD *a1, _DWORD *a2)
{
  __int64 result; // rax
  _QWORD *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  v8 = 0LL;
  result = PopCreatePowerRequestObject(&v8, a2);
  if ( (int)result >= 0 )
  {
    v4 = (_QWORD *)v8;
    *(_DWORD *)(v8 + 20) = 18;
    PopAcquirePowerRequestPushLock(1);
    PopInsertPowerRequestObject(v4, 0);
    PopUmpoSendPowerRequestOverrideQuery((__int64)v4, v5, v6, v7);
    PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
    PopDiagTracePowerRequestCreate(0, (__int64)v4);
    result = 0LL;
    *a1 = v4;
  }
  return result;
}
