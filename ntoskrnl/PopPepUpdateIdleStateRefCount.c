/*
 * XREFs of PopPepUpdateIdleStateRefCount @ 0x1402F295C
 * Callers:
 *     PopPepDeviceDState @ 0x1402B9C4C (PopPepDeviceDState.c)
 *     PopPepStartComponentIdleStateChangeActivity @ 0x1402EFB90 (PopPepStartComponentIdleStateChangeActivity.c)
 *     PopPepCompleteComponentIdleStateChangeActivity @ 0x1402F2810 (PopPepCompleteComponentIdleStateChangeActivity.c)
 *     PopPepClearDripsDeviceVetoMask @ 0x14059C634 (PopPepClearDripsDeviceVetoMask.c)
 *     PopPepInitializeVetoMasks @ 0x14059CE34 (PopPepInitializeVetoMasks.c)
 *     PopPepPlatformStateRegistered @ 0x14059D504 (PopPepPlatformStateRegistered.c)
 *     PopPepUpdateDripsDeviceVetoMask @ 0x14059D9D4 (PopPepUpdateDripsDeviceVetoMask.c)
 *     PopPepUnregisterDevice @ 0x14099A948 (PopPepUnregisterDevice.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     PopFxBugCheck @ 0x140586740 (PopFxBugCheck.c)
 *     PopFxPlatformStateAvailable @ 0x140588EBC (PopFxPlatformStateAvailable.c)
 */

__int64 __fastcall PopPepUpdateIdleStateRefCount(unsigned int a1, unsigned int a2, int a3, volatile signed __int32 *a4)
{
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rdi
  unsigned __int8 CurrentIrql; // r15
  __int64 result; // rax
  unsigned int v13; // esi
  bool v14; // zf
  unsigned int v15; // ecx
  __int64 v16; // r13
  ULONG_PTR v17; // rbx
  int v18; // eax
  _DWORD *SchedulerAssist; // r9
  int v20; // ett
  unsigned __int8 v21; // r8
  _DWORD *v22; // r10
  __int64 v23; // r13
  __int64 v24; // rsi
  ULONG_PTR v25; // rbx
  signed __int32 v26; // eax
  unsigned __int8 v27; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v29; // r8
  int v30; // eax
  char v31; // [rsp+20h] [rbp-E0h]
  unsigned int v32; // [rsp+24h] [rbp-DCh]
  int v34; // [rsp+2Ch] [rbp-D4h] BYREF
  __int64 v35; // [rsp+30h] [rbp-D0h]
  ULONG_PTR BugCheckParameter2[32]; // [rsp+40h] [rbp-C0h] BYREF

  v34 = 0;
  memset(BugCheckParameter2, 0, sizeof(BugCheckParameter2));
  v8 = PopPepPlatformState;
  LOBYTE(v9) = 0;
  v10 = 0LL;
  v31 = 0;
  CurrentIrql = 0;
  v35 = PopPepPlatformState;
  result = a1 ^ a2;
  if ( a3 )
    a1 = a2;
  v13 = result & a1;
  v14 = !_BitScanForward(&v15, v13);
  v32 = v15;
  if ( v14 )
    return result;
  LODWORD(v16) = 4;
  while ( 1 )
  {
    v13 &= v13 - 1;
    v17 = v8 + 448LL * v15;
    if ( a3 )
    {
      result = *(unsigned int *)(v17 + 384);
      if ( a4 )
        _InterlockedIncrement(a4);
      if ( (int)result <= 0
        || (v20 = result,
            result = (unsigned int)_InterlockedCompareExchange(
                                     (volatile signed __int32 *)(v17 + 384),
                                     result + 1,
                                     result),
            v20 != (_DWORD)result) )
      {
        BugCheckParameter2[v10] = v17;
        v10 = (unsigned int)(v10 + 1);
      }
    }
    else
    {
      if ( a4 )
      {
        v18 = _InterlockedDecrement(a4);
        if ( v18 < 0 )
          PopFxBugCheck(0x668uLL, v8 + 448LL * v15, v18, v13);
      }
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v17 + 384));
      if ( (int)result < 0x40000000 )
        PopFxBugCheck(0x668uLL, v8 + 448LL * v15, (int)result, v13);
      if ( (_DWORD)result == 0x40000000 )
      {
        if ( !(_BYTE)v9 )
        {
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
          {
            SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
            if ( CurrentIrql == 2 )
              v9 = 4LL;
            else
              v9 = (-1LL << (CurrentIrql + 1)) & 4;
            SchedulerAssist[5] |= v9;
          }
          v31 = 1;
        }
        result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(v17 + 384), -1, 0x40000000);
        if ( (_DWORD)result == 0x40000000 )
        {
          LOBYTE(v9) = 1;
          PopFxPlatformStateAvailable(v32, v9);
          result = *(int *)(v17 + 384);
          if ( (_DWORD)result != -1 )
            PopFxBugCheck(0x669uLL, v17, *(int *)(v17 + 384), 0LL);
          *(_DWORD *)(v17 + 384) = 0;
        }
      }
    }
    v14 = !_BitScanForward(&v15, v13);
    v32 = v15;
    if ( v14 )
      break;
    LOBYTE(v9) = v31;
    v8 = v35;
  }
  if ( (_DWORD)v10 )
  {
    v21 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v21 <= 0xFu )
    {
      v22 = KeGetCurrentPrcb()->SchedulerAssist;
      if ( v21 != 2 )
        v16 = (-1LL << (v21 + 1)) & 4;
      v22[5] |= v16;
    }
    v23 = v35;
    CurrentIrql = v21;
    while ( 1 )
    {
      KeYieldProcessorEx(&v34);
      v24 = 0LL;
      do
      {
        v25 = BugCheckParameter2[v24];
        v26 = *(_DWORD *)(v25 + 384);
        if ( v26 <= 0 )
        {
          if ( !v26 && !_InterlockedCompareExchange((volatile signed __int32 *)(v25 + 384), -1, 0) )
          {
            PopFxPlatformStateAvailable((__int64)(v25 - v23) / 448, 0LL);
            if ( *(_DWORD *)(v25 + 384) != -1 )
              PopFxBugCheck(0x669uLL, v25, *(int *)(v25 + 384), 0LL);
            *(_DWORD *)(v25 + 384) = 1073741825;
            v10 = (unsigned int)(v10 - 1);
            goto LABEL_46;
          }
        }
        else if ( v26 == _InterlockedCompareExchange((volatile signed __int32 *)(v25 + 384), v26 + 1, v26) )
        {
          v10 = (unsigned int)(v10 - 1);
LABEL_46:
          BugCheckParameter2[v24] = BugCheckParameter2[v10];
          continue;
        }
        v24 = (unsigned int)(v24 + 1);
      }
      while ( (unsigned int)v24 < (unsigned int)v10 );
      if ( !(_DWORD)v10 )
        goto LABEL_56;
    }
  }
  if ( v31 )
  {
LABEL_56:
    if ( KiIrqlFlags )
    {
      v27 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v27 <= 0xFu && CurrentIrql <= 0xFu && v27 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v29 = CurrentPrcb->SchedulerAssist;
        v30 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v14 = (v30 & v29[5]) == 0;
        v29[5] &= v30;
        if ( v14 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
