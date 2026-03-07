void __fastcall MiUnmapMdlCommon(ULONG_PTR BugCheckParameter2, __int64 a2, int a3, __int64 a4, ULONG_PTR a5)
{
  __int64 v5; // r12
  ULONG_PTR v8; // r15
  unsigned __int64 v9; // rbx
  __int64 v10; // rdi
  unsigned __int64 v11; // r13
  char v12; // al
  char v13; // bl
  unsigned __int64 v14; // r12
  unsigned __int64 v15; // rbx
  __int64 v16; // r8
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rbx
  unsigned __int64 v20; // rbx
  __int64 v21; // r8
  int v22; // eax
  KIRQL v23; // al
  unsigned int v24; // r9d
  _QWORD *v25; // r13
  _QWORD *v26; // r8
  unsigned __int64 v27; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v31; // eax
  bool v32; // zf
  ULONG_PTR v33; // r14
  unsigned __int64 v34; // rbx
  unsigned __int64 v35; // rdi
  unsigned __int8 v36; // r15
  __int64 v37; // rbx
  unsigned __int8 v38; // al
  unsigned __int64 v39; // r12
  unsigned __int8 v40; // cl
  struct _KPRCB *v41; // r10
  _DWORD *v42; // r9
  int v43; // eax
  __int64 v44; // rbx
  int v45; // r12d
  __int64 v46; // r8
  unsigned __int8 v47; // [rsp+30h] [rbp-D0h]
  _QWORD *v48; // [rsp+38h] [rbp-C8h]
  unsigned __int64 ValidPte; // [rsp+40h] [rbp-C0h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+48h] [rbp-B8h]
  ULONG_PTR v51; // [rsp+50h] [rbp-B0h]
  __int64 v52; // [rsp+58h] [rbp-A8h]
  _QWORD *v53; // [rsp+60h] [rbp-A0h]
  __int64 v54; // [rsp+68h] [rbp-98h]
  ULONG_PTR BugCheckParameter4; // [rsp+70h] [rbp-90h]
  ULONG_PTR v56; // [rsp+78h] [rbp-88h]
  _QWORD v57[24]; // [rsp+80h] [rbp-80h] BYREF

  v5 = a2;
  LODWORD(BugCheckParameter3) = a3;
  v52 = a2;
  BugCheckParameter4 = a5;
  memset(v57, 0, 0xB8uLL);
  v57[3] = 0LL;
  v53 = (_QWORD *)(a4 + 48);
  LODWORD(v57[1]) = 20;
  v8 = ((BugCheckParameter2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v51 = v8 + 8 * a5;
  v9 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v48 = (_QWORD *)v9;
  if ( (MI_READ_PTE_LOCK_FREE(v9) & 0x80u) == 0LL )
  {
    v54 = 0LL;
    v10 = 0LL;
    v56 = 1LL;
  }
  else
  {
    v54 = 1LL;
    v56 = 512LL;
    v10 = MiSwizzleInvalidPte(768LL);
  }
  v11 = 0LL;
  if ( v5 )
    v12 = MiLockWorkingSetShared(v5);
  else
    v12 = 17;
  v47 = v12;
  if ( v8 < v51 )
  {
    while ( 1 )
    {
      if ( v12 == 17 )
        goto LABEL_13;
      if ( v11 )
      {
        if ( (v8 & 0xFFF) != 0 )
          goto LABEL_13;
        MiUnlockPageTableInternal(v5, v11);
      }
      v11 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiLockPageTableInternal(v5, v11, 0);
LABEL_13:
      if ( v54 )
      {
        ValidPte = MI_READ_PTE_LOCK_FREE(v9);
        v13 = ValidPte;
        v14 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&ValidPte) >> 12) & 0xFFFFFFFFFFLL;
        if ( v13 >= 0 || *v53 != v14 )
          KeBugCheckEx(0xDAu, 0x10EuLL, BugCheckParameter2, (unsigned int)BugCheckParameter3, BugCheckParameter4);
        v15 = v10;
        if ( MiPteInShadowRange((unsigned __int64)v48) )
        {
          if ( MiPteHasShadow() )
          {
            v17 = 1;
            if ( !HIBYTE(word_140C6697C) && (v10 & 1) != 0 )
              v15 = v10 | 0x8000000000000000uLL;
            goto LABEL_25;
          }
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
            && (v10 & 1) != 0 )
          {
            v15 = v10 | 0x8000000000000000uLL;
          }
        }
        v17 = 0;
LABEL_25:
        *v48 = v15;
        if ( v17 )
        {
          v18 = v15;
          v19 = (__int64)v48;
          MiWritePteShadow((__int64)v48, v18, v16);
        }
        else
        {
          v19 = (__int64)v48;
        }
        MiInsertLargeTbFlushEntry((__int64)v57, 1, v19);
        v9 = v19 + 8;
        v48 = (_QWORD *)v9;
        goto LABEL_42;
      }
      ValidPte = MI_READ_PTE_LOCK_FREE(v8);
      if ( (ValidPte & 1) == 0 )
        KeBugCheckEx(0xDAu, 0x10BuLL, BugCheckParameter2, (unsigned int)BugCheckParameter3, BugCheckParameter4);
      v20 = ZeroPte;
      v14 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&ValidPte) >> 12) & 0xFFFFFFFFFFLL;
      if ( MiPteInShadowRange(v8) )
      {
        if ( MiPteHasShadow() )
        {
          v22 = 1;
          if ( !HIBYTE(word_140C6697C) && (ZeroPte & 1) != 0 )
            v20 = ZeroPte | 0x8000000000000000uLL;
          goto LABEL_39;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (ZeroPte & 1) != 0 )
        {
          v20 = ZeroPte | 0x8000000000000000uLL;
        }
      }
      v22 = 0;
LABEL_39:
      *(_QWORD *)v8 = v20;
      if ( v22 )
        MiWritePteShadow(v8, v20, v21);
      MiInsertTbFlushEntry((__int64)v57, (__int64)(v8 << 25) >> 16, 1LL, 0);
      v9 = (unsigned __int64)v48;
LABEL_42:
      v53 += v56;
      v8 += 8 * v56;
      if ( (ValidPte & 0x200) == 0
        && (v14 > qword_140C65820 || !_bittest64((const signed __int64 *)(48 * v14 - 0x21FFFFFFFFD8LL), 0x36u)) )
      {
        MiDereferenceIoPages(1, v14, v56);
      }
      v5 = v52;
      if ( v8 >= v51 )
        break;
      v12 = v47;
    }
  }
  MiFlushTbList((int *)v57);
  if ( v47 != 17 )
  {
    if ( v11 )
      MiUnlockPageTableInternal(v5, v11);
    MiUnlockWorkingSetShared(v5, v47);
  }
  if ( v54 )
  {
    v23 = ExAcquireSpinLockExclusive(&dword_140C68140);
    v24 = 0;
    v25 = (_QWORD *)qword_140C68150;
    v26 = (_QWORD *)qword_140C68150;
    v27 = v23;
    if ( BugCheckParameter4 >> 9 != 1 )
    {
      do
      {
        v26 = (_QWORD *)*v26;
        ++v24;
      }
      while ( v24 < (BugCheckParameter4 >> 9) - 1 );
    }
    qword_140C68150 = *v26;
    *v26 = 0LL;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C68140);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v27 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v31 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v27 + 1));
        v32 = (v31 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v31;
        if ( v32 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(v27);
    v33 = ((BugCheckParameter2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
    v34 = ((v51 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v35 = 0LL;
    v51 = v34;
    if ( v5 )
      v36 = MiLockWorkingSetShared(v5);
    else
      v36 = 17;
    if ( v33 < v34 )
    {
      while ( 1 )
      {
        if ( v36 != 17 )
        {
          if ( !v35 )
            goto LABEL_72;
          if ( (v33 & 0xFFF) == 0 )
            break;
        }
LABEL_73:
        v37 = (__int64)v25;
        v25 = (_QWORD *)*v25;
        ValidPte = MiMakeValidPte(v33, 0xAAAAAAAAAAAAAAABuLL * ((v37 + 0x220000000000LL) >> 4), -1879048186);
        v38 = MiLockPageInline(v37);
        *(_QWORD *)v37 = 0LL;
        v39 = v38;
        *(_QWORD *)(v37 + 8) = v33;
        _InterlockedAnd64((volatile signed __int64 *)(v37 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          v40 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v40 <= 0xFu && v38 <= 0xFu && v40 >= 2u )
          {
            v41 = KeGetCurrentPrcb();
            v42 = v41->SchedulerAssist;
            v43 = ~(unsigned __int16)(-1LL << (v38 + 1));
            v32 = (v43 & v42[5]) == 0;
            v42[5] &= v43;
            if ( v32 )
              KiRemoveSystemWorkPriorityKick((__int64)v41);
          }
        }
        __writecr8(v39);
        v44 = ValidPte;
        v45 = 0;
        if ( !MiPteInShadowRange(v33) )
          goto LABEL_87;
        if ( MiPteHasShadow() )
        {
          v45 = 1;
          if ( !HIBYTE(word_140C6697C) )
            goto LABEL_85;
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
LABEL_85:
          if ( (v44 & 1) != 0 )
            v44 |= 0x8000000000000000uLL;
        }
LABEL_87:
        *(_QWORD *)v33 = v44;
        if ( v45 )
          MiWritePteShadow(v33, v44, v46);
        v5 = v52;
        v33 += 8LL;
        if ( v33 >= v51 )
          goto LABEL_90;
      }
      MiUnlockPageTableInternal(v5, v35);
LABEL_72:
      v35 = ((v33 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiLockPageTableInternal(v5, v35, 0);
      goto LABEL_73;
    }
LABEL_90:
    if ( v36 != 17 )
    {
      if ( v35 )
        MiUnlockPageTableInternal(v5, v35);
      MiUnlockWorkingSetShared(v5, v36);
    }
  }
}
