/*
 * XREFs of MiZeroCfgSystemWideBitmapWorker @ 0x1403326D0
 * Callers:
 *     MiZeroCfgSystemWideBitmap @ 0x140331F14 (MiZeroCfgSystemWideBitmap.c)
 * Callees:
 *     MiUnlinkPageFromList @ 0x140217870 (MiUnlinkPageFromList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140234880 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlockProtoPoolPage @ 0x140239160 (MiUnlockProtoPoolPage.c)
 *     MiSetNonResidentPteHeat @ 0x14023E120 (MiSetNonResidentPteHeat.c)
 *     MiDecrementShareCount @ 0x14023FB30 (MiDecrementShareCount.c)
 *     MiReleasePageFileSpace @ 0x1402837D4 (MiReleasePageFileSpace.c)
 *     MiCaptureDirtyBitToPfn @ 0x140290190 (MiCaptureDirtyBitToPfn.c)
 *     MiLocatePagefileSubsection @ 0x14029737C (MiLocatePagefileSubsection.c)
 *     MiLockProtoPoolPage @ 0x14029A790 (MiLockProtoPoolPage.c)
 *     MiInsertPageInList @ 0x1402A6E90 (MiInsertPageInList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1402B2140 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402C8FA0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402CDE30 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x1402D1100 (KxAcquireQueuedSpinLock.c)
 *     MiCapturePageFileInfoInline @ 0x1402FB540 (MiCapturePageFileInfoInline.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     MiReleasePageFileInfo @ 0x140330CC0 (MiReleasePageFileInfo.c)
 *     MiLockLeafPage @ 0x140332CE0 (MiLockLeafPage.c)
 *     MiTransferSoftwarePte @ 0x1403330E8 (MiTransferSoftwarePte.c)
 *     MiLockNestedPageAtDpcInline @ 0x140333FA0 (MiLockNestedPageAtDpcInline.c)
 *     MiDiscardTransitionPteEx @ 0x140388794 (MiDiscardTransitionPteEx.c)
 *     KeZeroSinglePage @ 0x1404023F0 (KeZeroSinglePage.c)
 *     memset @ 0x140413800 (memset.c)
 */

void __fastcall MiZeroCfgSystemWideBitmapWorker(unsigned int *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r8
  __int64 v4; // rax
  unsigned __int64 v5; // rbx
  __int64 v7; // r12
  __int64 v8; // r9
  unsigned int *v9; // r13
  __int64 v10; // rcx
  unsigned __int64 v11; // rsi
  unsigned int *v12; // rax
  __int64 v13; // r10
  unsigned int *v14; // r15
  unsigned __int64 v15; // rcx
  __int64 v16; // rdx
  unsigned __int64 v17; // r14
  unsigned __int64 v18; // rdx
  unsigned int v19; // r9d
  __int64 v20; // rdi
  __int64 v21; // rcx
  unsigned __int64 v22; // r8
  __int64 v23; // r12
  __int64 v24; // r13
  __int64 v25; // rax
  unsigned __int64 v26; // rsi
  unsigned __int64 v27; // rsi
  __int64 v28; // rdi
  _QWORD *v29; // rbx
  __int64 v30; // rax
  __int64 v31; // r10
  unsigned __int64 v32; // rbx
  __int16 v33; // r10
  __int64 v34; // r12
  BOOL v35; // eax
  __int64 v36; // r8
  int v37; // edx
  int v38; // eax
  __int64 v39; // r9
  __int64 v40; // r8
  __int64 v41; // rdx
  __int64 v42; // rbx
  int v43; // edi
  BOOL v44; // eax
  __int64 v45; // r8
  __int64 v46; // rax
  __int64 v47; // r9
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // rbx
  void *v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // r12
  __int64 v55; // r9
  unsigned __int64 v56; // rax
  unsigned __int64 v57; // rbx
  size_t v58; // r8
  void *v59; // rcx
  __int64 v60; // rdx
  size_t v61; // r8
  __int64 v62; // rdx
  __int64 v63; // rax
  struct _LIST_ENTRY *Flink; // rdx
  unsigned __int64 v65; // rdx
  __int64 v66; // rcx
  unsigned __int64 v67; // r10
  unsigned __int64 v68; // r9
  volatile signed __int32 *v69; // r8
  unsigned int v70; // eax
  int v71; // esi
  unsigned __int64 v72; // rdx
  bool v73; // zf
  __int64 v74; // [rsp+20h] [rbp-69h]
  unsigned __int64 v75; // [rsp+28h] [rbp-61h]
  __int64 v76; // [rsp+30h] [rbp-59h]
  __int64 v77; // [rsp+38h] [rbp-51h]
  __int64 v78; // [rsp+40h] [rbp-49h]
  unsigned __int64 v79; // [rsp+48h] [rbp-41h] BYREF
  __int64 v80; // [rsp+50h] [rbp-39h]
  unsigned __int64 v81; // [rsp+58h] [rbp-31h] BYREF
  unsigned int *v82; // [rsp+60h] [rbp-29h]
  unsigned __int64 v83; // [rsp+68h] [rbp-21h] BYREF
  __int64 v84; // [rsp+70h] [rbp-19h] BYREF
  unsigned __int64 v85; // [rsp+78h] [rbp-11h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+80h] [rbp-9h] BYREF
  unsigned __int8 v87; // [rsp+F0h] [rbp+67h] BYREF
  unsigned int v88; // [rsp+F8h] [rbp+6Fh]
  int v89; // [rsp+100h] [rbp+77h]
  unsigned int v90; // [rsp+108h] [rbp+7Fh]

  v3 = a3 >> 3;
  v4 = *(_QWORD *)a1;
  v5 = a2 >> 3;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v7 = (a2 >> 3) & 0xFFF;
  v8 = *(_WORD *)(v4 + 60) & 0x3FF;
  v90 = (a2 >> 3) & 0xFFF;
  v76 = *(_QWORD *)(qword_140C4E648 + 8 * v8);
  v88 = ((a2 >> 3) + v3) & 0xFFF;
  v83 = ((a2 >> 3) + v3 - 1) >> 12;
  v9 = MiLocatePagefileSubsection(a1, &v83);
  v82 = v9;
  v85 = v83;
  v10 = *((_QWORD *)v9 + 1);
  v81 = v5 >> 12;
  v11 = v10 + 8 * v83;
  v12 = MiLocatePagefileSubsection(a1, &v81);
  v13 = 0LL;
  v14 = v12;
  if ( *((_QWORD *)v12 + 1) )
  {
    v15 = v81;
  }
  else
  {
    do
    {
      if ( v14 == v9 )
        return;
      v14 = (unsigned int *)*((_QWORD *)v14 + 2);
      v15 = 0LL;
      v81 = 0LL;
    }
    while ( !*((_QWORD *)v14 + 1) );
  }
  v16 = *((_QWORD *)v14 + 1);
  v17 = v16 + 8 * v15;
  if ( v14 == v9 )
    v18 = v11;
  else
    v18 = v16 + 8LL * v14[11];
  v19 = v88;
  v74 = v18;
  v87 = 17;
  v75 = 0LL;
  v20 = v17 & -(__int64)((_DWORD)v7 != 0);
  v21 = 0LL;
  v77 = 0LL;
  v22 = 0LL;
  v78 = v20;
  v23 = v11 & -(__int64)(v88 != 0);
  v80 = v23;
  while ( v17 < v18 )
  {
LABEL_7:
    if ( (v22 & 0xFFFFFFFFFFFFF000uLL) != (v17 & 0xFFFFFFFFFFFFF000uLL) && v22 )
    {
      MiUnlockProtoPoolPage(v21, v87);
      v21 = 0LL;
      v75 = 0LL;
      v77 = 0LL;
    }
    if ( v21 )
    {
LABEL_9:
      v24 = MiLockLeafPage(v17, 0LL);
      v25 = MI_READ_PTE_LOCK_FREE(v17);
      v84 = v25;
      v26 = v25;
      if ( (v25 & 1) != 0 )
      {
        if ( MiPteInShadowRange((unsigned __int64)&v84)
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && ((v26 & 0x20) == 0 || (v26 & 0x42) == 0) )
        {
          Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( Flink )
          {
            if ( ((__int64)*(&Flink->Flink + (((unsigned __int64)&v84 >> 3) & 0x1FF)) & 0x20) != 0 )
              v26 |= 0x20uLL;
          }
        }
        v48 = MiMapPageInHyperSpaceWorker((v26 >> 12) & 0xFFFFFFFFFLL, 0LL, 0x80000000, v47);
        v49 = v48;
        if ( v17 == v20 )
        {
          v61 = 4096 - v90;
          v50 = (void *)(v48 + v90);
        }
        else
        {
          v50 = (void *)v48;
          if ( v17 != v23 )
          {
            KeZeroSinglePage(v48);
LABEL_52:
            LOBYTE(v51) = 17;
            MiUnmapPageInHyperSpaceWorker(v49, v51, 0x80000000LL);
            v52 = MiCaptureDirtyBitToPfn(v24);
            _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( !v52 )
              goto LABEL_29;
            v65 = v52;
            v66 = *(_QWORD *)(qword_140C4E648 + 8 * ((*(_QWORD *)(v24 + 40) >> 39) & 0x3FFLL));
            goto LABEL_100;
          }
          v61 = v88;
        }
        memset(v50, 0, v61);
        goto LABEL_52;
      }
      if ( (v25 & 0x400) != 0 )
        goto LABEL_29;
      if ( (v25 & 0x800) == 0 )
      {
        v13 = 0LL;
        if ( v25 && v17 != v20 && v17 != v23 )
        {
          if ( (v25 & 2) != 0 )
          {
            v41 = *(_QWORD *)(v76 + 8LL * ((unsigned __int16)v25 >> 12) + 6944);
            if ( qword_140C4DF40 && (v25 & 0x10) == 0 )
              v25 &= ~qword_140C4DF40;
            v39 = 2LL;
            v40 = HIDWORD(v25);
          }
          else
          {
            v39 = 0LL;
            v40 = 0LL;
            v41 = 0LL;
          }
          v42 = MiTransferSoftwarePte(v26, v41, v40, v39);
          MiReleasePageFileSpace(v76, v26, 0LL);
          v43 = 0;
          v44 = MiPteInShadowRange(v17);
          v13 = 0LL;
          if ( v44 )
          {
            if ( (unsigned int)MiPteHasShadow() )
            {
              v43 = 1;
              if ( HIBYTE(word_140C4E008) != (_BYTE)v13 )
                goto LABEL_42;
              v73 = (v42 & 1) == 0;
            }
            else
            {
              if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
                goto LABEL_42;
              v73 = (v42 & 1) == 0;
            }
            if ( !v73 )
              v42 |= 0x8000000000000000uLL;
          }
LABEL_42:
          *(_QWORD *)v17 = v42;
          if ( v43 )
          {
            MiWritePteShadow(v17, v42, v45);
            goto LABEL_29;
          }
        }
LABEL_30:
        v21 = v77;
        v17 += 8LL;
        v9 = v82;
        v20 = v78;
        goto LABEL_31;
      }
      if ( qword_140C4DF40 )
      {
        if ( (v25 & 0x10) != 0 )
          v26 = v25 & 0xFFFFFFFFFFFFFFEFuLL;
        else
          v26 = ~qword_140C4DF40 & v25;
      }
      v27 = (v26 >> 12) & 0xFFFFFFFFFLL;
      v28 = 0LL;
      if ( *(_WORD *)(v24 + 32) )
        goto LABEL_28;
      if ( v17 == v78 || v17 == v23 )
      {
        v73 = (*(_BYTE *)(v24 + 34) & 0x10) == 0;
        v89 = 0;
        if ( !v73 )
        {
          v54 = *(_QWORD *)(v76 + 4240);
          LockHandle.LockQueue.Next = 0LL;
          LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v54 + 32);
          KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(v54 + 32));
          goto LABEL_60;
        }
        v89 = 1;
        if ( (unsigned int)MiUnlinkPageFromList(v24, 0) )
        {
          v28 = MiCaptureDirtyBitToPfn(v24);
          v54 = 0LL;
LABEL_60:
          v56 = MiMapPageInHyperSpaceWorker(v27, 0LL, 0x80000000, v55);
          v57 = v56;
          if ( v17 == v78 )
          {
            v58 = 4096 - v90;
            v59 = (void *)(v56 + v90);
          }
          else
          {
            v58 = v88;
            v59 = (void *)v56;
          }
          memset(v59, 0, v58);
          LOBYTE(v60) = 17;
          MiUnmapPageInHyperSpaceWorker(v57, v60, 0x80000000LL);
          if ( dword_140C4E6CC == 1 )
          {
            v67 = v27 & 0x1F;
            LOBYTE(v68) = 1;
            v69 = (volatile signed __int32 *)(qword_140C4E728 + 4 * (v27 >> 5));
            if ( v67 + 1 > 0x20 )
            {
              if ( (v27 & 0x1F) != 0 )
              {
                v71 = v27 & 0x1F;
                _InterlockedOr(v69++, ((1 << (32 - v71)) - 1) << v67);
                v68 = 1LL - (unsigned int)(32 - v71);
                if ( v68 >= 0x20 )
                {
                  v72 = v68 >> 5;
                  v68 += -32LL * (v68 >> 5);
                  do
                  {
                    *v69++ = -1;
                    --v72;
                  }
                  while ( v72 );
                }
                if ( !v68 )
                  goto LABEL_63;
              }
              v70 = (1 << v68) - 1;
            }
            else
            {
              v70 = 1 << v67;
            }
            _InterlockedOr(v69, v70);
          }
LABEL_63:
          if ( v54 )
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          if ( v89 == 1 )
            MiInsertPageInList(v24, 8u);
LABEL_27:
          v23 = v80;
LABEL_28:
          _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( !v28 )
          {
LABEL_29:
            v13 = 0LL;
            goto LABEL_30;
          }
          v66 = v76;
          v65 = v28;
LABEL_100:
          MiReleasePageFileInfo(v66, v65, 1);
          goto LABEL_29;
        }
      }
      else if ( (unsigned int)MiUnlinkPageFromList(v24, 0) )
      {
        v29 = (_QWORD *)(v24 + 16);
        v30 = MiCapturePageFileInfoInline((unsigned __int64 *)(v24 + 16), 0, 0);
        v31 = *(_QWORD *)(v24 + 16);
        v28 = v30;
        if ( (v31 & 2) != 0 )
        {
          v53 = *(_QWORD *)(v76 + 8LL * ((unsigned __int16)v31 >> 12) + 6944);
          if ( qword_140C4DF40 && (v31 & 0x10) == 0 )
            v31 &= ~qword_140C4DF40;
          v32 = MiTransferSoftwarePte(*v29, v53, HIDWORD(v31), 2LL);
        }
        else
        {
          v79 = *v29;
          MiSetNonResidentPteHeat(&v79, 0);
          v32 = v79;
          if ( (v33 & 0x400) == 0 )
          {
            v32 = v79 & 0xFFFFFFFFFFFFFFF9uLL;
            v79 &= 0xFFFFFFFFFFFFFFF9uLL;
          }
        }
        v34 = 48 * (*(_QWORD *)(v24 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL;
        v89 = 0;
        v35 = MiPteInShadowRange(v17);
        v37 = 0;
        if ( v35 )
        {
          if ( !(unsigned int)MiPteHasShadow() )
          {
            if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
              && (v32 & 1) != 0 )
            {
              v32 |= 0x8000000000000000uLL;
            }
            goto LABEL_23;
          }
          v38 = 1;
          if ( HIBYTE(word_140C4E008) == (_BYTE)v37 && (v32 & 1) != 0 )
            v32 |= 0x8000000000000000uLL;
        }
        else
        {
LABEL_23:
          v38 = v37;
        }
        *(_QWORD *)v17 = v32;
        if ( v38 )
          MiWritePteShadow(v17, v32, v36);
        MiLockNestedPageAtDpcInline(v34);
        MiDecrementShareCount(v34);
        _InterlockedAnd64((volatile signed __int64 *)(v34 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MiInsertPageInFreeOrZeroedList(v27, 2);
        goto LABEL_27;
      }
      MiDiscardTransitionPteEx(v24, 0LL);
      _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v21 = v77;
      v17 += 8LL;
      v9 = v82;
      v13 = 0LL;
      v18 = v74;
      v20 = v78;
      v22 = v75;
      v19 = v88;
    }
    else
    {
      v46 = MiLockProtoPoolPage(v17, (__int64)&v87);
      v13 = 0LL;
      v77 = v46;
      v21 = v46;
      if ( v46 )
      {
        v75 = v17;
        goto LABEL_9;
      }
      v17 = (v17 & 0xFFFFFFFFFFFFF000uLL) + 4096;
LABEL_31:
      v18 = v74;
      v22 = v75;
      v19 = v88;
    }
  }
  while ( v14 != v9 )
  {
    v14 = (unsigned int *)*((_QWORD *)v14 + 2);
    if ( *((_QWORD *)v14 + 1) != v13 )
    {
      v17 = *((_QWORD *)v14 + 1);
      if ( v14 == v9 )
      {
        v62 = *((_QWORD *)v9 + 1) + 8 * v85;
        v63 = v62;
        if ( !v19 )
          v63 = v23;
        v23 = v63;
        v80 = v63;
      }
      else
      {
        v62 = v17 + 8LL * v14[11];
      }
      v74 = v62;
      goto LABEL_7;
    }
  }
  if ( v21 )
    MiUnlockProtoPoolPage(v21, v87);
}
