__int64 __fastcall MiGetPageChain(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned int a5,
        int a6,
        ULONG_PTR a7,
        unsigned __int64 *a8)
{
  __int64 v9; // r11
  __int64 CurrentIrql; // r10
  int v11; // ebx
  struct _KPRCB *CurrentPrcb; // rdx
  unsigned int NodeShiftedColor; // eax
  int v14; // ebp
  int v15; // eax
  unsigned __int64 v16; // rdi
  ULONG_PTR v17; // rsi
  unsigned int v18; // r15d
  __int64 v19; // r13
  unsigned __int64 v20; // r14
  signed __int32 v21; // eax
  unsigned int v22; // ebx
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // r9
  __int64 Page; // r10
  unsigned __int8 *v26; // rsi
  int v27; // edi
  int v28; // eax
  signed __int64 v29; // rdx
  volatile signed __int64 *v30; // rbx
  signed __int64 v31; // r8
  volatile signed __int64 v32; // rdx
  __int64 v33; // r9
  signed __int64 v34; // r8
  _DWORD *v35; // rcx
  struct _KPRCB *v36; // rcx
  int v37; // r8d
  __int64 v38; // r9
  volatile int DpcRequestSummary; // edx
  unsigned int DpcWatchdogCount; // ebx
  unsigned int DpcTimeCount; // esi
  _KTHREAD *NextThread; // rax
  unsigned int v44; // eax
  __int64 v45; // r9
  ULONG_PTR v46; // rcx
  unsigned __int8 *v47; // rdx
  BOOL v48; // r8d
  char v49; // di
  int v50; // eax
  unsigned __int64 v51; // rbx
  unsigned __int64 v52; // rbx
  __int64 v53; // rcx
  _QWORD *MmInternal; // rdi
  unsigned __int64 UltraMapping; // rsi
  unsigned __int64 *v56; // rdx
  _DWORD *v57; // r9
  unsigned __int8 v58; // bl
  ULONG_PTR v59; // rax
  signed __int64 v60; // rdx
  signed __int64 v61; // r8
  _DWORD *v62; // r8
  __int64 v63; // r9
  unsigned int v64; // edi
  __int64 v65; // rbp
  int v66; // r15d
  unsigned __int64 v67; // rdx
  ULONG_PTR v68; // r10
  unsigned __int64 v69; // rdi
  _DWORD *SchedulerAssist; // r10
  __int64 v71; // r8
  struct _KPRCB *v72; // rcx
  signed __int32 *v73; // r8
  signed __int32 v74; // eax
  signed __int32 v75; // ett
  unsigned __int64 Phase0Mapping; // rax
  unsigned __int64 v77; // rsi
  _QWORD *v78; // rdi
  __int64 ValidPte; // rbx
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // r8
  unsigned __int64 v83; // rbx
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // r8
  unsigned __int8 v87; // cl
  struct _KPRCB *v88; // r11
  _DWORD *v89; // r9
  int v90; // eax
  bool v91; // zf
  __int64 v92; // rdi
  ULONG_PTR v93; // rsi
  ULONG_PTR v94; // rax
  unsigned int v95; // ecx
  unsigned __int8 v96; // cl
  struct _KPRCB *v97; // r10
  int v98; // eax
  __int64 v99; // r8
  __int64 v100; // rax
  signed __int64 v101; // rcx
  signed __int64 v102; // rcx
  signed __int32 v103[8]; // [rsp+0h] [rbp-228h] BYREF
  ULONG_PTR LargePage; // [rsp+40h] [rbp-1E8h]
  unsigned int v105; // [rsp+48h] [rbp-1E0h]
  unsigned int v106; // [rsp+50h] [rbp-1D8h]
  unsigned int v107; // [rsp+54h] [rbp-1D4h]
  __int64 v108; // [rsp+58h] [rbp-1D0h]
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp-1C8h]
  unsigned int v110; // [rsp+68h] [rbp-1C0h]
  __int64 v111; // [rsp+70h] [rbp-1B8h]
  __int64 v112; // [rsp+78h] [rbp-1B0h]
  __int64 v113; // [rsp+80h] [rbp-1A8h]
  unsigned int v114; // [rsp+88h] [rbp-1A0h]
  unsigned int *p_PageColor; // [rsp+90h] [rbp-198h]
  __int64 v116; // [rsp+98h] [rbp-190h]
  __int64 v117; // [rsp+A0h] [rbp-188h]
  __int64 v118; // [rsp+A8h] [rbp-180h]
  unsigned __int64 v119; // [rsp+B0h] [rbp-178h]
  unsigned __int64 *v120; // [rsp+B8h] [rbp-170h]
  _OWORD v121[8]; // [rsp+C0h] [rbp-168h] BYREF
  __int64 v122; // [rsp+140h] [rbp-E8h]
  int v123; // [rsp+148h] [rbp-E0h]
  _QWORD v124[16]; // [rsp+150h] [rbp-D8h] BYREF

  v113 = a3;
  v120 = a8;
  v9 = a1;
  v118 = a2;
  v108 = a1;
  memset(v121, 0, sizeof(v121));
  v122 = 0LL;
  v123 = 0;
  CurrentIrql = KeGetCurrentIrql();
  v112 = CurrentIrql;
  v11 = a4 - 1;
  if ( a4 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    NodeShiftedColor = v11 << byte_140C6570D;
  }
  else
  {
    CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[KeGetCurrentThread()->IdealProcessor];
    NodeShiftedColor = CurrentPrcb->NodeShiftedColor;
  }
  v14 = (1 << byte_140C6570E) - 1;
  v110 = NodeShiftedColor;
  v106 = v14;
  if ( a2 && (*(_BYTE *)(a2 + 184) & 7u) < 2 )
    p_PageColor = (unsigned int *)a2;
  else
    p_PageColor = &CurrentPrcb->PageColor;
  if ( !a4 )
    v11 = *(_DWORD *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 33364);
  if ( a5 == 2 )
  {
    v15 = 2048;
  }
  else
  {
    v15 = 512;
    if ( !a5 )
      v15 = 1024;
  }
  v16 = *a8;
  v17 = a7;
  v119 = *a8;
  v18 = (v15 | a6) & 0xFFFFFEFF;
  v111 = 0x3FFFFFFFFFLL;
  v107 = v18;
  v19 = 0LL;
  v116 = 0LL;
  v20 = 0LL;
  v105 = 0;
  if ( a7 != -1LL )
  {
    v18 = (v15 | a6) & 0xFFFFBEFF | 0x4000;
    goto LABEL_13;
  }
  if ( v16 < 0x10 )
    goto LABEL_13;
  v65 = v113;
  LOBYTE(v17) = 17;
  *(_QWORD *)&v121[0] = 1LL;
  BugCheckParameter2 = v17;
  v66 = 1;
  DWORD2(v121[0]) = 16;
  v67 = v16;
  while ( 1 )
  {
    _InterlockedIncrement((volatile signed __int32 *)p_PageColor);
    if ( (unsigned __int8)CurrentIrql < 2u )
    {
      v17 = KeGetCurrentIrql();
      BugCheckParameter2 = v17;
      __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)v17 <= 0xFu )
        {
          SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
          if ( (_BYTE)v17 == 2 )
            LODWORD(v71) = 4;
          else
            v71 = (-1LL << ((unsigned __int8)v17 + 1)) & 4;
          SchedulerAssist[5] |= v71;
        }
      }
    }
    if ( v67 < 0x200 || v66 != 1 )
      goto LABEL_80;
    LargePage = MiGetLargePage(v9, v65, 1, v11, a5, 4, (__int64)v121);
    LODWORD(v68) = LargePage;
    if ( !LargePage )
    {
      LODWORD(v9) = v108;
LABEL_80:
      v66 = 2;
      LargePage = MiGetLargePage(v9, v65, 2, v11, a5, 4, (__int64)v121);
      v68 = LargePage;
      if ( !LargePage )
        goto LABEL_82;
    }
    MiConvertEntireLargePageToSmall(v68, v66, 2, 1, 0LL, 0LL, 0LL);
    v68 = LargePage;
LABEL_82:
    if ( (unsigned __int8)v112 < 2u )
    {
      if ( KiIrqlFlags )
      {
        v87 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v87 <= 0xFu && (unsigned __int8)v17 <= 0xFu && v87 >= 2u )
        {
          v88 = KeGetCurrentPrcb();
          v89 = v88->SchedulerAssist;
          v90 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v17 + 1));
          v91 = (v90 & v89[5]) == 0;
          v89[5] &= v90;
          if ( v91 )
          {
            KiRemoveSystemWorkPriorityKick(v88);
            v68 = LargePage;
          }
        }
      }
      __writecr8((unsigned __int8)v17);
    }
    if ( !v68 )
      break;
    v65 += MiLargePageSizes[v66] << 12;
    v69 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v68 + 0x220000000000LL) >> 4);
    MiSetPfnBlink(
      48 * (MiLargePageSizes[v66] - 0x5555555555555555LL * ((__int64)(v68 + 0x220000000000LL) >> 4)) - 0x220000000030LL,
      v111,
      0LL);
    v20 += MiLargePageSizes[v66];
    v19 = LargePage;
    LOBYTE(v17) = BugCheckParameter2;
    LODWORD(v9) = v108;
    v111 = v69;
    v16 = v119;
    v67 = v119 - v20;
    if ( v119 - v20 < 0x10 )
      break;
    LOBYTE(CurrentIrql) = v112;
  }
  v14 = v106;
  v18 = v107;
  if ( DWORD1(v121[0]) )
    MiNotifyPageHeat(v121);
  if ( (unsigned __int8)v112 >= 2u && v20 && ((unsigned int)MiWorkingSetIsContended(v118) || KeShouldYieldProcessor()) )
  {
    *v120 = v20;
    return v19;
  }
  v17 = -1LL;
  v9 = v108;
LABEL_13:
  if ( v20 >= v16 )
    goto LABEL_35;
  while ( 2 )
  {
    v21 = v14 & _InterlockedExchangeAdd((volatile signed __int32 *)p_PageColor, 1u);
    v22 = v21 | v110;
    if ( v17 == -1LL )
    {
LABEL_15:
      LargePage = MiGetPage(v9, v22, v18);
      Page = LargePage;
      if ( LargePage == -1LL )
        break;
    }
    else
    {
      v92 = 15LL;
      if ( (unsigned int)dword_140C65778 < 0xFuLL )
        v92 = (unsigned int)dword_140C65778;
      v93 = v92 & v17;
      v22 = v93 | v22 & 0xFFFFFFF0;
      Page = MiGetPage(v9, v22, v18);
      LargePage = Page;
      v94 = v93 + 1;
      if ( Page == -1 )
      {
        v9 = v108;
        v18 &= ~0x4000u;
        v17 = (unsigned int)v94 & (unsigned int)v92;
        a7 = v17;
        goto LABEL_15;
      }
      v17 = v92 & v94;
      a7 = v92 & v94;
    }
    if ( v17 != -1LL )
      v18 |= 0x4000u;
    v19 = 48 * Page - 0x220000000000LL;
    v26 = (unsigned __int8 *)(v19 + 34);
    v27 = *(unsigned __int8 *)(v19 + 34) >> 6;
    v106 = v27;
    if ( v27 != a5 )
    {
      v23 = (unsigned __int8)(1 << v27);
      LODWORD(v23) = v23 | (1 << a5);
      if ( ((unsigned __int8)v23 & (unsigned __int8)byte_140C65818) != 0 )
      {
        v95 = v105;
        v124[v105] = Page;
        v105 = v95 + 1;
        if ( v95 == 15 )
        {
          MiPerformFinalZeroing(v124, 16LL, a5);
          Page = LargePage;
          v105 = 0;
        }
        v30 = (volatile signed __int64 *)(v19 + 24);
        goto LABEL_23;
      }
    }
    if ( (*(_DWORD *)(v19 + 16) & 0x3E0LL) == 0 || (a6 & 0x100) == 0 )
      goto LABEL_20;
    v44 = *(_DWORD *)(qword_140C65720
                    + 376LL * *(unsigned int *)(MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * ((48 * Page) >> 4)) + 8)
                    + 4 * ((int)a5 + 4 * ((unsigned __int64)*v26 >> 6))
                    + 112);
    v114 = v44;
    if ( v44 != v27 )
      MiChangePageAttribute(v19, v44, 0LL, v45);
    v46 = LargePage;
    v47 = (unsigned __int8 *)(v19 + 34);
    BugCheckParameter2 = LargePage;
    v113 = v19 + 34;
    v48 = KeGetCurrentPrcb()->MmInternal != 0LL;
    v107 = v48;
    while ( 2 )
    {
      if ( !v48 )
      {
        Phase0Mapping = MxGetPhase0Mapping();
        v77 = Phase0Mapping;
        if ( !Phase0Mapping )
          KeBugCheckEx(0x1Au, 0x3030305uLL, BugCheckParameter2, 0LL, 0LL);
        v78 = (_QWORD *)(((Phase0Mapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        ValidPte = MiMakeValidPte(v78, BugCheckParameter2, 2684354564LL);
        if ( (unsigned int)MiPteInShadowRange(v78) )
        {
          if ( (unsigned int)MiPteHasShadow(v81, v80, v82) )
          {
            if ( !HIBYTE(word_140C6697C) && (ValidPte & 1) != 0 )
              ValidPte |= 0x8000000000000000uLL;
            *v78 = ValidPte;
            MiWritePteShadow(v78, ValidPte);
LABEL_115:
            KeZeroPages(v77, 4096LL);
            v83 = ZeroPte;
            if ( (unsigned int)MiPteInShadowRange(v78) )
            {
              if ( (unsigned int)MiPteHasShadow(v85, v84, v86) )
              {
                if ( !HIBYTE(word_140C6697C) && (ZeroPte & 1) != 0 )
                  v83 = ZeroPte | 0x8000000000000000uLL;
                *v78 = v83;
                MiWritePteShadow(v78, v83);
                goto LABEL_117;
              }
              if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
                && (ZeroPte & 1) != 0 )
              {
                v83 = ZeroPte | 0x8000000000000000uLL;
              }
            }
            *v78 = v83;
LABEL_117:
            KeFlushSingleTb(v77, 0, 1u);
            goto LABEL_53;
          }
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
            && (ValidPte & 1) != 0 )
          {
            ValidPte |= 0x8000000000000000uLL;
          }
        }
        *v78 = ValidPte;
        goto LABEL_115;
      }
      v49 = 4;
      v50 = *v47 >> 6;
      if ( !v50 || v50 == 3 )
      {
        v49 = 12;
      }
      else if ( v50 == 2 )
      {
        v49 = 28;
      }
      v51 = ((v46 & 0xFFFFFFFFFFLL) << 12) | MmProtectToPteMask[v49 & 0x1F] & 0xFFF0000000000E7FuLL | 0x121;
      v52 = ((((unsigned __int16)v51 | 0x42) ^ (unsigned __int16)((unsigned __int8)word_140C6697C << 8)) & 0x100 ^ (v51 | 0x42)) & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
      v53 = KeGetCurrentIrql();
      v117 = v53;
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)v53 <= 0xFu )
      {
        v62 = KeGetCurrentPrcb()->SchedulerAssist;
        if ( (_BYTE)v53 == 2 )
          LODWORD(v63) = 4;
        else
          v63 = (-1LL << ((unsigned __int8)v53 + 1)) & 4;
        v62[5] |= v63;
      }
      MmInternal = KeGetCurrentPrcb()->MmInternal;
      UltraMapping = MiGetUltraMapping(MmInternal + 1556, 3LL, 1LL);
      v56 = (unsigned __int64 *)(((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      MmInternal[1543] = v56;
      *v56 = v52;
      KeZeroPages(UltraMapping, 4096LL);
      v58 = v117;
      *((_QWORD *)KeGetCurrentPrcb()->MmInternal + 1543) = 0LL;
      *(_QWORD *)(((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = ZeroPte;
      if ( v58 != 17 )
      {
        if ( KiIrqlFlags )
        {
          v96 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v96 <= 0xFu && v58 <= 0xFu && v96 >= 2u )
          {
            v97 = KeGetCurrentPrcb();
            v57 = v97->SchedulerAssist;
            v98 = ~(unsigned __int16)(-1LL << (v58 + 1));
            v91 = (v98 & v57[5]) == 0;
            v57[5] &= v98;
            if ( v91 )
              KiRemoveSystemWorkPriorityKick(v97);
          }
        }
        __writecr8(v58);
      }
LABEL_53:
      v46 = BugCheckParameter2 + 1;
      Page = LargePage;
      v47 = (unsigned __int8 *)(v113 + 48);
      v48 = v107;
      v59 = ++BugCheckParameter2 - LargePage;
      v113 += 48LL;
      if ( !v59 )
        continue;
      break;
    }
    if ( v114 != v106 && v114 != a5 )
    {
      MiChangePageAttribute(v19, v106, 0LL, v57);
      Page = LargePage;
    }
    *(_QWORD *)(v19 + 16) &= 0xFFFFFFFFFFFFFC1FuLL;
    _InterlockedOr(v103, 0);
    v60 = *(_QWORD *)(v19 + 24);
    v24 = (unsigned __int64)(KiTbFlushTimeStamp & 7) << 59;
    v23 = v24 | v60 & 0xC7FFFFFFFFFFFFFFuLL;
    v61 = _InterlockedCompareExchange64((volatile signed __int64 *)(v19 + 24), v23, v60);
    if ( v60 != v61 )
    {
      do
      {
        v23 = v61;
        v61 = _InterlockedCompareExchange64(
                (volatile signed __int64 *)(v19 + 24),
                v24 | v61 & 0xC7FFFFFFFFFFFFFFuLL,
                v61);
      }
      while ( v23 != v61 );
    }
    v26 = (unsigned __int8 *)(v19 + 34);
LABEL_20:
    v28 = *v26 >> 6;
    if ( v28 == a5 )
    {
LABEL_21:
      v29 = *(_QWORD *)(v19 + 24);
      v30 = (volatile signed __int64 *)(v19 + 24);
      v31 = _InterlockedCompareExchange64((volatile signed __int64 *)(v19 + 24), v29 & 0xC7FFFFFFFFFFFFFFuLL, v29);
      if ( v29 != v31 )
      {
        do
        {
          v101 = v31;
          v31 = _InterlockedCompareExchange64(v30, v31 & 0xC7FFFFFFFFFFFFFFuLL, v31);
        }
        while ( v101 != v31 );
      }
      goto LABEL_22;
    }
    if ( v28 != 1 )
    {
      if ( v28 == 3 )
      {
        v99 = 0LL;
      }
      else
      {
        v30 = (volatile signed __int64 *)(v19 + 24);
        v100 = (*(_QWORD *)(v19 + 24) >> 59) & 7LL;
        if ( ((*(_QWORD *)(v19 + 24) >> 59) & 7) == 0 )
          goto LABEL_129;
        _InterlockedOr(v103, 0);
        if ( (unsigned __int8)MiTbFlushTimeStampMayNeedFlush((unsigned int)v100, (unsigned int)KiTbFlushTimeStamp, 7LL) )
          goto LABEL_129;
        v99 = 4LL;
      }
      MiChangePageAttribute(v19, a5, v99, v24);
      goto LABEL_21;
    }
    v30 = (volatile signed __int64 *)(v19 + 24);
LABEL_129:
    if ( (*(_DWORD *)(v19 + 16) & 0x3E0LL) != 0 )
      MiZeroPhysicalPage(v23, Page, 0LL, a5);
    *(_QWORD *)(v19 + 16) = v116;
    v116 = v19;
LABEL_22:
    Page = LargePage;
LABEL_23:
    v32 = *v30;
    v33 = v111 & 0xFFFFFFFFFFLL;
    v34 = _InterlockedCompareExchange64(v30, v111 & 0xFFFFFFFFFFLL | *v30 & 0xFFFFFF0000000000uLL, *v30);
    if ( v32 != v34 )
    {
      do
      {
        v102 = v34;
        v34 = _InterlockedCompareExchange64(v30, v33 | v34 & 0xFFFFFF0000000000uLL, v34);
      }
      while ( v102 != v34 );
    }
    ++v20;
    v111 = Page;
    if ( (unsigned __int8)v112 < 2u )
      goto LABEL_34;
    if ( (*(_BYTE *)(v118 + 184) & 7) == 2 )
      v35 = &unk_140C69E00;
    else
      v35 = (_DWORD *)(v118 + 192);
    if ( (*v35 & 0x40000000) != 0 )
      break;
    v36 = KeGetCurrentPrcb();
    v37 = 0;
    v38 = 0LL;
    DpcRequestSummary = v36->DpcRequestSummary;
    DpcWatchdogCount = v36->DpcWatchdogCount;
    DpcTimeCount = v36->DpcTimeCount;
    if ( (DpcRequestSummary & 1) != 0 )
    {
      v37 = 1;
      if ( DpcTimeCount <= 7 )
        goto LABEL_33;
      if ( v36->QuantumEnd )
      {
        v64 = 1;
        goto LABEL_66;
      }
      goto LABEL_186;
    }
    if ( v36->NestingLevel )
    {
      v38 = 1LL;
      if ( DpcWatchdogCount <= 7 )
        goto LABEL_34;
      if ( v36->QuantumEnd )
      {
        v64 = 7;
        goto LABEL_66;
      }
LABEL_186:
      if ( (DpcRequestSummary & 0x1E) != 0 )
      {
        v64 = 5;
        goto LABEL_66;
      }
      if ( v36->CurrentThread != v36->IdleThread )
      {
        v64 = 6;
        goto LABEL_66;
      }
LABEL_101:
      _disable();
      v36->DpcWatchdogCount = 0;
      v36->DpcTimeCount = 0;
      v72 = KeGetCurrentPrcb();
      v73 = (signed __int32 *)v72->SchedulerAssist;
      if ( v73 )
      {
        _m_prefetchw(v73);
        v74 = *v73;
        do
        {
          v75 = v74;
          v74 = _InterlockedCompareExchange(v73, v74 & 0xFFDFFFFF, v74);
        }
        while ( v75 != v74 );
        if ( (v74 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(v72);
      }
      _enable();
      v64 = 0;
LABEL_66:
      if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
        EtwTraceShouldYieldProcessor(v64, DpcWatchdogCount, DpcTimeCount, v38);
      if ( !v64 )
        goto LABEL_34;
      break;
    }
    if ( (DpcRequestSummary & 0x1E) != 0 )
    {
      v64 = 2;
      goto LABEL_66;
    }
    if ( v36->QuantumEnd )
    {
      v64 = 3;
      goto LABEL_66;
    }
    NextThread = v36->NextThread;
    if ( NextThread && NextThread != v36->CurrentThread )
    {
      v64 = 4;
      goto LABEL_66;
    }
LABEL_33:
    if ( DpcWatchdogCount > 7 )
    {
      if ( !v37 )
        goto LABEL_101;
      goto LABEL_186;
    }
LABEL_34:
    if ( v20 < v119 )
    {
      v17 = a7;
      v9 = v108;
      continue;
    }
    break;
  }
LABEL_35:
  *v120 = v20;
  if ( v105 )
    MiPerformFinalZeroing(v124, v105, a5);
  if ( v116 )
    MiChangePageAttributeBatch(v116, a5, ZeroPte);
  return v19;
}
