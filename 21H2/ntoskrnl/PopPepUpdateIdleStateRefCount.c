/*
 * XREFs of PopPepUpdateIdleStateRefCount @ 0x1403A09B4
 * Callers:
 *     PopPepDeviceDState @ 0x1403A0370 (PopPepDeviceDState.c)
 *     PopPepCompleteComponentIdleStateChangeActivity @ 0x1403A0870 (PopPepCompleteComponentIdleStateChangeActivity.c)
 *     PopPepStartComponentIdleStateChangeActivity @ 0x1403A4A00 (PopPepStartComponentIdleStateChangeActivity.c)
 *     PopPepClearDripsDeviceVetoMask @ 0x140574304 (PopPepClearDripsDeviceVetoMask.c)
 *     PopPepInitializeVetoMasks @ 0x140574FDC (PopPepInitializeVetoMasks.c)
 *     PopPepPlatformStateRegistered @ 0x1405756FC (PopPepPlatformStateRegistered.c)
 *     PopPepUpdateDripsDeviceVetoMask @ 0x140576340 (PopPepUpdateDripsDeviceVetoMask.c)
 *     PopPepUnregisterDevice @ 0x1407B4A1C (PopPepUnregisterDevice.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140414300 (memset.c)
 *     PopFxBugCheck @ 0x14056962C (PopFxBugCheck.c)
 *     PopFxPlatformStateAvailable @ 0x14056BCCC (PopFxPlatformStateAvailable.c)
 */

unsigned __int64 __fastcall PopPepUpdateIdleStateRefCount(int a1, int a2, int a3)
{
  unsigned __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  _DWORD *SchedulerAssist; // r9
  char v10; // r13
  __int64 v11; // rsi
  unsigned __int8 CurrentIrql; // r15
  int v13; // r14d
  unsigned int v14; // r14d
  bool v15; // zf
  __int64 v16; // rcx
  ULONG_PTR v17; // rbx
  int v18; // ett
  __int64 v19; // rdi
  ULONG_PTR v20; // rbx
  signed __int32 v21; // eax
  unsigned __int8 v22; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v24; // r8
  int v25; // eax
  unsigned int v26; // [rsp+20h] [rbp-E0h]
  int v28; // [rsp+28h] [rbp-D8h] BYREF
  ULONG_PTR BugCheckParameter2[32]; // [rsp+30h] [rbp-D0h] BYREF

  v28 = 0;
  result = (unsigned __int64)memset(BugCheckParameter2, 0, sizeof(BugCheckParameter2));
  v10 = 0;
  v11 = 0LL;
  CurrentIrql = 0;
  v13 = a1;
  if ( a3 )
    v13 = a2;
  v14 = (a1 ^ a2) & v13;
  v15 = !_BitScanForward((unsigned int *)&v16, v14);
  v26 = v16;
  if ( v15 )
    return result;
  do
  {
    v17 = PopPepPlatformState + 384 * v16;
    v14 &= v14 - 1;
    if ( a3 )
    {
      result = *(unsigned int *)(v17 + 320);
      if ( (int)result <= 0
        || (v18 = *(_DWORD *)(v17 + 320),
            result = (unsigned int)_InterlockedCompareExchange(
                                     (volatile signed __int32 *)(v17 + 320),
                                     result + 1,
                                     result),
            v18 != (_DWORD)result) )
      {
        BugCheckParameter2[v11] = v17;
        v11 = (unsigned int)(v11 + 1);
      }
    }
    else
    {
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v17 + 320));
      if ( (int)result < 0x40000000 )
        PopFxBugCheck(0x668uLL, v17, (int)result, v14);
      if ( (_DWORD)result == 0x40000000 )
      {
        if ( !v10 )
        {
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
          {
            SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
            v7 = (-1LL << (CurrentIrql + 1)) & 4;
            v8 = (unsigned int)v7 | SchedulerAssist[5];
            SchedulerAssist[5] = v8;
          }
          v10 = 1;
        }
        result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(v17 + 320), -1, 0x40000000);
        if ( (_DWORD)result == 0x40000000 )
        {
          LOBYTE(v7) = 1;
          PopFxPlatformStateAvailable(v26, v7);
          result = *(int *)(v17 + 320);
          if ( (_DWORD)result != -1 )
            PopFxBugCheck(0x669uLL, v17, *(int *)(v17 + 320), 0LL);
          *(_DWORD *)(v17 + 320) = 0;
        }
      }
    }
    v15 = !_BitScanForward((unsigned int *)&v16, v14);
    v26 = v16;
  }
  while ( !v15 );
  if ( (_DWORD)v11 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      v7 = (-1LL << (CurrentIrql + 1)) & 4;
      v8 = (unsigned int)v7 | SchedulerAssist[5];
      SchedulerAssist[5] = v8;
    }
    while ( 1 )
    {
      KeYieldProcessorEx(&v28, v7, v8, (__int64)SchedulerAssist);
      v19 = 0LL;
      do
      {
        v20 = BugCheckParameter2[v19];
        v21 = *(_DWORD *)(v20 + 320);
        if ( v21 <= 0 )
        {
          if ( !v21 && !_InterlockedCompareExchange((volatile signed __int32 *)(v20 + 320), -1, 0) )
          {
            PopFxPlatformStateAvailable((__int64)(v20 - PopPepPlatformState) / 384, 0LL);
            if ( *(_DWORD *)(v20 + 320) != -1 )
              PopFxBugCheck(0x669uLL, v20, *(int *)(v20 + 320), 0LL);
            *(_DWORD *)(v20 + 320) = 1073741825;
            v11 = (unsigned int)(v11 - 1);
            goto LABEL_33;
          }
        }
        else if ( v21 == _InterlockedCompareExchange((volatile signed __int32 *)(v20 + 320), v21 + 1, v21) )
        {
          v11 = (unsigned int)(v11 - 1);
LABEL_33:
          BugCheckParameter2[v19] = BugCheckParameter2[v11];
          continue;
        }
        v19 = (unsigned int)(v19 + 1);
      }
      while ( (unsigned int)v19 < (unsigned int)v11 );
      if ( !(_DWORD)v11 )
        goto LABEL_43;
    }
  }
  if ( v10 )
  {
LABEL_43:
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v22 = KeGetCurrentIrql();
        if ( v22 <= 0xFu && CurrentIrql <= 0xFu && v22 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v24 = CurrentPrcb->SchedulerAssist;
          v25 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v15 = (v25 & v24[5]) == 0;
          v24[5] &= v25;
          if ( v15 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
