/*
 * XREFs of HalpInterruptReinitialize @ 0x140A923CC
 * Callers:
 *     HalpAcpiPostSleep @ 0x140A93580 (HalpAcpiPostSleep.c)
 * Callees:
 *     KeGetProcessorIndexFromNumber @ 0x140236BF0 (KeGetProcessorIndexFromNumber.c)
 *     HalStartNextProcessor @ 0x140371EB0 (HalStartNextProcessor.c)
 *     HalpInterruptInitializeController @ 0x14037B24C (HalpInterruptInitializeController.c)
 *     HalGetProcessorIdByNtNumber @ 0x1403810B0 (HalGetProcessorIdByNtNumber.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     HalStartDynamicProcessor @ 0x140502C20 (HalStartDynamicProcessor.c)
 *     HalpInterruptControllerInUse @ 0x14051829C (HalpInterruptControllerInUse.c)
 *     HalpInterruptStartBlockedProcessors @ 0x1405185E4 (HalpInterruptStartBlockedProcessors.c)
 *     HalpIommuInitializeAll @ 0x140A8DA7C (HalpIommuInitializeAll.c)
 */

__int64 __fastcall HalpInterruptReinitialize(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG_PTR *v4; // rbx
  int v5; // r12d
  ULONG_PTR v7; // rdi
  int v8; // eax
  int v9; // eax
  ULONG_PTR BugCheckParameter4; // rsi
  int v11; // eax
  unsigned __int8 CurrentIrql; // cl
  __int64 result; // rax
  __int64 v14; // rdx
  unsigned int v15; // esi
  unsigned int i; // ebx
  __int64 v17; // r15
  ULONG_PTR v18; // rbp
  unsigned int v19; // ebp
  unsigned int v20; // ebx
  __int64 v21; // rsi
  ULONG_PTR v22; // r14
  ULONG ProcessorIndexFromNumber; // eax
  ULONG_PTR v24; // r15
  __int16 v25; // [rsp+50h] [rbp-8h]

  v4 = (ULONG_PTR *)HalpRegisteredInterruptControllers;
  v5 = 0;
  while ( v4 != &HalpRegisteredInterruptControllers )
  {
    v7 = (ULONG_PTR)v4;
    v4 = (ULONG_PTR *)*v4;
    v8 = *(_DWORD *)(v7 + 248);
    if ( (v8 & 1) != 0 )
    {
      *(_DWORD *)(v7 + 248) = v8 & 0xFFFFFFFE;
      v9 = HalpInterruptInitializeController(v7);
      BugCheckParameter4 = v9;
      if ( v9 < 0 )
      {
        if ( HalpInterruptControllerInUse(v7) )
          KeBugCheckEx(0x5Cu, 0x200uLL, HalpInterruptLastProblem, v7, BugCheckParameter4);
      }
    }
  }
  v11 = HalpIommuInitializeAll(1, 0LL, a3, a4);
  if ( v11 < 0 )
    KeBugCheckEx(0x5Cu, 0x500uLL, v11, 0LL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    result = (__int64)KeGetCurrentPrcb();
    if ( CurrentIrql == 15 )
      LODWORD(v14) = 0x8000;
    else
      v14 = (-1LL << (CurrentIrql + 1)) & 0xFFFC;
    *(_DWORD *)(*(_QWORD *)(result + 35000) + 20LL) |= v14;
  }
  _disable();
  if ( (a1 & 0x10000) != 0 )
  {
    v15 = HalpInterruptProcessorsStarted - HalpInterruptDynamicProcessorCount;
    if ( HalpInterruptBlockedProcessors )
      result = HalpInterruptStartBlockedProcessors(0);
    for ( i = 1; i < v15; ++i )
    {
      v17 = HalpHiberProcState + 1472LL * i;
      v18 = HalpInterruptProcessorState + ((unsigned __int64)i << 6);
      result = HalGetProcessorIdByNtNumber(i);
      if ( (int)result >= 0 )
      {
        result = HalStartNextProcessor(v17, i, 0);
        v5 = result;
      }
      if ( v5 != 4 )
        KeBugCheckEx(0x5Cu, 0x2001uLL, i, (unsigned int)HalpInterruptProcessorCount, v18);
    }
    v19 = HalpInterruptDynamicProcessorCount;
    v20 = 0;
    if ( HalpInterruptDynamicProcessorCount )
    {
      v21 = 0LL;
      do
      {
        v22 = HalpInterruptDynamicProcessorState + (v21 << 6);
        ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber((PPROCESSOR_NUMBER)(v22 + 16));
        v24 = ProcessorIndexFromNumber;
        result = HalStartDynamicProcessor(
                   HalpHiberProcState + 1472LL * ProcessorIndexFromNumber,
                   ProcessorIndexFromNumber,
                   *(_DWORD *)v22,
                   0xFFFFu);
        if ( (_DWORD)result != 4 )
          KeBugCheckEx(0x5Cu, 0x2001uLL, v24, (unsigned int)HalpInterruptProcessorCount, v22);
        ++v20;
        ++v21;
      }
      while ( v20 < v19 );
    }
    HalpInterruptProcessorRestarting = 0;
  }
  HalpInterruptPicStateIntact = 0;
  if ( (v25 & 0x200) != 0 )
    _enable();
  return result;
}
