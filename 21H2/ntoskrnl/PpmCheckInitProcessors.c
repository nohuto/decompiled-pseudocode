/*
 * XREFs of PpmCheckInitProcessors @ 0x140849690
 * Callers:
 *     PpmReapplyPerfPolicy @ 0x140849940 (PpmReapplyPerfPolicy.c)
 *     PopNewProcessorCallback @ 0x1409893F0 (PopNewProcessorCallback.c)
 *     PoInitSystem @ 0x140B026CC (PoInitSystem.c)
 * Callees:
 *     PpmReleaseLock @ 0x140224C00 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x140224E90 (PpmAcquireLock.c)
 *     KeIsEmptyAffinityEx @ 0x140292F90 (KeIsEmptyAffinityEx.c)
 *     PpmConvertTime @ 0x14029394C (PpmConvertTime.c)
 *     PopExecuteOnTargetProcessors @ 0x140293A88 (PopExecuteOnTargetProcessors.c)
 *     KeEnumerateNextProcessor @ 0x140294050 (KeEnumerateNextProcessor.c)
 *     KiOrAffinityEx @ 0x1402FEC10 (KiOrAffinityEx.c)
 *     KiSubtractAffinityEx @ 0x1402FEDA0 (KiSubtractAffinityEx.c)
 *     KeGetPrcb @ 0x140348800 (KeGetPrcb.c)
 *     PpmParkRegisterParking @ 0x1403CE6F8 (PpmParkRegisterParking.c)
 *     PpmCheckApplyParkConstraints @ 0x1403CF1A0 (PpmCheckApplyParkConstraints.c)
 *     KeQueryActiveProcessorAffinity2 @ 0x1403CF350 (KeQueryActiveProcessorAffinity2.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     HvlIsRootPowerSchedulerQosPresent @ 0x140543480 (HvlIsRootPowerSchedulerQosPresent.c)
 *     PpmCheckReInit @ 0x14081A3AC (PpmCheckReInit.c)
 *     PpmUpdateProcessorPolicy @ 0x14081ACB4 (PpmUpdateProcessorPolicy.c)
 *     PpmReinitializeHeteroEngine @ 0x140848BE8 (PpmReinitializeHeteroEngine.c)
 *     PpmAllocatePerfCheck @ 0x14084983C (PpmAllocatePerfCheck.c)
 */

void __fastcall PpmCheckInitProcessors(int a1)
{
  __int64 Prcb; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // rax
  unsigned int v6; // edx
  unsigned int v7; // [rsp+20h] [rbp-E0h] BYREF
  int v8; // [rsp+24h] [rbp-DCh] BYREF
  unsigned __int16 *v9[2]; // [rsp+28h] [rbp-D8h] BYREF
  __int16 v10; // [rsp+38h] [rbp-C8h]
  int v11; // [rsp+3Ah] [rbp-C6h]
  __int16 v12; // [rsp+3Eh] [rbp-C2h]
  unsigned __int16 *v13[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v14; // [rsp+50h] [rbp-B0h]
  int v15; // [rsp+52h] [rbp-AEh]
  __int16 v16; // [rsp+56h] [rbp-AAh]
  _QWORD v17[34]; // [rsp+60h] [rbp-A0h] BYREF

  v11 = 0;
  v12 = 0;
  v7 = 0;
  v8 = 0;
  LODWORD(v17[0]) = 2097153;
  memset((char *)v17 + 4, 0, 0x104uLL);
  if ( a1
    || (PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock),
        KeQueryActiveProcessorAffinity2((__int64)v17),
        (unsigned __int8)KiSubtractAffinityEx(v17, (char *)PpmCheckRegistered, v17, WORD1(v17[0]))) )
  {
    KiOrAffinityEx((char *)PpmCheckRegistered, v17, PpmCheckRegistered, word_140C0B8E2);
    if ( !(unsigned int)KeIsEmptyAffinityEx(v17) )
    {
      v9[1] = (unsigned __int16 *)v17[1];
      v9[0] = (unsigned __int16 *)v17;
      v10 = 0;
      while ( !(unsigned int)KeEnumerateNextProcessor(&v7, v9) )
      {
        Prcb = KeGetPrcb(v7);
        PpmAllocatePerfCheck(Prcb + 33968, v3, v4);
      }
      PopExecuteOnTargetProcessors((__int64)v17, (__int64)PpmCheckProcessorInit, 0LL, 0LL);
    }
    PpmParkRegisterParking();
    if ( _bittest64((const signed __int64 *)&KeGetCurrentPrcb()->FeatureBits, 0x27u) )
    {
      PpmAllowedActions |= 0x400u;
      v8 |= 0x400u;
      PpmUpdateProcessorPolicy(&v8, 0LL);
    }
    PpmCheckReInit();
    PpmCheckApplyParkConstraints();
    v15 = 0;
    v16 = 0;
    v7 = 0;
    if ( KeGetCurrentPrcb()->PowerState.Hypervisor == ProcHypervisorPresent
      && HvlIsRootPowerSchedulerQosPresent()
      && !PpmPerfVmQosSupported )
    {
      PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
      v13[1] = (unsigned __int16 *)qword_140C0B8E8[0];
      v14 = 0;
      v13[0] = (unsigned __int16 *)PpmCheckRegistered;
      while ( !(unsigned int)KeEnumerateNextProcessor(&v7, v13) )
      {
        v5 = KeGetPrcb(v7);
        v6 = PpmPerfQosTransitionHysteresisOverride;
        if ( PpmPerfQosTransitionHysteresisOverride == -1 )
          v6 = PpmPerfQosTransitionHysteresis;
        *(_QWORD *)(v5 + 34104) = PpmConvertTime(v6, 0xF4240uLL, 1000000LL * *(unsigned int *)(v5 + 68));
      }
      PpmPerfQosManageIdleProcessors = 0;
      PpmPerfVmQosSupported = 1;
      PpmReinitializeHeteroEngine(1);
    }
  }
  else
  {
    PpmReleaseLock(&PpmPerfPolicyLock);
  }
}
