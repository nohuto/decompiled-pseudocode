/*
 * XREFs of PpmCheckInitProcessors @ 0x1407B9B18
 * Callers:
 *     PpmReapplyPerfPolicy @ 0x1407BA700 (PpmReapplyPerfPolicy.c)
 *     PopNewProcessorCallback @ 0x1408E0EA0 (PopNewProcessorCallback.c)
 *     PoInitSystem @ 0x140A3F948 (PoInitSystem.c)
 * Callees:
 *     KeIsEmptyAffinityEx @ 0x140228560 (KeIsEmptyAffinityEx.c)
 *     KeGetPrcb @ 0x140228E30 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x140229400 (KeEnumerateNextProcessor.c)
 *     PpmReleaseLock @ 0x14022AB00 (PpmReleaseLock.c)
 *     KeSubtractAffinityEx @ 0x14022B670 (KeSubtractAffinityEx.c)
 *     KeOrAffinityEx @ 0x14022B850 (KeOrAffinityEx.c)
 *     PopExecuteOnTargetProcessors @ 0x14027B7DC (PopExecuteOnTargetProcessors.c)
 *     PpmConvertTime @ 0x14027C22C (PpmConvertTime.c)
 *     PpmAcquireLock @ 0x140281A74 (PpmAcquireLock.c)
 *     PpmParkRegisterParking @ 0x1403C1460 (PpmParkRegisterParking.c)
 *     PpmCheckApplyParkConstraints @ 0x1403C2048 (PpmCheckApplyParkConstraints.c)
 *     KeQueryActiveProcessorAffinity @ 0x1403C2430 (KeQueryActiveProcessorAffinity.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     memset @ 0x140414200 (memset.c)
 *     HvlIsRootPowerSchedulerQosPresent @ 0x1404F1B6C (HvlIsRootPowerSchedulerQosPresent.c)
 *     PpmUpdateProcessorPolicy @ 0x14078C8D0 (PpmUpdateProcessorPolicy.c)
 *     PpmReinitializeHeteroEngine @ 0x1407B9AE8 (PpmReinitializeHeteroEngine.c)
 *     PpmAllocatePerfCheck @ 0x1407BA694 (PpmAllocatePerfCheck.c)
 *     PpmCheckReInit @ 0x1407BA7E4 (PpmCheckReInit.c)
 */

char __fastcall PpmCheckInitProcessors(int a1)
{
  __int64 Prcb; // rax
  __int64 v3; // rdx
  unsigned __int64 FeatureBits; // rcx
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v6; // rax
  unsigned int v7; // edx
  int v9; // [rsp+28h] [rbp-E0h] BYREF
  unsigned int v10; // [rsp+2Ch] [rbp-DCh] BYREF
  __int64 v11; // [rsp+30h] [rbp-D8h] BYREF
  unsigned __int16 *v12[2]; // [rsp+38h] [rbp-D0h] BYREF
  __int16 v13; // [rsp+48h] [rbp-C0h]
  int v14; // [rsp+4Ah] [rbp-BEh]
  __int16 v15; // [rsp+4Eh] [rbp-BAh]
  unsigned __int16 *v16[2]; // [rsp+50h] [rbp-B8h] BYREF
  _WORD v17[4]; // [rsp+60h] [rbp-A8h]
  _QWORD v18[22]; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int16 v19[88]; // [rsp+118h] [rbp+10h] BYREF

  memset(v19, 0, 0xA8uLL);
  v14 = 0;
  v15 = 0;
  v10 = 0;
  memset(v18, 0, 0xA8uLL);
  v9 = 0;
  if ( a1 )
  {
    LODWORD(v18[0]) = 1310721;
    memset((char *)v18 + 4, 0, 0xA4uLL);
  }
  else
  {
    PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
    KeQueryActiveProcessorAffinity((__int64)v19);
    if ( !(unsigned __int8)KeSubtractAffinityEx(v19, (unsigned __int16 *)PpmCheckRegistered, v18) )
    {
      LOBYTE(CurrentPrcb) = PpmReleaseLock(&PpmPerfPolicyLock);
      return (char)CurrentPrcb;
    }
  }
  KeOrAffinityEx((unsigned __int16 *)PpmCheckRegistered, (unsigned __int16 *)v18, PpmCheckRegistered);
  if ( !(unsigned int)KeIsEmptyAffinityEx(v18) )
  {
    v12[1] = (unsigned __int16 *)v18[1];
    v12[0] = (unsigned __int16 *)v18;
    v13 = 0;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v10, v12) )
    {
      Prcb = KeGetPrcb(v10);
      PpmAllocatePerfCheck(Prcb + 33128);
    }
    PopExecuteOnTargetProcessors((__int64)v18, (__int64)PpmCheckProcessorInit, 0LL, 0LL);
  }
  PpmParkRegisterParking();
  FeatureBits = KeGetCurrentPrcb()->FeatureBits;
  if ( (FeatureBits & 0x8000000000LL) != 0 )
  {
    PpmAllowedActions |= 0x400u;
    v9 |= 0x400u;
    PpmUpdateProcessorPolicy(&v9, 0LL);
  }
  PpmCheckReInit(FeatureBits, v3);
  PpmCheckApplyParkConstraints();
  CurrentPrcb = KeGetCurrentPrcb();
  *(_DWORD *)&v17[1] = 0;
  v17[3] = 0;
  LODWORD(v11) = 0;
  if ( CurrentPrcb->PowerState.Hypervisor == ProcHypervisorPresent )
  {
    LOBYTE(CurrentPrcb) = HvlIsRootPowerSchedulerQosPresent();
    if ( (_BYTE)CurrentPrcb )
    {
      if ( !PpmPerfVmQosSupported )
      {
        PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
        v16[1] = (unsigned __int16 *)qword_140C113E8[0];
        v17[0] = 0;
        v16[0] = (unsigned __int16 *)PpmCheckRegistered;
        while ( !(unsigned int)KeEnumerateNextProcessor(&v11, v16) )
        {
          v6 = KeGetPrcb(v11);
          v7 = PpmPerfQosTransitionHysteresisOverride;
          if ( PpmPerfQosTransitionHysteresisOverride == -1 )
            v7 = PpmPerfQosTransitionHysteresis;
          *(_QWORD *)(v6 + 33256) = PpmConvertTime(v7, 1000000LL, 1000000LL * *(unsigned int *)(v6 + 68));
        }
        PpmPerfQosManageIdleProcessors = 0;
        PpmPerfVmQosSupported = 1;
        LOBYTE(CurrentPrcb) = PpmReinitializeHeteroEngine(1);
      }
    }
  }
  return (char)CurrentPrcb;
}
