/*
 * XREFs of MmCopyToCachedPage @ 0x1402B1B90
 * Callers:
 *     CcMapAndCopyInToCache @ 0x1402B2300 (CcMapAndCopyInToCache.c)
 * Callees:
 *     MmAccessFault @ 0x14020D050 (MmAccessFault.c)
 *     MiReservePtes @ 0x140226570 (MiReservePtes.c)
 *     MiUnlockProtoPoolPage @ 0x140239160 (MiUnlockProtoPoolPage.c)
 *     MiReleasePtes @ 0x140245170 (MiReleasePtes.c)
 *     MiLockPageInline @ 0x1402804B0 (MiLockPageInline.c)
 *     MiLockProtoPoolPage @ 0x14029A790 (MiLockProtoPoolPage.c)
 *     MiAddLockedPageCharge @ 0x14029AA98 (MiAddLockedPageCharge.c)
 *     MiMakePageAvoidRead @ 0x1402A4700 (MiMakePageAvoidRead.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1402A9250 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     MiControlAreaUsingExtents @ 0x1402B32E0 (MiControlAreaUsingExtents.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiMakeSystemCachePteValid @ 0x1402F3648 (MiMakeSystemCachePteValid.c)
 *     MiUnlinkStandbyPfn @ 0x140307F30 (MiUnlinkStandbyPfn.c)
 *     MiDirtySystemCachePte @ 0x1403159C8 (MiDirtySystemCachePte.c)
 *     MiLockLeafPage @ 0x140332CE0 (MiLockLeafPage.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     RtlCopyMemoryNonTemporal @ 0x1404078E0 (RtlCopyMemoryNonTemporal.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     MiMapFrame @ 0x140536EC4 (MiMapFrame.c)
 *     MiMapSystemCachePage @ 0x140536FE4 (MiMapSystemCachePage.c)
 *     MiFreeTransitionPageHeatList @ 0x14055F534 (MiFreeTransitionPageHeatList.c)
 *     MiMakeTransitionHeatBatch @ 0x14055F9B0 (MiMakeTransitionHeatBatch.c)
 *     MiProcessTransitionHeatBatch @ 0x14055FD3C (MiProcessTransitionHeatBatch.c)
 *     MiReplenishTransitionPageHeatList @ 0x14055FFA0 (MiReplenishTransitionPageHeatList.c)
 *     MiMapCacheExceptionFilter @ 0x1408C843C (MiMapCacheExceptionFilter.c)
 */

__int64 __fastcall MmCopyToCachedPage(
        ULONG_PTR BugCheckParameter1,
        void *a2,
        unsigned int a3,
        size_t a4,
        unsigned int a5)
{
  ULONG_PTR v5; // r14
  ULONG_PTR BugCheckParameter4; // rsi
  ULONG_PTR v7; // r13
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rbx
  __int64 v10; // r8
  __int64 v11; // rdx
  unsigned __int64 v12; // rdx
  __int64 *v13; // rcx
  unsigned __int64 v14; // r9
  unsigned __int64 v15; // rsi
  unsigned int v16; // r15d
  ULONG_PTR v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rbx
  __int64 v20; // rbx
  __int64 v21; // rdi
  unsigned __int8 v22; // r14
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  int PageAvoidRead; // eax
  struct _LIST_ENTRY *v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // r13
  __int64 v32; // rax
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rax
  int v35; // r14d
  int v36; // r15d
  __int64 v37; // rdx
  _SLIST_ENTRY *v38; // rdi
  unsigned __int64 v39; // r14
  int v40; // ebx
  __int64 v41; // rcx
  int v42; // edi
  void *v43; // rcx
  _QWORD *v44; // rsi
  __int64 v45; // rdx
  struct _LIST_ENTRY *Flink; // rax
  __int64 v47; // rax
  struct _LIST_ENTRY *v48; // rdx
  __int64 v49; // rax
  struct _LIST_ENTRY *v50; // rdx
  __int64 v51; // rax
  __int64 v52; // rdx
  int v53; // eax
  int v54; // eax
  unsigned __int64 v55; // rbx
  struct _LIST_ENTRY *v56; // rdx
  __int64 v57; // rax
  unsigned __int64 v58; // rbx
  __int64 v59; // rdx
  __int64 v60; // rdx
  struct _LIST_ENTRY *v61; // r8
  _DWORD *v62; // r9
  __int64 v63; // rax
  __int64 v64; // rbx
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v66; // bl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v69; // eax
  bool v70; // zf
  unsigned __int8 v71[4]; // [rsp+40h] [rbp-88h] BYREF
  unsigned int v72; // [rsp+44h] [rbp-84h] BYREF
  _QWORD *v73; // [rsp+48h] [rbp-80h]
  __int64 v74; // [rsp+50h] [rbp-78h] BYREF
  __int64 v75; // [rsp+58h] [rbp-70h]
  PSLIST_ENTRY ListEntry; // [rsp+60h] [rbp-68h]
  unsigned __int64 v77; // [rsp+68h] [rbp-60h] BYREF
  unsigned __int64 v78; // [rsp+70h] [rbp-58h] BYREF
  unsigned __int64 v79; // [rsp+78h] [rbp-50h]
  __int64 v80; // [rsp+80h] [rbp-48h]

  v5 = a4;
  BugCheckParameter4 = a3;
  v7 = BugCheckParameter1;
  v74 = 0LL;
  v72 = 0;
  v75 = 0LL;
  ListEntry = 0LL;
  v8 = ((BugCheckParameter1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v9 = *(_QWORD *)v8;
  if ( v8 >= 0xFFFFF6FB7DBED000uLL
    && v8 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v9 & 1) != 0
    && ((v9 & 0x20) == 0 || (v9 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v47 = *((_QWORD *)&Flink->Flink + ((v8 >> 3) & 0x1FF));
      v8 = v9 | 0x20;
      if ( (v47 & 0x20) == 0 )
        v8 = v9;
      v9 = v8;
      if ( (v47 & 0x42) != 0 )
        v9 = v8 | 0x42;
    }
  }
  v78 = v9;
  if ( (unsigned int)MiPteInShadowRange(&v78, v8)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v9 & 1) != 0
    && ((v9 & 0x20) == 0 || (v9 & 0x42) == 0) )
  {
    v28 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v28 )
    {
      v29 = *((_QWORD *)&v28->Flink + (((unsigned __int64)&v78 >> 3) & 0x1FF));
      v30 = v9 | 0x20;
      if ( (v29 & 0x20) == 0 )
        v30 = v9;
      v9 = v30;
      if ( (v29 & 0x42) != 0 )
        v9 = v30 | 0x42;
    }
  }
  v11 = *(_QWORD *)(48 * ((v9 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL + 16);
  if ( v11 )
    v11 += 40 * ((v7 >> 18) & 7);
  v12 = *(_QWORD *)(v11 + 24);
  v13 = (__int64 *)(v12 & 0xFFFFFFFFFFFFFFFEuLL);
  if ( (v12 & 1) == 0 )
    v13 = (__int64 *)v12;
  v80 = *v13;
  v14 = *(_QWORD *)(qword_140C4E648 + 8LL * (*(_WORD *)(v80 + 60) & 0x3FF)) + 7232LL;
  v79 = v14;
  if ( BugCheckParameter4 + v5 > 0x1000 || BugCheckParameter4 + v5 < v5 )
    KeBugCheckEx(0x1Au, 0x776uLL, v7, v5, BugCheckParameter4);
  v15 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v16 = a5;
  if ( (a5 & 4) != 0 && ((a3 & 0x3F) != 0 || (v5 & 0x3F) != 0) )
    return 3221226612LL;
  if ( (a5 & 8) != 0 )
  {
    v17 = MiReservePtes((__int64)&qword_140C4EF40, 1u, v10, v14);
    v73 = (_QWORD *)v17;
    if ( !v17 )
      return 3221225626LL;
    v14 = v79;
  }
  else
  {
    v17 = 0LL;
    v73 = 0LL;
  }
  v18 = *(_QWORD *)v15;
  if ( v15 >= 0xFFFFF6FB7DBED000uLL && v15 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0xC00000) != 0 )
  {
    if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v18 & 1) != 0
      && ((v18 & 0x20) == 0 || (v18 & 0x42) == 0) )
    {
      v48 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v48 )
      {
        v49 = *((_QWORD *)&v48->Flink + ((v15 >> 3) & 0x1FF));
        LOBYTE(v48) = v18 | 0x20;
        if ( (v49 & 0x20) == 0 )
          v48 = *(struct _LIST_ENTRY **)v15;
        LOBYTE(v18) = (_BYTE)v48;
        if ( (v49 & 0x42) != 0 )
          LOBYTE(v18) = (unsigned __int8)v48 | 0x42;
      }
    }
    v17 = (ULONG_PTR)v73;
  }
  if ( (v18 & 1) == 0 )
    goto LABEL_14;
  v45 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( !v17 )
  {
    MiDirtySystemCachePte(v14, v45);
    goto LABEL_72;
  }
  v41 = MiMapSystemCachePage(v17, v45, a5);
  v75 = v41;
  if ( !v41 )
  {
    v17 = (ULONG_PTR)v73;
LABEL_14:
    v19 = *(_QWORD *)v15;
    if ( v15 >= 0xFFFFF6FB7DBED000uLL && v15 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0xC00000) != 0 )
    {
      if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v19 & 1) != 0
        && ((v19 & 0x20) == 0 || (v19 & 0x42) == 0) )
      {
        v50 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v50 )
        {
          v51 = *((_QWORD *)&v50->Flink + ((v15 >> 3) & 0x1FF));
          v52 = v19 | 0x20;
          if ( (v51 & 0x20) == 0 )
            v52 = *(_QWORD *)v15;
          v19 = v52;
          if ( (v51 & 0x42) != 0 )
            v19 = v52 | 0x42;
        }
      }
      v17 = (ULONG_PTR)v73;
    }
    if ( (v19 & 1) != 0 )
    {
      if ( !v17 )
      {
        v41 = v75;
        goto LABEL_73;
      }
      v41 = MiMapSystemCachePage(v17, ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, a5);
      v75 = v41;
      if ( v41 )
        goto LABEL_73;
    }
    if ( qword_140C4DF40 )
    {
      if ( (v19 & 0x10) != 0 )
        v19 &= ~0x10uLL;
      else
        v19 &= ~qword_140C4DF40;
    }
    v20 = v19 >> 16;
    while ( 1 )
    {
      while ( 1 )
      {
        v21 = 0LL;
        v22 = 17;
        v71[0] = 17;
        v23 = MI_READ_PTE_LOCK_FREE(v20);
        v74 = v23;
        if ( (v23 & 1) == 0 && (v23 & 0x400) != 0 )
          goto LABEL_22;
        while ( 1 )
        {
          v21 = MiLockProtoPoolPage(v20, (__int64)v71);
          if ( v21 )
            break;
          MmAccessFault(2uLL, v20, 0, 0LL);
        }
        v31 = MiLockLeafPage(v20, 0LL);
        v32 = MI_READ_PTE_LOCK_FREE(v20);
        v74 = v32;
        if ( v31 )
          break;
        v22 = v71[0];
        v7 = BugCheckParameter1;
LABEL_22:
        if ( v21 )
          MiUnlockProtoPoolPage(v21, v22);
        if ( (unsigned int)MiControlAreaUsingExtents(v80, v24, v25) )
        {
          v42 = MmAccessFault(0LL, v7, 0, 0LL);
          v72 = v42;
          if ( v42 < 0 )
            goto LABEL_68;
        }
        else
        {
          v5 = a4;
          PageAvoidRead = MiMakePageAvoidRead(v20, a2, a3, a4, v16, (unsigned __int64)&v74, &v72);
          if ( !PageAvoidRead )
            return v72;
          v53 = PageAvoidRead - 1;
          if ( v53 )
          {
            v54 = v53 - 2;
            if ( !v54 )
            {
              v40 = 0;
              goto LABEL_61;
            }
            if ( v54 != 1 )
            {
              v40 = 1;
LABEL_61:
              MiMakeSystemCachePteValid(v79, v15, v74, v16);
              v41 = v75;
              goto LABEL_62;
            }
LABEL_72:
            v41 = v75;
            goto LABEL_73;
          }
        }
      }
      if ( (v32 & 1) != 0 )
        break;
      v33 = *(_QWORD *)(v31 + 16);
      if ( (v33 & 0x400) != 0 )
        v34 = v33 >> 11;
      else
        v34 = v33 >> 3;
      if ( (v34 & 1) != 0
        && (ListEntry = (PSLIST_ENTRY)MiMakeTransitionHeatBatch(v31, 0LL, 0LL), ListEntry == (PSLIST_ENTRY)-1LL) )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v31 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MiUnlockProtoPoolPage(v21, v71[0]);
        MiReplenishTransitionPageHeatList();
        ListEntry = 0LL;
        v7 = BugCheckParameter1;
      }
      else
      {
        v35 = MiUnlinkStandbyPfn(v20, v16);
        if ( !v35 )
          v74 = MI_READ_PTE_LOCK_FREE(v20);
LABEL_53:
        v72 = 0;
        v36 = 0;
        if ( v73 && !v35 && !(unsigned int)MiAddLockedPageCharge(v31, 0) )
        {
          v72 = -1073741670;
          v36 = -1073741670;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v31 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MiUnlockProtoPoolPage(v21, v71[0]);
        v38 = ListEntry;
        if ( ListEntry )
        {
          MiProcessTransitionHeatBatch(ListEntry);
          MiFreeTransitionPageHeatList(v38);
          ListEntry = 0LL;
        }
        if ( v36 < 0 )
        {
          v42 = v72;
          goto LABEL_68;
        }
        v16 = a5;
        v7 = BugCheckParameter1;
        if ( v35 != 1 )
        {
          if ( v35 != 2 )
          {
            v39 = (unsigned __int64)v73;
            if ( v73 )
            {
              v55 = v74;
              if ( (unsigned int)MiPteInShadowRange(&v74, v37)
                && (MiFlags & 0xC00000) != 0
                && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
                && (v55 & 1) != 0
                && ((v55 & 0x20) == 0 || (v55 & 0x42) == 0) )
              {
                v56 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
                if ( v56 )
                {
                  v57 = *((_QWORD *)&v56->Flink + (((unsigned __int64)&v74 >> 3) & 0x1FF));
                  if ( (v57 & 0x20) != 0 )
                    v55 |= 0x20uLL;
                  if ( (v57 & 0x42) != 0 )
                    v55 |= 0x42uLL;
                }
                else
                {
                  v55 = v74;
                }
              }
              v75 = MiMapFrame(v39, (v55 >> 12) & 0xFFFFFFFFFLL);
            }
            v7 = BugCheckParameter1;
            v5 = a4;
            v40 = 1;
            goto LABEL_61;
          }
          v7 = BugCheckParameter1;
          v42 = MmAccessFault(0LL, BugCheckParameter1, 0, 0LL);
          v72 = v42;
          if ( v42 < 0 )
            goto LABEL_68;
        }
      }
    }
    *(_QWORD *)(v31 + 24) ^= (((*(_QWORD *)(v31 + 24) & 0x3FFFFFFFFFFFFFFFLL) + 1) ^ *(_QWORD *)(v31 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
    v35 = 0;
    goto LABEL_53;
  }
LABEL_73:
  v40 = 1;
LABEL_62:
  v42 = 0;
  v72 = 0;
  if ( v40 )
  {
    if ( !v41 )
      v41 = v7;
    v43 = (void *)(a3 + v41);
    if ( (v16 & 4) != 0 )
      RtlCopyMemoryNonTemporal(v43, a2, v5);
    else
      memmove(v43, a2, v5);
  }
LABEL_68:
  v44 = v73;
  if ( v73 )
  {
    v58 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v73);
    v77 = v58;
    MiReleasePtes((__int64)&qword_140C4EF40, v44, 1u);
    if ( (v58 & 1) != 0 )
    {
      if ( (unsigned int)MiPteInShadowRange(&v77, v59) )
      {
        if ( (MiFlags & 0xC00000) != 0 && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1 )
        {
          v60 = v58;
          if ( (v58 & 0x20) == 0 || (v58 & 0x42) == 0 )
          {
            v61 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( v61 )
            {
              v63 = *((_QWORD *)&v61->Flink + (((unsigned __int64)&v77 >> 3) & 0x1FF));
              if ( (v63 & 0x20) != 0 )
                v58 |= 0x20uLL;
              if ( (v63 & 0x42) != 0 )
                v58 |= 0x42uLL;
            }
            else
            {
              v58 = v77;
            }
          }
        }
      }
      v64 = 48 * ((v58 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      v71[0] = MiLockPageInline(v64, v60, (__int64)v61, v62);
      MiRemoveLockedPageChargeAndDecRef(v64);
      _InterlockedAnd64((volatile signed __int64 *)(v64 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
      {
        v66 = v71[0];
        if ( v71[0] <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v66 = v71[0];
          v69 = ~(unsigned __int16)(-1LL << (v71[0] + 1));
          v70 = (v69 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v69;
          if ( v70 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      else
      {
        v66 = v71[0];
      }
      __writecr8(v66);
      return v72;
    }
  }
  return (unsigned int)v42;
}
