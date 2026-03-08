/*
 * XREFs of HalpInterruptEnablePerformanceEvents @ 0x1403789F8
 * Callers:
 *     EmonPreOverflowHandler @ 0x14051BB30 (EmonPreOverflowHandler.c)
 *     HalpInterruptInitSystem @ 0x140A86CD0 (HalpInterruptInitSystem.c)
 *     HalpPostSleepMP @ 0x140A93F28 (HalpPostSleepMP.c)
 *     HalpDpPostReplaceInitialization @ 0x140A94574 (HalpDpPostReplaceInitialization.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     HalpInterruptFindLines @ 0x14028EE80 (HalpInterruptFindLines.c)
 *     HalpInterruptGsiToLine @ 0x14028EF10 (HalpInterruptGsiToLine.c)
 *     HalpInterruptGetPriority @ 0x1403792F0 (HalpInterruptGetPriority.c)
 *     HalpInterruptSetLineState @ 0x1403793AC (HalpInterruptSetLineState.c)
 *     HalpInterruptSetLineStateInternal @ 0x1403796D0 (HalpInterruptSetLineStateInternal.c)
 *     HalpAcquireHighLevelLock @ 0x140379818 (HalpAcquireHighLevelLock.c)
 *     HalpGetProcessorStateByNtIndex @ 0x1403810E8 (HalpGetProcessorStateByNtIndex.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall HalpInterruptEnablePerformanceEvents(__int64 a1)
{
  ULONG_PTR v1; // rbx
  unsigned __int8 v2; // di
  bool v3; // zf
  int v5; // eax
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // eax
  unsigned int Number; // ebx
  __int64 v12; // rdi
  __int64 v13; // rcx
  char v14; // bl
  unsigned __int64 v15; // rdi
  __int64 v16; // r8
  struct _KPRCB *v17; // r9
  _DWORD *v18; // r8
  __int128 v19; // [rsp+40h] [rbp-19h] BYREF
  __int64 v20; // [rsp+50h] [rbp-9h]
  __int128 v21; // [rsp+58h] [rbp-1h]
  _OWORD v22[2]; // [rsp+68h] [rbp+Fh] BYREF
  __int64 v23; // [rsp+88h] [rbp+2Fh]
  __int64 v24; // [rsp+C0h] [rbp+67h] BYREF
  int v25; // [rsp+C8h] [rbp+6Fh] BYREF
  int v26; // [rsp+CCh] [rbp+73h]

  v1 = HalpInterruptController;
  v24 = 0LL;
  v2 = 0;
  DWORD1(v19) = 0;
  v23 = 0LL;
  v3 = *(_DWORD *)(HalpInterruptController + 240) == 2;
  v21 = 0LL;
  memset(v22, 0, sizeof(v22));
  if ( v3 )
  {
    LODWORD(v24) = *(_DWORD *)(HalpInterruptController + 256);
    HIDWORD(v24) = -3;
    if ( !HalpInterruptPerfLinesFound )
    {
      result = (__int64)HalpInterruptFindLines((unsigned int *)&v24);
      if ( !result )
        return result;
      HalpInterruptPerfLinesFound = 1;
    }
    *(_QWORD *)&v22[0] = 0x1FFFFFFFFLL;
    memset((char *)v22 + 12, 0, 20);
    *(_QWORD *)&v21 = 1LL;
    *((_QWORD *)&v21 + 1) = 0x1000000001LL;
    DWORD2(v22[0]) = 3;
    LODWORD(v23) = 254;
    HIDWORD(v23) = HalpInterruptGetPriority(v1);
    if ( !a1 )
      v2 = HalpAcquireHighLevelLock(&HalpInterruptLock);
    HalpInterruptSetLineStateInternal(v1, &v24);
    if ( !a1 )
    {
      KxReleaseSpinLock((volatile signed __int64 *)&HalpInterruptLock);
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v2 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v10 = ~(unsigned __int16)(-1LL << (v2 + 1));
          v3 = (v10 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v10;
          if ( v3 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(v2);
    }
  }
  v5 = *(_DWORD *)(v1 + 240);
  if ( v5 == 3 || (result = (unsigned int)(v5 - 4), (result & 0xFFFFFFFD) == 0) )
  {
    Number = KeGetPcr()->Prcb.Number;
    result = HalpGetProcessorStateByNtIndex(Number);
    v12 = result;
    v13 = *(unsigned int *)(result + 40);
    if ( (_DWORD)v13 )
    {
      result = HalpInterruptGsiToLine(v13, &v24);
      if ( (int)result >= 0 )
      {
        v25 = -1;
        v26 = 1;
        v19 = 0LL;
        DWORD2(v19) = Number;
        v14 = *(_BYTE *)(v12 + 14);
        v20 = 0LL;
        LODWORD(v19) = 6;
        v15 = (unsigned __int8)HalpAcquireHighLevelLock(&HalpInterruptLock);
        LOBYTE(v16) = 15;
        HalpInterruptSetLineState(&v24, 254LL, v16, v14 != 0, 1, &v19, &v25);
        result = KxReleaseSpinLock((volatile signed __int64 *)&HalpInterruptLock);
        if ( KiIrqlFlags )
        {
          result = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0
            && (unsigned __int8)result <= 0xFu
            && (unsigned __int8)v15 <= 0xFu
            && (unsigned __int8)result >= 2u )
          {
            v17 = KeGetCurrentPrcb();
            result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v15 + 1));
            v18 = v17->SchedulerAssist;
            v3 = ((unsigned int)result & v18[5]) == 0;
            v18[5] &= result;
            if ( v3 )
              result = KiRemoveSystemWorkPriorityKick(v17);
          }
        }
        __writecr8(v15);
      }
    }
  }
  return result;
}
