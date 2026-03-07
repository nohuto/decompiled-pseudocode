void __fastcall MiInsertPageInList(ULONG_PTR BugCheckParameter2, unsigned int a2)
{
  __int64 v2; // r8
  unsigned __int64 v5; // rdx
  char *v6; // r12
  ULONG_PTR v7; // r15
  __int64 *v8; // r14
  __int64 v9; // rdx
  void *v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // r8d
  __int64 v14; // rsi
  volatile LONG *i; // r8
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 *v18; // rax
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v20; // rcx
  unsigned int v21; // esi
  __int64 v22; // rcx
  __int64 *v23; // r8
  __int128 v24; // kr00_16
  __int64 v25; // rdx
  __int64 v26; // rax
  char v27; // cl
  volatile signed __int32 *v28; // rcx
  __int128 *v29; // rax
  char v30; // al
  __int64 v31; // rsi
  unsigned int v32; // eax
  __int64 v33; // rsi
  unsigned __int64 v34; // r14
  _OWORD *v35; // r9
  signed __int64 v36; // rdx
  __int64 v37; // r11
  __int64 v38; // r10
  signed __int64 v39; // r8
  PEX_SPIN_LOCK v40; // r10
  int v41; // edx
  signed __int64 v42; // rdx
  signed __int64 v43; // rax
  _OWORD *v44; // r9
  int v45; // eax
  signed __int64 v46; // rdx
  __int64 v47; // r8
  signed __int64 v48; // rdi
  signed __int64 v49; // rdx
  ULONG_PTR v50; // r10
  signed __int64 v51; // r8
  unsigned __int8 v52; // cl
  __int64 v53; // rax
  volatile signed __int64 *v54; // rax
  unsigned __int64 v55; // rax
  unsigned __int64 v56; // rax
  __int64 v57; // r8
  __int64 v58; // r9
  unsigned __int64 v59; // r14
  unsigned __int64 v60; // r11
  __int64 v61; // rcx
  __int64 v62; // rax
  bool v63; // sf
  volatile signed __int64 *v64; // rax
  unsigned int v65; // ebx
  char v66; // al
  __int64 v67; // rax
  struct _KEVENT *v68; // rsi
  unsigned __int16 **v69; // r9
  __int64 v70; // r10
  unsigned __int16 *v71; // rdx
  unsigned int v72; // r8d
  unsigned __int64 v73; // rsi
  char v74; // al
  signed __int64 v75; // rcx
  __int64 v76; // rdx
  signed __int64 v77; // r10
  signed __int64 v78; // rcx
  signed __int64 v79; // rcx
  signed __int64 v80; // rcx
  signed __int32 v81[8]; // [rsp+0h] [rbp-128h] BYREF
  __int64 *v82; // [rsp+30h] [rbp-F8h]
  char v83; // [rsp+38h] [rbp-F0h]
  __int64 v84; // [rsp+40h] [rbp-E8h]
  _OWORD *v85; // [rsp+48h] [rbp-E0h]
  unsigned int v86; // [rsp+50h] [rbp-D8h]
  PEX_SPIN_LOCK SpinLock; // [rsp+58h] [rbp-D0h]
  __int64 v88; // [rsp+60h] [rbp-C8h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-C0h] BYREF
  __int128 v90; // [rsp+80h] [rbp-A8h] BYREF
  __int128 v91; // [rsp+90h] [rbp-98h]
  __int128 v92; // [rsp+A0h] [rbp-88h]
  __int128 v93; // [rsp+B0h] [rbp-78h]
  __int128 v94; // [rsp+C0h] [rbp-68h]
  __int128 v95; // [rsp+D0h] [rbp-58h]
  __int64 v96; // [rsp+E0h] [rbp-48h]
  void *retaddr; // [rsp+128h] [rbp+0h]

  v2 = 0LL;
  v84 = 0LL;
  while ( 1 )
  {
    v5 = *(_QWORD *)(BugCheckParameter2 + 40);
    v6 = *(char **)(qword_140C67048 + 8 * ((v5 >> 43) & 0x3FF));
    v7 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(BugCheckParameter2 + 0x220000000000LL) >> 4);
    v90 = 0LL;
    v91 = 0LL;
    v96 = 0LL;
    v92 = 0LL;
    v93 = 0LL;
    v94 = 0LL;
    v95 = 0LL;
    v65 = (v5 & 0x20000000000000LL) != 0;
    if ( v7 < qword_140C67DE0 || v7 >= qword_140C67DE0 + 2048 )
    {
      if ( (unsigned int)MiCheckSlabPfnBitmap(BugCheckParameter2, 1LL, 0) )
        v65 |= 2u;
    }
    else
    {
      v65 |= 8u;
    }
    if ( (v65 & 1) != 0 && (a2 & 8) != 0 && byte_140C65768 )
    {
      a2 = a2 & 0xFFFFFFF3 | 4;
      *(_BYTE *)(BugCheckParameter2 + 34) &= ~0x10u;
    }
    if ( (a2 & 4) != 0 )
    {
      v8 = (__int64 *)(v6 + 2816);
    }
    else if ( (a2 & 8) != 0 )
    {
      v8 = (__int64 *)(v6 + 17600);
    }
    else if ( (a2 & 0x10) != 0 )
    {
      v8 = (__int64 *)(v6 + 17728);
    }
    else if ( (a2 & 0x100) != 0 )
    {
      v8 = (__int64 *)(*((_QWORD *)v6 + 2)
                     + 25408LL
                     * *(unsigned int *)(MiSearchNumaNodeTable(
                                           0xAAAAAAAAAAAAAAABuLL
                                         * ((__int64)(BugCheckParameter2 + 0x220000000000LL) >> 4))
                                       + 8)
                     + 25280);
    }
    else
    {
      v8 = (a2 & 0x800) != 0
         ? (__int64 *)MiGetSlabAllocatorStandbyList(BugCheckParameter2, 3LL, v2, 0x3800000000000000LL)
         : (__int64 *)(v6 + 6720);
    }
    if ( (v65 & 1) != 0 && ((v66 = *(_BYTE *)(BugCheckParameter2 + 35), (v66 & 0x40) != 0) || (v66 & 0x10) != 0) )
    {
      v9 = (unsigned int)dword_140C65310;
      v86 = dword_140C65310;
      a2 = a2 & 0xFFFFFFD3 | 0x20;
      v82 = &qword_140C65308;
      v11 = a2;
      v6 = (char *)&MiSystemPartition;
      v8 = &qword_140C65308;
      v10 = &MiSystemPartition;
    }
    else
    {
      v9 = *((unsigned int *)v8 + 2);
      v10 = v6;
      v86 = *((_DWORD *)v8 + 2);
      v11 = a2;
      v82 = v8;
      if ( (v65 & 1) == 0 )
      {
        _InterlockedOr(v81, 0);
        *(_QWORD *)(BugCheckParameter2 + 24) ^= (*(_QWORD *)(BugCheckParameter2 + 24) ^ ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 59)) & 0x3800000000000000LL;
        v10 = v6;
      }
    }
    v12 = 5LL;
    if ( (_DWORD)v9 != 2 )
      break;
    v83 = *(_BYTE *)(BugCheckParameter2 + 35);
    if ( (v83 & 0x40) == 0 || (v65 & 2) != 0 )
    {
      if ( (dword_140D1D1D0 & 2) != 0
        && (v65 & 0xA) == 0
        && (*((_DWORD *)v6 + 1) & 0x80u) == 0
        && (*(_DWORD *)(BugCheckParameter2 + 16) & 0x400LL) == 0 )
      {
        if ( (unsigned int)MiGetPagingFileOffset((__int64 *)(BugCheckParameter2 + 16))
          && (v83 & 0x40) == 0
          && (MiGetPagePrivilege(BugCheckParameter2) & 0x10) == 0
          && (unsigned int)MiIsStandbyPageCorrupted(0xAAAAAAAAAAAAAAABuLL * ((__int64)(BugCheckParameter2
                                                                                     + 0x220000000000LL) >> 4)) )
        {
          *(_BYTE *)(BugCheckParameter2 + 34) = *(_BYTE *)(BugCheckParameter2 + 34) & 0xF8 | 2;
          MiRestoreTransitionPte(BugCheckParameter2);
          MiInsertPageInFreeOrZeroedList(
            0xAAAAAAAAAAAAAAABuLL * ((__int64)(BugCheckParameter2 + 0x220000000000LL) >> 4),
            2);
          return;
        }
        v12 = 5LL;
      }
      if ( (v65 & 1) != 0 )
      {
        *(_BYTE *)(BugCheckParameter2 + 34) = *(_BYTE *)(BugCheckParameter2 + 34) & 0xF8 | 2;
        return;
      }
      v52 = *(_BYTE *)(BugCheckParameter2 + 35);
      if ( (v52 & 8) != 0 )
        v53 = 5LL;
      else
        v53 = v52 & 7;
      if ( (a2 & 0x800) == 0 )
      {
        v8 = (__int64 *)&v6[88 * v53 + 2944];
        if ( (((v65 & 2) == 0) & (unsigned __int8)~(v52 >> 3)) != 0 )
        {
          if ( *(__int64 *)(BugCheckParameter2 + 40) >= 0 )
            v54 = (volatile signed __int64 *)(v6 + 16000);
          else
            v54 = (volatile signed __int64 *)(v6 + 6976);
          _InterlockedIncrement64(v54);
          memset(&LockHandle, 0, sizeof(LockHandle));
          v55 = _InterlockedIncrement64((volatile signed __int64 *)v6 + 2152);
          v85 = (_OWORD *)v55;
          if ( v55 > 0x420 )
            goto LABEL_87;
          switch ( v55 )
          {
            case 0xA0uLL:
              v67 = 15912LL;
              goto LABEL_177;
            case 0x420uLL:
              v67 = 15944LL;
              goto LABEL_177;
            case 0x22uLL:
              v67 = 15880LL;
LABEL_177:
              v68 = (struct _KEVENT *)&v6[v67];
              KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)v6 + 1984, &LockHandle);
              KeSetEvent(v68, 0, 0);
              ++v68[1].Header.LockNV;
              KxReleaseQueuedSpinLock(&LockHandle);
              v55 = (unsigned __int64)v85;
              break;
          }
LABEL_87:
          v56 = v55 - 1;
          if ( v56 == *((_QWORD *)v6 + 2019) || v56 == *((_QWORD *)v6 + 2020) )
            MiUpdateAvailableEvents(v6, v9, v11);
        }
      }
      v82 = v8;
      if ( (a2 & 0x80u) == 0 )
      {
        if ( (v65 & 2) != 0 && (a2 & 0x800) != 0 )
        {
          MiLockPageListAndLastPage(v8, &v90, v11, v12);
        }
        else
        {
          MiSynchronizeFastPageInsert((_DWORD)v6, (_DWORD)v8, BugCheckParameter2, 0, (__int64)&v90);
          if ( !(_BYTE)v90 && BYTE2(v90) != 3 )
            MiRebuildStandbyLookasideList(BugCheckParameter2, BYTE2(v90), SBYTE1(v90));
        }
      }
      goto LABEL_31;
    }
    MiRestoreTransitionPte(BugCheckParameter2);
    v2 = 0LL;
    a2 = 32;
  }
  if ( (_DWORD)v9 == 3 )
  {
    if ( *(__int64 *)(BugCheckParameter2 + 40) >= 0 )
      _InterlockedIncrement64((volatile signed __int64 *)v6 + 2000);
    else
      _InterlockedIncrement64((volatile signed __int64 *)v6 + 872);
  }
  else
  {
    if ( (_DWORD)v9 != 4 )
    {
      if ( v8 != &qword_140C65308 && (*(_BYTE *)(BugCheckParameter2 + 35) & 0x40) != 0 )
        MiSetPfnRemovalRequested(BugCheckParameter2, 0LL, 1LL);
      if ( (a2 & 0x100) != 0 )
      {
        ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)v8 + 8);
        *(_QWORD *)(BugCheckParameter2 + 8) = -8LL;
      }
      else if ( v8 == &qword_140C65308 )
      {
        v82 = (__int64 *)(v6 + 6720);
        ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)v6 + 1688);
      }
      else
      {
        MiClearPfnImageVerified(BugCheckParameter2);
        ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)v6 + 1688);
        *(_QWORD *)(BugCheckParameter2 + 8) = -4LL;
        v82 = (__int64 *)(v6 + 6720);
        if ( v6 == (char *)&MiSystemPartition )
        {
          MiBadPageInserted(1LL);
        }
        else
        {
          v65 |= 0x10u;
          v82 = (__int64 *)(v6 + 6720);
        }
      }
      goto LABEL_31;
    }
    v62 = *(_QWORD *)(BugCheckParameter2 + 16);
    if ( qword_140C657C0 && (v62 & 0x10) == 0 )
      v62 &= ~qword_140C657C0;
    v63 = *(__int64 *)(BugCheckParameter2 + 40) < 0;
    v84 = *(_QWORD *)(v62 >> 16);
    if ( v63 )
      v64 = (volatile signed __int64 *)(v6 + 6976);
    else
      v64 = (volatile signed __int64 *)(v6 + 16000);
    _InterlockedIncrement64(v64);
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)v8 + 8);
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v84 + 72));
    if ( (*(_DWORD *)(v84 + 56) & 8) != 0 )
      goto LABEL_31;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v84 + 72));
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v8 + 8);
    LOBYTE(v11) = a2;
    v86 = 3;
    v10 = v6;
  }
  _InterlockedIncrement64((volatile signed __int64 *)v6 + 2200);
  v13 = v11 & 0x80;
  if ( (*(_DWORD *)(BugCheckParameter2 + 16) & 0x400LL) == 0 )
  {
    if ( v13 )
    {
      v8 = (__int64 *)MiDetermineModifiedPageListHead(BugCheckParameter2, (__int64)v6, 0);
    }
    else
    {
      v8 = (__int64 *)MiDetermineModifiedPageListHead(BugCheckParameter2, (__int64)v10, 1);
      MiLockPageListAndLastPage(v8, &v90, v57, v58);
    }
    if ( !*v8 )
      v65 |= 4u;
    _InterlockedIncrement64((volatile signed __int64 *)v6 + 2228);
    goto LABEL_29;
  }
  v14 = *(unsigned int *)(*((_QWORD *)v6 + 2115) + 24LL);
  v8 = (__int64 *)&v6[88 * v14 + 5312];
  if ( v13 )
    goto LABEL_28;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v8 + 16, 0x3FuLL) )
    goto LABEL_118;
  for ( i = (volatile LONG *)(v8 + 4); ; i = SpinLock )
  {
    while ( 1 )
    {
      v16 = v8[3];
      SpinLock = i;
      v88 = v16;
      if ( v16 != 0x3FFFFFFFFFLL )
        break;
      ExAcquireSpinLockSharedAtDpcLevel(i);
      if ( v8[3] == 0x3FFFFFFFFFLL )
        goto LABEL_130;
      ExReleaseSpinLockSharedFromDpcLevel(SpinLock);
      i = (volatile LONG *)(v8 + 4);
    }
    v17 = 48 * v16 - 0x220000000000LL;
    v85 = (_OWORD *)v17;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) )
      break;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      LOBYTE(v17) = -1;
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(i, v17);
    }
    else
    {
      _m_prefetchw((const void *)i);
      LODWORD(v84) = *i & 0x7FFFFFFF;
      LODWORD(v82) = v84 + 1;
      LODWORD(v82) = _InterlockedCompareExchange(i, v84 + 1, v84);
      if ( (_DWORD)v82 == (_DWORD)v84 )
        goto LABEL_24;
      while ( (int)v82 >= 0 )
      {
        LODWORD(v84) = (_DWORD)v82;
        LODWORD(v82) = (_DWORD)v82 + 1;
        LODWORD(v82) = _InterlockedCompareExchange(i, (signed __int32)v82, v84);
        if ( (_DWORD)v82 == (_DWORD)v84 )
          goto LABEL_24;
      }
      ExpWaitForSpinLockSharedAndAcquire((unsigned __int64)i, 0xFFu);
    }
    i = SpinLock;
    v17 = (__int64)v85;
LABEL_24:
    if ( v88 == v8[3] )
    {
      if ( v17 )
      {
        *((_QWORD *)&v90 + 1) = v88;
        v18 = v8 + 5;
        *(_QWORD *)&v91 = v17;
        LOBYTE(v93) = 1;
      }
      else
      {
LABEL_130:
        v18 = v8 + 5;
        *((_QWORD *)&v90 + 1) = 0x3FFFFFFFFFLL;
        *(_QWORD *)&v91 = v8 + 5;
      }
      *(_QWORD *)&v92 = 0x3FFFFFFFFFLL;
      *((_QWORD *)&v92 + 1) = v18;
      BYTE8(v91) = 1;
      LOBYTE(v90) = 1;
      goto LABEL_28;
    }
    ExReleaseSpinLockSharedFromDpcLevel(i);
    _InterlockedAnd64((volatile signed __int64 *)v85 + 3, 0x7FFFFFFFFFFFFFFFuLL);
  }
  _InterlockedAnd64(v8 + 8, 0x7FFFFFFFFFFFFFFFuLL);
LABEL_118:
  if ( BYTE8(v91) )
    _InterlockedAnd64((volatile signed __int64 *)(v91 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (_BYTE)v93 )
    _InterlockedAnd64((volatile signed __int64 *)(*((_QWORD *)&v92 + 1) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
  if ( BYTE8(v94) )
    _InterlockedAnd64((volatile signed __int64 *)(v94 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (_BYTE)v96 )
    _InterlockedAnd64((volatile signed __int64 *)(*((_QWORD *)&v95 + 1) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)v8 + 8);
LABEL_28:
  *(_BYTE *)(BugCheckParameter2 + 36) ^= (*(_BYTE *)(BugCheckParameter2 + 36) ^ v14) & 0xF;
LABEL_29:
  CurrentThread = KeGetCurrentThread();
  v82 = v8;
  ++*(_DWORD *)&CurrentThread->ApcState.Process[1].Spare2[7];
  v20 = *((_QWORD *)v6 + 2152);
  if ( v20 < 0x420 )
  {
    v69 = (unsigned __int16 **)(v6 + 6808);
    v70 = 0LL;
    while ( 1 )
    {
      v71 = *v69;
      v72 = 0;
      if ( dword_140C6577C )
        break;
LABEL_186:
      ++v70;
      ++v69;
      if ( v70 > 1 )
      {
        v73 = *((_QWORD *)v6 + 2228);
        if ( v73 >= 0x10 )
          MiWakeModifiedPageWriter(v6, -1LL);
        if ( *((_QWORD *)v6 + 2200) - v73 >= 0x10 )
          KeSetEvent((PRKEVENT)(v6 + 832), 0, 0);
        goto LABEL_30;
      }
    }
    while ( 1 )
    {
      v20 += *v71;
      if ( v20 >= 0x420 )
        break;
      ++v72;
      v71 += 8;
      if ( v72 >= dword_140C6577C )
        goto LABEL_186;
    }
  }
LABEL_30:
  v84 = 0LL;
LABEL_31:
  v21 = v86;
  if ( (*(_BYTE *)(BugCheckParameter2 + 35) & 8) != 0 || (v65 & 2) != 0 && (a2 & 0x800) == 0 && v86 == 2 )
  {
    if ( (v65 & 8) != 0 )
      MiInsertDecayClusterTimer(BugCheckParameter2);
  }
  else
  {
    _InterlockedIncrement64(v8);
  }
  if ( (_BYTE)v90 )
  {
    v22 = *((_QWORD *)&v90 + 1);
    v23 = (__int64 *)v91;
    v24 = v92;
  }
  else
  {
    v22 = v8[3];
    v23 = (__int64 *)(48 * v22 - 0x220000000000LL);
    v24 = 0x3FFFFFFFFFuLL;
  }
  v88 = 0xFFFFFF0000000000uLL;
  v25 = v7 & 0xFFFFFFFFFFLL;
  if ( v22 == 0x3FFFFFFFFFLL )
    v8[2] = v7;
  else
    *v23 = v25 | v88 & *v23;
  v26 = *(_QWORD *)BugCheckParameter2 ^ v24;
  *(_QWORD *)(BugCheckParameter2 + 24) ^= (*(_QWORD *)(BugCheckParameter2 + 24) ^ v22) & 0xFFFFFFFFFFLL;
  *(_QWORD *)BugCheckParameter2 ^= v26 & 0xFFFFFFFFFFLL;
  if ( (_QWORD)v24 == 0x3FFFFFFFFFLL )
    v8[3] = v7;
  else
    *(_QWORD *)(*((_QWORD *)&v24 + 1) + 24LL) = v25 | *(_QWORD *)(*((_QWORD *)&v24 + 1) + 24LL) & 0xFFFFFF0000000000uLL;
  v27 = *(_BYTE *)(BugCheckParameter2 + 34);
  if ( v8 == &qword_140C65308 )
  {
    v74 = *(_BYTE *)(BugCheckParameter2 + 35) | 0x10;
    *(_BYTE *)(BugCheckParameter2 + 34) = v27 & 0xF8 | 2;
    *(_BYTE *)(BugCheckParameter2 + 35) = v74;
    MiWakeFileOnlyReaper();
  }
  else
  {
    *(_BYTE *)(BugCheckParameter2 + 34) = v27 ^ (v27 ^ v21) & 7;
  }
  if ( v21 == 2 )
  {
    if ( (v65 & 2) != 0 )
    {
      MiUpdatePfnOnSlabStandbyList(BugCheckParameter2, (a2 & 0x800) != 0);
      goto LABEL_43;
    }
    if ( (*(_BYTE *)(BugCheckParameter2 + 35) & 8) != 0 )
      goto LABEL_43;
    if ( (_BYTE)v90 )
      v29 = &v90;
    else
      v29 = 0LL;
    v85 = v29;
    v88 = *(_QWORD *)(qword_140C67048
                    + 8
                    * ((*(_QWORD *)(16 * ((__int64)(BugCheckParameter2 + 0x220000000000LL) >> 4) - 0x220000000000LL + 40) >> 43) & 0x3FFLL));
    v86 = *(_DWORD *)(MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * ((16
                                                                    * ((__int64)(BugCheckParameter2 + 0x220000000000LL) >> 4)) >> 4))
                    + 8);
    v30 = *(_BYTE *)(16 * ((__int64)(BugCheckParameter2 + 0x220000000000LL) >> 4) - 0x220000000000LL + 35);
    if ( (v30 & 8) != 0 )
      v31 = 5LL;
    else
      v31 = v30 & 7;
    if ( qword_140C65750 )
      v32 = MiPageToChannel(0xAAAAAAAAAAAAAAABuLL * ((16 * ((__int64)(BugCheckParameter2 + 0x220000000000LL) >> 4)) >> 4));
    else
      v32 = 0;
    v33 = *(_QWORD *)(v88 + 16) + 25408LL * v86 + 88 * (v31 + 8LL * v32 + 37);
    _InterlockedIncrement64((volatile signed __int64 *)v33);
    if ( v85 )
    {
      v34 = *((_QWORD *)v85 + 7);
      v35 = (_OWORD *)*((_QWORD *)v85 + 11);
      v36 = *(_QWORD *)(BugCheckParameter2 + 24);
      v37 = *((_QWORD *)v85 + 8);
      SpinLock = (PEX_SPIN_LOCK)*((_QWORD *)v85 + 10);
      v38 = (v34 & 0x7FFFF) << 40;
      v85 = v35;
      v39 = _InterlockedCompareExchange64(
              (volatile signed __int64 *)(BugCheckParameter2 + 24),
              v38 | v36 & 0xF80000FFFFFFFFFFuLL,
              v36);
      if ( v36 != v39 )
      {
        do
        {
          v75 = v39;
          v39 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)(BugCheckParameter2 + 24),
                  v38 | v39 & 0xF80000FFFFFFFFFFuLL,
                  v39);
        }
        while ( v75 != v39 );
      }
      v40 = SpinLock;
      v41 = *(_DWORD *)(BugCheckParameter2 + 36) ^ (v34 >> 19);
      *(_QWORD *)BugCheckParameter2 = ((_QWORD)SpinLock << 40) | *(_QWORD *)BugCheckParameter2 & 0xFFFFFFFFFFLL;
      *(_DWORD *)(BugCheckParameter2 + 36) = (*(_DWORD *)(BugCheckParameter2 + 36) ^ v41 & 0x1FFFFF) & 0x1FFFFF | ((unsigned int)((unsigned __int64)v40 >> 24) << 21);
      v42 = *(_QWORD *)(BugCheckParameter2 + 40);
      v88 = ((unsigned __int64)v40 & 0xF800000000LL) << 20;
      v43 = _InterlockedCompareExchange64(
              (volatile signed __int64 *)(BugCheckParameter2 + 40),
              v88 | v42 & 0xF07FFFFFFFFFFFFFuLL,
              v42);
      v44 = v85;
      if ( v42 != v43 )
      {
        v76 = v88;
        v77 = v43;
        do
        {
          v78 = v77;
          v77 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)(BugCheckParameter2 + 40),
                  v76 | v77 & 0xF07FFFFFFFFFFFFFuLL,
                  v77);
        }
        while ( v78 != v77 );
        v44 = v85;
        v40 = SpinLock;
      }
      if ( v34 == 0x3FFFFFFFFFLL )
      {
        *(_QWORD *)(v33 + 16) = v7;
      }
      else
      {
        v45 = *(_DWORD *)(v37 + 36);
        *(_QWORD *)v37 = *(_QWORD *)v37 & 0xFFFFFFFFFFLL | (0xAAAAAB0000000000uLL
                                                          * ((__int64)(BugCheckParameter2 + 0x220000000000LL) >> 4));
        *(_DWORD *)(v37 + 36) = v45 & 0x1FFFFF | ((unsigned int)(v7 >> 24) << 21);
        v46 = *(_QWORD *)(v37 + 40);
        v47 = (v7 & 0xF800000000LL) << 20;
        v48 = _InterlockedCompareExchange64(
                (volatile signed __int64 *)(v37 + 40),
                v47 | v46 & 0xF07FFFFFFFFFFFFFuLL,
                v46);
        if ( v46 != v48 )
        {
          do
          {
            v79 = v48;
            v48 = _InterlockedCompareExchange64(
                    (volatile signed __int64 *)(v37 + 40),
                    v47 | v48 & 0xF07FFFFFFFFFFFFFuLL,
                    v48);
          }
          while ( v79 != v48 );
        }
      }
      if ( v40 != (PEX_SPIN_LOCK)0x3FFFFFFFFFLL )
      {
        v49 = *((_QWORD *)v44 + 3);
        v50 = (v7 & 0x7FFFF) << 40;
        v51 = _InterlockedCompareExchange64((volatile signed __int64 *)v44 + 3, v50 | v49 & 0xF80000FFFFFFFFFFuLL, v49);
        if ( v49 != v51 )
        {
          do
          {
            v80 = v51;
            v51 = _InterlockedCompareExchange64(
                    (volatile signed __int64 *)v44 + 3,
                    v50 | v51 & 0xF80000FFFFFFFFFFuLL,
                    v51);
          }
          while ( v80 != v51 );
        }
        *((_DWORD *)v44 + 9) ^= (*((_DWORD *)v44 + 9) ^ (v7 >> 19)) & 0x1FFFFF;
        goto LABEL_43;
      }
    }
    else
    {
      v59 = *(_QWORD *)(v33 + 24);
      v60 = 0x3FFFFFFFFFLL;
      if ( v59 == 0x3FFFFFFFFFLL )
        *(_QWORD *)(v33 + 16) = v7;
      else
        MiSetNextStandbyPageSameNodeNoLockAsserts(
          48 * v59 - 0x220000000000LL,
          0xAAAAAAAAAAAAAAABuLL * ((__int64)(BugCheckParameter2 + 0x220000000000LL) >> 4));
      MiSetNextStandbyPageSameNodeNoLockAsserts(BugCheckParameter2, v60);
      MiSetPfnNodeBlinkLow(v61, v59);
      *(_DWORD *)(BugCheckParameter2 + 36) ^= (*(_DWORD *)(BugCheckParameter2 + 36) ^ (v59 >> 19)) & 0x1FFFFF;
    }
    *(_QWORD *)(v33 + 24) = v7;
  }
LABEL_43:
  if ( v84 )
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v84 + 72));
  if ( (_BYTE)v90 )
  {
    if ( BYTE8(v91) )
      _InterlockedAnd64((volatile signed __int64 *)(v91 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (_BYTE)v93 )
      _InterlockedAnd64((volatile signed __int64 *)(*((_QWORD *)&v92 + 1) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
    if ( BYTE8(v94) )
      _InterlockedAnd64((volatile signed __int64 *)(v94 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (_BYTE)v96 )
      _InterlockedAnd64((volatile signed __int64 *)(*((_QWORD *)&v95 + 1) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
    v28 = (volatile signed __int32 *)(v82 + 4);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v28, retaddr);
    }
    else
    {
      _InterlockedAnd(v28, 0xBFFFFFFF);
      _InterlockedDecrement(v28);
    }
  }
  else if ( (a2 & 0x80u) == 0 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v82 + 8);
  }
  if ( (v65 & 4) != 0 )
    KeSetEvent((PRKEVENT)(v6 + 920), 0, 0);
  if ( v65 >= 0x10 )
    MiBadPageInserted(0LL);
}
