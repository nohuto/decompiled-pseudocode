char __fastcall MiReplaceTransitionPage(ULONG_PTR BugCheckParameter2, ULONG_PTR a2, int a3)
{
  char v4; // r13
  unsigned int v6; // edi
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // rbp
  char v9; // cl
  __int64 v10; // r14
  char v11; // cl
  unsigned int v12; // ebx
  __int64 v13; // r9
  unsigned int v14; // r13d
  int v15; // eax
  int v16; // ebx
  int v17; // eax
  __int64 v18; // r8
  unsigned __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rbx
  unsigned int v25; // r13d
  __int64 v26; // r9
  _QWORD *v27; // r8
  __int64 v28; // rax
  __int64 v29; // rcx
  char v30; // al
  __int64 v31; // rcx
  _QWORD *v32; // r14
  __int64 v33; // rax
  __int64 v34; // rbx
  int v35; // r12d
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  char v39; // al
  char result; // al
  __int64 updated; // rax
  __int64 v42; // r8
  unsigned __int64 v43; // r9
  unsigned __int64 v44; // rdx
  volatile signed __int32 *v45; // r8
  unsigned int v46; // eax
  unsigned __int64 v47; // rcx
  bool v48; // zf
  signed __int32 v49[8]; // [rsp+0h] [rbp-F8h] BYREF
  unsigned int PfnPriority; // [rsp+20h] [rbp-D8h]
  __int64 v51; // [rsp+28h] [rbp-D0h]
  int v52; // [rsp+30h] [rbp-C8h]
  int v53; // [rsp+34h] [rbp-C4h]
  _BYTE v54[112]; // [rsp+40h] [rbp-B8h] BYREF

  v52 = a3;
  v4 = a3;
  v6 = 4 * (a3 & 1);
  memset(v54, 0, 0x68uLL);
  PfnPriority = 0xFFFFFF;
  v7 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(BugCheckParameter2 + 0x220000000000LL) >> 4);
  v8 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a2 + 0x220000000000LL) >> 4);
  v9 = *(_BYTE *)(BugCheckParameter2 + 34);
  v51 = *(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 43) & 0x3FFLL));
  v10 = *(_QWORD *)(v51 + 8LL * (v9 & 7) + 6824);
  if ( (v9 & 7) == 3 && (*(_DWORD *)(BugCheckParameter2 + 16) & 0x400LL) != 0 )
  {
    v11 = *(_BYTE *)(BugCheckParameter2 + 36);
    *(_BYTE *)(BugCheckParameter2 + 36) = v11 & 0xF0;
  }
  else
  {
    v11 = *(_BYTE *)(a2 + 36);
  }
  v12 = v11 & 0xF;
  v53 = v4 & 4;
  if ( (v4 & 4) == 0 )
    MiLockNestedPageAtDpcInline(a2);
  if ( (unsigned int)MiCheckSlabPfnBitmap(a2, 1LL, 0) )
    v6 |= 8u;
  v14 = v6;
  MiFinalizePageAttribute(a2, *(unsigned __int8 *)(BugCheckParameter2 + 34) >> 6, 1u, v13);
  MiCopyPfnEntryEx(a2, (__int128 *)BugCheckParameter2);
  *(_BYTE *)(a2 + 36) = v12 | *(_BYTE *)(a2 + 36) & 0xF0;
  if ( (*(_QWORD *)(BugCheckParameter2 + 40) & 0xFFFFFFFFFFLL) == v7 )
    MiSetPfnPteFrame(a2, 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a2 + 0x220000000000LL) >> 4));
  MiCopyPage(
    0xAAAAAAAAAAAAAAABuLL * ((__int64)(a2 + 0x220000000000LL) >> 4),
    0xAAAAAAAAAAAAAAABuLL * ((__int64)(BugCheckParameter2 + 0x220000000000LL) >> 4));
  _InterlockedOr(v49, 0);
  *(_QWORD *)(a2 + 24) ^= (*(_QWORD *)(a2 + 24) ^ ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 59)) & 0x3800000000000000LL;
  if ( (v52 & 2) == 0 )
  {
    v15 = *(_DWORD *)(v10 + 8);
    if ( v15 == 2 )
    {
      if ( (v6 & 4) != 0 && _bittest64((const signed __int64 *)(BugCheckParameter2 + 40), 0x3Bu) )
      {
        MiUnlinkPageFromListEx(BugCheckParameter2, 0LL);
        v6 |= 0x10u;
        goto LABEL_34;
      }
      v6 |= 2u;
      PfnPriority = MiGetPfnPriority(BugCheckParameter2);
      v10 = 88LL * PfnPriority + v51 + 2944;
      if ( (*(_BYTE *)(BugCheckParameter2 + 35) & 8) == 0 )
        v6 = v14;
      v16 = *(_DWORD *)(MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * ((__int64)(BugCheckParameter2 + 0x220000000000LL) >> 4))
                      + 8);
      if ( v16 != *(_DWORD *)(MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * ((__int64)(a2 + 0x220000000000LL) >> 4)) + 8) )
      {
        ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v10 + 32));
        v18 = 0LL;
        v19 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(BugCheckParameter2 + 0x220000000000LL) >> 4);
        goto LABEL_16;
      }
      MiAcquirePageListLock(v10, BugCheckParameter2, 1, (__int64)v54);
      v17 = MiCheckSlabPfnBitmap(a2, 1LL, 0);
      v18 = v54[0];
      v19 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(BugCheckParameter2 + 0x220000000000LL) >> 4);
      if ( v17 )
      {
LABEL_16:
        MiReplaceStandbyLookaside(v19, -1LL, v18);
        MiSetStandbyLookasideState(0xAAAAAAAAAAAAAAABuLL * ((__int64)(a2 + 0x220000000000LL) >> 4), 0LL);
        goto LABEL_17;
      }
      MiReplaceStandbyLookaside(v19, 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a2 + 0x220000000000LL) >> 4), v54[0]);
    }
    else
    {
      if ( v15 == 3 )
      {
        if ( (*(_DWORD *)(a2 + 16) & 0x400LL) != 0 )
          v10 = 88LL * v12 + v51 + 5312;
        else
          v10 = MiDetermineModifiedPageListHead(a2, v51, 0);
      }
      MiAcquirePageListLock(v10, BugCheckParameter2, 1, (__int64)v54);
    }
LABEL_17:
    v21 = 0xFFFFFFFFFFLL;
    v22 = 0xFFFFFF0000000000uLL;
    v23 = *(_QWORD *)BugCheckParameter2 & 0xFFFFFFFFFFLL;
    v24 = *(_QWORD *)(BugCheckParameter2 + 24) & 0xFFFFFFFFFFLL;
    *(_QWORD *)a2 = v23 | *(_QWORD *)a2 & 0xFFFFFF0000000000uLL;
    *(_QWORD *)(a2 + 24) = v24 | *(_QWORD *)(a2 + 24) & 0xFFFFFF0000000000uLL;
    if ( v23 == 0x3FFFFFFFFFLL )
    {
      v25 = PfnPriority;
      *(_QWORD *)(v10 + 24) = v8;
    }
    else
    {
      v25 = PfnPriority;
      v26 = 48 * v23 - 0x220000000000LL;
      if ( PfnPriority != 0xFFFFFF && (v6 & 2) != 0 && (unsigned int)MiIsDecayPfn(v23, 0xFFFFFF0000000000uLL, v20, v26) )
        MiSetPfnPteFrame(v26, 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a2 + 0x220000000000LL) >> 4));
      else
        MiSetPfnBlink(v26, 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a2 + 0x220000000000LL) >> 4), 0);
      v21 = 0xFFFFFFFFFFLL;
    }
    if ( v24 == 0x3FFFFFFFFFLL )
    {
      *(_QWORD *)(v10 + 16) = v8;
    }
    else
    {
      v27 = (_QWORD *)(48 * v24 - 0x220000000000LL);
      if ( v25 != 0xFFFFFF && (v6 & 2) != 0 && (unsigned int)MiIsDecayPfn(v24, v22, v27, 0xFFFFFFFFFFLL) )
      {
        updated = MiUpdateTransitionPteFrame(v27[2], 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a2 + 0x220000000000LL) >> 4));
        *(_QWORD *)(v42 + 16) = updated;
LABEL_27:
        if ( (v6 & 0xC) != 0 )
        {
          MiUpdatePfnOnSlabStandbyList(a2, 0LL);
          if ( (v6 & 4) == 0 )
          {
            MiUnlinkNumaStandbyPage(BugCheckParameter2);
            _InterlockedDecrement64((volatile signed __int64 *)v10);
            v28 = 16000LL;
            if ( *(__int64 *)(BugCheckParameter2 + 40) < 0 )
              v28 = 6976LL;
            v29 = v51;
            _InterlockedDecrement64((volatile signed __int64 *)(v51 + v28));
            MiDecreaseAvailablePages(v29, 1LL, -1LL);
          }
        }
        else
        {
          MiReplaceNumaStandbyPage(BugCheckParameter2, a2, v54);
        }
LABEL_32:
        if ( dword_140C67ACC == 1 )
        {
          v43 = v7 & 0x1F;
          LOBYTE(v44) = 1;
          v45 = (volatile signed __int32 *)(*((_QWORD *)&xmmword_140C67B20 + 1) + 4 * (v7 >> 5));
          if ( v43 + 1 > 0x20 )
          {
            if ( (v7 & 0x1F) != 0 )
            {
              _InterlockedOr(v45++, ((1 << (32 - (v7 & 0x1F))) - 1) << v43);
              v44 = 1LL - (32 - (unsigned int)(v7 & 0x1F));
              if ( v44 >= 0x20 )
              {
                v47 = v44 >> 5;
                v44 += -32LL * (v44 >> 5);
                do
                {
                  *v45++ = -1;
                  --v47;
                }
                while ( v47 );
              }
              if ( !v44 )
                goto LABEL_33;
            }
            v46 = (1 << v44) - 1;
          }
          else
          {
            v46 = 1 << v43;
          }
          _InterlockedOr(v45, v46);
        }
LABEL_33:
        MiReleasePageListLock(v10, (__int64)v54);
        goto LABEL_34;
      }
      *v27 ^= v21 & (*v27 ^ v8);
    }
    if ( v25 == 0xFFFFFF )
      goto LABEL_32;
    goto LABEL_27;
  }
LABEL_34:
  v30 = *(_BYTE *)(BugCheckParameter2 + 34);
  *(_QWORD *)(BugCheckParameter2 + 24) &= 0xFFFFFF0000000000uLL;
  *(_BYTE *)(BugCheckParameter2 + 34) = v30 & 0xF8 | 5;
  _InterlockedOr(v49, 0);
  *(_QWORD *)(BugCheckParameter2 + 24) ^= (*(_QWORD *)(BugCheckParameter2 + 24) ^ ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 59)) & 0x3800000000000000LL;
  v31 = *(_QWORD *)(BugCheckParameter2 + 40) & 0xFFFFFFFFFFLL;
  if ( v31 == v7 )
  {
    v32 = (_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) | 0x8000000000000000uLL);
  }
  else
  {
    v6 |= 1u;
    v32 = (_QWORD *)(MiMapPageInHyperSpaceWorker(v31, 0LL, 0x80000000)
                   + 8LL * ((*(_DWORD *)(BugCheckParameter2 + 8) >> 3) & 0x1FF));
  }
  v33 = MI_READ_PTE_LOCK_FREE(v32);
  v34 = MiUpdateTransitionPteFrame(v33, 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a2 + 0x220000000000LL) >> 4));
  v35 = 0;
  if ( (unsigned int)MiPteInShadowRange(v32) )
  {
    if ( (unsigned int)MiPteHasShadow(v37, v36, v38) )
    {
      v35 = 1;
      if ( HIBYTE(word_140C6697C) )
        goto LABEL_37;
      v48 = (v34 & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_37;
      v48 = (v34 & 1) == 0;
    }
    if ( !v48 )
      v34 |= 0x8000000000000000uLL;
  }
LABEL_37:
  *v32 = v34;
  if ( v35 )
    MiWritePteShadow(v32, v34);
  if ( (v6 & 1) != 0 )
  {
    MiUnmapPageInHyperSpaceWorker((unsigned __int64)v32, 0x11u);
    v32 = (_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) | 0x8000000000000000uLL);
  }
  if ( *(__int64 *)(BugCheckParameter2 + 40) >= 0 && (unsigned int)MiGetSystemRegionType(v32) == 5 )
    *(v32 - 174) = KeMakeKernelDirectoryTableBase(0xAAAAAAAAAAAAB000uLL * ((__int64)(a2 + 0x220000000000LL) >> 4));
  if ( v6 >= 0x10 )
    MiInsertPageInList(a2);
  if ( !v53 )
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (v6 & 2) != 0 )
    *(_BYTE *)(BugCheckParameter2 + 35) &= ~8u;
  MiSetPfnIdentity(BugCheckParameter2, 0LL);
  v39 = *(_BYTE *)(BugCheckParameter2 + 34);
  *(_QWORD *)(BugCheckParameter2 + 40) &= ~0x8000000000000000uLL;
  *(_BYTE *)(BugCheckParameter2 + 34) = v39 & 0xC7;
  result = *(_BYTE *)(BugCheckParameter2 + 35) & 0xDF;
  *(_BYTE *)(BugCheckParameter2 + 35) = result;
  return result;
}
