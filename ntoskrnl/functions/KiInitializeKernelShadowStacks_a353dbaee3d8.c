__int64 __fastcall KiInitializeKernelShadowStacks(__int64 a1)
{
  struct _KPRCB *CurrentPrcb; // rdx
  unsigned int Number; // r9d
  __int64 result; // rax
  unsigned __int64 v4; // rax
  _QWORD *v5; // rax
  unsigned __int64 *v6; // r10
  __int64 v7; // r11
  unsigned __int64 v8; // rcx

  CurrentPrcb = KeGetCurrentPrcb();
  Number = CurrentPrcb->Number;
  if ( !Number && (*(_DWORD *)(*(_QWORD *)(a1 + 240) + 132LL) & 0x4000) != 0 )
  {
    v4 = __readcr4();
    if ( (v4 & 0x800000) != 0 )
    {
      LOBYTE(KiKernelCetEnabled) = 1;
      if ( (*(_DWORD *)(*(_QWORD *)(a1 + 240) + 132LL) & 0x40000) == 0 )
        goto LABEL_8;
      LOBYTE(KeKernelCetWrssEnabledScenarios) = KeKernelCetWrssEnabledScenarios | 1;
      LOBYTE(KiKernelCetAuditModeEnabled) = 1;
    }
  }
  if ( !(_BYTE)KiKernelCetEnabled )
    return 0LL;
LABEL_8:
  CurrentPrcb->FeatureBits |= 0x400000000000uLL;
  v5 = *(_QWORD **)(a1 + 240);
  v6 = (unsigned __int64 *)v5[466];
  v7 = v5[464];
  v8 = v5[465];
  if ( !Number )
    v8 -= 8LL;
  CurrentPrcb->TransitionShadowStack = v8;
  result = v7;
  CurrentPrcb->IstShadowStacksTable = v6;
  return result;
}
