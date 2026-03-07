__int64 __fastcall MiAllocateKernelStackPages(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        int a5,
        char a6,
        _QWORD *a7)
{
  __int64 v7; // rdi
  unsigned __int64 v8; // r14
  _QWORD *v10; // r15
  unsigned int v11; // r11d
  __int64 v12; // rdx
  int v13; // r12d
  signed __int32 v14; // ecx
  unsigned int v15; // ebx
  __int64 SlabPage; // rax
  __int64 v17; // rsi
  unsigned __int64 ValidPte; // rdi
  unsigned __int64 v19; // r13
  __int64 v20; // r9
  _QWORD *v21; // r15
  __int64 v22; // r12
  __int64 v23; // rbx
  unsigned __int64 v24; // rbx
  unsigned __int64 v25; // rax
  unsigned int v26; // r12d
  unsigned __int64 v27; // r15
  __int64 v28; // rbx
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // r9
  __int64 v31; // r8
  signed __int64 v32; // rax
  signed __int64 v33; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v35; // rbx
  unsigned int Queue; // r15d
  unsigned int v37; // r15d
  char v38; // r15
  __int64 v39; // rax
  signed __int64 v40; // rax
  signed __int64 v41; // rax
  __int64 v42; // rcx
  char v43; // al
  unsigned __int64 v44; // rbx
  _QWORD *v46; // rbx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v48; // rax
  struct _LIST_ENTRY *v49; // rax
  __int64 v50; // rax
  signed __int64 v51; // rdx
  signed __int64 v52; // rdx
  __int64 v53; // r8
  __int64 *v54; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v55; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int64 v56; // [rsp+48h] [rbp-C0h]
  __int64 v57; // [rsp+50h] [rbp-B8h]
  __int128 v58; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v59; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v60; // [rsp+70h] [rbp-98h]
  _QWORD v61[3]; // [rsp+78h] [rbp-90h]
  __int128 v62; // [rsp+90h] [rbp-78h]
  __int64 v63; // [rsp+A0h] [rbp-68h]
  signed __int64 v64; // [rsp+A8h] [rbp-60h]
  __int128 v65; // [rsp+B0h] [rbp-58h]
  __int128 v66; // [rsp+C0h] [rbp-48h]
  __int64 v67; // [rsp+D0h] [rbp-38h]
  unsigned __int64 v68; // [rsp+D8h] [rbp-30h]
  __int128 v69; // [rsp+E0h] [rbp-28h]
  __int128 v70; // [rsp+F0h] [rbp-18h]
  __int64 v71; // [rsp+100h] [rbp-8h]
  signed __int64 v72; // [rsp+108h] [rbp+0h]
  __int128 v73; // [rsp+110h] [rbp+8h]
  __int128 v74; // [rsp+120h] [rbp+18h]
  __int64 v75; // [rsp+130h] [rbp+28h]
  unsigned __int64 v76; // [rsp+138h] [rbp+30h]
  unsigned __int8 v77; // [rsp+198h] [rbp+90h]

  v7 = a3;
  v8 = a2;
  v58 = 0LL;
  if ( !a3 )
    return 1LL;
  v61[0] = a2 + 8 * a3;
  v10 = 0LL;
  MiInitializePageColorBase(0LL, a5 + 1, (__int64)&v58);
  v12 = v11;
  v54 = (__int64 *)v11;
  v13 = v11;
  if ( a7 != (_QWORD *)v11 && (*(_DWORD *)(a1 + 4) & 8) != 0 )
  {
    v13 = 1;
    v12 = ((a6 & 2) != 0) - 1LL;
    v54 = (__int64 *)v12;
  }
LABEL_3:
  v14 = _InterlockedExchangeAdd((volatile signed __int32 *)v58, 1u);
  v15 = DWORD2(v58) & v14 | HIDWORD(v58);
  while ( 1 )
  {
    if ( v13 && (SlabPage = MiGetSlabPage(a1, 3u, v15, 0LL, (__int64 *)v12), SlabPage != -1)
      || (SlabPage = MiGetPage(a1, v15, 0), SlabPage != -1) )
    {
      v17 = 48 * SlabPage - 0x220000000000LL;
      *(_QWORD *)v17 = v10;
      v10 = (_QWORD *)v17;
      if ( !--v7 )
      {
        if ( a7 )
          ValidPte = MiMakeValidPte(v8, 0LL, 536870913) | 0x40;
        else
          ValidPte = MiMakeValidPte(v8, 0LL, -1610612732);
        v19 = 0LL;
        v56 = 0LL;
        v77 = MiLockWorkingSetShared(&unk_140C69B80);
        v57 = (__int64)a7;
        v21 = a7;
        while ( 1 )
        {
          v22 = *(_QWORD *)v17;
          v60 = *(_QWORD *)v17;
          ValidPte ^= (ValidPte ^ (0xAAAAAAAAAAAAB000uLL * ((v17 + 0x220000000000LL) >> 4))) & 0xFFFFFFFFFF000LL;
          if ( v19 )
          {
            if ( (v8 & 0xFFF) != 0 )
              goto LABEL_14;
            MiUnlockPageTableInternal((__int64)&unk_140C69B80, v19);
          }
          v56 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          MiLockPageTableInternal((__int64)&unk_140C69B80, v56, 0);
LABEL_14:
          LODWORD(v55) = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v55);
            while ( *(__int64 *)(v17 + 24) < 0 );
          }
          if ( a7 )
          {
            MiFinalizePageAttribute(v17, 1LL, 1u, v20);
            MiInitializeMdlSinglePage(v17, v17, a4, ZeroPte, 0);
            *(_QWORD *)(v17 + 8) = v8;
            MiSetPfnIdentity(v17, 3LL);
            *v21 = 0xAAAAAAAAAAAAAAABuLL * ((v17 + 0x220000000000LL) >> 4);
          }
          else
          {
            v23 = *(_QWORD *)v8;
            if ( MiPteInShadowRange(v8)
              && (MiFlags & 0x600000) != 0
              && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
              && (v23 & 1) != 0
              && ((v23 & 0x20) == 0 || (v23 & 0x42) == 0) )
            {
              Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
              if ( Flink )
              {
                v48 = *((_QWORD *)&Flink->Flink + ((v8 >> 3) & 0x1FF));
                if ( (v48 & 0x20) != 0 )
                  v23 |= 0x20uLL;
                if ( (v48 & 0x42) != 0 )
                  v23 |= 0x42uLL;
              }
            }
            if ( v23 )
              v24 = v23 & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
            else
              v24 = MiSwizzleInvalidPte(128LL);
            v25 = v24 & 0xFFFFFFFFFFFFF7FFuLL;
            if ( (v24 & 0x400) == 0 )
              v25 = v24 & 0xFFFFFFFFFFFFFFF7uLL;
            *(_QWORD *)v17 &= 0xFFFFFFFFFFFFC00FuLL;
            *(_QWORD *)(v17 + 16) = v25 & 0xFFFFFFFFFC00FFFFuLL;
            v26 = MiProtectionToCacheAttribute(4u);
            *(_WORD *)(v17 + 32) = 1;
            v27 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v28 = *(_QWORD *)v27;
            if ( MiPteInShadowRange(v27)
              && (MiFlags & 0x600000) != 0
              && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
              && (v28 & 1) != 0
              && ((v28 & 0x20) == 0 || (v28 & 0x42) == 0) )
            {
              v49 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
              if ( v49 )
              {
                v50 = *((_QWORD *)&v49->Flink + ((v27 >> 3) & 0x1FF));
                if ( (v50 & 0x20) != 0 )
                  v28 |= 0x20uLL;
                if ( (v50 & 0x42) != 0 )
                  v28 |= 0x42uLL;
              }
            }
            v59 = v28;
            v29 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v59);
            v30 = 0xFFFFFF0000000000uLL;
            v31 = (v29 >> 12) & 0xFFFFFFFFFFLL;
            v32 = *(_QWORD *)(v17 + 40);
            v63 = 0LL;
            v64 = v32;
            v67 = 0LL;
            v68 = v31 | v32 & 0xFFFFFF0000000000uLL;
            *(_OWORD *)&v61[1] = 0LL;
            v62 = 0LL;
            v65 = 0LL;
            v66 = 0LL;
            v33 = _InterlockedCompareExchange64((volatile signed __int64 *)(v17 + 40), v68, v32);
            v68 = v33;
            if ( v64 != v33 )
            {
              do
              {
                v64 = v33;
                v51 = v33;
                v68 = v31 | v33 & 0xFFFFFF0000000000uLL;
                v33 = _InterlockedCompareExchange64((volatile signed __int64 *)(v17 + 40), v68, v33);
                v68 = v33;
              }
              while ( v51 != v33 );
            }
            CurrentThread = KeGetCurrentThread();
            v35 = 48 * v31 - 0x220000000000LL;
            Queue = (unsigned int)CurrentThread[1].Queue;
            if ( (Queue & 0x100) != 0 )
              v37 = Queue >> 9;
            else
              LOBYTE(v37) = PsGetPagePriorityThread((__int64)CurrentThread);
            LODWORD(v54) = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v35 + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v54);
              while ( *(__int64 *)(v35 + 24) < 0 );
            }
            *(_QWORD *)(v35 + 24) ^= ((*(_QWORD *)(v35 + 24) + 1LL) ^ *(_QWORD *)(v35 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
            _InterlockedAnd64((volatile signed __int64 *)(v35 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( *(unsigned __int8 *)(v17 + 34) >> 6 != v26 )
              MiChangePageAttribute(v17, v26, 1LL, v30);
            MiSetPfnTbFlushStamp(v17, 0, 1);
            v38 = *(_BYTE *)(v17 + 35) ^ v37;
            v39 = *(_QWORD *)(v17 + 24);
            *(_QWORD *)(v17 + 8) = v8;
            *(_BYTE *)(v17 + 35) ^= v38 & 7;
            *(_QWORD *)(v17 + 24) = v39 & 0xC000000000000000uLL | 1;
            *(_BYTE *)(v17 + 34) = *(_BYTE *)(v17 + 34) & 0xF8 | 6;
            *(_BYTE *)(v17 + 34) |= 0x10u;
            v40 = *(_QWORD *)(v17 + 40);
            v71 = 0LL;
            v72 = v40;
            v75 = 0LL;
            v76 = v40 & 0x8FFFFFFFFFFFFFFFuLL | 0x2000000000000000LL;
            v69 = 0LL;
            v70 = 0LL;
            v73 = 0LL;
            v74 = 0LL;
            v41 = _InterlockedCompareExchange64((volatile signed __int64 *)(v17 + 40), v76, v40);
            v76 = v41;
            if ( v72 != v41 )
            {
              do
              {
                v72 = v41;
                v52 = v41;
                v76 = v41 & 0x8FFFFFFFFFFFFFFFuLL | 0x2000000000000000LL;
                v41 = _InterlockedCompareExchange64((volatile signed __int64 *)(v17 + 40), v76, v41);
                v76 = v41;
              }
              while ( v52 != v41 );
            }
            v42 = *(_QWORD *)v17 ^ (*(_QWORD *)v17 ^ (a4 >> 3)) & 0xFFFFFFFFFFELL;
            *(_QWORD *)v17 = v42;
            if ( a4 && (v42 & 1) == 0 )
              *(_QWORD *)v17 = v42 | 1;
            v43 = *(_BYTE *)(v17 + 35);
            *(_QWORD *)(v17 + 16) |= 0x3E0uLL;
            v21 = (_QWORD *)v57;
            v22 = v60;
            *(_BYTE *)(v17 + 35) = v43 & 0xF8 | 5;
          }
          _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v44 = ValidPte;
          if ( !MiPteInShadowRange(v8) )
            goto LABEL_34;
          if ( !MiPteHasShadow() )
          {
            if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
              && (ValidPte & 1) != 0 )
            {
              v44 = ValidPte | 0x8000000000000000uLL;
            }
LABEL_34:
            *(_QWORD *)v8 = v44;
            goto LABEL_35;
          }
          if ( !HIBYTE(word_140C6697C) && (ValidPte & 1) != 0 )
            v44 = ValidPte | 0x8000000000000000uLL;
          *(_QWORD *)v8 = v44;
          MiWritePteShadow(v8, v44, v53);
LABEL_35:
          ++v21;
          v8 += 8LL;
          v17 = v22;
          v57 = (__int64)v21;
          if ( v8 >= v61[0] )
          {
            if ( v56 )
              MiUnlockPageTableInternal((__int64)&unk_140C69B80, v56);
            MiUnlockWorkingSetShared((__int64)&unk_140C69B80, v77);
            return 1LL;
          }
          v19 = v56;
        }
      }
      v12 = (__int64)v54;
      goto LABEL_3;
    }
    if ( (a6 & 2) != 0 )
      break;
    MiWaitForFreePage(a1);
    v12 = (__int64)v54;
  }
  if ( v10 )
  {
    do
    {
      v46 = (_QWORD *)*v10;
      MiReleaseFreshPage(v10);
      v10 = v46;
    }
    while ( v46 );
  }
  return 0LL;
}
