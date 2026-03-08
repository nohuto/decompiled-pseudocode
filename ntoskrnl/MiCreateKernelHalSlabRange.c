/*
 * XREFs of MiCreateKernelHalSlabRange @ 0x140B3B690
 * Callers:
 *     <none>
 * Callees:
 *     MiConvertEntireLargePageToSmall @ 0x140277140 (MiConvertEntireLargePageToSmall.c)
 *     MiSearchNumaNodeTable @ 0x140319DD0 (MiSearchNumaNodeTable.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiPageToNode @ 0x1406153B0 (MiPageToNode.c)
 *     MiCreateBootSlabEntries @ 0x140B3B858 (MiCreateBootSlabEntries.c)
 */

__int64 __fastcall MiCreateKernelHalSlabRange(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rdi
  unsigned __int64 v3; // rbp
  ULONG_PTR v4; // r15
  __int64 v5; // rbx
  unsigned __int8 CurrentIrql; // si
  __int64 v7; // rbx
  __int64 v8; // r14
  unsigned int v9; // ebx
  __int64 result; // rax
  _DWORD *SchedulerAssist; // r9
  __int64 v12; // rdx
  unsigned __int8 v13; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v15; // r9
  int v16; // eax
  bool v17; // zf
  unsigned int v18; // eax
  int v19; // [rsp+70h] [rbp+8h] BYREF
  __int64 v20; // [rsp+78h] [rbp+10h] BYREF

  v2 = ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v3 = ((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  if ( v2 >= v3 )
    return 0LL;
  while ( 1 )
  {
    v20 = MI_READ_PTE_LOCK_FREE(v2);
    v4 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v20) >> 12) & 0xFFFFFFFFFFLL;
    v5 = 48 * v4 - 0x220000000000LL;
    if ( _bittest64((const signed __int64 *)(v5 + 40), 0x28u) )
    {
      MiConvertEntireLargePageToSmall(48 * v4 - 0x220000000000LL, 1, 0, 6, 0LL, 0LL, 0LL);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        if ( CurrentIrql == 2 )
          LODWORD(v12) = 4;
        else
          v12 = (-1LL << (CurrentIrql + 1)) & 4;
        SchedulerAssist[5] |= v12;
      }
      v7 = v5 + 24;
      v8 = 512LL;
      do
      {
        v19 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)v7, 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v19);
          while ( *(__int64 *)v7 < 0 );
        }
        --*(_WORD *)(v7 + 8);
        _InterlockedAnd64((volatile signed __int64 *)v7, 0x7FFFFFFFFFFFFFFFuLL);
        v7 += 48LL;
        --v8;
      }
      while ( v8 );
      if ( KiIrqlFlags )
      {
        v13 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v13 <= 0xFu && CurrentIrql <= 0xFu && v13 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v15 = CurrentPrcb->SchedulerAssist;
          v16 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v17 = (v16 & v15[5]) == 0;
          v15[5] &= v16;
          if ( v17 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      __writecr8(CurrentIrql);
    }
    v9 = *((_DWORD *)MiSearchNumaNodeTable(v4) + 2);
    if ( v9 != *((_DWORD *)MiSearchNumaNodeTable(v4 + 511) + 2) )
    {
      v18 = MiPageToNode(v4 + 511);
      KeBugCheckEx(0x1Au, 0x3030316uLL, v4, v9, v18);
    }
    result = MiCreateBootSlabEntries(qword_140C6B0D0 + 24448 + 25408LL * v9, v4, 512LL, 1LL);
    if ( (int)result < 0 )
      break;
    v2 += 8LL;
    if ( v2 >= v3 )
      return 0LL;
  }
  return result;
}
