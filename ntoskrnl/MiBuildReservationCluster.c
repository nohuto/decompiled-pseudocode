/*
 * XREFs of MiBuildReservationCluster @ 0x140635ED4
 * Callers:
 *     MiGatherPagefilePages @ 0x140637D34 (MiGatherPagefilePages.c)
 * Callees:
 *     MiReleasePageFileInfo @ 0x14020B300 (MiReleasePageFileInfo.c)
 *     MiReferencePageForModifiedWrite @ 0x140213038 (MiReferencePageForModifiedWrite.c)
 *     MiUnlinkPageFromListEx @ 0x140264100 (MiUnlinkPageFromListEx.c)
 *     MiMakeValidPte @ 0x140273920 (MiMakeValidPte.c)
 *     MiReleasePtes @ 0x14027CE90 (MiReleasePtes.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140286264 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiAddLockedPageCharge @ 0x1402A309C (MiAddLockedPageCharge.c)
 *     MiLockPageInline @ 0x1402A33B0 (MiLockPageInline.c)
 *     MiLockNestedPageAtDpcInline @ 0x1402DDE90 (MiLockNestedPageAtDpcInline.c)
 *     MiWritePteShadow @ 0x1402EB2BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402EB31C (MiPteHasShadow.c)
 *     MiInsertPageInList @ 0x140318540 (MiInsertPageInList.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 *     MiReservePtes @ 0x1403274D0 (MiReservePtes.c)
 *     MiUpdatePageFileHighInPte @ 0x14032F49C (MiUpdatePageFileHighInPte.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     MiGetPageForWriteCluster @ 0x1404641B6 (MiGetPageForWriteCluster.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiAddToReservationCluster @ 0x140635394 (MiAddToReservationCluster.c)
 *     MiDerefPageFileSpaceBitmaps @ 0x140636AEC (MiDerefPageFileSpaceBitmaps.c)
 *     MiGetPageFileSectionForReservation @ 0x140638834 (MiGetPageFileSectionForReservation.c)
 *     MiRefPageFileSpaceBitmaps @ 0x140639084 (MiRefPageFileSpaceBitmaps.c)
 *     MiReleasePageFileSectionInfo @ 0x140639168 (MiReleasePageFileSectionInfo.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiBuildReservationCluster(_QWORD *a1, __int64 a2, unsigned int *a3, _DWORD *a4)
{
  __int64 v4; // rsi
  __int16 v5; // bx
  __int64 v6; // r13
  __int64 v7; // rdi
  __int64 v8; // r14
  unsigned __int64 v9; // r15
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v13; // eax
  bool v14; // zf
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // rbx
  unsigned __int8 v18; // al
  struct _KPRCB *v19; // r10
  _DWORD *v20; // r9
  int v21; // eax
  unsigned int v22; // esi
  unsigned __int8 v23; // al
  struct _KPRCB *v24; // r9
  int v25; // eax
  _DWORD *v26; // r8
  __int64 v27; // rdi
  unsigned __int64 v28; // r13
  unsigned __int8 v29; // al
  struct _KPRCB *v30; // r10
  _DWORD *v31; // r9
  int v32; // eax
  __int64 v33; // rax
  __int64 *v34; // rax
  unsigned __int64 v35; // r15
  unsigned __int64 ValidPte; // rbx
  int v37; // r14d
  __int64 v38; // r8
  __int64 v39; // r13
  __int64 v40; // r14
  __int64 v41; // r8
  __int64 v42; // rcx
  unsigned __int64 v43; // rdi
  __int64 v44; // r15
  __int64 updated; // rbx
  unsigned __int64 v46; // r12
  __int64 v47; // r12
  int v48; // r13d
  __int64 v49; // r10
  ULONG_PTR v50; // r10
  unsigned __int64 v51; // rax
  int v52; // r13d
  unsigned int v53; // ecx
  __int64 v54; // r14
  unsigned __int64 v55; // rbx
  __int64 v56; // r14
  __int64 v57; // rbx
  unsigned __int64 *v58; // r15
  ULONG_PTR v59; // r10
  unsigned __int64 v60; // rax
  unsigned __int64 *v61; // rdx
  _QWORD *v62; // r15
  unsigned __int64 v63; // rbx
  __int64 v64; // r14
  unsigned __int64 v65; // rdi
  __int64 v66; // rdx
  unsigned __int8 v67; // al
  struct _KPRCB *v68; // r9
  int v69; // eax
  _DWORD *v70; // r8
  unsigned __int8 v71; // al
  struct _KPRCB *v72; // r9
  int v73; // eax
  _DWORD *v74; // r8
  __int64 v75; // rcx
  unsigned int v76; // r8d
  __int64 v77; // rdi
  void *v78; // rax
  unsigned int v80; // [rsp+38h] [rbp-79h] BYREF
  int v81; // [rsp+3Ch] [rbp-75h] BYREF
  int v82; // [rsp+40h] [rbp-71h]
  void *Src; // [rsp+48h] [rbp-69h]
  __int64 v84; // [rsp+50h] [rbp-61h] BYREF
  __int64 v85; // [rsp+58h] [rbp-59h]
  unsigned int v86; // [rsp+60h] [rbp-51h]
  __int64 v87; // [rsp+68h] [rbp-49h]
  __int128 v88; // [rsp+70h] [rbp-41h] BYREF
  __int128 v89; // [rsp+80h] [rbp-31h]
  __int64 v90; // [rsp+90h] [rbp-21h]
  __int64 *v91; // [rsp+98h] [rbp-19h]
  __int128 v92; // [rsp+A0h] [rbp-11h] BYREF
  __int128 v93; // [rsp+B0h] [rbp-1h]
  __int64 v94; // [rsp+C0h] [rbp+Fh]
  _QWORD *v95; // [rsp+118h] [rbp+67h]

  v95 = a1;
  v4 = *(_QWORD *)(a2 + 248);
  v5 = *(_WORD *)(a2 + 204);
  v81 = 0;
  Src = a1;
  v80 = 0;
  v82 = 0;
  v90 = 0LL;
  v94 = 0LL;
  v88 = 0LL;
  v89 = 0LL;
  v92 = 0LL;
  v93 = 0LL;
  MiRefPageFileSpaceBitmaps(a2, &v88);
  LODWORD(v84) = 0;
  v6 = 88LL * (v5 & 0xF);
  v7 = *(_QWORD *)(v4 + v6 + 3920);
  if ( v7 == 0x3FFFFFFFFFLL )
    goto LABEL_116;
  while ( 1 )
  {
    v8 = 48 * v7 - 0x220000000000LL;
    v9 = (unsigned __int8)MiLockPageInline(v8);
    if ( v7 == *(_QWORD *)(v4 + v6 + 3920) )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
        v14 = (v13 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v13;
        if ( v14 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(v9);
LABEL_24:
    v7 = *(_QWORD *)(v4 + v6 + 3920);
    if ( v7 == 0x3FFFFFFFFFLL )
      goto LABEL_116;
  }
  v15 = *(_QWORD *)(v8 + 16);
  if ( qword_140C657C0 && (v15 & 0x10) == 0 )
    v15 &= ~qword_140C657C0;
  v16 = HIDWORD(v15);
  if ( (unsigned int)v16 < DWORD2(v88) )
  {
    if ( _bittest64((const signed __int64 *)v89, v16) )
    {
      MiUnlinkPageFromListEx(v8, 0LL);
      v17 = *(_QWORD *)(v8 + 16);
      *(_QWORD *)(v8 + 16) = v17 & 0xFFFFFFFFFFFFFFFDuLL;
      MiInsertPageInList(v8, 8u);
      _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        v18 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v18 <= 0xFu && (unsigned __int8)v9 <= 0xFu && v18 >= 2u )
        {
          v19 = KeGetCurrentPrcb();
          v20 = v19->SchedulerAssist;
          v21 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
          v14 = (v21 & v20[5]) == 0;
          v20[5] &= v21;
          if ( v14 )
            KiRemoveSystemWorkPriorityKick((__int64)v19);
        }
      }
      __writecr8(v9);
      MiReleasePageFileInfo(v4, v17, 0);
      goto LABEL_24;
    }
    MiReferencePageForModifiedWrite(v8, 1);
    v22 = 1;
    *v95 = v7;
    if ( *a3 == 1 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        v23 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v23 <= 0xFu && (unsigned __int8)v9 <= 0xFu && v23 >= 2u )
        {
          v24 = KeGetCurrentPrcb();
          v25 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
          v26 = v24->SchedulerAssist;
          v14 = (v25 & v26[5]) == 0;
          v26[5] &= v25;
          if ( v14 )
            KiRemoveSystemWorkPriorityKick((__int64)v24);
        }
      }
      __writecr8(v9);
      goto LABEL_117;
    }
    v27 = *(_QWORD *)(v8 + 16);
    v28 = *(_QWORD *)(v8 + 8) | 0x8000000000000000uLL;
    v85 = *(_QWORD *)(v8 + 40) & 0xFFFFFFFFFFLL;
    v87 = 48 * v85 - 0x220000000000LL;
    MiLockNestedPageAtDpcInline(v87);
    MiAddLockedPageCharge(v87, 1);
    _InterlockedAnd64((volatile signed __int64 *)(v87 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      v29 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v29 <= 0xFu && (unsigned __int8)v9 <= 0xFu && v29 >= 2u )
      {
        v30 = KeGetCurrentPrcb();
        v31 = v30->SchedulerAssist;
        v32 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
        v14 = (v32 & v31[5]) == 0;
        v31[5] &= v32;
        if ( v14 )
          KiRemoveSystemWorkPriorityKick((__int64)v30);
      }
    }
    __writecr8(v9);
    if ( *(__int64 *)(v8 + 40) < 0
      && (!(unsigned int)MiGetPageFileSectionForReservation(v28, &v92, 0LL)
       || (v33 = *(_QWORD *)(v8 + 24) >> 62, v82 = 1, (v33 & 1) != 0))
      || (v34 = (__int64 *)MiReservePtes((__int64)&qword_140C695C0, 1u), v91 = v34, (v35 = (unsigned __int64)v34) == 0) )
    {
      v62 = Src;
LABEL_99:
      v64 = v87;
      v65 = (unsigned __int8)MiLockPageInline(v87);
      MiRemoveLockedPageChargeAndDecRef(v64);
      _InterlockedAnd64((volatile signed __int64 *)(v64 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        v67 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v67 <= 0xFu && (unsigned __int8)v65 <= 0xFu && v67 >= 2u )
        {
          v68 = KeGetCurrentPrcb();
          v69 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v65 + 1));
          v70 = v68->SchedulerAssist;
          v14 = (v69 & v70[5]) == 0;
          v66 = (unsigned int)v69 & v70[5];
          v70[5] = v66;
          if ( v14 )
            KiRemoveSystemWorkPriorityKick((__int64)v68);
        }
      }
      __writecr8(v65);
      if ( v82 )
        MiReleasePageFileSectionInfo(&v92, v66);
      goto LABEL_118;
    }
    ValidPte = MiMakeValidPte((unsigned __int64)v34, v85, 536870913);
    v37 = 0;
    if ( MiPteInShadowRange(v35) )
    {
      if ( MiPteHasShadow() )
      {
        v37 = 1;
        if ( !HIBYTE(word_140C6697C) )
        {
LABEL_51:
          if ( (ValidPte & 1) != 0 )
            ValidPte |= 0x8000000000000000uLL;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        goto LABEL_51;
      }
    }
    *(_QWORD *)v35 = ValidPte;
    if ( v37 )
      MiWritePteShadow(v35, ValidPte, v38);
    v39 = (v28 >> 3) & 0x1FF;
    v40 = 8 * v39;
    v41 = 8 * v39 + ((__int64)(v35 << 25) >> 16);
    v85 = v41;
    if ( v82 )
      v42 = 8 * ((*((_QWORD *)&v93 + 1) >> 3) & 0x1FFLL);
    else
      v42 = 4088LL;
    v43 = v27 & 0xFFFFFFFFFC00FC1FuLL;
    v44 = (v42 - 8 * v39) >> 3;
    updated = v43;
    v46 = v43;
    v86 = *a3;
    if ( (unsigned int)v44 >= v86 - 1 )
      LODWORD(v44) = v86 - 1;
    if ( qword_140C657C0 && (v43 & 0x10) == 0 )
      v46 = v43 & ~qword_140C657C0;
    v47 = HIDWORD(v46);
    if ( v47 + (unsigned __int64)(unsigned int)v44 >= DWORD2(v88) )
      LODWORD(v44) = DWORD2(v88) - v47 - 1;
    v48 = v84;
    v49 = v41;
    if ( (_DWORD)v44 )
    {
      do
      {
        ++v47;
        v84 = v49 + 8;
        updated = MiUpdatePageFileHighInPte(updated, v47);
        v51 = MiGetPageForWriteCluster((__int64)&v88 + 8, v50, updated, (int *)&v80, &v81);
        if ( v51 == -1LL )
          break;
        LODWORD(v44) = v44 - 1;
        ++v22;
        *++v95 = v51;
        if ( v51 == qword_140C69378 )
          ++v48;
        if ( v81 == 3 && v22 >= 0x10 )
          break;
        v49 = v84;
      }
      while ( (_DWORD)v44 );
      LOWORD(v41) = v85;
    }
    v22 -= v80;
    v52 = v48 - v80;
    v53 = v86 - v22;
    LODWORD(v84) = v52;
    if ( v82 )
      v54 = v40 - 8 * (((unsigned __int64)v93 >> 3) & 0x1FF);
    else
      v54 = v41 & 0xFFF;
    v55 = v43;
    v56 = v54 >> 3;
    if ( (unsigned int)v56 >= v53 )
      v56 = v53;
    if ( qword_140C657C0 && (v43 & 0x10) == 0 )
      v55 = v43 & ~qword_140C657C0;
    v57 = HIDWORD(v55);
    if ( (unsigned int)v56 > (unsigned __int64)(v57 - 1) )
      v56 = (unsigned int)(v57 - 1);
    if ( (_DWORD)v56 )
    {
      v58 = (unsigned __int64 *)((char *)Src + 8 * v56);
      memmove(v58, Src, 8LL * v22);
      v80 = 0;
      do
      {
        --v57;
        v85 -= 8LL;
        v43 = MiUpdatePageFileHighInPte(v43, v57);
        v60 = MiGetPageForWriteCluster((__int64)&v88 + 8, v59, v43, (int *)&v80, &v81);
        if ( v60 == -1LL )
          break;
        --v58;
        LODWORD(v56) = v56 - 1;
        ++v22;
        *v58 = v60;
        if ( v60 == qword_140C69378 )
          ++v52;
      }
      while ( (v81 != 3 || v22 < 0x10) && (_DWORD)v56 );
      v22 -= v80;
      LODWORD(v84) = v52 - v80;
      v61 = &v58[v80];
      v62 = Src;
      if ( Src != v61 )
        memmove(Src, v61, 8LL * v22);
    }
    else
    {
      v62 = Src;
    }
    v63 = *(_QWORD *)(48LL * *v62 - 0x220000000000LL + 16);
    if ( qword_140C657C0 && (v63 & 0x10) == 0 )
      v63 &= ~qword_140C657C0;
    v16 = HIDWORD(v63);
    MiReleasePtes((__int64)&qword_140C695C0, v91, 1u);
    goto LABEL_99;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    v71 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v71 <= 0xFu && (unsigned __int8)v9 <= 0xFu && v71 >= 2u )
    {
      v72 = KeGetCurrentPrcb();
      v73 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
      v74 = v72->SchedulerAssist;
      v14 = (v73 & v74[5]) == 0;
      v74[5] &= v73;
      if ( v14 )
        KiRemoveSystemWorkPriorityKick((__int64)v72);
    }
  }
  __writecr8(v9);
LABEL_116:
  v22 = 0;
  LODWORD(v16) = 0;
LABEL_117:
  v62 = Src;
LABEL_118:
  v75 = *a3;
  if ( v22 < (unsigned int)v75 && v22 && v22 + (unsigned __int64)(unsigned int)v16 < DWORD2(v88) )
  {
    if ( (unsigned __int64)(unsigned int)v16 + v75 <= DWORD2(v88) )
      v76 = *a3;
    else
      v76 = DWORD2(v88) - v16;
    v77 = a2;
    v22 += MiAddToReservationCluster(a2, (__int64)&v88 + 8, v76 - v22, (unsigned int)v16 + v22, &v62[v22], &v84);
  }
  else
  {
    v77 = a2;
  }
  v78 = (void *)MiDerefPageFileSpaceBitmaps(v77, &v88, 0LL);
  if ( v78 )
    ExFreePoolWithTag(v78, 0);
  *a3 = v22;
  *a4 = v22 - v84;
  return (unsigned int)v16;
}
