/*
 * XREFs of MiCoalesceActivePagesIntoFree @ 0x14065AF0C
 * Callers:
 *     MiFreeContiguousLargePageRun @ 0x14064780C (MiFreeContiguousLargePageRun.c)
 *     MiFreeLargeProcessPagesToCache @ 0x140666064 (MiFreeLargeProcessPagesToCache.c)
 * Callees:
 *     MiLockPageInline @ 0x1402A33B0 (MiLockPageInline.c)
 *     MiSearchNumaNodeTable @ 0x140319DD0 (MiSearchNumaNodeTable.c)
 *     MiGetPfnPageSizeIndex @ 0x14034D770 (MiGetPfnPageSizeIndex.c)
 *     MiLargePagePromote @ 0x14034EC80 (MiLargePagePromote.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiCoalesceActivePagesIntoFree(__int64 a1, __int64 a2, int a3)
{
  int v3; // r12d
  __int64 v4; // rbx
  unsigned __int64 v5; // rdi
  __int64 v6; // r14
  unsigned __int64 v7; // rsi
  __int64 v8; // r8
  int v9; // r13d
  __int64 v10; // r15
  unsigned __int8 v11; // bp
  __int64 v12; // rbx
  unsigned __int64 v13; // rdi
  unsigned int v14; // edi
  __int64 v15; // rcx
  __int64 v16; // rdx
  unsigned __int64 i; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v21; // eax
  bool v22; // zf
  int v24; // [rsp+70h] [rbp+8h] BYREF
  int v25; // [rsp+74h] [rbp+Ch]
  __int64 v26; // [rsp+78h] [rbp+10h]
  int v27; // [rsp+80h] [rbp+18h]

  v27 = a3;
  v26 = a2;
  v25 = HIDWORD(a1);
  v24 = 0;
  v3 = 1;
  v4 = 48 * a2;
  v5 = MiLargePageSizes[a3];
  v6 = 48 * a2 - 0x220000000000LL;
  v7 = MiLargePageSizes[(unsigned int)MiGetPfnPageSizeIndex(v6)];
  MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * (v4 >> 4));
  v9 = *(unsigned __int8 *)(v6 + 34) >> 6;
  v10 = 0LL;
  v11 = 17;
  v12 = v6;
  v13 = v5 / v7;
  if ( v13 )
  {
    while ( 1 )
    {
      if ( v12 == v6 )
      {
        v11 = MiLockPageInline(v12);
      }
      else if ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
      {
        goto LABEL_9;
      }
      v10 = (unsigned int)(v10 + 1);
      if ( *(unsigned __int8 *)(v12 + 34) >> 6 != v9 )
        break;
      v12 += 48 * v7;
      if ( (unsigned int)v10 >= v13 )
        goto LABEL_9;
    }
    v3 = 0;
  }
LABEL_9:
  if ( (unsigned int)v10 == v13 && v3 )
  {
    v14 = MiLargePagePromote(v26, v27, v8, 1, &v24);
    v15 = 48 * v7;
    v16 = 48 * v7 + v6;
  }
  else
  {
    v14 = 0;
    v15 = 48 * v7;
    v16 = v6;
  }
  for ( i = v6 + v7 * (48 * v10 - 48); ; i -= v15 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(i + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( i == v16 )
      break;
  }
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v11 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v21 = ~(unsigned __int16)(-1LL << (v11 + 1));
      v22 = (v21 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v21;
      if ( v22 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v11);
  return v14;
}
