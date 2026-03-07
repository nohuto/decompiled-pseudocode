__int64 __fastcall MiCopyOnWrite(ULONG_PTR BugCheckParameter2, unsigned __int64 a2, unsigned __int64 Page, int a4)
{
  ULONG_PTR v7; // rdi
  ULONG_PTR v8; // r15
  int v9; // r14d
  BOOL v10; // r12d
  _KPROCESS *Process; // rsi
  unsigned int SystemRegionType; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // ecx
  char *SessionVm; // r13
  unsigned int v19; // esi
  bool v20; // zf
  volatile unsigned __int64 v21; // rdi
  __int64 v22; // r8
  unsigned __int8 v23; // cl
  int v24; // edi
  __int64 v25; // rax
  int v26; // eax
  signed __int32 v27; // eax
  __int64 v28; // rdi
  volatile LONG *v29; // rcx
  volatile LONG *v30; // r14
  unsigned __int64 v31; // rdx
  __int64 v32; // r8
  unsigned __int64 ContainingPageTable; // rax
  __int64 v34; // r9
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v36; // rdx
  char v37; // di
  unsigned __int64 v38; // rax
  __int64 v39; // rbx
  unsigned __int64 v40; // rdx
  __int64 *v41; // rdi
  __int64 v42; // rbx
  _QWORD *CloneAddress; // rax
  ULONG_PTR v44; // rdx
  char v46; // al
  __int64 v47; // r14
  int v48; // eax
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v50; // rax
  struct _LIST_ENTRY *v51; // rdx
  __int64 v52; // rax
  __int64 **v53; // rdi
  char v54; // al
  __int64 **Address; // rax
  __int64 v56; // rdx
  unsigned int v57; // ecx
  struct _LIST_ENTRY *v58; // r9
  __int64 v59; // rax
  __int64 v60; // r8
  __int64 v61; // rcx
  __int64 v62; // rdx
  __int64 v63; // r8
  int v64; // [rsp+30h] [rbp-D0h]
  int v65; // [rsp+34h] [rbp-CCh]
  char v66; // [rsp+38h] [rbp-C8h]
  unsigned int v67; // [rsp+3Ch] [rbp-C4h]
  unsigned int PagePriorityThread; // [rsp+3Ch] [rbp-C4h]
  int v69; // [rsp+40h] [rbp-C0h] BYREF
  int v70; // [rsp+44h] [rbp-BCh]
  ULONG_PTR BugCheckParameter2a; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v72; // [rsp+50h] [rbp-B0h]
  __int64 v73; // [rsp+58h] [rbp-A8h]
  __int64 v74; // [rsp+60h] [rbp-A0h] BYREF
  int v75; // [rsp+68h] [rbp-98h]
  int v76; // [rsp+6Ch] [rbp-94h] BYREF
  BOOL v77; // [rsp+70h] [rbp-90h]
  __int64 **v78; // [rsp+78h] [rbp-88h] BYREF
  ULONG_PTR v79; // [rsp+80h] [rbp-80h]
  _KPROCESS *v80; // [rsp+88h] [rbp-78h]
  unsigned __int64 v81; // [rsp+90h] [rbp-70h]
  __int64 v82; // [rsp+98h] [rbp-68h]
  ULONG_PTR v83; // [rsp+A0h] [rbp-60h]
  __int128 v84; // [rsp+A8h] [rbp-58h] BYREF
  __int128 v85; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v86; // [rsp+C8h] [rbp-38h]
  _QWORD v87[18]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v88[2]; // [rsp+170h] [rbp+70h] BYREF
  int v89; // [rsp+180h] [rbp+80h] BYREF
  __int16 v90; // [rsp+184h] [rbp+84h]
  __int16 v91; // [rsp+186h] [rbp+86h]
  __int64 v92; // [rsp+188h] [rbp+88h]
  __int64 v93; // [rsp+190h] [rbp+90h]
  __int64 v94; // [rsp+198h] [rbp+98h]
  _BYTE v95[152]; // [rsp+1A0h] [rbp+A0h] BYREF

  v72 = a2;
  BugCheckParameter2a = BugCheckParameter2;
  v70 = a4;
  v91 = 0;
  v84 = 0LL;
  memset(v95, 0, sizeof(v95));
  v7 = *(_QWORD *)a2;
  v85 = 0LL;
  v86 = 0LL;
  v69 = MiPteInShadowRange(a2);
  if ( v69
    && (MiFlags & 0x600000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v7 & 1) != 0
    && ((v7 & 0x20) == 0 || (v7 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v50 = *((_QWORD *)&Flink->Flink + ((a2 >> 3) & 0x1FF));
      if ( (v50 & 0x20) != 0 )
        v7 |= 0x20uLL;
      if ( (v50 & 0x42) != 0 )
        v7 |= 0x42uLL;
    }
  }
  v74 = v7;
  v83 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v74) >> 12) & 0xFFFFFFFFFFLL;
  v8 = 48 * v83 - 0x220000000000LL;
  v78 = 0LL;
  v9 = 0;
  v10 = (v7 & 0x200) == 0;
  v73 = *(_QWORD *)(v8 + 8);
  v81 = v73 | 0x8000000000000000uLL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v80 = Process;
  SystemRegionType = MiGetSystemRegionType(BugCheckParameter2);
  if ( SystemRegionType == 1 )
  {
    SessionVm = (char *)MiGetSessionVm(v14, v13, v15, v16);
    v19 = (v7 & 0x200) == 0;
    if ( !_bittest64((const signed __int64 *)(v8 + 40), 0x28u) && v73 >= 0 && v73 )
      v19 = v10 | 2;
    v64 = 2;
  }
  else if ( SystemRegionType == 12 )
  {
    v64 = 0;
    SessionVm = MiGetAnyMultiplexedVm(1);
    v19 = (v7 & 0x200) == 0;
    if ( !_bittest64((const signed __int64 *)(v8 + 40), 0x28u) && v73 >= 0 && v73 )
      v19 = v10 | 2;
  }
  else
  {
    if ( SystemRegionType <= 0x10 )
    {
      v17 = 82432;
      if ( _bittest(&v17, SystemRegionType) )
        KeBugCheckEx(0x1Au, 0x3300uLL, BugCheckParameter2, v7, 2uLL);
    }
    if ( SystemRegionType == 6 )
    {
      v64 = 0;
      v19 = v10 | 2;
      SessionVm = MiGetAnyMultiplexedVm(2);
      if ( _bittest64((const signed __int64 *)(v8 + 40), 0x28u) || v73 < 0 || !v73 )
        KeBugCheckEx(0x1Au, 0x3300uLL, BugCheckParameter2a, v7, 0LL);
    }
    else
    {
      if ( SystemRegionType == 5 )
        KeBugCheckEx(0x1Au, 0x3300uLL, BugCheckParameter2, v7, 1uLL);
      if ( Process[1].Affinity.StaticBitmap[10] )
        return 3221226548LL;
      SessionVm = (char *)&Process[1].ActiveProcessors.StaticBitmap[26];
      v64 = 1;
      v19 = (v7 & 0x200) == 0;
      if ( ((v73 >= 0) & !_bittest64((const signed __int64 *)(v8 + 40), 0x28u)) != 0 && v73 )
        v19 = v10 | 2;
      memset(v87, 0, 0x88uLL);
      v87[0] = BugCheckParameter2a;
      v87[7] = SessionVm;
      v9 = MiComputeFaultNode((__int64)v87, 0LL, &v78);
    }
  }
  v67 = 0;
  v20 = (*(_BYTE *)v8 & 1) == 0;
  v82 = *(_QWORD *)(qword_140C67048 + 8LL * *((unsigned __int16 *)SessionVm + 87));
  v77 = !v20;
  v79 = ((BugCheckParameter2a >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v21 = *(_QWORD *)v79;
  v75 = MiPteInShadowRange(v79);
  if ( v75
    && (MiFlags & 0x600000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v21 & 1) != 0
    && ((v21 & 0x20) == 0 || (v21 & 0x42) == 0) )
  {
    v51 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v51 )
    {
      v52 = *((_QWORD *)&v51->Flink + ((v79 >> 3) & 0x1FF));
      if ( (v52 & 0x20) != 0 )
        v21 |= 0x20uLL;
      if ( (v52 & 0x42) != 0 )
        v21 |= 0x42uLL;
    }
  }
  v23 = HIBYTE(v21) & 0xF | (16 * ((v21 >> 60) & 7));
  LODWORD(v73) = v70 & 1;
  if ( (v70 & 1) != 0 || (HIBYTE(v21) & 0xF) == 0xA )
  {
    v24 = v64;
  }
  else
  {
    v24 = v64;
    if ( (v23 & 0xF) == 9 )
    {
      v23 = v23 & 0xF0 | 0xA;
    }
    else if ( v64 != 1 && (*(_BYTE *)(v8 + 35) & 8) != 0 )
    {
      v23 = v23 & 0xF0 | 0xA;
    }
  }
  v66 = v23 & 0xF;
  if ( (v23 & 0xF) == 0xA )
    goto LABEL_21;
  if ( (v23 & 0xF) == 8 && v24 != 2 )
  {
    v67 = 1;
    if ( (*(_DWORD *)(v8 + 16) & 0x400LL) != 0 )
      v67 = 2;
  }
  LODWORD(v25) = MiGetWsleProtection(BugCheckParameter2a, v23);
  if ( !(_DWORD)v25 )
LABEL_21:
    v25 = (*(_QWORD *)(v8 + 16) >> 5) & 0x1FLL;
  v26 = MmMakeProtectNotWriteCopy[(unsigned int)v25];
  v65 = v26;
  if ( Page != -1LL )
  {
LABEL_25:
    if ( v67 )
    {
      if ( v67 >= 2 )
      {
        v47 = *(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(v8 + 40) >> 43) & 0x3FFLL));
        MiReturnCommit(v47, 1LL, v22);
        if ( v24 == 1 )
          _InterlockedDecrement64((volatile signed __int64 *)(v47 + 17840));
      }
      MiUnlockPageTableCharges(48 * (*(_QWORD *)(v8 + 40) & 0xFFFFFFFFFFLL) - 0x220000000000LL);
      v26 = v65;
    }
    if ( v26 == 24 )
    {
      v53 = v78;
      v54 = 1;
      LOBYTE(v65) = 1;
      if ( !v78 )
      {
        MiLockVadTree(1LL);
        Address = MiLocateAddress(BugCheckParameter2a);
        LOBYTE(v56) = 17;
        v78 = Address;
        v53 = Address;
        MiUnlockVadTree(1LL, v56);
        if ( !v53 )
          goto LABEL_27;
        v54 = 1;
      }
      v57 = (*((_DWORD *)v53 + 12) >> 7) & 0x1F;
      if ( v57 >> 3 == 3 )
      {
        if ( (v57 & 7) != 0 )
          LOBYTE(v65) = 25;
      }
      else
      {
        if ( v57 >> 3 == 1 )
          v54 = 9;
        LOBYTE(v65) = v54;
      }
    }
LABEL_27:
    v28 = 48 * Page - 0x220000000000LL;
    *(_QWORD *)(v28 + 16) = MiSwizzleInvalidPte(32LL * (v65 & 0x1F));
    if ( v66 == 10 )
    {
      v31 = v72;
    }
    else
    {
      v29 = (volatile LONG *)&unk_140C69E00;
      if ( (SessionVm[184] & 7) != 2 )
        v29 = (volatile LONG *)(SessionVm + 192);
      v30 = (volatile LONG *)(SessionVm + 192);
      ExAcquireSpinLockSharedAtDpcLevel(v29 + 16);
      _InterlockedExchangeAdd64((volatile signed __int64 *)SessionVm + 19, 1uLL);
      if ( BugCheckParameter2a < 0xFFFFF68000000000uLL || BugCheckParameter2a > 0xFFFFF6FFFFFFFFFFuLL )
        _InterlockedExchangeAdd64((volatile signed __int64 *)SessionVm + 17, 1uLL);
      if ( (SessionVm[184] & 7) == 2 )
        v30 = (volatile LONG *)&unk_140C69E00;
      ExReleaseSpinLockSharedFromDpcLevel(v30 + 16);
      MiWriteValidPteVolatile((volatile signed __int64 *)v79, 0x80000000, HIBYTE(*(_QWORD *)v79) & 0xF);
      v31 = v72;
      v32 = *(_QWORD *)v72;
      if ( v69
        && (MiFlags & 0x600000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v32 & 1) != 0
        && ((v32 & 0x20) == 0 || (v32 & 0x42) == 0) )
      {
        v58 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v58 )
        {
          v59 = *((_QWORD *)&v58->Flink + ((v72 >> 3) & 0x1FF));
          if ( (v59 & 0x20) != 0 )
            v32 |= 0x20uLL;
          if ( (v59 & 0x42) != 0 )
            v32 |= 0x42uLL;
        }
      }
      v74 = v32;
    }
    *(_WORD *)(v28 + 32) = 1;
    ContainingPageTable = MiGetContainingPageTable(v31);
    MiSetPfnPteFrame(v28, ContainingPageTable);
    CurrentThread = KeGetCurrentThread();
    if ( ((__int64)CurrentThread[1].Queue & 0x100) != 0 )
      PagePriorityThread = (unsigned __int64)((__int64)CurrentThread[1].Queue & 0xE00) >> 9;
    else
      PagePriorityThread = PsGetPagePriorityThread((__int64)CurrentThread);
    if ( (DWORD1(PerfGlobalGroupMask) & 0x8000001) != 0 )
      v19 |= 4u;
    v76 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v28 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v76);
      while ( *(__int64 *)(v28 + 24) < 0 );
    }
    if ( v77 )
      *(_QWORD *)v28 |= 1uLL;
    *(_BYTE *)(v28 + 34) |= 0x10u;
    if ( v64 || (((v70 & 1) == 0) & (*(_BYTE *)(v8 + 35) >> 3)) == 0 )
      *(_BYTE *)(v28 + 35) &= ~8u;
    else
      *(_BYTE *)(v28 + 35) |= 8u;
    v36 = *(unsigned __int8 *)(v8 + 34) >> 6;
    if ( *(unsigned __int8 *)(v28 + 34) >> 6 != (_DWORD)v36 )
      MiChangePageAttribute(v28, v36, 1LL, v34);
    MiSetPfnTbFlushStamp(v28, 0, 1);
    *(_QWORD *)(v28 + 24) = *(_QWORD *)(v28 + 24) & 0xC000000000000000uLL | 1;
    *(_BYTE *)(v28 + 35) ^= (*(_BYTE *)(v28 + 35) ^ PagePriorityThread) & 7;
    *(_QWORD *)(v28 + 8) = v72;
    *(_BYTE *)(v28 + 34) = *(_BYTE *)(v28 + 34) & 0xF8 | 6;
    if ( v19 >= 4 )
    {
      MiIdentifyPfn(Page, &v85);
      _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      *((_QWORD *)&v86 + 1) |= 8uLL;
      v88[0] = &v85;
      v88[1] = 32LL;
      EtwTraceKernelEvent((unsigned int)v88, 1, 671088641, 642, 289413892);
    }
    else
    {
      _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    __incgsdword(0x2E94u);
    v37 = 0;
    if ( (v65 & 2) != 0 )
    {
      if ( (MiFlags & 0x28000) == 0x8000 )
      {
        if ( BugCheckParameter2a >= 0xFFFF800000000000uLL )
        {
          v37 = 16;
          if ( (v70 & 2) != 0 )
            v37 = 48;
LABEL_54:
          MiCopyPage(Page, v83);
          if ( dword_140C67C68 && PagePriorityThread >= dword_140C67C6C )
            MiLogPageAccess(SessionVm, v72);
          v38 = v74;
          if ( (v19 & 1) == 0 )
          {
            if ( v74 < 0 || v64 != 1 )
              v38 = v74 | 0x42;
            v38 = v38 & 0xFFFFFFFFFFFFF5DFuLL | 0x820;
          }
          v92 = 20LL;
          v89 = v64;
          v39 = v38 ^ (v38 ^ (Page << 12)) & 0xFFFFFFFFFF000LL;
          v90 = 0;
          v93 = 0LL;
          v94 = 0LL;
          if ( (v70 & 8) != 0 && !(unsigned int)MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED(v72, v39, 4LL) )
            v19 |= 8u;
          v74 = v39;
          if ( v19 >= 8 )
            goto LABEL_66;
          MiInsertTbFlushEntry(&v89, BugCheckParameter2a & 0xFFFFFFFFFFFFF000uLL, 1LL);
          if ( (v37 & 0x20) != 0 || (v39 & 0x42) == 0 )
          {
            MI_INTERLOCKED_EXCHANGE_PTE(v72, v39);
            MiFlushTbList(&v89);
            goto LABEL_66;
          }
          v40 = v39 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
          if ( v69 )
          {
            if ( MiPteHasShadow() )
            {
              v41 = (__int64 *)v72;
              v61 = v72;
              *(_QWORD *)v72 = v40;
              MiWritePteShadow(v61, v40, v60);
              MiFlushTbList(&v89);
LABEL_174:
              if ( !MiPteHasShadow() )
              {
                if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
                  && (v62 & 1) != 0 )
                {
                  v39 = v62 | 0x8000000000000000uLL;
                }
                goto LABEL_65;
              }
              if ( !HIBYTE(word_140C6697C) && (v62 & 1) != 0 )
                v39 = v62 | 0x8000000000000000uLL;
              *v41 = v39;
              MiWritePteShadow((__int64)v41, v39, v63);
LABEL_66:
              v42 = (__int64)v80;
              if ( v64 == 1 )
                _InterlockedExchangeAdd64((volatile signed __int64 *)&v80[1].Affinity.StaticBitmap[13], 1uLL);
              v69 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
              {
                do
                  KeYieldProcessorEx(&v69);
                while ( *(__int64 *)(v8 + 24) < 0 );
              }
              if ( !v64 && !(_DWORD)v73 )
              {
                v46 = *(_BYTE *)(v8 + 35);
                if ( (v46 & 8) != 0 )
                  *(_BYTE *)(v8 + 35) = v46 & 0xF7;
              }
              MiDecrementShareCount(v8);
              _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( (v19 & 2) != 0 )
              {
                v48 = MiDecrementCombinedPteEx((int)SessionVm, v81, 0);
              }
              else
              {
                if ( (SessionVm[184] & 7) != 0 )
                  return 0LL;
                CloneAddress = MiLocateCloneAddress(v42, v81);
                if ( !CloneAddress )
                  return 0LL;
                v48 = MiDecrementCloneBlockReference((ULONG_PTR)CloneAddress, v44);
              }
              if ( v48 == 3 )
                MiChargeCommit(v82, 1LL, 4LL);
              return 0LL;
            }
            v39 = v74;
          }
          v41 = (__int64 *)v72;
          *(_QWORD *)v72 = v40;
          MiFlushTbList(&v89);
          if ( !v69 )
          {
LABEL_65:
            *v41 = v39;
            goto LABEL_66;
          }
          goto LABEL_174;
        }
LABEL_52:
        if ( (KeGetCurrentThread()->ApcState.Process->SecureState.SecureHandle & 1) != 0 )
          v37 |= 0x10u;
        goto LABEL_54;
      }
    }
    else
    {
      v37 = 8;
    }
    if ( BugCheckParameter2a >= 0xFFFF800000000000uLL )
      goto LABEL_54;
    goto LABEL_52;
  }
  MiInitializePageColorBase((__int64)SessionVm, v9, (__int64)&v84);
  v27 = _InterlockedExchangeAdd((volatile signed __int32 *)v84, 1u);
  Page = MiGetPage(v82, DWORD2(v84) & (unsigned int)v27 | HIDWORD(v84), 0);
  if ( Page != -1LL )
  {
    v26 = v65;
    goto LABEL_25;
  }
  return 3221225495LL;
}
