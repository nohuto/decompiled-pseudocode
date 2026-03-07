ULONG_PTR __fastcall KiOptimizeSpecCtrlSettingsWorker(ULONG_PTR Argument, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 CoreProcessorSet; // rdx
  __int64 v7; // rcx
  unsigned __int64 v8; // r10
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rax
  __int64 v12; // rcx
  signed __int32 v13; // eax
  unsigned int v14; // edi
  unsigned int v15; // eax
  unsigned __int16 v16; // ax
  __int64 v17; // rcx
  signed __int32 v18; // eax
  unsigned int v19; // edi
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rax
  char v22; // cl
  unsigned __int64 v23; // rax
  __int64 v24; // rcx
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rax
  signed __int32 v28; // eax
  unsigned int v29; // edi
  unsigned __int16 BpbKernelSpecCtrl; // ax
  unsigned int v31; // eax
  unsigned __int64 v32; // rax
  int v34; // [rsp+70h] [rbp+8h] BYREF
  int v35; // [rsp+78h] [rbp+10h] BYREF
  int v36; // [rsp+80h] [rbp+18h]
  int v37; // [rsp+88h] [rbp+20h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  CoreProcessorSet = CurrentPrcb->CoreProcessorSet;
  if ( ((CoreProcessorSet - 1) & CoreProcessorSet) != 0 )
    _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 2uLL);
  if ( HvlHypervisorConnected && (unsigned __int8)((__int64 (*)(void))HvlIsCoreSharingPossible)() )
    _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 2uLL);
  v7 = 0x10000000000LL;
  if ( (KiFeatureSettings & 0x80u) != 0 )
    _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x10000000000uLL);
  if ( CurrentPrcb->CpuVendor == 1 )
    KiDetectAmdNonArchSsbdSupport(CurrentPrcb, &KiSpeculationFeatures);
  v8 = 0x4000000000LL;
  v9 = 256LL;
  if ( (KiSpeculationFeatures & 0x80) != 0 && (KiSpeculationFeatures & 0x100) == 0 )
  {
    if ( (KiFeatureSettings & 8) != 0 )
      goto LABEL_16;
    if ( (KiFeatureSettings & 0x10) == 0 )
      goto LABEL_17;
    if ( KiSsbdMsr != 72 )
LABEL_16:
      _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x4000000000uLL);
    else
      _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x8000000000uLL);
  }
LABEL_17:
  if ( (KiSpeculationFeatures & 4) == 0 )
    _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x800000000uLL);
  if ( (KiFeatureSettings & 4) != 0 )
  {
    _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x400000000uLL);
  }
  else if ( (KiFeatureSettings & 1) != 0 )
  {
    _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x400000000uLL);
    if ( HvlHypervisorConnected )
    {
      if ( (HvlpFlags & 2) != 0
        && (unsigned __int8)HvlIsCoreSharingPossible(v7, CoreProcessorSet, 256LL)
        && (KiSpeculationFeatures & 0x40) != 0 )
      {
        CurrentPrcb->BpbKernelSpecCtrl = 2;
        CurrentPrcb->BpbUserSpecCtrl = 2;
        CurrentPrcb->BpbRetpolineExitSpecCtrl = 2;
      }
    }
  }
  v10 = 0x8000000000000LL;
  if ( (KiSpeculationFeatures & 0x800000) != 0 )
  {
    if ( !(unsigned int)KiIsRfdsMitigationSupported(0x8000000000000LL, &KiSpeculationFeatures, v9) )
    {
      v11 = 0x4000000000000LL;
LABEL_32:
      _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, v11);
      goto LABEL_35;
    }
    if ( !(unsigned int)KiIsRfdsMitigationDesired() )
    {
      v11 = 0x2000000000000LL;
      goto LABEL_32;
    }
    if ( !KiKvaShadow )
      _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, v10);
  }
LABEL_35:
  if ( ((unsigned __int64)KiSpeculationFeatures & v10) != 0 )
  {
    CurrentPrcb->BpbState |= v9;
    CurrentPrcb->VerwSelector = 24;
  }
  v12 = 0x80000000LL;
  if ( Argument )
  {
    v13 = _InterlockedDecrement((volatile signed __int32 *)Argument);
    v14 = ~v13 & 0x80000000;
    if ( (v13 & 0x7FFFFFFF) != 0 )
    {
      v15 = *(_DWORD *)Argument & 0x80000000;
      v34 = 0;
      if ( v15 != v14 )
      {
        do
          KeYieldProcessorEx(&v34);
        while ( (*(_DWORD *)Argument & 0x80000000) != v14 );
        v8 = 0x4000000000LL;
      }
    }
    else
    {
      *(_DWORD *)Argument = *(_DWORD *)(Argument + 4) | v14;
    }
  }
  if ( (KiSpeculationFeatures & 0x400000000LL) != 0 || (KiSpeculationFeatures & 0x800000000LL) != 0 )
  {
    if ( (KiSpeculationFeatures & 0x8000000000LL) != 0 )
    {
      _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, v8);
      _InterlockedAnd64((volatile signed __int64 *)&KiSpeculationFeatures, 0xFFFFFF7FFFFFFFFFuLL);
    }
    if ( ((unsigned __int64)KiSpeculationFeatures & v8) != 0 )
    {
      BpbKernelSpecCtrl = CurrentPrcb->BpbKernelSpecCtrl;
      if ( KiSsbdMsr == 72 )
        BpbKernelSpecCtrl |= 4u;
      CurrentPrcb->BpbKernelSpecCtrl = BpbKernelSpecCtrl;
      CurrentPrcb->BpbUserSpecCtrl = BpbKernelSpecCtrl;
    }
  }
  else
  {
    _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x1000000000uLL);
    CurrentPrcb->BpbFeatures |= 2u;
    a4 = 1024LL;
    if ( (KiSpeculationFeatures & 1) == 0 )
      goto LABEL_83;
    v12 = 1LL;
    if ( (KiSpeculationFeatures & 0x4000) != 0 )
      v12 = 3LL;
    CurrentPrcb->BpbKernelSpecCtrl = v12;
    CurrentPrcb->BpbUserSpecCtrl = v12;
    CurrentPrcb->BpbRetpolineExitSpecCtrl = v12;
    if ( ((unsigned __int64)KiSpeculationFeatures & v8) != 0 || (KiSpeculationFeatures & 0x8000000000LL) != 0 )
    {
      v16 = CurrentPrcb->BpbKernelSpecCtrl;
      if ( KiSsbdMsr == 72 )
        v16 |= 4u;
      CurrentPrcb->BpbKernelSpecCtrl = v16;
      CurrentPrcb->BpbUserSpecCtrl = v16;
      CurrentPrcb->BpbRetpolineExitSpecCtrl = v16;
    }
    CurrentPrcb->BpbNmiSpecCtrl = 1;
    if ( (((unsigned __int64)KiSpeculationFeatures & v8) != 0 || (KiSpeculationFeatures & 0x8000000000LL) != 0)
      && KiSsbdMsr == 72 )
    {
      CurrentPrcb->BpbNmiSpecCtrl |= 4u;
    }
    if ( (KiSpeculationFeatures & 0x4000) != 0 )
      CurrentPrcb->BpbNmiSpecCtrl |= 2u;
    if ( (KiSpeculationFeatures & 0x2000) != 0 )
      CurrentPrcb->BpbNmiSpecCtrl |= 0x80u;
    if ( (KiSpeculationFeatures & 0x10000) != 0 )
    {
      if ( (KiFeatureSettings & 0x800000) != 0 )
      {
        if ( BYTE12(KiSpeculationFeatures) )
        {
          _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x80000000000000uLL);
          CurrentPrcb->BpbFeatures ^= (CurrentPrcb->BpbFeatures ^ (16 * BYTE12(KiSpeculationFeatures))) & 0x30;
        }
        else if ( (KiSpeculationFeatures & 0x20000) != 0 )
        {
          _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x40000000000000uLL);
          CurrentPrcb->BpbKernelSpecCtrl |= 0x400u;
          CurrentPrcb->BpbRetpolineExitSpecCtrl |= 0x400u;
          CurrentPrcb->BpbUserSpecCtrl |= 0x400u;
          CurrentPrcb->BpbNmiSpecCtrl |= 0x400u;
        }
        else
        {
          _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x20000000000000uLL);
        }
      }
      else
      {
        _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x10000000000000uLL);
      }
    }
    if ( (KiSpeculationFeatures & 0x8000000000LL) != 0 )
    {
LABEL_83:
      if ( (KiSpeculationFeatures & 0x10) != 0 )
      {
        CurrentPrcb->BpbNmiSpecCtrl = 1;
      }
      else if ( (KiSpeculationFeatures & 0x40) != 0 && (KiSpeculationFeatures & 2) != 0 )
      {
        CurrentPrcb->BpbNmiSpecCtrl = 2;
      }
      if ( (KiSpeculationFeatures & 0x4000) != 0 )
        CurrentPrcb->BpbNmiSpecCtrl |= 2u;
      if ( (KiSpeculationFeatures & 0x2000) != 0 )
        CurrentPrcb->BpbNmiSpecCtrl |= 0x80u;
      if ( (((unsigned __int64)KiSpeculationFeatures & v8) != 0 || (KiSpeculationFeatures & 0x8000000000LL) != 0)
        && KiSsbdMsr == 72 )
      {
        CurrentPrcb->BpbNmiSpecCtrl |= 4u;
      }
      if ( (KiSpeculationFeatures & 1) == 0 )
      {
        if ( (unsigned int)Feature_Servicing_AmdDisableEarlyIBPB__private_IsEnabledDeviceUsage(
                             v12,
                             CoreProcessorSet,
                             v9,
                             1024LL)
          && CurrentPrcb->CpuVendor == 1 )
        {
          _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x100000000000000uLL);
        }
        if ( Argument )
        {
          v18 = _InterlockedDecrement((volatile signed __int32 *)Argument);
          v19 = ~v18 & 0x80000000;
          if ( (v18 & 0x7FFFFFFF) != 0 )
          {
            v35 = 0;
            while ( (*(_DWORD *)Argument & 0x80000000) != v19 )
              KeYieldProcessorEx(&v35);
          }
          else
          {
            *(_DWORD *)Argument = *(_DWORD *)(Argument + 4) | v19;
          }
        }
        if ( (KiSpeculationFeatures & 0x20000000000LL) != 0 )
        {
          CurrentPrcb->BpbRetpolineState |= 4u;
          KeExitRetpoline();
        }
        if ( (KiSpeculationFeatures & 2) != 0
          && (KiSpeculationFeatures & 0x4000) == 0
          && !HvlHypervisorConnected
          && ((KiSpeculationFeatures & 0x10) != 0 || (KiSpeculationFeatures & 0x40) != 0) )
        {
          _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x200000000uLL);
          CurrentPrcb->BpbFeatures |= 1u;
        }
        a4 = 0LL;
        if ( (KiSpeculationFeatures & 2) != 0
          && (KiSpeculationFeatures & 0x40) != 0
          && (KiSpeculationFeatures & 0x10) != 0
          && (KiSpeculationFeatures & 0x4000) == 0
          && (KiSpeculationFeatures & 0x10000000000LL) == 0 )
        {
          v9 = CurrentPrcb->CoreProcessorSet;
          v20 = v9 - ((v9 >> 1) & 0x5555555555555555LL);
          CoreProcessorSet = v20 & 0x3333333333333333LL;
          v21 = ((v20 & 0x3333333333333333LL)
               + ((v20 >> 2) & 0x3333333333333333LL)
               + (((v20 & 0x3333333333333333LL) + ((v20 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL;
          v17 = 0x101010101010101LL;
          if ( (0x101010101010101LL * v21) >> 56 == 2
            && (!HvlHypervisorConnected
             || !(unsigned __int8)HvlIsCoreSharingPossible(0x101010101010101LL, CoreProcessorSet, v9)
             || (HvlpFlags & 2) != 0 && (unsigned __int8)HvlIsStibpPairingRecommended()) )
          {
            v22 = CurrentPrcb->GroupIndex + 1;
            _BitScanForward64(&v23, __ROR8__(v9, v22));
            v36 = v23;
            CurrentPrcb->PairPrcb = (_KPRCB *)KeGetPrcb(KiProcessorNumberToIndexMappingTable[64 * CurrentPrcb->Group
                                                                                           + (((unsigned __int8)v23 + v22) & 0x3F)]);
            a4 = 1LL;
            CurrentPrcb->PairRegister = 6;
          }
        }
        if ( (KiFeatureSettings & 0x20) != 0 && (KiSpeculationFeatures & 2) != 0 && (KiSpeculationFeatures & 0x40) != 0
          || (KiSpeculationFeatures & 2) != 0
          && (KiSpeculationFeatures & 0x40) != 0
          && !(_DWORD)a4
          && (KiSpeculationFeatures & 0x10000000000LL) == 0
          && HvlHypervisorConnected
          && (unsigned __int8)HvlIsCoreSharingPossible(v17, CoreProcessorSet, v9) )
        {
          _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x100000000uLL);
        }
        if ( (KiSpeculationFeatures & 2) != 0
          && (KiSpeculationFeatures & 0x40) != 0
          && (KiSpeculationFeatures & 0x4000) != 0
          && !(_DWORD)a4
          && (KiSpeculationFeatures & 0x10000000000LL) == 0 )
        {
          _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x80000000000uLL);
        }
        if ( CurrentPrcb->CpuVendor == 1 && (KiSpeculationFeatures & 0x10) == 0 && (KiFeatureSettings & 0x40) == 0 )
        {
          _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x2000000000uLL);
LABEL_132:
          v8 = 0x4000000000LL;
          goto LABEL_167;
        }
        if ( (unsigned int)KiIsBranchConfusionPresent(CurrentPrcb) )
        {
          _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x8000uLL);
          if ( (unsigned int)KiIsBranchConfusionMitigationDesired(CurrentPrcb, &KiSpeculationFeatures) )
          {
            if ( (unsigned int)KiIsBranchConfusionMitigationSupported(CurrentPrcb, &KiSpeculationFeatures) )
              goto LABEL_139;
            v25 = 0x200000000000LL;
          }
          else
          {
            v25 = 0x100000000000LL;
          }
          _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, v25);
        }
LABEL_139:
        if ( (KiSpeculationFeatures & 0x200000) == 0 )
          goto LABEL_145;
        if ( (unsigned int)KiIsSrsoMitigationSupported(v24, &KiSpeculationFeatures) )
        {
          if ( (unsigned int)KiIsSrsoMitigationDesired(CurrentPrcb, &KiSpeculationFeatures) )
            goto LABEL_145;
          v26 = 0x800000000000LL;
        }
        else
        {
          v26 = 0x1000000000000LL;
        }
        _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, v26);
LABEL_145:
        if ( (KiSpeculationFeatures & 0x10000) != 0 )
        {
          if ( (KiFeatureSettings & 0x800000) == 0 )
          {
            v27 = 0x10000000000000LL;
LABEL_153:
            _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, v27);
            goto LABEL_154;
          }
          if ( BYTE12(KiSpeculationFeatures) )
          {
            _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x80000000000000uLL);
            CurrentPrcb->BpbFeatures ^= (CurrentPrcb->BpbFeatures ^ (16 * BYTE12(KiSpeculationFeatures))) & 0x30;
          }
          else
          {
            if ( (KiSpeculationFeatures & 0x20000) == 0 )
            {
              v27 = 0x20000000000000LL;
              goto LABEL_153;
            }
            _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x40000000000000uLL);
            CurrentPrcb->BpbKernelSpecCtrl |= 0x400u;
            CurrentPrcb->BpbRetpolineExitSpecCtrl |= 0x400u;
            CurrentPrcb->BpbUserSpecCtrl |= 0x400u;
            CurrentPrcb->BpbNmiSpecCtrl |= 0x400u;
          }
        }
LABEL_154:
        if ( Argument )
        {
          v28 = _InterlockedDecrement((volatile signed __int32 *)Argument);
          v29 = ~v28 & 0x80000000;
          if ( (v28 & 0x7FFFFFFF) != 0 )
          {
            v37 = 0;
            while ( (*(_DWORD *)Argument & 0x80000000) != v29 )
              KeYieldProcessorEx(&v37);
          }
          else
          {
            *(_DWORD *)Argument = *(_DWORD *)(Argument + 4) | v29;
          }
        }
        KiUpdateSpeculationControl(KeGetCurrentThread()->ApcState.Process);
        goto LABEL_132;
      }
    }
  }
LABEL_167:
  v31 = CurrentPrcb->BpbKernelSpecCtrl;
  CurrentPrcb->BpbCurrentSpecCtrl = v31;
  if ( (_WORD)v31 )
  {
    CoreProcessorSet = 0LL;
    __writemsr(0x48u, v31);
  }
  if ( ((unsigned __int64)KiSpeculationFeatures & v8) != 0 && KiSsbdMsr != 72 )
  {
    v32 = KiSsbdBit | __readmsr(KiSsbdMsr);
    CoreProcessorSet = HIDWORD(v32);
    __writemsr(KiSsbdMsr, v32);
  }
  KiSetVirtualMitigationControl(CurrentPrcb, CoreProcessorSet, v9, a4);
  return 0LL;
}
