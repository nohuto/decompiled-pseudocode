/*
 * XREFs of MiInitializePfnForOtherProcess @ 0x140356D68
 * Callers:
 *     MiMapPageFileHash @ 0x140327238 (MiMapPageFileHash.c)
 *     MiInitializeSystemPageTable @ 0x1403569E4 (MiInitializeSystemPageTable.c)
 *     MiDemoteValidLargePageOneLevel @ 0x1403B9BC8 (MiDemoteValidLargePageOneLevel.c)
 *     MiMakeOutswappedPageResident @ 0x14052BA00 (MiMakeOutswappedPageResident.c)
 *     MiDuplicateCloneLeaf @ 0x14055A174 (MiDuplicateCloneLeaf.c)
 *     MiAllocateTopLevelPage @ 0x1406FE0F4 (MiAllocateTopLevelPage.c)
 *     MiMapNewSession @ 0x140786F8C (MiMapNewSession.c)
 *     MiInitializeShadowPageTable @ 0x1407A0798 (MiInitializeShadowPageTable.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     MiLockPageInline @ 0x1402804B0 (MiLockPageInline.c)
 *     MiSwizzleInvalidPte @ 0x1402AA620 (MiSwizzleInvalidPte.c)
 *     MiLockAndIncrementShareCount @ 0x140356E80 (MiLockAndIncrementShareCount.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiInitializePfnForOtherProcess(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int16 v4; // si
  __int64 v7; // rbx
  unsigned __int8 v8; // di
  unsigned __int64 v9; // rdx
  __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  char v12; // al
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v17; // eax
  bool v18; // zf
  int v19; // [rsp+58h] [rbp+20h] BYREF

  v4 = a4;
  v7 = 48 * a1 - 0x58000000000LL;
  if ( (a4 & 0x10) != 0 )
  {
    v19 = 0;
    v8 = 17;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v19, a2, a3, a4);
      while ( *(__int64 *)(v7 + 24) < 0 );
    }
  }
  else
  {
    v8 = MiLockPageInline(48 * a1 - 0x58000000000LL, a2, a3, (_DWORD *)a4);
  }
  v9 = *(_QWORD *)(v7 + 24) & 0xF0FFFFFFFFFFFFFFuLL;
  *(_QWORD *)(v7 + 8) = a2;
  *(_QWORD *)(v7 + 24) = v9;
  *(_QWORD *)(v7 + 16) = MiSwizzleInvalidPte(128LL);
  *(_WORD *)(v7 + 32) = 1;
  if ( (v4 & 0x80u) != 0 )
    v11 = v10 ^ ((v10 + 1) ^ v10) & 0x3FFFFFFFFFFFFFFFLL;
  else
    v11 = v10 & 0xC000000000000000uLL | 1;
  *(_QWORD *)(v7 + 24) = v11;
  v12 = *(_BYTE *)(v7 + 34) | 0x10;
  *(_BYTE *)(v7 + 34) = v12;
  if ( (v4 & 0x200) != 0 )
    *(_BYTE *)(v7 + 34) = v12 & 0xF8 | 6;
  *(_QWORD *)(v7 + 40) ^= (a3 ^ *(_QWORD *)(v7 + 40)) & 0xFFFFFFFFFLL;
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v8 != 17 )
  {
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && v8 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v17 = ~(unsigned __int16)(-1LL << (v8 + 1));
          v18 = (v17 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v17;
          if ( v18 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    result = v8;
    __writecr8(v8);
  }
  if ( (v4 & 0x800) == 0 )
    return MiLockAndIncrementShareCount(a3);
  return result;
}
