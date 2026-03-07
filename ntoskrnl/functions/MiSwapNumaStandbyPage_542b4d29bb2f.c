ULONG_PTR __fastcall MiSwapNumaStandbyPage(ULONG_PTR BugCheckParameter3, unsigned int a2, int a3, char a4)
{
  ULONG_PTR v4; // r15
  __int64 v5; // rbx
  signed __int64 v6; // rcx
  __int64 v8; // rsi
  unsigned int v9; // r13d
  int v10; // r12d
  __int64 v11; // rdx
  __int64 v12; // r10
  unsigned __int8 *v13; // rax
  unsigned int v14; // edx
  __int64 v15; // r14
  int v16; // r8d
  unsigned __int8 *v17; // r9
  __int64 v18; // rcx
  unsigned __int64 v19; // r14
  unsigned __int64 v20; // rax
  _QWORD *v21; // rdi
  volatile LONG *v22; // r13
  unsigned __int8 CurrentIrql; // si
  _DWORD *SchedulerAssist; // r9
  __int64 v25; // rdx
  ULONG_PTR v26; // r12
  unsigned __int8 v27; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v29; // r9
  int v30; // eax
  bool v31; // zf
  __int64 v32; // rdi
  unsigned __int8 v33; // al
  struct _KPRCB *v34; // r10
  _DWORD *v35; // r9
  int v36; // eax
  __int64 v37; // rbx
  unsigned __int8 v38; // al
  struct _KPRCB *v39; // r9
  _DWORD *v40; // r8
  int v41; // eax
  __int64 v42; // r11
  unsigned __int8 v43; // al
  struct _KPRCB *v44; // r9
  _DWORD *v45; // r8
  int v46; // eax
  ULONG_PTR v48; // r9
  unsigned __int64 v49; // rdx
  volatile signed __int32 *v50; // r8
  unsigned int v51; // eax
  unsigned __int64 v52; // rcx
  __int64 v53; // r9
  ULONG_PTR v54; // rcx
  _QWORD *v55; // r8
  ULONG_PTR v56; // r9
  __int64 v57; // r10
  __int64 updated; // rax
  __int64 v59; // r8
  BOOL IsDecayPfn; // eax
  __int64 v61; // r10
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r9
  __int64 v65; // r13
  __int64 v66; // rbx
  _QWORD *v67; // r14
  __int64 v68; // rax
  __int64 v69; // rbx
  __int64 v70; // r8
  int v71; // eax
  char v72; // bl
  __int64 v73; // r15
  char v74; // al
  unsigned __int8 v75; // al
  struct _KPRCB *v76; // rax
  _DWORD *v77; // r9
  int v78; // edx
  signed __int32 v79[8]; // [rsp+0h] [rbp-B8h] BYREF
  int v80; // [rsp+20h] [rbp-98h]
  unsigned __int8 *v81; // [rsp+28h] [rbp-90h]
  int v82; // [rsp+30h] [rbp-88h]
  unsigned __int64 v83; // [rsp+38h] [rbp-80h]
  _QWORD *v84; // [rsp+40h] [rbp-78h]
  __int64 v85; // [rsp+48h] [rbp-70h]
  __int64 v86; // [rsp+50h] [rbp-68h]
  int v87; // [rsp+58h] [rbp-60h] BYREF
  unsigned __int8 *v88; // [rsp+60h] [rbp-58h]
  signed __int64 v89; // [rsp+68h] [rbp-50h]
  __int64 v90; // [rsp+70h] [rbp-48h]
  int SpinLock; // [rsp+C0h] [rbp+8h]
  volatile LONG *SpinLocka; // [rsp+C0h] [rbp+8h]
  int v93; // [rsp+C8h] [rbp+10h]

  v4 = BugCheckParameter3;
  v5 = a2;
  v6 = 48 * BugCheckParameter3;
  v89 = v6;
  v8 = v6 - 0x220000000000LL;
  v9 = 0;
  v10 = 0;
  v11 = (*(_QWORD *)(v6 - 0x220000000000LL + 40) >> 43) & 0x3FFLL;
  v86 = v6 - 0x220000000000LL;
  v12 = *(_QWORD *)(qword_140C67048 + 8 * v11);
  v13 = 0LL;
  v14 = MmNumberOfChannels;
  v85 = v12;
  v93 = 0;
  v15 = *(_QWORD *)(v12 + 16) + 25408 * v5;
  v90 = v15;
  v81 = 0LL;
  SpinLock = 0;
  v16 = *(_DWORD *)(v15 + 23000) & 1;
  v80 = MmNumberOfChannels;
  v82 = v16;
  if ( (unsigned int)MmNumberOfChannels > 1 )
  {
    v13 = (unsigned __int8 *)(v15 + 23033);
    v81 = (unsigned __int8 *)(v15 + 23033);
    if ( v16 )
    {
      if ( (a4 & 0x20) != 0 )
      {
        v14 = 1;
        v93 = a3;
        v80 = 1;
        v9 = a3;
        v13 = 0LL;
      }
      else
      {
        if ( (a4 & 8) == 0 )
          goto LABEL_10;
        v13 = (unsigned __int8 *)(v15 + 23037);
      }
      v81 = v13;
    }
    else
    {
      if ( *((_DWORD *)MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * (v6 >> 4)) + 2) == (_DWORD)v5 )
        return v4;
      v13 = v81;
      v10 = a3;
      v6 = v89;
      v14 = v80;
      v16 = v82;
      v12 = v85;
      SpinLock = a3;
    }
  }
LABEL_10:
  v17 = &v13[v14];
  v88 = v17;
  while ( 1 )
  {
    if ( v13 )
    {
      if ( v16 )
      {
        v9 = *v13;
        v93 = v9;
        if ( *((_DWORD *)MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * (v6 >> 4)) + 2) == (_DWORD)v5
          && v9 == (unsigned int)MiGetPfnChannel(v8) )
        {
          return v4;
        }
        v12 = v85;
        v17 = v88;
      }
      else
      {
        v9 = v10;
        v93 = v10;
        v10 = v10 + 1 < v14 ? v10 + 1 : 0;
        SpinLock = v10;
      }
    }
    v83 = v12 + 3648;
    v18 = v15 + 704LL * v9;
    v19 = v12 + 2944;
    if ( v12 + 2944 < (unsigned __int64)(v12 + 3648) )
      break;
LABEL_53:
    v13 = v81 + 1;
    v81 = v13;
    if ( v13 >= v17 )
      return v4;
    v15 = v90;
    v6 = v89;
    v14 = v80;
    v16 = v82;
  }
  v20 = v83;
  v21 = (_QWORD *)(v18 + 3272);
  v84 = (_QWORD *)(v18 + 3272);
  v22 = (volatile LONG *)(v12 + 2976);
  while ( *v21 == 0x3FFFFFFFFFLL )
  {
LABEL_51:
    v21 += 11;
    v19 += 88LL;
    v22 += 22;
    v84 = v21;
    if ( v19 >= v20 )
    {
      v8 = v86;
      v10 = SpinLock;
      v9 = v93;
      v17 = v88;
      v12 = v85;
      goto LABEL_53;
    }
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v25) = 4;
    else
      v25 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v25;
  }
  ExAcquireSpinLockExclusiveAtDpcLevel(v22);
  v26 = *v21;
  if ( *v21 == 0x3FFFFFFFFFLL )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(v22);
    if ( KiIrqlFlags )
    {
      v27 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v27 <= 0xFu && CurrentIrql <= 0xFu && v27 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v29 = CurrentPrcb->SchedulerAssist;
        v30 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v31 = (v30 & v29[5]) == 0;
        v29[5] &= v30;
        if ( v31 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
LABEL_50:
    __writecr8(CurrentIrql);
    v20 = v83;
    goto LABEL_51;
  }
  v32 = 48 * v26 - 0x220000000000LL;
  if ( !_interlockedbittestandset64((volatile signed __int32 *)(v32 + 24), 0x3FuLL) )
    goto LABEL_55;
  ExReleaseSpinLockExclusiveFromDpcLevel(v22);
  v87 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v32 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v87);
    while ( *(__int64 *)(v32 + 24) < 0 );
  }
  if ( (*(_BYTE *)(v32 + 34) & 7) != 2 )
  {
LABEL_42:
    _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      v33 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v33 <= 0xFu && CurrentIrql <= 0xFu && v33 >= 2u )
      {
        v34 = KeGetCurrentPrcb();
        v35 = v34->SchedulerAssist;
        v36 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v31 = (v36 & v35[5]) == 0;
        v35[5] &= v36;
        if ( v31 )
          KiRemoveSystemWorkPriorityKick((__int64)v34);
      }
    }
    v19 -= 88LL;
    v22 -= 22;
    v21 = v84 - 11;
    goto LABEL_50;
  }
  ExAcquireSpinLockExclusiveAtDpcLevel(v22);
  if ( v26 != *v84 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(v22);
    goto LABEL_42;
  }
LABEL_55:
  v37 = v86;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v86 + 24), 0x3FuLL) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v19 + 32));
    _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      v38 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v38 <= 0xFu && CurrentIrql <= 0xFu && v38 >= 2u )
      {
        v39 = KeGetCurrentPrcb();
        v40 = v39->SchedulerAssist;
        v41 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v31 = (v41 & v40[5]) == 0;
        v40[5] &= v41;
        if ( v31 )
          KiRemoveSystemWorkPriorityKick((__int64)v39);
      }
    }
    goto LABEL_72;
  }
  if ( MiCanPageMove(48 * v26 - 0x220000000000LL) )
  {
    if ( dword_140C67ACC != 1 )
      goto LABEL_84;
    v48 = v26 & 0x1F;
    LOBYTE(v49) = 1;
    v50 = (volatile signed __int32 *)(*((_QWORD *)&xmmword_140C67B20 + 1) + 4 * (v26 >> 5));
    if ( v48 + 1 > 0x20 )
    {
      if ( (v26 & 0x1F) != 0 )
      {
        _InterlockedOr(v50++, ((1 << (32 - (v26 & 0x1F))) - 1) << v48);
        v49 = 1LL - (32 - (unsigned int)(v26 & 0x1F));
        if ( v49 >= 0x20 )
        {
          v52 = v49 >> 5;
          v49 += -32LL * (v49 >> 5);
          do
          {
            *v50++ = -1;
            --v52;
          }
          while ( v52 );
        }
        if ( !v49 )
        {
LABEL_84:
          v53 = *(_QWORD *)v32 & 0xFFFFFFFFFFLL;
          v54 = *(_QWORD *)(v32 + 24) & 0xFFFFFFFFFFLL;
          if ( (*(_BYTE *)(v32 + 35) & 8) != 0 )
          {
            if ( MiIsDecayPfn(v54) )
            {
              updated = MiUpdateTransitionPteFrame(v55[2], v4);
              *(_QWORD *)(v59 + 16) = updated;
            }
            else
            {
              *v55 ^= v57 & (*v55 ^ v4);
            }
            IsDecayPfn = MiIsDecayPfn(v56);
            v62 = v4;
            v63 = v61;
            if ( IsDecayPfn )
            {
              MiSetPfnPteFrame(v61, v4);
              goto LABEL_97;
            }
          }
          else
          {
            if ( v54 == v42 )
              *(_QWORD *)(v19 + 16) = v4;
            else
              *(_QWORD *)(48 * v54 - 0x220000000000LL) ^= (*(_QWORD *)(48 * v54 - 0x220000000000LL) ^ v4) & 0xFFFFFFFFFFLL;
            if ( v53 == v42 )
            {
              *(_QWORD *)(v19 + 24) = v4;
LABEL_97:
              MiUnlinkNumaStandbyPage(48 * v26 - 0x220000000000LL);
              MiFinalizePageAttribute(v37, *(unsigned __int8 *)(v32 + 34) >> 6, 1u, v64);
              MiReplaceStandbyLookaside(v26, -1LL, 0);
              MiCopyPfnEntryEx(v37, (__int128 *)(48 * v26 - 0x220000000000LL));
              MiInsertNumaStandbyPage(v37, 0LL);
              _InterlockedOr(v79, 0);
              if ( (((unsigned __int8)KiTbFlushTimeStamp ^ (*(_QWORD *)(v37 + 24) >> 59)) & 7) != 0 )
                MiSetPfnTbFlushStamp(v37, KiTbFlushTimeStamp, 1);
              SpinLocka = (volatile LONG *)(v19 + 32);
              ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v19 + 32));
              v65 = *(_QWORD *)(v32 + 40) & 0xFFFFFFFFFFLL;
              if ( v65 == v26 )
              {
                v66 = *(_QWORD *)(v32 + 8);
                MiSetPfnPteFrame(v86, v4);
                *(_QWORD *)((v66 | 0x8000000000000000uLL) - 1392) = KeMakeKernelDirectoryTableBase(v4 << 12);
                v67 = (_QWORD *)(*(_QWORD *)(v32 + 8) | 0x8000000000000000uLL);
              }
              else
              {
                v67 = (_QWORD *)(MiMapPageInHyperSpaceWorker(*(_QWORD *)(v32 + 40) & 0xFFFFFFFFFFLL, 0LL, 0x80000000)
                               + 8LL * ((*(_DWORD *)(v32 + 8) >> 3) & 0x1FF));
              }
              v68 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v67);
              v69 = MiUpdateTransitionPteFrame(v68, v4);
              if ( MiPteInShadowRange((unsigned __int64)v67) )
              {
                if ( MiPteHasShadow() )
                {
                  v71 = 1;
                  if ( !HIBYTE(word_140C6697C) && (v69 & 1) != 0 )
                    v69 |= 0x8000000000000000uLL;
                  goto LABEL_111;
                }
                if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
                  && (v69 & 1) != 0 )
                {
                  v69 |= 0x8000000000000000uLL;
                }
              }
              v71 = 0;
LABEL_111:
              *v67 = v69;
              if ( v71 )
                MiWritePteShadow((__int64)v67, v69, v70);
              if ( v65 != v26 )
                MiUnmapPageInHyperSpaceWorker((unsigned __int64)v67, 0x11u);
              MiCopyPage(v4, v26, 6);
              _InterlockedOr(v79, 0);
              v72 = KiTbFlushTimeStamp;
              v73 = v86;
              if ( (((unsigned __int8)KiTbFlushTimeStamp ^ (*(_QWORD *)(v86 + 24) >> 59)) & 7) != 0 )
              {
                ExAcquireSpinLockExclusiveAtDpcLevel(SpinLocka);
                MiSetPfnTbFlushStamp(v73, v72, 1);
                ExReleaseSpinLockExclusiveFromDpcLevel(SpinLocka);
              }
              _InterlockedAnd64((volatile signed __int64 *)(v73 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              v74 = *(_BYTE *)(v32 + 34);
              *(_QWORD *)(v32 + 40) &= ~0x8000000000000000uLL;
              *(_BYTE *)(v32 + 34) = v74 & 0xC7;
              *(_BYTE *)(v32 + 35) &= ~0x20u;
              _InterlockedOr(v79, 0);
              MiSetPfnTbFlushStamp(48 * v26 - 0x220000000000LL, KiTbFlushTimeStamp, 1);
              *(_QWORD *)v32 = 0LL;
              MiSetPfnBlink(48 * v26 - 0x220000000000LL, 0LL, 1);
              *(_BYTE *)(v32 + 34) = *(_BYTE *)(v32 + 34) & 0xF8 | 5;
              *(_QWORD *)(v32 + 16) = ZeroPte;
              MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(v32 + 16));
              *(_BYTE *)(v32 + 35) &= ~8u;
              MiSetPfnIdentity(48 * v26 - 0x220000000000LL, 0);
              *(_BYTE *)(v32 + 35) &= 0xF8u;
              _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( KiIrqlFlags )
              {
                v75 = KeGetCurrentIrql();
                if ( (KiIrqlFlags & 1) != 0 && v75 <= 0xFu && CurrentIrql <= 0xFu && v75 >= 2u )
                {
                  v76 = KeGetCurrentPrcb();
                  v77 = v76->SchedulerAssist;
                  v78 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                  v31 = (v78 & v77[5]) == 0;
                  v77[5] &= v78;
                  if ( v31 )
                    KiRemoveSystemWorkPriorityKick((__int64)v76);
                }
              }
              __writecr8(CurrentIrql);
              return v26;
            }
            v63 = 48 * v53 - 0x220000000000LL;
            v62 = v4;
          }
          MiSetPfnBlink(v63, v62, 0);
          goto LABEL_97;
        }
      }
      v51 = (1 << v49) - 1;
    }
    else
    {
      v51 = 1 << v48;
    }
    _InterlockedOr(v50, v51);
    goto LABEL_84;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v86 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v19 + 32));
  MiReuseStandbyPage(48 * v26 - 0x220000000000LL);
  _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiReleaseFreshPage(v86);
  if ( KiIrqlFlags )
  {
    v43 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v43 <= 0xFu && CurrentIrql <= 0xFu && v43 >= 2u )
    {
      v44 = KeGetCurrentPrcb();
      v45 = v44->SchedulerAssist;
      v46 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v31 = (v46 & v45[5]) == 0;
      v45[5] &= v46;
      if ( v31 )
        KiRemoveSystemWorkPriorityKick((__int64)v44);
    }
  }
  v4 = v26;
LABEL_72:
  __writecr8(CurrentIrql);
  return v4;
}
