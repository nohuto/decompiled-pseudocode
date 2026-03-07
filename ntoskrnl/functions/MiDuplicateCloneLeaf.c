__int64 __fastcall MiDuplicateCloneLeaf(
        unsigned __int64 a1,
        __int64 *a2,
        ULONG_PTR a3,
        unsigned __int8 a4,
        unsigned __int8 a5)
{
  unsigned __int64 v8; // r14
  ULONG_PTR v9; // rbx
  __int64 v10; // rsi
  int v11; // r15d
  unsigned __int64 v12; // rbx
  unsigned __int64 *v13; // rbx
  volatile LONG *SharedVm; // rbx
  __int64 v16; // r14
  __int64 v17; // rdx
  __int64 v18; // rdi
  __int16 v19; // r13
  __int64 updated; // rax
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v24; // edx
  bool v25; // zf
  char v26; // si
  __int64 v27; // rbx
  __int64 v28; // r8
  unsigned __int64 v29; // r11
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rbx
  unsigned __int8 v32; // al
  struct _KPRCB *v33; // r10
  _DWORD *v34; // r9
  int v35; // edx
  int v36; // [rsp+20h] [rbp-48h]
  int v37; // [rsp+24h] [rbp-44h]
  int v38; // [rsp+28h] [rbp-40h]
  _BYTE *v39; // [rsp+30h] [rbp-38h]
  char PfnPriority; // [rsp+30h] [rbp-38h]
  char *v41; // [rsp+38h] [rbp-30h] BYREF

  v8 = MI_READ_PTE_LOCK_FREE(a1);
  v41 = (char *)v8;
  if ( (v8 & 1) != 0 )
  {
    v9 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v41) >> 12) & 0xFFFFFFFFFFLL;
    v10 = 48 * v9 - 0x220000000000LL;
    v11 = 1;
    v8 = *(_QWORD *)(v10 + 16);
  }
  else
  {
    v12 = v8;
    if ( qword_140C657C0 )
    {
      if ( (v8 & 0x10) != 0 )
        v12 = v8 & 0xFFFFFFFFFFFFFFEFuLL;
      else
        v12 = v8 & ~qword_140C657C0;
    }
    v9 = (v12 >> 12) & 0xFFFFFFFFFFLL;
    v10 = 48 * v9 - 0x220000000000LL;
    if ( (*(_BYTE *)(v10 + 34) & 0x20) != 0 )
    {
      v13 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[26];
      v41 = (char *)v13;
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      MiUnlockWorkingSetExclusive((__int64)v13, a4);
      v39 = (char *)&KeGetCurrentThread()[1].Queue + 6;
      ++*v39;
      --*v39;
      SharedVm = (volatile LONG *)MiGetSharedVm((__int64)v13);
      ExAcquireSpinLockExclusive(SharedVm);
      *((_DWORD *)SharedVm + 1) = 0;
      return 0LL;
    }
    v11 = 0;
  }
  v16 = (v8 >> 5) & 0x1F;
  v37 = MI_IS_SOFTWARE_PTE_SHADOW_STACK((_QWORD *)(v10 + 16));
  v18 = v17 + 48 * a3;
  v19 = 128;
  if ( !v11 )
  {
    v19 = 132;
    MiLockNestedPageAtDpcInline(v18);
  }
  MiCopyPage(a3, v9, v19);
  if ( !v11 )
    _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  PfnPriority = MiGetPfnPriority(v10);
  v38 = *(unsigned __int8 *)(v10 + 34) >> 6;
  if ( v11 )
  {
    updated = MiSwizzleInvalidPte(32 * ((unsigned int)v16 | ((a3 & 0xFFFFFFFFFFLL) << 7) | 0x40));
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && a5 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v24 = ~(unsigned __int16)(-1LL << (a5 + 1));
        v25 = (v24 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v24;
        if ( v25 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(a5);
    updated = MiUpdateTransitionPteFrame((__int64)v41, a3);
  }
  v41 = (char *)updated;
  v26 = updated;
  v36 = 0;
  v27 = updated;
  if ( MiPteInShadowRange((unsigned __int64)a2) )
  {
    if ( MiPteHasShadow() )
    {
      v36 = 1;
      if ( !HIBYTE(word_140C6697C) )
      {
LABEL_29:
        if ( (v26 & 1) != 0 )
          v27 |= 0x8000000000000000uLL;
      }
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    {
      goto LABEL_29;
    }
  }
  v29 = (unsigned __int64)a2;
  *a2 = v27;
  if ( v36 )
    MiWritePteShadow((__int64)a2, v27, v28);
  v30 = MiVaToPfnEx(v29);
  MiInitializePfnForOtherProcess(a3, a1, v30, 16);
  *(_QWORD *)(v18 + 16) = *(_QWORD *)(v18 + 16) & 0xFFFFFFFFFFFFFC1FuLL | (32LL * (unsigned int)v16);
  v31 = (unsigned __int8)MiLockPageInline(v18);
  if ( v37 )
    *(_QWORD *)(v18 + 16) |= 0x4000000uLL;
  if ( *(unsigned __int8 *)(v18 + 34) >> 6 != v38 )
    MiChangePageAttribute(v18, v38, 3u);
  *(_BYTE *)(v18 + 35) ^= (*(_BYTE *)(v18 + 35) ^ PfnPriority) & 7;
  *(_BYTE *)(v18 + 34) = *(_BYTE *)(v18 + 34) & 0xF8 | 6;
  MiDecrementShareCount(v18);
  _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    v32 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v32 <= 0xFu && (unsigned __int8)v31 <= 0xFu && v32 >= 2u )
    {
      v33 = KeGetCurrentPrcb();
      v34 = v33->SchedulerAssist;
      v35 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v31 + 1));
      v25 = (v35 & v34[5]) == 0;
      v34[5] &= v35;
      if ( v25 )
        KiRemoveSystemWorkPriorityKick((__int64)v33);
    }
  }
  __writecr8(v31);
  return 1LL;
}
