/*
 * XREFs of MiZeroCfgSystemWideBitmapWorker @ 0x1402DD950
 * Callers:
 *     MiZeroCfgSystemWideBitmap @ 0x1402DD8F8 (MiZeroCfgSystemWideBitmap.c)
 * Callees:
 *     MiReleasePageFileInfo @ 0x14020B300 (MiReleasePageFileInfo.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140214870 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140214A54 (MiUnmapPageInHyperSpaceWorker.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140225810 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiUnlinkPageFromListEx @ 0x140264100 (MiUnlinkPageFromListEx.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140277CE0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiDetermineModifiedPageListHead @ 0x14027E090 (MiDetermineModifiedPageListHead.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14027F8D0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiLockProtoPoolPage @ 0x140283CA0 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x1402861D0 (MiUnlockProtoPoolPage.c)
 *     MiSetNonResidentPteHeat @ 0x140287A90 (MiSetNonResidentPteHeat.c)
 *     MiLockNestedPageAtDpcInline @ 0x1402DDE90 (MiLockNestedPageAtDpcInline.c)
 *     MiCapturePageFileInfoInline @ 0x1402DE2D4 (MiCapturePageFileInfoInline.c)
 *     MiWritePteShadow @ 0x1402EB2BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402EB31C (MiPteHasShadow.c)
 *     MiInsertPageInList @ 0x140318540 (MiInsertPageInList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 *     MiLocatePagefileSubsection @ 0x14031DDB0 (MiLocatePagefileSubsection.c)
 *     MiDecrementShareCount @ 0x14032AE40 (MiDecrementShareCount.c)
 *     MiCaptureDirtyBitToPfn @ 0x14032D790 (MiCaptureDirtyBitToPfn.c)
 *     MiTransferSoftwarePte @ 0x14032F630 (MiTransferSoftwarePte.c)
 *     MiLockLeafPage @ 0x14034AF20 (MiLockLeafPage.c)
 *     MiReleasePageFileSpace @ 0x14034BE0C (MiReleasePageFileSpace.c)
 *     KeZeroSinglePage @ 0x14041BBB0 (KeZeroSinglePage.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     MiDiscardTransitionPteEx @ 0x14064E040 (MiDiscardTransitionPteEx.c)
 */

void __fastcall MiZeroCfgSystemWideBitmapWorker(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // r8
  __int64 v6; // r12
  __int64 v7; // r9
  __int64 v8; // r13
  __int64 v9; // rcx
  unsigned __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // r10
  __int64 v13; // r15
  unsigned __int64 v14; // rcx
  __int64 v15; // rdx
  unsigned __int64 v16; // r14
  unsigned __int64 v17; // rdx
  unsigned int v18; // r9d
  __int64 v19; // rdi
  __int64 v20; // rcx
  unsigned __int64 v21; // r8
  __int64 v22; // r12
  __int64 v23; // r13
  __int64 v24; // rax
  unsigned __int64 v25; // rsi
  unsigned __int64 v26; // rsi
  __int64 v27; // rdi
  _QWORD *v28; // rbx
  __int64 v29; // rax
  __int64 v30; // r10
  unsigned __int64 v31; // rbx
  __int16 v32; // r10
  __int64 v33; // r12
  int v34; // eax
  __int64 v35; // rcx
  __int64 v36; // r8
  int v37; // edx
  int v38; // eax
  __int64 v39; // rax
  __int64 v40; // r9
  __int64 v41; // r8
  __int64 v42; // rdx
  __int64 v43; // rbx
  int v44; // edi
  int v45; // eax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  unsigned __int64 v49; // rax
  unsigned __int64 v50; // rax
  unsigned __int64 v51; // rbx
  size_t v52; // r8
  void *v53; // rcx
  __int64 v54; // rax
  __int64 v55; // r12
  unsigned __int64 v56; // rax
  unsigned __int64 v57; // rbx
  size_t v58; // r8
  void *v59; // rcx
  __int64 v60; // rdx
  __int64 v61; // rax
  unsigned __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // rdx
  unsigned __int64 v65; // r10
  unsigned __int64 v66; // r9
  volatile signed __int32 *v67; // r8
  int v68; // esi
  unsigned __int64 v69; // rdx
  bool v70; // zf
  __int64 v71; // [rsp+20h] [rbp-49h]
  unsigned __int64 v72; // [rsp+28h] [rbp-41h]
  __int64 v73; // [rsp+30h] [rbp-39h]
  __int64 v74; // [rsp+38h] [rbp-31h]
  unsigned __int64 v75; // [rsp+40h] [rbp-29h] BYREF
  __int64 v76; // [rsp+48h] [rbp-21h]
  __int64 v77; // [rsp+50h] [rbp-19h]
  unsigned __int64 v78; // [rsp+58h] [rbp-11h] BYREF
  __int64 v79; // [rsp+60h] [rbp-9h]
  unsigned __int64 v80; // [rsp+68h] [rbp-1h] BYREF
  unsigned __int64 v81; // [rsp+70h] [rbp+7h]
  __int64 v82[9]; // [rsp+78h] [rbp+Fh] BYREF
  unsigned __int8 v83; // [rsp+D0h] [rbp+67h] BYREF
  unsigned int v84; // [rsp+D8h] [rbp+6Fh]
  int v85; // [rsp+E0h] [rbp+77h]
  unsigned int v86; // [rsp+E8h] [rbp+7Fh]

  v3 = a2 >> 3;
  v4 = a3 >> 3;
  v6 = (a2 >> 3) & 0xFFF;
  v7 = *(_WORD *)(*(_QWORD *)a1 + 60LL) & 0x3FF;
  v86 = (a2 >> 3) & 0xFFF;
  v73 = *(_QWORD *)(qword_140C67048 + 8 * v7);
  v84 = ((a2 >> 3) + v4) & 0xFFF;
  v80 = ((a2 >> 3) + v4 - 1) >> 12;
  v8 = MiLocatePagefileSubsection(a1, &v80);
  v79 = v8;
  v81 = v80;
  v9 = *(_QWORD *)(v8 + 8);
  v78 = v3 >> 12;
  v10 = v9 + 8 * v80;
  v11 = MiLocatePagefileSubsection(a1, &v78);
  v12 = 0LL;
  v13 = v11;
  if ( *(_QWORD *)(v11 + 8) )
  {
    v14 = v78;
  }
  else
  {
    do
    {
      if ( v13 == v8 )
        return;
      v13 = *(_QWORD *)(v13 + 16);
      v14 = 0LL;
      v78 = 0LL;
    }
    while ( !*(_QWORD *)(v13 + 8) );
  }
  v15 = *(_QWORD *)(v13 + 8);
  v16 = v15 + 8 * v14;
  if ( v13 == v8 )
    v17 = v10;
  else
    v17 = v15 + 8LL * *(unsigned int *)(v13 + 44);
  v18 = v84;
  v71 = v17;
  v83 = 17;
  v72 = 0LL;
  v19 = v16 & -(__int64)((_DWORD)v6 != 0);
  v20 = 0LL;
  v77 = 0LL;
  v21 = 0LL;
  v74 = v19;
  v22 = v10 & -(__int64)(v84 != 0);
  v76 = v22;
  while ( v16 < v17 )
  {
LABEL_7:
    if ( (v21 & 0xFFFFFFFFFFFFF000uLL) == (v16 & 0xFFFFFFFFFFFFF000uLL) || !v21 )
    {
      if ( v20 )
        goto LABEL_9;
    }
    else
    {
      MiUnlockProtoPoolPage(v20, v83);
      v72 = 0LL;
    }
    v39 = MiLockProtoPoolPage(v16, &v83);
    v12 = 0LL;
    v77 = v39;
    v20 = v39;
    if ( v39 )
    {
      v72 = v16;
LABEL_9:
      v23 = MiLockLeafPage(v16, 0LL);
      v24 = MI_READ_PTE_LOCK_FREE(v16);
      v82[0] = v24;
      v25 = v24;
      if ( (v24 & 1) != 0 )
      {
        v49 = MI_READ_PTE_LOCK_FREE(v82);
        v50 = MiMapPageInHyperSpaceWorker((v49 >> 12) & 0xFFFFFFFFFFLL, 0LL, 0x80000000);
        v51 = v50;
        if ( v16 == v19 )
        {
          v52 = 4096 - v86;
          v53 = (void *)(v50 + v86);
          goto LABEL_50;
        }
        v53 = (void *)v50;
        if ( v16 == v22 )
        {
          v52 = v84;
LABEL_50:
          memset(v53, 0, v52);
        }
        else
        {
          KeZeroSinglePage(v50);
        }
        MiUnmapPageInHyperSpaceWorker(v51, 0x11u);
        v54 = MiCaptureDirtyBitToPfn(v23);
        _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( !v54 )
          goto LABEL_29;
        v62 = v54;
        v63 = *(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(v23 + 40) >> 43) & 0x3FFLL));
        goto LABEL_79;
      }
      if ( (v24 & 0x400) != 0 )
        goto LABEL_29;
      if ( (v24 & 0x800) == 0 )
      {
        v12 = 0LL;
        if ( v24 && v16 != v19 && v16 != v22 )
        {
          if ( (v24 & 2) != 0 )
          {
            v42 = *(_QWORD *)(v73 + 8LL * ((unsigned __int16)v24 >> 12) + 17056);
            if ( qword_140C657C0 && (v24 & 0x10) == 0 )
              v24 &= ~qword_140C657C0;
            v40 = 2LL;
            v41 = HIDWORD(v24);
          }
          else
          {
            v40 = 0LL;
            v41 = 0LL;
            v42 = 0LL;
          }
          v43 = MiTransferSoftwarePte(v25, v42, v41, v40);
          MiReleasePageFileSpace(v73, v25, 0LL);
          v44 = 0;
          v45 = MiPteInShadowRange(v16);
          v12 = 0LL;
          if ( v45 )
          {
            if ( (unsigned int)MiPteHasShadow(v47, v46, v48) )
            {
              v44 = 1;
              if ( HIBYTE(word_140C6697C) != (_BYTE)v12 )
                goto LABEL_46;
              v70 = (v43 & 1) == 0;
            }
            else
            {
              if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
                goto LABEL_46;
              v70 = (v43 & 1) == 0;
            }
            if ( !v70 )
              v43 |= 0x8000000000000000uLL;
          }
LABEL_46:
          *(_QWORD *)v16 = v43;
          if ( v44 )
          {
            MiWritePteShadow(v16, v43);
            goto LABEL_29;
          }
        }
LABEL_30:
        v20 = v77;
        v16 += 8LL;
        v8 = v79;
        v19 = v74;
        goto LABEL_31;
      }
      if ( qword_140C657C0 )
      {
        if ( (v24 & 0x10) != 0 )
          v25 = v24 & 0xFFFFFFFFFFFFFFEFuLL;
        else
          v25 = ~qword_140C657C0 & v24;
      }
      v26 = (v25 >> 12) & 0xFFFFFFFFFFLL;
      v27 = 0LL;
      if ( *(_WORD *)(v23 + 32) )
        goto LABEL_28;
      if ( v16 == v74 || v16 == v22 )
      {
        v70 = (*(_BYTE *)(v23 + 34) & 0x10) == 0;
        v85 = 0;
        if ( !v70 )
        {
          v55 = MiDetermineModifiedPageListHead(v23, v73, 0);
          ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v55 + 32));
          goto LABEL_55;
        }
        v85 = 1;
        if ( (MiUnlinkPageFromListEx(v23, 0LL) & 3) == 0 )
        {
          v27 = MiCaptureDirtyBitToPfn(v23);
          v55 = 0LL;
LABEL_55:
          v56 = MiMapPageInHyperSpaceWorker(v26, 0LL, 0x80000000);
          v57 = v56;
          if ( v16 == v74 )
          {
            v58 = 4096 - v86;
            v59 = (void *)(v56 + v86);
          }
          else
          {
            v58 = v84;
            v59 = (void *)v56;
          }
          memset(v59, 0, v58);
          MiUnmapPageInHyperSpaceWorker(v57, 0x11u);
          if ( dword_140C67ACC == 1 )
          {
            v65 = v26 & 0x1F;
            LOBYTE(v66) = 1;
            v67 = (volatile signed __int32 *)(*((_QWORD *)&xmmword_140C67B20 + 1) + 4 * (v26 >> 5));
            if ( v65 + 1 > 0x20 )
            {
              if ( (v26 & 0x1F) == 0 )
                goto LABEL_102;
              v68 = v26 & 0x1F;
              _InterlockedOr(v67++, ((1 << (32 - v68)) - 1) << v65);
              v66 = 1LL - (unsigned int)(32 - v68);
              if ( v66 >= 0x20 )
              {
                v69 = v66 >> 5;
                v66 += -32LL * (v66 >> 5);
                do
                {
                  *v67++ = -1;
                  --v69;
                }
                while ( v69 );
              }
              if ( v66 )
LABEL_102:
                _InterlockedOr(v67, (1 << v66) - 1);
            }
            else
            {
              _InterlockedOr(v67, 1 << v65);
            }
          }
          if ( v55 )
            ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v55 + 32));
          if ( v85 )
            MiInsertPageInList(v23);
LABEL_27:
          v22 = v76;
LABEL_28:
          _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( !v27 )
          {
LABEL_29:
            v12 = 0LL;
            goto LABEL_30;
          }
          v63 = v73;
          v62 = v27;
LABEL_79:
          MiReleasePageFileInfo(v63, v62, 1);
          goto LABEL_29;
        }
      }
      else if ( (MiUnlinkPageFromListEx(v23, 0LL) & 3) == 0 )
      {
        v28 = (_QWORD *)(v23 + 16);
        v29 = MiCapturePageFileInfoInline(v23 + 16, 0LL, 0LL);
        v30 = *(_QWORD *)(v23 + 16);
        v27 = v29;
        if ( (v30 & 2) != 0 )
        {
          v64 = *(_QWORD *)(v73 + 8LL * ((unsigned __int16)v30 >> 12) + 17056);
          if ( qword_140C657C0 && (v30 & 0x10) == 0 )
            v30 &= ~qword_140C657C0;
          v31 = MiTransferSoftwarePte(*v28, v64, HIDWORD(v30), 2LL);
        }
        else
        {
          v75 = *v28;
          MiSetNonResidentPteHeat(&v75, 0);
          v31 = v75;
          if ( (v32 & 0x400) == 0 )
          {
            v31 = v75 & 0xFFFFFFFFFFFFFFF9uLL;
            v75 &= 0xFFFFFFFFFFFFFFF9uLL;
          }
        }
        v33 = 48 * (*(_QWORD *)(v23 + 40) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
        v85 = 0;
        v34 = MiPteInShadowRange(v16);
        v37 = 0;
        if ( v34 )
        {
          if ( !(unsigned int)MiPteHasShadow(v35, 0LL, v36) )
          {
            if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
              && (v31 & 1) != 0 )
            {
              v31 |= 0x8000000000000000uLL;
            }
            goto LABEL_23;
          }
          v38 = 1;
          if ( HIBYTE(word_140C6697C) == (_BYTE)v37 && (v31 & 1) != 0 )
            v31 |= 0x8000000000000000uLL;
        }
        else
        {
LABEL_23:
          v38 = v37;
        }
        *(_QWORD *)v16 = v31;
        if ( v38 )
          MiWritePteShadow(v16, v31);
        MiLockNestedPageAtDpcInline(v33);
        MiDecrementShareCount(v33);
        _InterlockedAnd64((volatile signed __int64 *)(v33 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MiInsertPageInFreeOrZeroedList(v26, 2);
        goto LABEL_27;
      }
      MiDiscardTransitionPteEx(v23, 0LL);
      _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v20 = v77;
      v16 += 8LL;
      v8 = v79;
      v12 = 0LL;
      v17 = v71;
      v19 = v74;
      v21 = v72;
      v18 = v84;
    }
    else
    {
      v16 = (v16 & 0xFFFFFFFFFFFFF000uLL) + 4096;
LABEL_31:
      v17 = v71;
      v21 = v72;
      v18 = v84;
    }
  }
  while ( v13 != v8 )
  {
    v13 = *(_QWORD *)(v13 + 16);
    if ( *(_QWORD *)(v13 + 8) != v12 )
    {
      v16 = *(_QWORD *)(v13 + 8);
      if ( v13 == v8 )
      {
        v60 = *(_QWORD *)(v8 + 8) + 8 * v81;
        v61 = v60;
        if ( !v18 )
          v61 = v22;
        v22 = v61;
        v76 = v61;
      }
      else
      {
        v60 = v16 + 8LL * *(unsigned int *)(v13 + 44);
      }
      v71 = v60;
      goto LABEL_7;
    }
  }
  if ( v20 )
    MiUnlockProtoPoolPage(v20, v83);
}
