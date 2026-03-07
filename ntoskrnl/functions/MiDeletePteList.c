__int64 MiDeletePteList(__int64 a1, __int64 a2, unsigned __int64 a3, ...)
{
  unsigned int v3; // edx
  unsigned int v4; // ebx
  __int64 v5; // rsi
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r12
  __int64 v13; // rax
  signed __int64 v14; // rbx
  __int64 v15; // r8
  __int64 v16; // r13
  ULONG_PTR v17; // rbp
  __int64 v18; // r15
  __int64 ContainingPageTable; // r13
  __int64 v20; // r10
  __int64 v21; // r9
  __int64 v22; // rcx
  unsigned __int64 v23; // rcx
  __int64 v24; // rcx
  char v25; // al
  __int64 v26; // r15
  __int64 v27; // rbp
  unsigned __int64 v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  unsigned int v32; // r8d
  bool v33; // zf
  __int64 v34; // rbx
  __int64 v35; // rdx
  ULONG_PTR UsedPtesHandle; // rax
  __int64 v38; // rbx
  __int64 v39; // r10
  unsigned __int64 v40; // rax
  __int64 v41; // rdx
  unsigned __int64 v42; // r14
  bool v43; // r15
  unsigned __int64 v44; // rbx
  int v45; // eax
  __int64 v46; // rdx
  struct _LIST_ENTRY *Flink; // r8
  __int64 v48; // rcx
  char v49; // al
  char v50; // al
  char v51; // cl
  ULONG_PTR CloneAddress; // rax
  ULONG_PTR v53; // rdx
  unsigned __int64 v54; // rdx
  unsigned int v55; // [rsp+20h] [rbp-98h]
  ULONG_PTR BugCheckParameter4; // [rsp+24h] [rbp-94h]
  unsigned __int64 v57; // [rsp+30h] [rbp-88h] BYREF
  unsigned int v58; // [rsp+38h] [rbp-80h]
  unsigned __int64 v59; // [rsp+40h] [rbp-78h] BYREF
  int v60; // [rsp+48h] [rbp-70h] BYREF
  int v61; // [rsp+4Ch] [rbp-6Ch] BYREF
  int v62; // [rsp+50h] [rbp-68h] BYREF
  __int64 v63; // [rsp+58h] [rbp-60h]
  __int64 v64; // [rsp+60h] [rbp-58h]
  __int64 v65; // [rsp+68h] [rbp-50h]
  unsigned __int64 v66; // [rsp+70h] [rbp-48h]
  __int64 v67; // [rsp+78h] [rbp-40h]
  __int64 v68; // [rsp+C0h] [rbp+8h]
  __int64 v70; // [rsp+D8h] [rbp+20h] BYREF
  va_list va; // [rsp+D8h] [rbp+20h]
  __int64 v72; // [rsp+E0h] [rbp+28h]
  va_list va1; // [rsp+E8h] [rbp+30h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v70 = va_arg(va1, _QWORD);
  v72 = va_arg(va1, _QWORD);
  v68 = a1;
  v3 = *(_DWORD *)(a1 + 12);
  v4 = 0;
  v63 = 0LL;
  v5 = v70;
  BugCheckParameter4 = 0LL;
  v55 = 0;
  v65 = -1LL;
  v58 = v3;
  if ( (_DWORD)v72 )
  {
    MiFlushTbList(a1);
    a1 = v68;
    v3 = v58;
  }
  if ( *(_QWORD *)(v5 + 40) || *(_QWORD *)(v5 + 48) )
    return 0LL;
  v7 = 0LL;
  v8 = 0LL;
  LODWORD(v72) = 0;
  if ( !v3 )
    return v4;
  while ( 2 )
  {
    v9 = *(_QWORD *)(a1 + 8 * v8 + 24);
    v10 = (v9 & 0x3FF) + 1;
    v11 = v9 & 0xFFFFFFFFFFFFF000uLL;
    v67 = v10;
    v66 = v11;
    do
    {
      v12 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v13 = *(_QWORD *)v12;
      if ( v12 >= 0xFFFFF6FB7DBED000uLL
        && v12 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0x600000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v13 & 1) != 0
        && ((v13 & 0x20) == 0 || (v13 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v48 = *((_QWORD *)&Flink->Flink + ((v12 >> 3) & 0x1FF));
          if ( (v48 & 0x20) != 0 )
            v13 |= 0x20uLL;
          if ( (v48 & 0x42) != 0 )
            v13 |= 0x42uLL;
        }
      }
      v57 = v13 & 0xFFFFFFFFFFFFFBFEuLL | 1;
      v14 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v57) >> 12) & 0xFFFFFFFFFFLL);
      v16 = *(_QWORD *)(v14 - 0x220000000000LL + 40);
      v17 = v14 - 0x220000000000LL;
      v18 = *(_QWORD *)(qword_140C67048 + 8 * (((unsigned __int64)v16 >> 43) & 0x3FF));
      v64 = v18;
      if ( v16 < 0 )
      {
        v41 = *(_QWORD *)(v17 + 8);
        v42 = v41 | 0x8000000000000000uLL;
        v43 = (v16 & 0x10000000000LL) == 0 && v41 >= 0 && v41;
        v44 = 0LL;
        ContainingPageTable = MiGetContainingPageTable(v12, v41, v15);
        v61 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v61);
          while ( *(__int64 *)(v17 + 24) < 0 );
        }
        if ( (v57 & 0x42) != 0 )
          v44 = MiCaptureDirtyBitToPfn(v17);
        MiDecrementShareCount(v17);
        _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v44 )
          MiReleasePageFileInfo(v64, v44, 1);
        if ( v43 )
        {
          v45 = MiDecrementCombinedPteEx(a2 + 1664, v42, 0LL);
        }
        else
        {
          CloneAddress = MiLocateCloneAddress(a2, v42);
          v45 = MiDecrementCloneBlockReference(CloneAddress, v53);
        }
        if ( v45 == 3 )
        {
          ++*(_QWORD *)(v70 + 8);
        }
        else if ( v45 == 5 )
        {
          ++*(_QWORD *)(v70 + 24);
        }
        v57 = a3;
        v27 = a3;
      }
      else
      {
        v60 = 0;
        ContainingPageTable = v16 & 0xFFFFFFFFFFLL;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v60);
          while ( *(__int64 *)(v17 + 24) < 0 );
        }
        v20 = *(_QWORD *)(v17 + 16);
        v21 = *(_QWORD *)(v17 + 24) | 0x4000000000000000LL;
        *(_QWORD *)(v17 + 24) = v21;
        if ( (v20 & 2) != 0 && !(unsigned int)MI_IS_PTE_IN_WS_SWAP_SET(v18, v17 + 16) && *(_WORD *)(v17 + 32) == 1 && a3 )
        {
          v7 = v39;
          *(_QWORD *)(v17 + 16) = v39 & 0xFFFFFFFFFFFFFFFDuLL;
        }
        if ( (*(_BYTE *)(v17 + 34) & 7) != 6 )
          MiBadShareCount(v17);
        v22 = (v21 & 0x3FFFFFFFFFFFFFFFLL) - 1;
        *(_QWORD *)(v17 + 24) = v21 ^ (v22 ^ v21) & 0x3FFFFFFFFFFFFFFFLL;
        if ( (v21 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
        {
          if ( *(_QWORD *)(v17 + 40) < v22 )
            MiMakeProtoTransition(v17, 1LL);
          v23 = *(_QWORD *)(v17 + 24);
          --*(_WORD *)(v17 + 32);
          v24 = (v23 >> 62) & 1;
          if ( *(_WORD *)(v17 + 32) )
          {
            v49 = *(_BYTE *)(v17 + 34);
            if ( (_DWORD)v24 )
            {
              v50 = v49 | 7;
            }
            else if ( (v49 & 0x10) != 0 )
            {
              v50 = v49 & 0xF8 | 3;
            }
            else if ( (v49 & 8) != 0 )
            {
              v50 = v49 & 0xF8 | 3;
            }
            else
            {
              v50 = v49 & 0xF8 | 2;
            }
            *(_BYTE *)(v17 + 34) = v50;
            if ( (*(_DWORD *)(v17 + 16) & 0x400LL) == 0 && (unsigned int)MiGetPagingFileOffset(v17 + 16) )
              *(_BYTE *)(*(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(v17 + 40) >> 43) & 0x3FFLL)) + 715LL) = 1;
            ++*(_QWORD *)(v70 + 8);
          }
          else if ( (_DWORD)v24 )
          {
            v25 = *(_BYTE *)(v17 + 35);
            if ( (v25 & 0x10) != 0 )
              *(_BYTE *)(v17 + 35) = v25 & 0xEF;
            v26 = *(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(v17 + 40) >> 43) & 0x3FFLL));
            v59 = *(_QWORD *)(v17 + 16);
            if ( (v59 & 0x400) == 0 )
            {
              if ( (v59 & 4) != 0 || (v59 & 2) != 0 )
              {
                v40 = MI_READ_PTE_LOCK_FREE(&v59);
                v59 = v40;
                if ( v40 )
                  MiReleasePageFileInfo(v26, v40, 0);
              }
              else
              {
                v59 = 0LL;
              }
            }
            MiInsertPageInFreeOrZeroedList(0xAAAAAAAAAAAAAAABuLL * (v14 >> 4));
            v18 = v64;
          }
          else
          {
            MiSetNonResidentPteHeat(v17 + 16, 0LL);
            v51 = *(_BYTE *)(v17 + 34);
            if ( (v51 & 0x10) == 0 )
              *(_BYTE *)(v17 + 34) = v51 & 0xF8 | 2;
            MiInsertPageInList(v17);
          }
        }
        _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v57 = a3;
        v27 = a3;
        if ( v7 )
        {
          v46 = *(_QWORD *)(v18 + 8LL * ((unsigned __int16)v7 >> 12) + 17056);
          if ( qword_140C657C0 && (v7 & 0x10) == 0 )
            v7 &= ~qword_140C657C0;
          v27 = MiTransferSoftwarePte(a3, v46, HIDWORD(v7), 2LL);
          v57 = v27;
          v7 = 0LL;
        }
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 1272), 0xFFFFFFFFFFFFFFFFuLL);
      }
      v28 = v27;
      if ( !(unsigned int)MiPteInShadowRange(v12) )
        goto LABEL_27;
      if ( !(unsigned int)MiPteHasShadow(v30, v29, v31) )
      {
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (v27 & 1) != 0 )
        {
          v28 = v27 | 0x8000000000000000uLL;
        }
LABEL_27:
        *(_QWORD *)v12 = v28;
        goto LABEL_28;
      }
      v54 = v27;
      if ( !HIBYTE(word_140C6697C) && (v27 & 1) != 0 )
        v54 = v27 | 0x8000000000000000uLL;
      *(_QWORD *)v12 = v54;
      MiWritePteShadow(v12, v54);
LABEL_28:
      if ( !v57 )
        LODWORD(BugCheckParameter4) = BugCheckParameter4 + 1;
      if ( ContainingPageTable != v65 )
      {
        v38 = v63;
        if ( v63 )
        {
          v62 = 0;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v63 + 24), 0x3FuLL) )
          {
            do
            {
              do
                KeYieldProcessorEx(&v62);
              while ( *(__int64 *)(v38 + 24) < 0 );
            }
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v38 + 24), 0x3FuLL) );
          }
          MiReduceShareCount(v38, v55);
          _InterlockedAnd64((volatile signed __int64 *)(v38 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v55 = 0;
          if ( (_DWORD)BugCheckParameter4 )
          {
            HIDWORD(BugCheckParameter4) = MiReducePteUseCount(v12, (unsigned int)BugCheckParameter4);
            LODWORD(BugCheckParameter4) = 0;
          }
        }
        v65 = ContainingPageTable;
        v63 = 48 * ContainingPageTable - 0x220000000000LL;
      }
      v32 = v55 + 1;
      v11 = v66 + 4096;
      ++v55;
      v33 = v67-- == 1;
      v66 += 4096LL;
    }
    while ( !v33 );
    v8 = (unsigned int)(v72 + 1);
    LODWORD(v72) = v8;
    if ( (unsigned int)v8 < v58 )
    {
      a1 = v68;
      continue;
    }
    break;
  }
  if ( !v32 )
    return HIDWORD(BugCheckParameter4);
  v34 = v63;
  LODWORD(v70) = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v63 + 24), 0x3FuLL) )
  {
    do
    {
      do
        KeYieldProcessorEx((__int64 *)va);
      while ( *(__int64 *)(v34 + 24) < 0 );
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v34 + 24), 0x3FuLL) );
    v32 = v55;
  }
  if ( (*(_BYTE *)(v34 + 34) & 7) != 6 )
    MiBadShareCount(v34);
  v35 = (*(_QWORD *)(v34 + 24) & 0x3FFFFFFFFFFFFFFFLL) - v32;
  *(_QWORD *)(v34 + 24) ^= (*(_QWORD *)(v34 + 24) ^ v35) & 0x3FFFFFFFFFFFFFFFLL;
  if ( !v35 )
    MiPfnShareCountIsZero(v34);
  _InterlockedAnd64((volatile signed __int64 *)(v34 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (_DWORD)BugCheckParameter4 )
  {
    UsedPtesHandle = MiGetUsedPtesHandle((__int64)(v12 << 25) >> 16);
    return (unsigned int)MiDecreaseUsedPtesCount(UsedPtesHandle, (unsigned int)BugCheckParameter4) == 0;
  }
  else
  {
    return HIDWORD(BugCheckParameter4);
  }
}
