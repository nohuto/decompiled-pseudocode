/*
 * XREFs of KdpReport @ 0x140361A88
 * Callers:
 *     KdpTrap @ 0x140AAD1CC (KdpTrap.c)
 * Callees:
 *     KiRestoreProcessorControlState @ 0x140416280 (KiRestoreProcessorControlState.c)
 *     KiSaveProcessorControlState @ 0x140416350 (KiSaveProcessorControlState.c)
 *     KdExitDebugger @ 0x140AAD2D0 (KdExitDebugger.c)
 *     KdEnterDebugger @ 0x140AAD40C (KdEnterDebugger.c)
 *     KdpCopyContext @ 0x140AAD658 (KdpCopyContext.c)
 *     KdpReportExceptionStateChange @ 0x140AAE63C (KdpReportExceptionStateChange.c)
 */

char __fastcall KdpReport(__int64 a1, __int64 a2, int *a3, __int64 a4, int a5, char a6)
{
  int v6; // r10d
  char v9; // di
  char result; // al
  char v11; // al
  struct _KPRCB *CurrentPrcb; // rbx
  char v13; // r15
  __int64 v14; // r8
  char v15; // al
  int v16; // edi
  char v17; // r14
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rax

  v6 = *a3;
  if ( *a3 == -2147483645
    || v6 == -1073740768
    || v6 == -2147483644
    || (unsigned int)(v6 - 1073741854) <= 1
    || (NtGlobalFlag & 1) != 0 )
  {
    v9 = a6;
    if ( !a6 && ((unsigned int)v6 <= 0x4000001D || v6 >= 1073741856 || v6 == -1073741769) )
      return 0;
  }
  else
  {
    v9 = a6;
    if ( !a6 )
      return 0;
  }
  v11 = KdEnterDebugger();
  CurrentPrcb = KeGetCurrentPrcb();
  v13 = v11;
  KdpCopyContext(CurrentPrcb->Context, CurrentPrcb->ContextFlagsInit & *(_DWORD *)(a4 + 48), a4);
  KiSaveProcessorControlState(&CurrentPrcb->ProcessorState);
  LOBYTE(v14) = v9;
  v15 = KdpReportExceptionStateChange(a3, CurrentPrcb->Context, v14);
  v16 = *(_DWORD *)(a4 + 48);
  v17 = v15;
  KdpCopyContext(a4, CurrentPrcb->ContextFlagsInit & v16, CurrentPrcb->Context);
  *(_DWORD *)(a4 + 48) = v16;
  if ( (KeKernelCetWrssEnabledScenarios & 4) != 0 && (v16 & 0x100080) == 0x100080 )
  {
    v19 = *(_QWORD *)(a4 + 248);
    v20 = a4 + *(int *)(a4 + 1256);
    if ( *(_QWORD *)(v20 + 1240) != v19 )
    {
      *(_WORD *)(v20 + 1250) |= 1u;
      *(_QWORD *)(v20 + 1240) = v19;
    }
  }
  KiRestoreProcessorControlState(&CurrentPrcb->ProcessorState);
  LOBYTE(v18) = v13;
  KdExitDebugger(v18);
  result = v17;
  KdpControlCPressed = 0;
  return result;
}
