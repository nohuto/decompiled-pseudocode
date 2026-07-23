/*
 * XREFs of KeQueryWakeSource @ 0x1405145EC
 * Callers:
 *     PpmIdleExecuteTransition @ 0x140222470 (PpmIdleExecuteTransition.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x14022A120 (RtlGetInterruptTimePrecise.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     memset @ 0x140413800 (memset.c)
 *     KiGetPastDueIRTimerInfo @ 0x1405239B4 (KiGetPastDueIRTimerInfo.c)
 */

__int64 __fastcall KeQueryWakeSource(int *a1, _BYTE *a2)
{
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // di
  _DWORD *SchedulerAssist; // r9
  struct _KPRCB *CurrentPrcb; // rcx
  _QWORD *v8; // r8
  __int64 v9; // rdx
  _QWORD *v10; // rcx
  __int64 v11; // r9
  __int64 v12; // rcx
  unsigned __int8 v13; // al
  struct _KPRCB *v14; // r9
  _DWORD *v15; // r8
  int v16; // eax
  bool v17; // zf
  LARGE_INTEGER InterruptTimePrecise; // rax
  int v19; // r10d
  unsigned int v20; // [rsp+20h] [rbp-10h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+28h] [rbp-8h] BYREF
  char v22; // [rsp+60h] [rbp+30h] BYREF
  char v23; // [rsp+68h] [rbp+38h] BYREF

  v20 = 0;
  PerformanceCounter.QuadPart = 0LL;
  v22 = 0;
  v23 = 0;
  memset(a2, 0, 0x88uLL);
  result = ((__int64 (__fastcall *)(unsigned int *, _QWORD))off_140C008E8[0])(&v20, 0LL);
  if ( (int)result >= 0 )
  {
    if ( ((v20 - 209) & 0xFFFFFFFD) != 0 )
    {
      *a1 = 5;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
      }
      if ( v20 <= 0xFF
        && (_mm_lfence(), CurrentPrcb = KeGetCurrentPrcb(), (v8 = CurrentPrcb->InterruptObject[v20]) != 0LL) )
      {
        v9 = 0LL;
        v10 = CurrentPrcb->InterruptObject[v20];
        do
        {
          v11 = v10[4];
          if ( v11 || (v11 = v10[3]) != 0 )
            *(_QWORD *)&a2[8 * v9] = v11;
          v12 = v10[1];
          v9 = (unsigned int)(v9 + 1);
          if ( !v12 )
            break;
          v10 = (_QWORD *)(v12 - 8);
          if ( v10 == v8 )
            break;
        }
        while ( (unsigned int)v9 < 3 );
      }
      else
      {
        *a1 = 2;
      }
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v13 = KeGetCurrentIrql();
          if ( v13 <= 0xFu && CurrentIrql <= 0xFu && v13 >= 2u )
          {
            v14 = KeGetCurrentPrcb();
            v15 = v14->SchedulerAssist;
            v16 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v17 = (v16 & v15[5]) == 0;
            v15[5] &= v16;
            if ( v17 )
              KiRemoveSystemWorkPriorityKick((__int64)v14);
          }
        }
      }
      __writecr8(CurrentIrql);
    }
    else
    {
      InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
      if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))KiGetPastDueIRTimerInfo)(
                           (LARGE_INTEGER)InterruptTimePrecise.QuadPart,
                           &v22,
                           &v23) )
      {
        v19 = 6;
        *a2 = v22;
        a2[2] = v23;
      }
      else
      {
        v19 = 1;
      }
      *a1 = v19;
    }
  }
  else
  {
    if ( (_DWORD)result != -1073741823 )
      return result;
    *a1 = 0;
  }
  return 0LL;
}
