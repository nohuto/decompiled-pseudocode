/*
 * XREFs of KeCheckForTimer @ 0x14056E51C
 * Callers:
 *     ExFreeHeapPool @ 0x1402B61C0 (ExFreeHeapPool.c)
 *     ExpFreePoolChecks @ 0x140313BA0 (ExpFreePoolChecks.c)
 *     VfMiscKeInitializeTimerEx_Entry @ 0x140ADCEA0 (VfMiscKeInitializeTimerEx_Entry.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x1402A97C0 (KeQueryActiveProcessorCountEx.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

ULONG __fastcall KeCheckForTimer(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  ULONG result; // eax
  ULONG_PTR BugCheckParameter4; // rdi
  ULONG v5; // r12d
  __int64 *v6; // r13
  unsigned int v7; // r15d
  __int64 v8; // rdx
  _QWORD **v9; // r14
  volatile signed __int32 *v10; // rsi
  unsigned __int8 CurrentIrql; // bp
  _DWORD *SchedulerAssist; // r9
  __int64 v13; // rdx
  _QWORD *v14; // r9
  ULONG_PTR v15; // r10
  ULONG_PTR v16; // rdx
  ULONG_PTR v17; // r8
  ULONG_PTR v18; // r8
  unsigned __int8 v19; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v21; // r9
  int v22; // eax
  bool v23; // zf
  ULONG v24; // [rsp+30h] [rbp-48h]
  __int64 v25; // [rsp+38h] [rbp-40h]
  unsigned int v26; // [rsp+90h] [rbp+18h]
  int v27; // [rsp+98h] [rbp+20h] BYREF

  result = KeTimerCheckFlags;
  if ( (KeTimerCheckFlags & 1) != 0 )
  {
    BugCheckParameter4 = BugCheckParameter3 + a2;
    result = KeQueryActiveProcessorCountEx(0xFFFFu);
    v5 = 0;
    v24 = result;
    if ( result )
    {
      v6 = KiProcessorBlock;
      do
      {
        v7 = 0;
        v8 = 0LL;
        v25 = 0LL;
        do
        {
          v26 = 0;
          v9 = (_QWORD **)(((unsigned __int64)v7 << 13) + *v6 + 15880);
          v10 = (volatile signed __int32 *)(v8 + *v6 + 15872);
          do
          {
            CurrentIrql = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
            {
              SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
              if ( CurrentIrql == 2 )
                LODWORD(v13) = 4;
              else
                v13 = (-1LL << (CurrentIrql + 1)) & 4;
              SchedulerAssist[5] |= v13;
            }
            v27 = 0;
            while ( _interlockedbittestandset64(v10, 0LL) )
            {
              do
                KeYieldProcessorEx(&v27);
              while ( *(_QWORD *)v10 );
            }
            v14 = *v9;
            if ( *v9 != v9 )
            {
              v15 = BugCheckParameter3 - 64;
              do
              {
                v16 = (ULONG_PTR)(v14 - 4);
                v14 = (_QWORD *)*v14;
                if ( v16 > v15 && v16 < BugCheckParameter4 )
                  KeBugCheckEx(0xC7u, 0LL, v16, BugCheckParameter3, BugCheckParameter4);
                v17 = KiWaitAlways ^ _byteswap_uint64(v16 ^ __ROL8__(KiWaitNever ^ *(_QWORD *)(v16 + 48), KiWaitNever));
                if ( v17 )
                {
                  if ( v17 > v15 && v17 < BugCheckParameter4 )
                    KeBugCheckEx(0xC7u, 1uLL, v17, BugCheckParameter3, BugCheckParameter4);
                  v18 = *(_QWORD *)(v17 + 24);
                  if ( v18 >= BugCheckParameter3 && v18 < BugCheckParameter4 )
                    KeBugCheckEx(0xC7u, 2uLL, v18, BugCheckParameter3, BugCheckParameter4);
                }
              }
              while ( v14 != v9 );
            }
            _InterlockedAnd64((volatile signed __int64 *)v10, 0LL);
            if ( KiIrqlFlags )
            {
              v19 = KeGetCurrentIrql();
              if ( (KiIrqlFlags & 1) != 0 && v19 <= 0xFu && CurrentIrql <= 0xFu && v19 >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                v21 = CurrentPrcb->SchedulerAssist;
                v22 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                v23 = (v22 & v21[5]) == 0;
                v21[5] &= v22;
                if ( v23 )
                  KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
              }
            }
            result = CurrentIrql;
            __writecr8(CurrentIrql);
            v9 += 4;
            v10 += 8;
            ++v26;
          }
          while ( v26 < 0x100 );
          ++v7;
          v8 = v25 + 0x2000;
          v25 += 0x2000LL;
        }
        while ( v7 < 2 );
        ++v5;
        ++v6;
      }
      while ( v5 < v24 );
    }
  }
  return result;
}
