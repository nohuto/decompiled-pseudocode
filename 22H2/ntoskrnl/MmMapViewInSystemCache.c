/*
 * XREFs of MmMapViewInSystemCache @ 0x140291460
 * Callers:
 *     CcGetVacbMiss @ 0x140291040 (CcGetVacbMiss.c)
 * Callees:
 *     MiManageSubsectionView @ 0x140291780 (MiManageSubsectionView.c)
 *     MiGetSystemCacheReverseMap @ 0x140292630 (MiGetSystemCacheReverseMap.c)
 *     MiObtainSystemCacheView @ 0x140292B80 (MiObtainSystemCacheView.c)
 *     MiGetPteLink @ 0x140293260 (MiGetPteLink.c)
 *     MiSectionControlArea @ 0x1402958E0 (MiSectionControlArea.c)
 *     MiAddViewsForSection @ 0x140295C70 (MiAddViewsForSection.c)
 *     MiOffsetToProtos @ 0x1402A11E0 (MiOffsetToProtos.c)
 *     MiInsertTbFlushEntry @ 0x1402B6400 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x1402BBBB0 (MiFlushTbList.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiCompareTbFlushTimeStamp @ 0x140307B3C (MiCompareTbFlushTimeStamp.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     memset @ 0x140413800 (memset.c)
 *     MiRemoveSystemCacheReferences @ 0x140537390 (MiRemoveSystemCacheReferences.c)
 */

__int64 __fastcall MmMapViewInSystemCache(__int64 a1, __int64 *a2, unsigned __int64 *a3, _DWORD *a4)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  ULONG_PTR v10; // rax
  ULONG_PTR v11; // r12
  BOOL v12; // edx
  int v13; // ecx
  __int64 v14; // r15
  ULONG_PTR v15; // rbp
  __int64 result; // rax
  __int64 v17; // rcx
  _WORD *v18; // r13
  __int64 v19; // rax
  __int64 v20; // rdx
  unsigned __int64 v21; // rdi
  unsigned __int64 v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned __int64 v27; // rbx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  unsigned __int64 v32; // rbx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  unsigned __int64 v37; // rbx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rcx
  unsigned __int64 v43; // rsi
  __int64 v44; // rax
  unsigned __int64 v45; // rbp
  unsigned __int64 v46; // r14
  _QWORD *SystemCacheReverseMap; // r9
  unsigned __int64 v48; // rdx
  unsigned __int64 v49; // rcx
  __int64 v50; // rdx
  ULONG_PTR v51; // r15
  __int64 v52; // rbx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rax
  __int64 PteLink; // rax
  signed __int32 v58[8]; // [rsp+0h] [rbp-178h] BYREF
  __int64 v59; // [rsp+30h] [rbp-148h] BYREF
  _QWORD *v60; // [rsp+38h] [rbp-140h]
  __int64 *v61; // [rsp+40h] [rbp-138h]
  unsigned __int64 *v62; // [rsp+48h] [rbp-130h]
  ULONG_PTR v63; // [rsp+50h] [rbp-128h]
  _QWORD v64[24]; // [rsp+60h] [rbp-118h] BYREF

  v62 = a3;
  v61 = a2;
  v59 = 0LL;
  memset(v64, 0, 0xB8uLL);
  if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
    return 3221225608LL;
  v10 = MiSectionControlArea(a1, v8, v9);
  v11 = v10;
  v12 = (*a4 & 0xFFF) != 0;
  v13 = *a4 >> 12;
  v14 = (unsigned int)(v12 + v13);
  if ( !(v12 + v13) )
    KeBugCheckEx(0x1Au, 0x103087uLL, v10, 0LL, 0LL);
  v63 = MiOffsetToProtos(v10, *a3, &v59);
  v15 = v63;
  result = MiAddViewsForSection(v63);
  if ( (int)result < 0 )
  {
    ++dword_140C4F820;
    return result;
  }
  v17 = *(_WORD *)(v11 + 60) & 0x3FF;
  v18 = *(_WORD **)(qword_140C4E648 + 8 * v17);
  if ( *a2 )
  {
    v21 = (((unsigned __int64)*a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    if ( MiGetPteLink(*(_QWORD *)(v21 + 24)) == 2 )
    {
      PteLink = MiGetPteLink(*(_QWORD *)(v21 + 16));
      if ( (unsigned __int8)MiCompareTbFlushTimeStamp(PteLink, 0xFFFFFLL) )
      {
        LODWORD(v64[1]) = 20;
        v64[3] = 0LL;
        MiInsertTbFlushEntry(v64, (__int64)(v21 << 25) >> 16, 64LL, 0LL);
        MiFlushTbList(v64);
      }
    }
  }
  else
  {
    v19 = MiObtainSystemCacheView(*(_QWORD *)(qword_140C4E648 + 8 * v17));
    v21 = v19;
    if ( !v19 )
    {
      ++dword_140C4F820;
      MiRemoveSystemCacheReferences(v15);
      return 3221225495LL;
    }
    *a2 = v19 << 25 >> 16;
  }
  v22 = ZeroPte;
  if ( !(unsigned int)MiPteInShadowRange(v21, v20) )
    goto LABEL_8;
  if ( !(unsigned int)MiPteHasShadow(v24, v23, v25, v26) )
  {
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
      && (ZeroPte & 1) != 0 )
    {
      v22 = ZeroPte | 0x8000000000000000uLL;
    }
LABEL_8:
    *(_QWORD *)v21 = v22;
    goto LABEL_9;
  }
  if ( !HIBYTE(word_140C4E008) && (ZeroPte & 1) != 0 )
    v22 = ZeroPte | 0x8000000000000000uLL;
  *(_QWORD *)v21 = v22;
  MiWritePteShadow(v21, v22);
LABEL_9:
  v27 = ZeroPte;
  if ( !(unsigned int)MiPteInShadowRange(v21 + 8, v23) )
  {
LABEL_10:
    *(_QWORD *)(v21 + 8) = v27;
    goto LABEL_11;
  }
  if ( !(unsigned int)MiPteHasShadow(v29, v28, v30, v31) )
  {
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
      && (ZeroPte & 1) != 0 )
    {
      v27 = ZeroPte | 0x8000000000000000uLL;
    }
    goto LABEL_10;
  }
  if ( !HIBYTE(word_140C4E008) && (ZeroPte & 1) != 0 )
    v27 = ZeroPte | 0x8000000000000000uLL;
  *(_QWORD *)(v21 + 8) = v27;
  MiWritePteShadow(v21 + 8, v27);
LABEL_11:
  v32 = ZeroPte;
  if ( !(unsigned int)MiPteInShadowRange(v21 + 16, v28) )
  {
LABEL_12:
    *(_QWORD *)(v21 + 16) = v32;
    goto LABEL_13;
  }
  if ( !(unsigned int)MiPteHasShadow(v34, v33, v35, v36) )
  {
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
      && (ZeroPte & 1) != 0 )
    {
      v32 = ZeroPte | 0x8000000000000000uLL;
    }
    goto LABEL_12;
  }
  if ( !HIBYTE(word_140C4E008) && (ZeroPte & 1) != 0 )
    v32 = ZeroPte | 0x8000000000000000uLL;
  *(_QWORD *)(v21 + 16) = v32;
  MiWritePteShadow(v21 + 16, v32);
LABEL_13:
  v37 = ZeroPte;
  if ( (unsigned int)MiPteInShadowRange(v21 + 24, v33) )
  {
    if ( (unsigned int)MiPteHasShadow(v39, v38, v40, v41) )
    {
      if ( !HIBYTE(word_140C4E008) && (ZeroPte & 1) != 0 )
        v37 = ZeroPte | 0x8000000000000000uLL;
      *(_QWORD *)(v21 + 24) = v37;
      MiWritePteShadow(v21 + 24, v37);
      goto LABEL_15;
    }
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
      && (ZeroPte & 1) != 0 )
    {
      v37 = ZeroPte | 0x8000000000000000uLL;
    }
  }
  *(_QWORD *)(v21 + 24) = v37;
LABEL_15:
  v42 = *(_QWORD *)(v15 + 8);
  v43 = v42 + 8 * v59;
  v44 = *(unsigned int *)(v15 + 44);
  v45 = v21 + 8 * v14;
  v46 = v42 + 8 * v44;
  SystemCacheReverseMap = (_QWORD *)MiGetSystemCacheReverseMap(*v61);
  v48 = (unsigned __int64)(*v18 & 0x3FF) << 6;
  v60 = SystemCacheReverseMap;
  v49 = *v62;
  SystemCacheReverseMap[2] &= 0xFFFFFFFFFFFFFFFCuLL;
  v50 = v14 & 0x3F | (v49 >> 2) & 0x3FFFFFFFFFFF0000LL | v48;
  v51 = v63;
  SystemCacheReverseMap[3] = v63;
  SystemCacheReverseMap[4] = v50;
  if ( !*(_QWORD *)(v11 + 64) )
    SystemCacheReverseMap[3] = v51 | 1;
  for ( ; v21 < v45; v43 += 8LL )
  {
    if ( v43 >= v46 )
    {
      v51 = *(_QWORD *)(v51 + 16);
      v43 = *(_QWORD *)(v51 + 8);
      v56 = *(unsigned int *)(v51 + 44);
      SystemCacheReverseMap[3] |= 1uLL;
      v46 = v43 + 8 * v56;
    }
    v52 = (v43 << 16) | 0x400;
    if ( qword_140C4DF40 )
    {
      if ( (qword_140C4DF40 & v52) != 0 )
        v52 = (v43 << 16) | 0x410;
      else
        v52 |= qword_140C4DF40;
    }
    if ( (unsigned int)MiPteInShadowRange(v21, v50) )
    {
      if ( (unsigned int)MiPteHasShadow(v53, v50, v54, v55) )
      {
        if ( !HIBYTE(word_140C4E008) && (v52 & 1) != 0 )
          v52 |= 0x8000000000000000uLL;
        *(_QWORD *)v21 = v52;
        MiWritePteShadow(v21, v52);
        goto LABEL_25;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v52 & 1) != 0 )
      {
        v52 |= 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)v21 = v52;
LABEL_25:
    SystemCacheReverseMap = v60;
    v21 += 8LL;
  }
  _InterlockedOr(v58, 0);
  SystemCacheReverseMap[2] = *v61;
  MiManageSubsectionView(v51, SystemCacheReverseMap, (2 * (unsigned __int8)SystemCacheReverseMap[3]) & 2 | 1u);
  return 0LL;
}
