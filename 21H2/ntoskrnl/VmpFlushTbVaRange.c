/*
 * XREFs of VmpFlushTbVaRange @ 0x1405A39E0
 * Callers:
 *     VmpFlushTb @ 0x1405A3844 (VmpFlushTb.c)
 *     VmpRemoveMemoryRange @ 0x1405A5084 (VmpRemoveMemoryRange.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1402864F4 (_tlgKeywordOn.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     VmpConvertPortionVpnRangeToGpnRange @ 0x1405A30B0 (VmpConvertPortionVpnRangeToGpnRange.c)
 *     VmpInvalidateOutstandingFaults @ 0x1405A3EC4 (VmpInvalidateOutstandingFaults.c)
 *     VmpLogTbFlushSlatInvalidate @ 0x1405A4468 (VmpLogTbFlushSlatInvalidate.c)
 *     VmpProcessContextLockExclusive @ 0x1405A4B8C (VmpProcessContextLockExclusive.c)
 *     HvlMapGpaPages @ 0x1405C9C84 (HvlMapGpaPages.c)
 */

unsigned __int64 __fastcall VmpFlushTbVaRange(
        volatile LONG *SpinLock,
        unsigned __int64 a2,
        __int64 a3,
        _QWORD *a4,
        _QWORD *a5,
        unsigned __int64 *a6)
{
  __int64 v6; // r8
  unsigned __int64 result; // rax
  unsigned __int64 *v10; // r15
  _QWORD *v11; // rsi
  __int64 v12; // rbx
  unsigned __int64 v13; // rbp
  __int64 v14; // rcx
  __int64 v16; // rcx
  __int64 v17; // rbp
  unsigned __int64 v18; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v22; // eax
  bool v23; // zf
  __int128 v24; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v25; // [rsp+40h] [rbp-28h] BYREF
  __int64 v26; // [rsp+48h] [rbp-20h]
  __int64 v27; // [rsp+78h] [rbp+10h] BYREF

  v6 = a3 - a2;
  v25 = a2;
  v24 = 0LL;
  result = v6 + 1;
  v26 = v6 + 1;
  if ( v6 != -1 )
  {
    v10 = a6;
    v11 = a5;
    do
    {
      result = VmpConvertPortionVpnRangeToGpnRange((__int64)SpinLock, &v25, 0x40000LL - *v11, a4, &v24);
      v12 = *((_QWORD *)&v24 + 1);
      v13 = result;
      if ( !*((_QWORD *)&v24 + 1) )
        break;
      v14 = VmpTraceLoggingProvider;
      if ( VmpTraceLoggingProvider )
      {
        if ( *(_DWORD *)VmpTraceLoggingProvider && tlgKeywordOn(VmpTraceLoggingProvider, 2LL) )
          VmpLogTbFlushSlatInvalidate(v14, v13, v24, v12);
      }
      v16 = *((_QWORD *)SpinLock + 9);
      v27 = 0LL;
      if ( (int)HvlMapGpaPages(v16, v24, 66560, v12, 0LL, (__int64)&v27) < 0 )
        NT_ASSERT("(((NTSTATUS)(Status)) >= 0)");
      if ( v27 != v12 )
        NT_ASSERT("PageCountProcessed == NumberOfPages");
      result = VmpInvalidateOutstandingFaults(SpinLock, v13, v12);
      *v11 += v12;
      if ( *v11 >= 0x40000uLL )
      {
        v17 = *((_QWORD *)SpinLock + 5);
        v18 = *v10;
        ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && (unsigned __int8)v18 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v22 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v18 + 1));
              v23 = (v22 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v22;
              if ( v23 )
                KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
            }
          }
        }
        __writecr8((unsigned __int8)v18);
        *v11 = 0LL;
        result = VmpProcessContextLockExclusive(SpinLock);
        *v10 = result;
        if ( v17 != *((_QWORD *)SpinLock + 5) )
        {
          result = 0LL;
          *(_OWORD *)a4 = 0LL;
          a4[2] = 0LL;
        }
      }
    }
    while ( v26 );
  }
  return result;
}
