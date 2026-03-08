/*
 * XREFs of PpmCheckInitProcessors @ 0x140827DA4
 * Callers:
 *     PpmReapplyPerfPolicy @ 0x1408261A0 (PpmReapplyPerfPolicy.c)
 *     PopNewProcessorCallback @ 0x14097D420 (PopNewProcessorCallback.c)
 *     PoInitSystem @ 0x140B45CAC (PoInitSystem.c)
 * Callees:
 *     KiOrAffinityEx @ 0x14022B190 (KiOrAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x140234A60 (KeEnumerateNextProcessor.c)
 *     KeGetPrcb @ 0x140234AE0 (KeGetPrcb.c)
 *     PpmConvertTime @ 0x140235D70 (PpmConvertTime.c)
 *     PopExecuteOnTargetProcessors @ 0x140236D20 (PopExecuteOnTargetProcessors.c)
 *     KeIsEmptyAffinityEx @ 0x140237C30 (KeIsEmptyAffinityEx.c)
 *     PpmReleaseLock @ 0x1402D1F40 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x1402D1F90 (PpmAcquireLock.c)
 *     KiSubtractAffinityEx @ 0x1402D4CBC (KiSubtractAffinityEx.c)
 *     PpmParkRegisterParking @ 0x14038D880 (PpmParkRegisterParking.c)
 *     PpmCheckApplyParkConstraints @ 0x14038F03C (PpmCheckApplyParkConstraints.c)
 *     KeQueryActiveProcessorAffinity2 @ 0x14038F750 (KeQueryActiveProcessorAffinity2.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     HvlIsRootPowerSchedulerQosPresent @ 0x14053D500 (HvlIsRootPowerSchedulerQosPresent.c)
 *     PpmUpdateProcessorPolicy @ 0x140826290 (PpmUpdateProcessorPolicy.c)
 *     PpmCheckReInit @ 0x1408265CC (PpmCheckReInit.c)
 *     PpmAllocatePerfCheck @ 0x140828AF4 (PpmAllocatePerfCheck.c)
 *     PpmReinitializeHeteroEngine @ 0x140828C88 (PpmReinitializeHeteroEngine.c)
 */

void __fastcall PpmCheckInitProcessors(int a1, int a2)
{
  __int64 Prcb; // rax
  __int64 v5; // rax
  unsigned int v6; // edx
  unsigned __int64 v7; // rax
  __int64 v8; // r11
  __int64 v9; // rcx
  unsigned int v10; // [rsp+20h] [rbp-E0h] BYREF
  unsigned int v11; // [rsp+24h] [rbp-DCh] BYREF
  unsigned __int16 *v12[2]; // [rsp+28h] [rbp-D8h] BYREF
  __int16 v13; // [rsp+38h] [rbp-C8h]
  int v14; // [rsp+3Ah] [rbp-C6h]
  __int16 v15; // [rsp+3Eh] [rbp-C2h]
  unsigned __int16 *v16[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v17; // [rsp+50h] [rbp-B0h]
  int v18; // [rsp+52h] [rbp-AEh]
  __int16 v19; // [rsp+56h] [rbp-AAh]
  _QWORD v20[34]; // [rsp+60h] [rbp-A0h] BYREF

  v14 = 0;
  v15 = 0;
  v11 = 0;
  v10 = 0;
  LODWORD(v20[0]) = 2097153;
  memset((char *)v20 + 4, 0, 0x104uLL);
  if ( a1
    || (PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock),
        KeQueryActiveProcessorAffinity2((__int64)v20),
        (unsigned __int8)KiSubtractAffinityEx((unsigned __int16 *)v20, (char *)&PpmCheckRegistered, v20, WORD1(v20[0]))) )
  {
    KiOrAffinityEx((char *)&PpmCheckRegistered, v20, &PpmCheckRegistered, word_140C0BD72);
    if ( !(unsigned int)KeIsEmptyAffinityEx(v20) )
    {
      v12[1] = (unsigned __int16 *)v20[1];
      v12[0] = (unsigned __int16 *)v20;
      v13 = 0;
      while ( !(unsigned int)KeEnumerateNextProcessor(&v11, v12) )
      {
        Prcb = KeGetPrcb(v11);
        PpmAllocatePerfCheck(Prcb + 33968);
      }
      PopExecuteOnTargetProcessors((__int64)v20, (__int64)PpmCheckProcessorInit, 0LL, 0LL);
    }
    if ( !(unsigned int)KeIsEmptyAffinityEx(v20) || a2 )
      PpmParkRegisterParking();
    if ( _bittest64((const signed __int64 *)&KeGetCurrentPrcb()->FeatureBits, 0x27u) )
    {
      PpmAllowedActions |= 0x400u;
      v10 |= 0x400u;
      PpmUpdateProcessorPolicy(&v10, 0LL);
    }
    PpmCheckReInit();
    PpmCheckApplyParkConstraints();
    v18 = 0;
    v19 = 0;
    v10 = 0;
    if ( KeGetCurrentPrcb()->PowerState.Hypervisor == ProcHypervisorPresent
      && HvlIsRootPowerSchedulerQosPresent()
      && !PpmPerfVmQosSupported )
    {
      PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
      v16[1] = (unsigned __int16 *)qword_140C0BD78[0];
      v17 = 0;
      v16[0] = (unsigned __int16 *)&PpmCheckRegistered;
      while ( !(unsigned int)KeEnumerateNextProcessor(&v10, v16) )
      {
        v5 = KeGetPrcb(v10);
        v6 = PpmPerfQosTransitionHysteresisOverride;
        if ( PpmPerfQosTransitionHysteresisOverride == -1 )
          v6 = PpmPerfQosTransitionHysteresis;
        v7 = PpmConvertTime(v6, 0xF4240uLL, 1000000LL * *(unsigned int *)(v5 + 68));
        *(_QWORD *)(v8 + 34104) = v7;
      }
      PpmPerfQosManageIdleProcessors = 0;
      LOBYTE(v9) = 1;
      PpmPerfVmQosSupported = 1;
      PpmReinitializeHeteroEngine(v9, 0LL);
    }
  }
  else
  {
    PpmReleaseLock(&PpmPerfPolicyLock);
  }
}
