/*
 * XREFs of VmpFlushTbVaRange @ 0x140629D0C
 * Callers:
 *     VmpFlushTb @ 0x140629B70 (VmpFlushTb.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     VmpProcessContextLockExclusive @ 0x14045F78C (VmpProcessContextLockExclusive.c)
 *     VmpConvertPortionVpnRangeToGpnRange @ 0x140629368 (VmpConvertPortionVpnRangeToGpnRange.c)
 *     VmpInvalidateOutstandingFaults @ 0x14062A198 (VmpInvalidateOutstandingFaults.c)
 *     VmpProcessInvalidateSlat @ 0x14062B56C (VmpProcessInvalidateSlat.c)
 */

unsigned __int64 __fastcall VmpFlushTbVaRange(
        volatile LONG *SpinLock,
        unsigned __int64 a2,
        __int64 a3,
        __int64 *a4,
        _QWORD *a5,
        unsigned __int64 *a6)
{
  __int64 v6; // r8
  unsigned __int64 result; // rax
  __int64 v10; // rsi
  unsigned __int64 v11; // r14
  __int64 v12; // r14
  unsigned __int64 v13; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v17; // eax
  bool v18; // zf
  __int128 v19; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v20; // [rsp+40h] [rbp-28h] BYREF
  __int64 v21; // [rsp+48h] [rbp-20h]

  v6 = a3 - a2;
  v20 = a2;
  v19 = 0LL;
  result = v6 + 1;
  v21 = v6 + 1;
  if ( v6 != -1 )
  {
    do
    {
      result = VmpConvertPortionVpnRangeToGpnRange((__int64)SpinLock, &v20, 0x40000LL - *a5, a4, &v19, 1);
      v10 = *((_QWORD *)&v19 + 1);
      v11 = result;
      if ( !*((_QWORD *)&v19 + 1) )
        break;
      VmpProcessInvalidateSlat(SpinLock, v19, result, *((_QWORD *)&v19 + 1));
      result = VmpInvalidateOutstandingFaults(SpinLock, v11, v10);
      *a5 += v10;
      if ( *a5 >= 0x40000uLL )
      {
        v12 = *((_QWORD *)SpinLock + 5);
        v13 = *a6;
        ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && (unsigned __int8)v13 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v17 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
              v18 = (v17 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v17;
              if ( v18 )
                KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
            }
          }
        }
        __writecr8((unsigned __int8)v13);
        *a5 = 0LL;
        result = VmpProcessContextLockExclusive(SpinLock);
        *a6 = result;
        if ( v12 != *((_QWORD *)SpinLock + 5) )
        {
          result = 0LL;
          *(_OWORD *)a4 = 0LL;
          a4[2] = 0LL;
        }
      }
    }
    while ( v21 );
  }
  return result;
}
