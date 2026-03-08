/*
 * XREFs of MiChangePageAttributeBatch @ 0x140211998
 * Callers:
 *     MiGetPageChain @ 0x14026E0E0 (MiGetPageChain.c)
 *     MiInitializeMdlOneNodeBatchPages @ 0x1402B4650 (MiInitializeMdlOneNodeBatchPages.c)
 *     MiFreeSlabEntry @ 0x1403B33B0 (MiFreeSlabEntry.c)
 *     MiConvertContiguousPages @ 0x1403B7B48 (MiConvertContiguousPages.c)
 *     MiSwitchToTransition @ 0x140630D6C (MiSwitchToTransition.c)
 *     MiChangeAwePageAttributes @ 0x140646E94 (MiChangeAwePageAttributes.c)
 *     MiPerformFinalZeroing @ 0x14064B6C0 (MiPerformFinalZeroing.c)
 *     MiFindLargePageMemory @ 0x140A46B08 (MiFindLargePageMemory.c)
 * Callees:
 *     MiAbortCombineScan @ 0x14021467C (MiAbortCombineScan.c)
 *     MiFlushCacheForAttributeChange @ 0x140214754 (MiFlushCacheForAttributeChange.c)
 *     MiLockPageInline @ 0x1402A33B0 (MiLockPageInline.c)
 *     KeShouldYieldProcessor @ 0x1402C9870 (KeShouldYieldProcessor.c)
 *     KeInvalidateAllCaches @ 0x1403010D0 (KeInvalidateAllCaches.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x14036D020 (MiFlushEntireTbDueToAttributeChange.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiChangePageAttributeBatch(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v4; // r13d
  __int64 v5; // rsi
  unsigned __int8 v6; // r15
  __int64 v7; // r12
  unsigned __int64 v8; // rbp
  int v9; // r14d
  __int64 v10; // rdi
  __int64 v11; // rdi
  int v12; // r8d
  char v13; // r11
  char v14; // dl
  __int64 v15; // r13
  unsigned int v16; // ecx
  char v17; // al
  unsigned int v18; // ecx
  __int64 *v19; // rax
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v23; // edx
  bool v24; // zf
  char v25; // [rsp+70h] [rbp+8h]
  int v27; // [rsp+88h] [rbp+20h]

  if ( a1 )
  {
    v4 = a2;
    v5 = a1;
    v6 = 17;
    v7 = 0LL;
    do
    {
      v8 = 0LL;
      v27 = 0;
      v9 = 1;
      v10 = v5;
      do
      {
        if ( v8 )
        {
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
            break;
        }
        else
        {
          v6 = MiLockPageInline(v10);
        }
        if ( (*(_BYTE *)(v10 + 34) & 0xC0) != 0xC0 )
          v9 = 0;
        MiAbortCombineScan(v10);
        ++v8;
        if ( v6 < 2u && (v8 & 0x3F) == 0 && KeShouldYieldProcessor() )
          break;
        v10 = *(_QWORD *)(v10 + 16);
      }
      while ( v10 );
      if ( v9 || (MiFlushEntireTbDueToAttributeChange(), v8 < (unsigned int)dword_140C6578C) || v4 == 1 )
      {
        v11 = v5;
        v12 = 0;
      }
      else
      {
        ++dword_140C65784;
        KeInvalidateAllCaches();
        v12 = 1;
        v11 = v5;
        v27 = 1;
      }
      v13 = v6 + 1;
      v14 = (_BYTE)v4 << 6;
      v25 = (_BYTE)v4 << 6;
      do
      {
        v15 = v11;
        v16 = *(unsigned __int8 *)(v11 + 34);
        v17 = v14 | v16 & 0x3F;
        v18 = v16 >> 6;
        *(_BYTE *)(v11 + 34) = v17;
        if ( !v12 && !v9 && v18 == 1 && a2 != 1 )
        {
          ++dword_140C65788;
          MiFlushCacheForAttributeChange(0xAAAAAAAAAAAAAAABuLL * ((v11 + 0x220000000000LL) >> 4), 1LL, a2, 0LL);
          v13 = v6 + 1;
        }
        *(_QWORD *)(v11 + 24) &= 0xC7FFFFFFFFFFFFFFuLL;
        ++v7;
        _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v7 == v8 )
        {
          if ( KiIrqlFlags )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v6 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v23 = ~(unsigned __int16)(-1LL << v13);
              v24 = (v23 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v23;
              if ( v24 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          __writecr8(v6);
          v19 = (__int64 *)(v11 + 16);
          v11 = 0LL;
          v5 = *v19;
        }
        else
        {
          v11 = *(_QWORD *)(v11 + 16);
          v19 = (__int64 *)(v15 + 16);
        }
        if ( a3 != -1 )
          *v19 = a3;
        v14 = v25;
        v13 = v6 + 1;
        v12 = v27;
      }
      while ( v11 );
      v4 = a2;
      v7 = 0LL;
    }
    while ( v5 );
  }
}
