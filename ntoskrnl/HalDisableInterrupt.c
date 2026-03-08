/*
 * XREFs of HalDisableInterrupt @ 0x14028E8F0
 * Callers:
 *     KiDisconnectInterruptInternal @ 0x14028E85C (KiDisconnectInterruptInternal.c)
 *     KiDisconnectSecondaryInterrupt @ 0x14056F468 (KiDisconnectSecondaryInterrupt.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     HalpInterruptLookupController @ 0x14028EEE0 (HalpInterruptLookupController.c)
 *     HalpInterruptFindLinesForGsiRange @ 0x14028EF5C (HalpInterruptFindLinesForGsiRange.c)
 *     HalpInterruptSetLineStateInternal @ 0x1403796D0 (HalpInterruptSetLineStateInternal.c)
 *     HalpInterruptApplyOverrides @ 0x140379748 (HalpInterruptApplyOverrides.c)
 *     HalpAcquireHighLevelLock @ 0x140379818 (HalpAcquireHighLevelLock.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     HalpDisableSecondaryInterrupt @ 0x140517908 (HalpDisableSecondaryInterrupt.c)
 *     HalpInterruptSetProblemEx @ 0x140518598 (HalpInterruptSetProblemEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall HalDisableInterrupt(_DWORD *a1)
{
  int v2; // edi
  unsigned int v3; // ebx
  int v5; // edx
  unsigned int v6; // esi
  _DWORD *LinesForGsiRange; // rax
  _DWORD *v8; // rbp
  __int64 v9; // rbx
  unsigned __int64 v10; // rdi
  __int64 v11; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v15; // eax
  bool v16; // zf
  int v17; // [rsp+20h] [rbp-18h]
  unsigned int v18; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v19; // [rsp+44h] [rbp+Ch]

  if ( *a1 != 1 )
  {
    v17 = 371;
LABEL_8:
    v5 = 19;
LABEL_10:
    HalpInterruptSetProblemEx(0, v5, 0, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", v17);
    return (unsigned int)-1073741811;
  }
  v2 = a1[2];
  if ( v2 )
  {
    if ( v2 == 3 )
      return 0;
    v17 = 432;
    goto LABEL_8;
  }
  v6 = a1[16];
  LinesForGsiRange = (_DWORD *)HalpInterruptFindLinesForGsiRange(v6, v6 + 1);
  v8 = LinesForGsiRange;
  if ( !LinesForGsiRange )
  {
    if ( ((unsigned __int8 (__fastcall *)(_QWORD, _QWORD))off_140C01B90[0])(0LL, v6) )
      return (unsigned int)HalpDisableSecondaryInterrupt(a1);
    v17 = 417;
    v5 = 18;
    goto LABEL_10;
  }
  v18 = LinesForGsiRange[4];
  v19 = v6 + LinesForGsiRange[5] - LinesForGsiRange[7];
  HalpInterruptApplyOverrides(&v18, 0LL, 0LL);
  v9 = HalpInterruptLookupController(v18);
  if ( !v9 )
    HalpInterruptSetProblemEx(0, 17, 0, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 456);
  v10 = (unsigned __int8)HalpAcquireHighLevelLock(&HalpInterruptLock);
  v11 = *((_QWORD *)v8 + 5) + 56LL * (int)(v19 - v8[5]);
  *(_DWORD *)(v11 + 12) &= ~0x10u;
  v3 = HalpInterruptSetLineStateInternal(v9, &v18);
  KxReleaseSpinLock((volatile signed __int64 *)&HalpInterruptLock);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v10 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
      v16 = (v15 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v15;
      if ( v16 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v10);
  return v3;
}
