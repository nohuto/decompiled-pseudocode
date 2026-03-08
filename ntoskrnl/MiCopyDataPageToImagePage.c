/*
 * XREFs of MiCopyDataPageToImagePage @ 0x140334490
 * Callers:
 *     MiResolveMappedFileFault @ 0x14028A780 (MiResolveMappedFileFault.c)
 * Callees:
 *     MiInitializeTransitionPfn @ 0x140214B28 (MiInitializeTransitionPfn.c)
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     MiUnlockProtoPoolPage @ 0x1402861D0 (MiUnlockProtoPoolPage.c)
 *     MiFinalizePageAttribute @ 0x14028A354 (MiFinalizePageAttribute.c)
 *     MiStartingOffset @ 0x14028C530 (MiStartingOffset.c)
 *     MiTryLockProtoPoolPageAtDpc @ 0x1402A2850 (MiTryLockProtoPoolPageAtDpc.c)
 *     MiTryLockLeafPage @ 0x1402A29B8 (MiTryLockLeafPage.c)
 *     MiObtainProtoReference @ 0x1402A304C (MiObtainProtoReference.c)
 *     MiUnlockDataCopyPages @ 0x1402E2D6C (MiUnlockDataCopyPages.c)
 *     MiAllocateHyperSpace @ 0x1402EF1E0 (MiAllocateHyperSpace.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140305AB0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiEndingOffset @ 0x140324248 (MiEndingOffset.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140333520 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiGetSessionIdForVa @ 0x140343520 (MiGetSessionIdForVa.c)
 *     MiMapSinglePage @ 0x14034A868 (MiMapSinglePage.c)
 *     MiStandbyPageContentsIntact @ 0x14034B200 (MiStandbyPageContentsIntact.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     MiAdvanceFaultList @ 0x140363F9C (MiAdvanceFaultList.c)
 *     KeCopyPage @ 0x14041BC90 (KeCopyPage.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall MiCopyDataPageToImagePage(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        __int64 *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v10; // r14
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int SessionIdForVa; // eax
  volatile LONG *v17; // rsi
  int v18; // r12d
  unsigned __int64 v19; // rbx
  __int64 v20; // rbx
  volatile LONG *v21; // rdi
  unsigned int v23; // r8d
  unsigned __int64 v24; // rsi
  __int64 v25; // rbx
  char v26; // r9
  __int64 *v27; // r15
  __int64 v28; // rcx
  unsigned __int64 v29; // rcx
  __int64 v30; // rdx
  unsigned __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // r15
  unsigned __int64 HyperSpace; // rsi
  char *v35; // rbx
  unsigned __int64 v36; // rbx
  const void *v37; // rdx
  __int64 v38; // r13
  _QWORD *v39; // rsi
  __int64 *v40; // rsi
  __int64 v41; // r15
  __int64 v42; // rcx
  char v43; // al
  __int64 *v44; // rax
  __int64 v45; // rbx
  __int64 v46; // rcx
  size_t v47; // rbx
  _BYTE *v48; // rcx
  volatile LONG *SpinLock; // [rsp+28h] [rbp-61h]
  unsigned int v50; // [rsp+30h] [rbp-59h]
  unsigned __int64 v51; // [rsp+30h] [rbp-59h]
  unsigned __int64 v52; // [rsp+38h] [rbp-51h]
  unsigned __int64 v53; // [rsp+40h] [rbp-49h]
  __int64 v54; // [rsp+48h] [rbp-41h] BYREF
  __int64 v55; // [rsp+50h] [rbp-39h]
  _OWORD v56[3]; // [rsp+58h] [rbp-31h] BYREF
  char v57; // [rsp+88h] [rbp-1h] BYREF
  __int64 v58; // [rsp+D8h] [rbp+4Fh] BYREF
  __int64 v59; // [rsp+E0h] [rbp+57h]
  __int64 *v60; // [rsp+E8h] [rbp+5Fh]
  __int64 *v61; // [rsp+F0h] [rbp+67h]

  v61 = a4;
  v60 = a3;
  v59 = a2;
  v58 = a1;
  memset(v56, 0, sizeof(v56));
  v10 = 48 * a6 - 0x220000000000LL;
  MiFinalizePageAttribute(v10, 1LL, 0, (__int64)a4);
  v11 = *a3;
  v12 = *(_QWORD *)(a1 + 224);
  v54 = 0LL;
  v55 = v11;
  SessionIdForVa = MiGetSessionIdForVa(v13, v12, v14, v15);
  v17 = (volatile LONG *)(v11 + 72);
  v52 = MiStartingOffset(a3, (unsigned __int64)a4, SessionIdForVa);
  SpinLock = (volatile LONG *)(v11 + 72);
  v18 = v52;
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v11 + 72));
  v19 = *(_QWORD *)(v11 + 64) & 0xFFFFFFFFFFFFFFF0uLL;
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140C651C0);
  v20 = **(_QWORD **)(v19 + 40);
  if ( v20 && (v21 = (volatile LONG *)(v20 + 72), (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel()) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C651C0);
    if ( *(_QWORD *)(v20 + 32) && (*(_DWORD *)(v20 + 56) & 3) == 0 )
    {
      v53 = MiEndingOffset((__int64)a3);
      v24 = v52 >> 12;
      if ( (unsigned int)(v52 >> 12) != (unsigned int)((v53 - 1) >> 12) )
        v23 -= 2;
      v25 = v20 + 128;
      v50 = v23;
      while ( (unsigned int)v24 >= *(_DWORD *)(v25 + 44) )
      {
        LODWORD(v24) = v24 - *(_DWORD *)(v25 + 44);
        v25 = *(_QWORD *)(v25 + 16);
        if ( !v25 )
          goto LABEL_17;
      }
      v26 = 0;
      LODWORD(v59) = 2;
      v27 = (__int64 *)v56;
      if ( *(_DWORD *)(v25 + 104) )
      {
        while ( 1 )
        {
          v28 = *(_QWORD *)(v25 + 8);
          if ( !v28 )
            break;
          v29 = v28 + 8LL * (unsigned int)v24;
          if ( !v29 )
            break;
          v30 = (v29 >> 9) & 0x7FFFFFFFF8LL;
          v31 = ((unsigned __int64)v61 >> 9) & 0x7FFFFFFFF8LL;
          v27[2] = v29;
          if ( v30 == v31 || v27 != (__int64 *)v56 && v30 == (((unsigned __int64)*(v27 - 1) >> 9) & 0x7FFFFFFFF8LL) )
          {
            MiTryLockLeafPage((__int64 *)v29, v26, v27);
          }
          else
          {
            if ( (int)MiTryLockProtoPoolPageAtDpc(v29, v30, &v54, (__int64)v27) < 0 )
              break;
            v27[1] = v54;
          }
          v32 = *v27;
          if ( !*v27 || (*(_BYTE *)(v32 + 35) & 0x40) != 0 || !(unsigned int)MiStandbyPageContentsIntact(v32) )
            break;
          if ( v27 != (__int64 *)v56 || (v52 & 0xFFF) == 0 )
            goto LABEL_24;
          if ( v50 >= 2 )
          {
            v18 = v52;
LABEL_24:
            v33 = (unsigned int)v59;
            HyperSpace = MiAllocateHyperSpace((unsigned int)v59);
            v51 = HyperSpace + 4096;
            MiMapSinglePage(HyperSpace, a6, 0x40000000LL, 0LL);
            v35 = (char *)v56;
            do
            {
              if ( !*(_QWORD *)v35 )
                break;
              MiMapSinglePage(
                v51,
                0xAAAAAAAAAAAAAAABuLL * ((*(_QWORD *)v35 + 0x220000000000LL) >> 4),
                3221225472LL,
                0LL);
              v51 += 4096LL;
              v35 += 24;
            }
            while ( v35 != &v57 );
            v36 = v52;
            v37 = (const void *)(HyperSpace + (v18 & 0xFFFu) + 4096);
            if ( v52 + 4096 > v53 )
            {
              v47 = ((_DWORD)v53 - v18) & 0xFFF;
              memmove((void *)HyperSpace, v37, v47);
              memset((void *)(v47 + HyperSpace), 0, (unsigned int)(4096 - v47));
              v36 = v52;
            }
            else
            {
              KeCopyPage(HyperSpace, v37);
            }
            v38 = v58;
            v39 = (_QWORD *)(((HyperSpace >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
            if ( (_DWORD)v59 )
            {
              do
              {
                *v39++ = ZeroPte;
                --v33;
              }
              while ( v33 );
            }
            *((_QWORD *)KeGetCurrentPrcb()->MmInternal + 1543) = 0LL;
            ExReleaseSpinLockExclusiveFromDpcLevel(v21);
            ++*(_QWORD *)(v55 + 32);
            ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
            MiUnlockDataCopyPages((__int64 *)v56);
            LODWORD(v58) = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v58);
              while ( *(__int64 *)(v10 + 24) < 0 );
            }
            v40 = v61;
            v41 = a6;
            MiInitializeTransitionPfn(a6, v61, -1LL);
            v42 = a5;
            v43 = *(_BYTE *)(v10 + 34) & 0xF8 | 2;
            *(_QWORD *)v10 = v38 + 32;
            *(_BYTE *)(v10 + 34) = v43;
            *(_WORD *)(v10 + 32) = 1;
            *(_BYTE *)(v10 + 34) = v43 | 0x20;
            if ( (v42 & 1) != 0 )
            {
              v48 = (_BYTE *)(v42 & 0xFFFFFFFFFFFFFFFEuLL);
              if ( *v48 == 1 )
              {
                MiAdvanceFaultList(v48);
                *(_DWORD *)(v38 + 192) |= 8u;
              }
            }
            *(_BYTE *)(v10 + 35) ^= (*(_BYTE *)(v10 + 35) ^ (*(_DWORD *)(v38 + 192) >> 9)) & 7;
            _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            *(_QWORD *)(v38 + 168) = MI_READ_PTE_LOCK_FREE((unsigned __int64)v40);
            v44 = v60;
            *(_QWORD *)(v38 + 232) = v40;
            *(_QWORD *)(v38 + 272) = 0LL;
            *(_DWORD *)(v38 + 280) = 4325432;
            *(_QWORD *)(v38 + 304) = 0LL;
            *(_QWORD *)(v38 + 312) = 4096LL;
            *(_QWORD *)(v38 + 320) = v41;
            *(_QWORD *)(v38 + 96) = v36;
            v45 = a7;
            v46 = a7;
            *(_QWORD *)(v38 + 240) = v40;
            *(_QWORD *)(v38 + 248) = v10;
            *(_QWORD *)(v38 + 208) = v44;
            *(_QWORD *)(v38 + 200) = 0LL;
            MiObtainProtoReference(v46, 0);
            *(_QWORD *)(v38 + 160) = v45;
            *(_DWORD *)(v38 + 80) = 0;
            MiUnlockProtoPoolPage(v45, 2u);
            *(_QWORD *)(v38 + 88) = 4096LL;
            KeSetEvent((PRKEVENT)(v38 + 32), 0, 0);
            __incgsdword(0x2E98u);
            return 1LL;
          }
          v27 += 3;
          LODWORD(v59) = v59 + 1;
          LODWORD(v24) = v24 + 1;
          v26 = 1;
          if ( (unsigned int)v24 >= *(_DWORD *)(v25 + 44) )
          {
            v25 = *(_QWORD *)(v25 + 16);
            LODWORD(v24) = 0;
            if ( !v25 )
              break;
          }
          if ( !*(_DWORD *)(v25 + 104) )
            break;
          v18 = v52;
        }
      }
LABEL_17:
      v17 = SpinLock;
    }
  }
  else
  {
    v21 = &dword_140C651C0;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(v21);
  ExReleaseSpinLockExclusiveFromDpcLevel(v17);
  MiUnlockDataCopyPages((__int64 *)v56);
  return 0LL;
}
