/*
 * XREFs of KiInitializeBootStructures @ 0x140A887E0
 * Callers:
 *     KiSystemStartup @ 0x140A84010 (KiSystemStartup.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140234B50 (KeAddProcessorAffinityEx.c)
 *     HalInitializeProcessor @ 0x14037DBF0 (HalInitializeProcessor.c)
 *     KiDetectTsx @ 0x14038002C (KiDetectTsx.c)
 *     HalInitializeBios @ 0x14039A4D0 (HalInitializeBios.c)
 *     KiDetermineRetpolineEnablement @ 0x1403ACCB4 (KiDetermineRetpolineEnablement.c)
 *     KasanInitSystem @ 0x1403B0E00 (KasanInitSystem.c)
 *     strstr @ 0x1403D3650 (strstr.c)
 *     atoi @ 0x1403D36E0 (atoi.c)
 *     KiSaveInitialProcessorControlState @ 0x140416230 (KiSaveInitialProcessorControlState.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KiEnableKvaShadowing @ 0x140A864CC (KiEnableKvaShadowing.c)
 *     ExInitPoolLookasidePointers @ 0x140A885BC (ExInitPoolLookasidePointers.c)
 *     KiGetProcessorSignature @ 0x140A88C44 (KiGetProcessorSignature.c)
 *     KiInitPrcb @ 0x140A88DD8 (KiInitPrcb.c)
 *     KiSetFeatureBits @ 0x140A8A714 (KiSetFeatureBits.c)
 *     KiSetProcessorSignature @ 0x140A8B504 (KiSetProcessorSignature.c)
 *     KiInitializeIdt @ 0x140A8C270 (KiInitializeIdt.c)
 *     InitializeBuildStrings @ 0x140B31CFC (InitializeBuildStrings.c)
 *     MmInitSystem @ 0x140B393A4 (MmInitSystem.c)
 *     InbvDriverInitialize @ 0x140B47614 (InbvDriverInitialize.c)
 *     CmInitBootFeatureConfigurations @ 0x140B5388C (CmInitBootFeatureConfigurations.c)
 *     ExRngInitializeSystem @ 0x140B6A0B8 (ExRngInitializeSystem.c)
 *     KiInitializeNxSupportDiscard @ 0x140B6FE18 (KiInitializeNxSupportDiscard.c)
 *     HvlEnableVsmCalls @ 0x140B7294C (HvlEnableVsmCalls.c)
 */

__int64 __fastcall KiInitializeBootStructures(__int64 a1)
{
  KPCR *Pcr; // r14
  _KPROCESS **v2; // rbx
  struct _KPRCB *CurrentPrcb; // rdi
  _QWORD *v4; // r15
  _KTHREAD **v5; // r11
  __int64 Number; // rbp
  _KTHREAD *v8; // rcx
  __int64 v9; // rax
  bool v10; // zf
  _KIDTENTRY64 *IdtBase; // r15
  unsigned int ProcessorSignature; // eax
  unsigned __int64 v13; // rdx
  unsigned int v14; // ecx
  __int64 v15; // r8
  unsigned __int64 v16; // rax
  unsigned int v17; // eax
  __int64 (__fastcall *v18)(); // rbx
  __int64 (__fastcall *v19)(); // rsi
  __int64 v21; // r10
  __int64 v22; // rax
  int v23; // edx
  const char *v24; // rcx
  char *v25; // rax
  int v26; // ecx
  char i; // cl
  unsigned int v28; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v29; // [rsp+68h] [rbp+10h] BYREF
  int v30; // [rsp+70h] [rbp+18h] BYREF

  Pcr = KeGetPcr();
  v2 = (_KPROCESS **)(a1 + 144);
  CurrentPrcb = KeGetCurrentPrcb();
  v4 = (_QWORD *)(a1 + 128);
  v29 = 0;
  v5 = (_KTHREAD **)(a1 + 152);
  v28 = 0;
  v30 = 0;
  *(_DWORD *)&Pcr->MajorVersion = 65537;
  *(_DWORD *)&CurrentPrcb->MinorVersion = 65537;
  CurrentPrcb->BuildType = 0;
  Number = Pcr->Prcb.Number;
  if ( !(_DWORD)Number )
  {
    InitializeBuildStrings(*(_QWORD *)(a1 + 240));
    v21 = *(_QWORD *)(a1 + 240);
    KiFeatureSettings = *(_DWORD *)(v21 + 3492);
    KiFeatureSimulations = (*(_DWORD *)(v21 + 132) >> 21) & 0x3F;
    *v2 = (_KPROCESS *)&KiInitialProcess;
    *v5 = (_KTHREAD *)&KiInitialThread;
    LODWORD(KeKernelStackSize) = *(_DWORD *)(a1 + 160);
    v22 = *v4 + 28672LL;
    CurrentPrcb->IsrStack = (void *)v22;
    v22 += 28592LL;
    *(_QWORD *)(v22 + 40) = &KiExceptionDispatchOnExceptionStackContinue;
    CurrentPrcb->ExceptionStack = (void *)v22;
    CurrentPrcb->LocalSharedReadyQueue = (_KSHARED_READY_QUEUE *)&KiInitialSharedReadyQueue;
  }
  CurrentPrcb->SharedReadyQueue = CurrentPrcb->LocalSharedReadyQueue;
  v8 = *v5;
  CurrentPrcb->NextThread = 0LL;
  CurrentPrcb->CurrentThread = v8;
  CurrentPrcb->IdleThread = v8;
  v8->ApcState.Process = *v2;
  v8->ApcState.ApcListHead[0].Blink = v8->ApcState.ApcListHead;
  v8->ApcState.ApcListHead[0].Flink = v8->ApcState.ApcListHead;
  if ( !(_DWORD)Number )
    CmInitBootFeatureConfigurations(a1);
  KiProcessorBlock[Number] = (__int64)CurrentPrcb;
  v9 = *v4 - 80LL;
  *(_QWORD *)(v9 + 40) = &KiPlatformSwapStacksAndCallReturn;
  v10 = CurrentPrcb->Context == 0LL;
  CurrentPrcb->DpcStack = (void *)v9;
  if ( v10 )
  {
    CurrentPrcb->ContextFlagsInit = 1048587;
    CurrentPrcb->Context = &CurrentPrcb->ProcessorState.ContextFrame;
  }
  IdtBase = Pcr->IdtBase;
  ProcessorSignature = KiGetProcessorSignature(&CurrentPrcb->CpuVendor, &v29, &v28, &v30);
  v14 = v29;
  v15 = ProcessorSignature;
  LOWORD(ProcessorSignature) = v30 | ((_WORD)v28 << 8);
  v10 = CurrentPrcb->CpuVendor == 2;
  CurrentPrcb->CpuID = 1;
  CurrentPrcb->CpuType = v14;
  CurrentPrcb->CpuStep = ProcessorSignature;
  if ( v10 && (v14 >= 0xF || v14 == 6 && v28 > 0xD) )
  {
    v16 = __readmsr(0x1A0u) & 0xFFFFFFFFFFBFFFFFuLL;
    v13 = HIDWORD(v16);
    __writemsr(0x1A0u, v16);
  }
  if ( !(_DWORD)Number )
  {
    KiSetProcessorSignature(CurrentPrcb, (unsigned int)v15);
    IdtBase[263].Alignment = (unsigned __int64)Pcr;
    HvlEnableVsmCalls(a1);
    ExRngInitializeSystem();
    KiDetermineRetpolineEnablement(a1);
    KasanInitSystem(a1);
    MmInitSystem(0xFFFFFFFFLL, a1);
    v23 = *(_DWORD *)(*(_QWORD *)(a1 + 240) + 132LL);
    if ( (v23 & 8) != 0 )
      KiBootDebuggerActive = 1;
    if ( (v23 & 0x100) != 0 )
      KiSystemCallSelector = 1;
    KiInitializeIdt(IdtBase, 0LL);
    HalInitializeBios(-1, (_QWORD *)a1);
    InbvDriverInitialize(0xFFFFFFFFLL, a1, 0LL);
    v24 = *(const char **)(a1 + 216);
    if ( v24 )
    {
      v25 = strstr(v24, "GROUPSIZE");
      if ( v25 )
      {
        for ( i = *v25; *v25; i = *++v25 )
        {
          if ( i == 32 )
            break;
          if ( (unsigned __int8)(i - 48) <= 9u )
            break;
        }
        KiMaximumGroupSize = atoi(v25);
        if ( (unsigned int)(KiMaximumGroupSize - 1) > 0x3F )
          KiMaximumGroupSize = 64;
      }
    }
  }
  *((_WORD *)Pcr->NtTib.StackBase + 51) = 104;
  if ( !KeGetPcr()->Prcb.Number )
    KiInitializeNxSupportDiscard(104LL, v13, v15);
  HalInitializeProcessor(Number, a1);
  KiSetFeatureBits(CurrentPrcb);
  v17 = CurrentPrcb->Number;
  v18 = KiSystemCall32;
  v19 = (__int64 (__fastcall *)())KiSystemCall64;
  if ( !v17 )
  {
    KiEnableKvaShadowing((__int64)CurrentPrcb);
    v17 = CurrentPrcb->Number;
  }
  if ( KiKvaShadow )
  {
    v18 = KiSystemCall32Shadow;
    v19 = KiSystemCall64Shadow;
  }
  if ( !v17 )
    KiTsxSupportedAtBoot = KiDetectTsx();
  if ( CurrentPrcb->MsrIa32TsxCtrl )
    __writemsr(0x122u, CurrentPrcb->MsrIa32TsxCtrl);
  if ( !CurrentPrcb->Number )
  {
    v26 = KiDebugTrapIndex;
    qword_140C025A0 = (__int64)KiDebugTraps;
    qword_140C025A8 = 64LL;
    KiDebugTraps[KiDebugTrapIndex] = v19;
    KiDebugTraps[++v26] = v18;
    KiDebugTrapIndex = v26 + 1;
  }
  __writemsr(0xC0000081, 0x23001000000000uLL);
  __writemsr(0xC0000083, (unsigned __int64)v18);
  __writemsr(0xC0000082, (unsigned __int64)v19);
  __writemsr(0xC0000084, 0x4700uLL);
  KiInitPrcb(CurrentPrcb, (unsigned int)Number);
  ExInitPoolLookasidePointers();
  if ( !(_DWORD)Number )
  {
    LODWORD(KeNumberProcessors_0) = 1;
    KeNumberProcessorsGroup0[0] = 1;
    KeActiveProcessors[0] = 2097153;
    memset(&unk_140D1EFE4, 0, 0x104uLL);
    KeAddProcessorAffinityEx((unsigned __int16 *)KeActiveProcessors, 0);
  }
  return KiSaveInitialProcessorControlState((__int64)&CurrentPrcb->ProcessorState);
}
