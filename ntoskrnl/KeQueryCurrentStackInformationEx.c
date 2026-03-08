/*
 * XREFs of KeQueryCurrentStackInformationEx @ 0x140312A40
 * Callers:
 *     KeCheckStackAndTargetAddress @ 0x1402DC470 (KeCheckStackAndTargetAddress.c)
 *     KeQueryCurrentStackInformation @ 0x1402E1E00 (KeQueryCurrentStackInformation.c)
 *     RtlpGetStackLimitsEx @ 0x1402E6750 (RtlpGetStackLimitsEx.c)
 *     KasanWrapperRtlRestoreContext @ 0x1402EA9A0 (KasanWrapperRtlRestoreContext.c)
 *     RtlpGetStackLimits @ 0x1403129F0 (RtlpGetStackLimits.c)
 *     KiExpandKernelStackAndCalloutSwitchStack @ 0x140315700 (KiExpandKernelStackAndCalloutSwitchStack.c)
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x140317800 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     WheaIsAltContextAllocPossible @ 0x14060F930 (WheaIsAltContextAllocPossible.c)
 * Callees:
 *     KiRspInIstStack @ 0x1402EDCB0 (KiRspInIstStack.c)
 *     KeAreInterruptsEnabled @ 0x140312C60 (KeAreInterruptsEnabled.c)
 */

bool __fastcall KeQueryCurrentStackInformationEx(
        unsigned __int64 a1,
        char *a2,
        struct _KPRCB **a3,
        unsigned __int64 *a4)
{
  char *v6; // rbp
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KTHREAD *CurrentThread; // rbx
  struct _KPRCB *StackLimit; // r8
  unsigned __int64 v12; // rax
  struct _KPRCB *StackBase; // rcx
  bool result; // al
  char *IsrStack; // rax
  struct _KPRCB *v16; // rcx
  char *v17; // rax
  char *v18; // rcx
  char *v19; // rax
  char *v20; // rcx
  unsigned __int64 v21; // rdx

  v6 = a2;
  if ( !KiRecoveryInProgress && (KiBugCheckActive & 3) != 0 )
  {
    *(_DWORD *)a2 = 0;
    result = 1;
    *a4 = -1LL;
    *a3 = (struct _KPRCB *)0xFFFF800000000000LL;
    return result;
  }
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql >= 2u )
  {
    IsrStack = (char *)KeGetPcr()->Prcb.IsrStack;
    v16 = (struct _KPRCB *)(IsrStack - 24576);
    if ( (unsigned __int64)(IsrStack - 24576) <= a1 && a1 < (unsigned __int64)IsrStack )
    {
      *(_DWORD *)a2 = 6;
      *a4 = (unsigned __int64)IsrStack;
      result = 1;
      *a3 = v16;
      return result;
    }
    v17 = (char *)KeGetPcr()->Prcb.ExceptionStack + 80;
    v18 = v17 - 24576;
    if ( (unsigned __int64)(v17 - 24576) <= a1 && a1 < (unsigned __int64)v17 )
    {
      *(_DWORD *)a2 = 10;
      *a4 = (unsigned __int64)v17;
      result = 1;
      *a3 = (struct _KPRCB *)v18;
      return result;
    }
    goto LABEL_18;
  }
  if ( !(unsigned __int8)KeAreInterruptsEnabled(a1, a2) )
  {
LABEL_18:
    v19 = (char *)KeGetPcr()->Prcb.ExceptionStack + 80;
    CurrentPrcb = (struct _KPRCB *)(v19 - 24576);
    if ( (unsigned __int64)(v19 - 24576) <= a1 && a1 < (unsigned __int64)v19 )
    {
      *(_DWORD *)v6 = 10;
      *a4 = (unsigned __int64)v19;
      result = 1;
      *a3 = CurrentPrcb;
      return result;
    }
  }
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->InitialStack != (void *)KeGetPcr()->Prcb.RspBase )
  {
    *(_DWORD *)v6 = 5;
    result = 1;
    *a4 = -1LL;
    *a3 = (struct _KPRCB *)0xFFFF800000000000LL;
    return result;
  }
  if ( CurrentIrql >= 2u )
  {
    v20 = (char *)KeGetPcr()->Prcb.DpcStack + 80;
    a2 = &v20[-(unsigned int)KeKernelStackSize];
    if ( a1 < (unsigned __int64)v20 && (unsigned __int64)a2 <= a1 )
    {
      *(_DWORD *)v6 = 1;
      result = 1;
      *a4 = (unsigned __int64)v20;
      *a3 = (struct _KPRCB *)a2;
      return result;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    if ( CurrentPrcb == (struct _KPRCB *)KiDebuggerOwner )
    {
      *(_DWORD *)v6 = 7;
      result = 1;
      *a4 = -1LL;
      *a3 = (struct _KPRCB *)0xFFFF800000000000LL;
      return result;
    }
  }
  if ( (unsigned __int8)KeAreInterruptsEnabled(CurrentPrcb, a2) && KeGetCurrentIrql() < 0xFu )
    goto LABEL_9;
  if ( (unsigned int)KiRspInIstStack(3u, a1) )
  {
    *(_DWORD *)v6 = 8;
    result = 1;
    *a4 = -1LL;
    *a3 = (struct _KPRCB *)0xFFFF800000000000LL;
    return result;
  }
  if ( !(unsigned int)KiRspInIstStack(2u, v21) )
  {
LABEL_9:
    if ( (CurrentThread->MiscFlags & 0x1000) != 0 )
    {
      *(_DWORD *)v6 = 2;
    }
    else if ( CurrentThread->CallbackNestingLevel )
    {
      *(_DWORD *)v6 = 4;
    }
    else
    {
      *(_DWORD *)v6 = 3;
    }
    StackLimit = (struct _KPRCB *)CurrentThread->StackLimit;
    v12 = (unsigned __int64)StackLimit;
    StackBase = (struct _KPRCB *)CurrentThread->StackBase;
    *a4 = (unsigned __int64)StackBase;
    if ( StackLimit >= StackBase )
      v12 = (unsigned __int64)StackLimit;
    *a3 = StackLimit;
    return v12 <= a1 && a1 < *a4;
  }
  else
  {
    *(_DWORD *)v6 = 9;
    result = 1;
    *a4 = -1LL;
    *a3 = (struct _KPRCB *)0xFFFF800000000000LL;
  }
  return result;
}
