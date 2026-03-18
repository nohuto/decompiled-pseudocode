/*
 * XREFs of PpmUpdateIdleStates @ 0x140829930
 * Callers:
 *     <none>
 * Callees:
 *     KeGetProcessorIndexFromNumber @ 0x140293580 (KeGetProcessorIndexFromNumber.c)
 *     PopReleaseRwLock @ 0x1402935D0 (PopReleaseRwLock.c)
 *     PopExecuteOnTargetProcessors @ 0x140293A88 (PopExecuteOnTargetProcessors.c)
 *     KeAddProcessorAffinityEx @ 0x140294460 (KeAddProcessorAffinityEx.c)
 *     PopAcquireRwLockExclusive @ 0x1402D66A8 (PopAcquireRwLockExclusive.c)
 *     PpmHvUseNativeAlgorithms @ 0x1403C1E10 (PpmHvUseNativeAlgorithms.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PpmUpdateIdleContext @ 0x14098B290 (PpmUpdateIdleContext.c)
 */

__int64 __fastcall PpmUpdateIdleStates(__int64 a1)
{
  ULONG ProcessorIndexFromNumber; // edi
  __int64 v3; // r9
  void *v4; // rdx
  __int64 v5; // r8
  unsigned int updated; // eax
  unsigned int v7; // ebx
  _DWORD v9[68]; // [rsp+20h] [rbp-128h] BYREF

  memset(v9, 0, 0x108uLL);
  PopAcquireRwLockExclusive((ULONG_PTR)&PpmIdlePolicyLock);
  if ( !a1
    || (ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber((PPROCESSOR_NUMBER)(a1 + 4)),
        ProcessorIndexFromNumber == -1) )
  {
    v7 = -1073741811;
    goto LABEL_10;
  }
  if ( !PpmHvUseNativeAlgorithms() )
  {
    updated = PpmUpdateIdleContext(ProcessorIndexFromNumber, a1);
    goto LABEL_9;
  }
  v9[0] = 2097153;
  memset(&v9[1], 0, 0x104uLL);
  KeAddProcessorAffinityEx((unsigned __int16 *)v9, ProcessorIndexFromNumber);
  if ( *(_BYTE *)(a1 + 17) )
  {
    v3 = 0LL;
    v4 = PpmUpdateIdleStatesInplace;
  }
  else
  {
    if ( !*(_DWORD *)(a1 + 116) )
    {
      v3 = 0LL;
      v4 = PpmRemoveIdleStates;
      v5 = 0LL;
      goto LABEL_8;
    }
    v3 = 3LL;
    v4 = PpmInstallNewIdleStates;
  }
  v5 = a1;
LABEL_8:
  updated = PopExecuteOnTargetProcessors((__int64)v9, (__int64)v4, v5, v3);
LABEL_9:
  v7 = updated;
LABEL_10:
  PopReleaseRwLock((ULONG_PTR)&PpmIdlePolicyLock);
  return v7;
}
