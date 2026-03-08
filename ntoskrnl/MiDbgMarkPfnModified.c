/*
 * XREFs of MiDbgMarkPfnModified @ 0x1406417E0
 * Callers:
 *     MiDbgWriteCheck @ 0x1403878D8 (MiDbgWriteCheck.c)
 * Callees:
 *     MiGetPagingFileOffset @ 0x14029EA80 (MiGetPagingFileOffset.c)
 *     MiAddLockedPageCharge @ 0x1402A309C (MiAddLockedPageCharge.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140305AB0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetSystemRegionType @ 0x14032E6D0 (MiGetSystemRegionType.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiDbgMarkPfnModified(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r12
  unsigned __int64 v3; // rax
  signed __int64 v4; // rsi
  unsigned int v5; // r13d
  unsigned __int8 CurrentIrql; // di
  _DWORD *SchedulerAssist; // r9
  int v8; // eax
  unsigned __int8 v9; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v11; // r8
  int v12; // eax
  bool v13; // zf
  char v15; // bp
  __int64 v16; // r14
  __int64 v17; // r14
  __int64 v18; // rbp
  int v19; // eax
  __int64 v20; // rbp
  signed __int64 v21; // rax
  char v22; // dl
  unsigned __int8 v23; // al
  struct _KPRCB *v24; // r10
  _DWORD *v25; // r9
  int v26; // edx
  __int64 v28; // [rsp+68h] [rbp+10h] BYREF

  v28 = a2;
  v2 = a1;
  v3 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v28) >> 12) & 0xFFFFFFFFFFLL;
  if ( (MiFlags & 0x10000000) == 0 )
    return 1LL;
  if ( v3 > qword_140C65820 )
    return 1LL;
  if ( !_bittest64((const signed __int64 *)(48 * v3 - 0x21FFFFFFFFD8LL), 0x36u) )
    return 1LL;
  v4 = 48 * v3 - 0x220000000000LL;
  if ( (*(_BYTE *)(v4 + 34) & 0x10) != 0 )
    return 1LL;
  v5 = 0;
  CurrentIrql = 17;
  if ( KeGetCurrentIrql() <= 2u )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        v8 = 4;
        if ( CurrentIrql != 2 )
          v8 = (-1LL << (CurrentIrql + 1)) & 4;
        SchedulerAssist[5] |= v8;
      }
    }
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 24), 0x3FuLL) )
  {
    if ( CurrentIrql != 17 )
    {
      if ( KiIrqlFlags )
      {
        v9 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v9 <= 0xFu && CurrentIrql <= 0xFu && v9 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v11 = CurrentPrcb->SchedulerAssist;
          v12 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v13 = (v12 & v11[5]) == 0;
          v11[5] &= v12;
          if ( v13 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      __writecr8(CurrentIrql);
    }
    return 0LL;
  }
  v15 = *(_BYTE *)(v4 + 34);
  v16 = *(_QWORD *)(v4 + 16);
  if ( (v16 & 0x400) == 0 )
  {
    if ( (v15 & 8) != 0 || !(unsigned int)MiGetPagingFileOffset((__int64 *)(v4 + 16)) )
    {
      *(_BYTE *)(v4 + 34) = v15 | 0x10;
    }
    else
    {
      v20 = 0LL;
      while ( 1 )
      {
        v21 = _InterlockedCompareExchange64(&MiState[v20 + 1403], v4, 0LL);
        if ( !v21 )
          break;
        if ( (v21 | 1) == (v4 | 1) )
          goto LABEL_50;
        v20 = (unsigned int)(v20 + 1);
        if ( (unsigned int)v20 >= 0x20 )
        {
          if ( (_DWORD)v20 == 32 )
            goto LABEL_51;
          break;
        }
      }
      v22 = 5;
      if ( CurrentIrql != 17 )
        v22 = 1;
      MiAddLockedPageCharge(v4, v22);
      _InterlockedAdd64(&MiState[v20 + 1403], 1uLL);
      _InterlockedCompareExchange(&ExpDebuggerWork, 1, 0);
    }
    goto LABEL_50;
  }
  if ( (v15 & 0x10) != 0 )
  {
LABEL_50:
    v5 = 1;
    goto LABEL_51;
  }
  if ( !_bittest64((const signed __int64 *)(v4 + 40), 0x35u) )
  {
    if ( qword_140C657C0 && (v16 & 0x10) == 0 )
      v16 &= ~qword_140C657C0;
    v17 = v16 >> 16;
    v18 = *(_QWORD *)v17;
    v19 = *(_DWORD *)(*(_QWORD *)v17 + 56LL);
    if ( (v19 & 0x20) == 0 )
      goto LABEL_38;
    if ( (v19 & 0x40000) != 0 || !*(_QWORD *)(*(_QWORD *)(v18 + 96) + 32LL) )
    {
LABEL_34:
      if ( (*(_BYTE *)(v17 + 32) & 0x3Eu) < 8 && (unsigned int)MiGetSystemRegionType(v2) == 1 )
        byte_140C681D4 = 1;
      byte_140C67CC1 = 1;
LABEL_38:
      *(_BYTE *)(v4 + 34) |= 0x10u;
      goto LABEL_50;
    }
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel() )
    {
      *(_DWORD *)(v18 + 56) |= 0x40000u;
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v18 + 72));
      v2 = a1;
      goto LABEL_34;
    }
  }
LABEL_51:
  _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( CurrentIrql != 17 )
  {
    if ( KiIrqlFlags )
    {
      v23 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v23 <= 0xFu && CurrentIrql <= 0xFu && v23 >= 2u )
      {
        v24 = KeGetCurrentPrcb();
        v25 = v24->SchedulerAssist;
        v26 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v13 = (v26 & v25[5]) == 0;
        v25[5] &= v26;
        if ( v13 )
          KiRemoveSystemWorkPriorityKick((__int64)v24);
      }
    }
    __writecr8(CurrentIrql);
  }
  return v5;
}
