/*
 * XREFs of PopHandleConvergedPowerRequestUpdate @ 0x14066D454
 * Callers:
 *     PopExecutionRequiredCallback @ 0x1406215B0 (PopExecutionRequiredCallback.c)
 *     PopSystemRequiredCallback @ 0x14066F2F0 (PopSystemRequiredCallback.c)
 * Callees:
 *     RtlLookupElementGenericTableAvl @ 0x1402528A0 (RtlLookupElementGenericTableAvl.c)
 *     PopReleaseRwLock @ 0x14026A224 (PopReleaseRwLock.c)
 *     PopHandleSystemRequiredPowerRequestsUpdate @ 0x14026F3FC (PopHandleSystemRequiredPowerRequestsUpdate.c)
 *     PopAcquirePowerRequestPushLock @ 0x14066E888 (PopAcquirePowerRequestPushLock.c)
 *     PopPowerRequestIsExecutionRequiredCapable @ 0x14066E8C4 (PopPowerRequestIsExecutionRequiredCapable.c)
 *     PopUpdatePowerRequestProcessWakeCounter @ 0x14066F390 (PopUpdatePowerRequestProcessWakeCounter.c)
 *     PopPowerRequestIsExecutionRequiredStatusHeld @ 0x14066F410 (PopPowerRequestIsExecutionRequiredStatusHeld.c)
 */

__int64 __fastcall PopHandleConvergedPowerRequestUpdate(__int64 a1, unsigned int a2)
{
  int v2; // ebx
  _QWORD *v4; // rax
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int128 Buffer; // [rsp+20h] [rbp-18h] BYREF

  v2 = a1;
  LOBYTE(a1) = 1;
  PopAcquirePowerRequestPushLock(a1);
  Buffer = 0LL;
  DWORD2(Buffer) = v2;
  v4 = RtlLookupElementGenericTableAvl(&PopPowerRequestTable, &Buffer);
  if ( v4 && (unsigned __int8)PopPowerRequestIsExecutionRequiredCapable(*v4) )
  {
    if ( !(unsigned __int8)PopPowerRequestIsExecutionRequiredStatusHeld(v5) )
    {
      v6 = 0LL;
      goto LABEL_6;
    }
    if ( (_BYTE)PopExecutionRequiredContext )
    {
      LOBYTE(v6) = 1;
LABEL_6:
      PopUpdatePowerRequestProcessWakeCounter(v7, v6);
    }
  }
  PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
  return PopHandleSystemRequiredPowerRequestsUpdate(a2, v8);
}
