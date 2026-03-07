__int64 __fastcall MiGetSlabPage(__int64 a1, unsigned int a2, unsigned int a3, __int64 SchedulerAssist, __int64 *a5)
{
  __int64 *v5; // r10
  unsigned __int64 v6; // rbp
  __int64 v8; // r11
  unsigned __int64 v9; // r8
  unsigned int v10; // ebx
  unsigned int *v11; // r14
  unsigned __int64 v12; // rcx
  int v13; // edi
  __int64 SlabStandbyPage; // rsi
  __int64 v15; // r13
  _DWORD *v16; // r12
  __int64 CurrentIrql; // rdx
  __int64 v18; // rdi
  unsigned int v19; // ecx
  unsigned __int64 v20; // rsi
  signed __int32 v21; // eax
  signed __int32 v22; // ett
  int v23; // eax
  unsigned int v24; // eax
  __int64 v25; // rbx
  unsigned int v27; // edx
  __int64 v28; // rcx
  __int64 v29; // rax
  unsigned __int64 j; // rdi
  _QWORD **v31; // rax
  unsigned __int64 v32; // rcx
  _QWORD *i; // rax
  unsigned int v34; // ecx
  unsigned int *v35; // r14
  unsigned int v36; // ebp
  unsigned int v37; // r15d
  __int64 v38; // rsi
  unsigned int v39; // r10d
  unsigned int v40; // eax
  int v41; // r11d
  __int64 v42; // rcx
  __int64 v43; // rsi
  unsigned int v44; // ecx
  __int64 *v45; // r14
  __int64 v46; // rax
  unsigned int v47; // r14d
  unsigned int v48; // eax
  int v49; // eax
  unsigned int v50; // r13d
  unsigned int v51; // ebp
  __int64 v52; // r15
  unsigned int v53; // eax
  int v54; // r11d
  __int64 v55; // rcx
  __int64 v56; // r15
  unsigned int v57; // ecx
  __int64 *v58; // rsi
  __int64 v59; // rdx
  unsigned __int64 v60; // rax
  unsigned int v61; // esi
  unsigned int v62; // eax
  __int64 v63; // rdx
  int v64; // r11d
  signed __int32 v65; // eax
  int v66; // r10d
  signed __int32 v67; // ett
  signed __int32 v68; // eax
  int v69; // r10d
  signed __int32 v70; // ett
  unsigned int v71; // edx
  volatile signed __int32 *v72; // r9
  unsigned int v73; // eax
  unsigned __int64 v74; // rax
  unsigned __int64 v75; // rax
  unsigned __int8 v76; // cl
  struct _KPRCB *CurrentPrcb; // r10
  int v78; // eax
  bool v79; // zf
  unsigned __int64 v80; // rbp
  unsigned __int8 v81; // al
  struct _KPRCB *v82; // r10
  int v83; // eax
  signed __int32 v84; // [rsp+20h] [rbp-68h]
  signed __int32 v85; // [rsp+20h] [rbp-68h]
  signed __int32 v86; // [rsp+24h] [rbp-64h]
  __int64 v87; // [rsp+30h] [rbp-58h]
  __int64 v88; // [rsp+38h] [rbp-50h]
  unsigned int *v89; // [rsp+40h] [rbp-48h]
  unsigned __int64 v90; // [rsp+48h] [rbp-40h]
  void *retaddr; // [rsp+88h] [rbp+0h]
  unsigned int v94; // [rsp+A8h] [rbp+20h]

  v94 = SchedulerAssist;
  v5 = a5;
  v6 = 0LL;
  v8 = a1;
  v9 = (int)a2;
  if ( (unsigned __int64)a5 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
    *a5 = 0LL;
  if ( a2 > 3 && *(_BYTE *)((int)a2 + a1 + 16200) && (SchedulerAssist & 4) == 0 )
    return -1LL;
  v10 = a3 >> byte_140C6570D;
  while ( 1 )
  {
    v11 = (unsigned int *)(qword_140C65718 + 4LL * v10 * (unsigned __int16)KeNumberNodes);
    v89 = v11;
    v12 = (unsigned __int64)((SchedulerAssist & 1) != 0 ? v11 + 1 : &v11[(unsigned __int16)KeNumberNodes]);
    v90 = v12;
    v13 = SchedulerAssist & 2;
    SlabStandbyPage = -1LL;
LABEL_9:
    if ( (unsigned __int64)v11 < v12 )
      break;
    if ( !v13 )
      goto LABEL_88;
    SchedulerAssist = (unsigned int)SchedulerAssist & 0xFFFFFFFD;
    v94 = SchedulerAssist;
  }
  v15 = 264LL * (int)v9 + 23392 + 25408LL * *v11 + *(_QWORD *)(v8 + 16);
  v88 = v15;
  if ( !(*(_QWORD *)(v15 + 112) + *(_QWORD *)(v15 + 48)) )
  {
    SlabStandbyPage = -1LL;
    goto LABEL_81;
  }
  v16 = (_DWORD *)(v15 + 16);
  CurrentIrql = KeGetCurrentIrql();
  v87 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
  {
    SchedulerAssist = (__int64)KeGetCurrentPrcb()->SchedulerAssist;
    if ( (_BYTE)CurrentIrql == 2 )
      LODWORD(v63) = 4;
    else
      v63 = (-1LL << ((unsigned __int8)CurrentIrql + 1)) & 4;
    v9 = (unsigned int)v63 | *(_DWORD *)(SchedulerAssist + 20);
    CurrentIrql = v87;
    *(_DWORD *)(SchedulerAssist + 20) = v9;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v15 + 16, CurrentIrql);
  }
  else
  {
    _m_prefetchw(v16);
    v84 = *v16 & 0x7FFFFFFF;
    v86 = _InterlockedCompareExchange(v16, v84 + 1, v84);
    if ( v86 != v84 )
    {
      while ( v86 >= 0 )
      {
        v85 = v86;
        v86 = _InterlockedCompareExchange(v16, v86 + 1, v86);
        if ( v86 == v85 )
          goto LABEL_14;
      }
      ExpWaitForSpinLockSharedAndAcquire(v15 + 16, CurrentIrql);
    }
  }
LABEL_14:
  v18 = *(_QWORD *)(v15 + 32);
  if ( !v18 )
    goto LABEL_42;
  if ( !*(_DWORD *)(v18 + 132) )
    goto LABEL_41;
  v19 = *(_DWORD *)(v18 + 128);
  v20 = 0LL;
  if ( v19 < 0x200 )
    v20 = v19;
  if ( _bittest64(*(const signed __int64 **)(v18 + 56), v20) )
    goto LABEL_64;
  v9 = v20 & 0x1F;
  SchedulerAssist = 1LL;
  CurrentIrql = (*(_QWORD *)(v18 + 56) + ((unsigned __int64)(unsigned int)v20 >> 3)) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v9 + 1 <= 0x20 )
  {
    v21 = *(_DWORD *)CurrentIrql;
    v9 = (unsigned int)(1 << v9);
    if ( (*(_DWORD *)CurrentIrql & (unsigned int)v9) == 0 )
    {
      do
      {
        v22 = v21;
        v21 = _InterlockedCompareExchange((volatile signed __int32 *)CurrentIrql, v9 | v21, v21);
        if ( v22 == v21 )
          goto LABEL_22;
      }
      while ( (v21 & (unsigned int)v9) == 0 );
    }
    goto LABEL_64;
  }
  v64 = 32 - (v20 & 0x1F);
  if ( (v20 & 0x1F) == 0 )
    goto LABEL_151;
  v65 = *(_DWORD *)CurrentIrql;
  v66 = ((1 << v64) - 1) << v9;
  if ( (*(_DWORD *)CurrentIrql & v66) == 0 )
  {
    while ( 1 )
    {
      v67 = v65;
      v65 = _InterlockedCompareExchange((volatile signed __int32 *)CurrentIrql, v66 | v65, v65);
      if ( v67 == v65 )
        break;
      if ( (v65 & v66) != 0 )
        goto LABEL_64;
    }
    SchedulerAssist = (unsigned int)(1 - v64);
    CurrentIrql += 4LL;
    if ( (unsigned int)SchedulerAssist >= 0x20 )
    {
      while ( !_InterlockedCompareExchange((volatile signed __int32 *)CurrentIrql, -1, 0) )
      {
        CurrentIrql += 4LL;
        SchedulerAssist = (unsigned int)(SchedulerAssist - 32);
        if ( (unsigned int)SchedulerAssist < 0x20 )
          goto LABEL_150;
      }
      v71 = 1 - SchedulerAssist;
      v72 = (volatile signed __int32 *)(*(_QWORD *)(v18 + 56) + 4 * (v20 >> 5));
      if ( v9 + v71 <= 0x20 )
      {
        if ( v71 == 32 )
        {
          CurrentIrql = 0LL;
          *v72 = 0;
          goto LABEL_65;
        }
LABEL_160:
        v73 = ~(((1 << v71) - 1) << v9);
LABEL_173:
        _InterlockedAnd(v72, v73);
        goto LABEL_64;
      }
      _InterlockedAnd(v72, ~v66);
      v71 -= v64;
      ++v72;
      if ( v71 >= 0x20 )
      {
        v74 = (unsigned __int64)v71 >> 5;
        do
        {
          *v72 = 0;
          v71 -= 32;
          ++v72;
          --v74;
        }
        while ( v74 );
      }
      if ( !v71 )
        goto LABEL_64;
      goto LABEL_172;
    }
LABEL_150:
    if ( !(_DWORD)SchedulerAssist )
      goto LABEL_78;
LABEL_151:
    v68 = *(_DWORD *)CurrentIrql;
    v69 = (1 << SchedulerAssist) - 1;
    if ( (*(_DWORD *)CurrentIrql & v69) == 0 )
    {
      do
      {
        v70 = v68;
        v68 = _InterlockedCompareExchange((volatile signed __int32 *)CurrentIrql, v69 | v68, v68);
        if ( v70 == v68 )
          goto LABEL_78;
      }
      while ( (v68 & v69) == 0 );
    }
    v71 = 1 - SchedulerAssist;
    v72 = (volatile signed __int32 *)(*(_QWORD *)(v18 + 56) + 4 * (v20 >> 5));
    if ( v9 + v71 <= 0x20 )
    {
      if ( v71 == 32 )
      {
        CurrentIrql = 0LL;
        *v72 = 0;
        goto LABEL_65;
      }
      goto LABEL_160;
    }
    if ( (v20 & 0x1F) != 0 )
    {
      _InterlockedAnd(v72, ~(((1 << v64) - 1) << v9));
      v71 -= v64;
      ++v72;
    }
    if ( v71 >= 0x20 )
    {
      v75 = (unsigned __int64)v71 >> 5;
      do
      {
        *v72 = 0;
        v71 -= 32;
        ++v72;
        --v75;
      }
      while ( v75 );
    }
    if ( !v71 )
      goto LABEL_64;
LABEL_172:
    v73 = -1 << v71;
    goto LABEL_173;
  }
LABEL_64:
  while ( 2 )
  {
    CurrentIrql = 0LL;
LABEL_65:
    v36 = *(_DWORD *)(v18 + 48);
    v37 = v20 + 1;
    v38 = *(_QWORD *)(v18 + 56);
    v39 = v37;
    if ( v37 >= v36 )
      v39 = 0;
    v40 = v36 - 1;
    if ( (v38 & 4) != 0 )
    {
      v42 = 4LL;
      v41 = 32;
    }
    else
    {
      v41 = 0;
      v42 = 0LL;
    }
    v43 = v38 - v42;
    while ( 1 )
    {
      SchedulerAssist = v41 + v40;
      v44 = v41 + v39;
      if ( v40 - v39 != -1 )
        break;
      v47 = -1;
LABEL_96:
      if ( !v39 )
        goto LABEL_75;
      v48 = v37 + 1;
      if ( v37 + 1 > v36 )
        v48 = *(_DWORD *)(v18 + 48);
      v40 = v48 - 1;
      v39 = 0;
    }
    CurrentIrql = (1LL << (v44 & 0x3F)) - 1;
    v45 = (__int64 *)(v43 + 8 * ((unsigned __int64)v44 >> 6));
    v9 = v43 + 8 * ((unsigned __int64)(unsigned int)SchedulerAssist >> 6);
    v46 = CurrentIrql | *v45;
    if ( v46 == -1 )
    {
      do
      {
        if ( (unsigned __int64)++v45 > v9 )
          goto LABEL_94;
        v46 = *v45;
      }
      while ( *v45 == -1 );
    }
    _BitScanForward64((unsigned __int64 *)&v46, ~v46);
    v47 = v46 + ((unsigned int)(((__int64)v45 - v43) >> 3) << 6);
    if ( v47 > (unsigned int)SchedulerAssist )
    {
LABEL_94:
      v47 = -1;
      goto LABEL_95;
    }
    if ( v47 == -1 )
    {
LABEL_95:
      CurrentIrql = 0LL;
      goto LABEL_96;
    }
    v47 -= v41;
LABEL_75:
    v20 = v47;
    if ( v47 == -1 )
    {
      v6 = 0LL;
    }
    else
    {
      if ( !(unsigned int)RtlInterlockedSetClearRun(v18 + 48, v47, 1LL) )
      {
        LODWORD(v20) = v47;
        continue;
      }
      v16 = (_DWORD *)(v15 + 16);
LABEL_78:
      v6 = 0LL;
LABEL_22:
      _InterlockedDecrement((volatile signed __int32 *)(v18 + 132));
      v23 = v20 + 1;
      _InterlockedDecrement((volatile signed __int32 *)(v15 + 48));
      SlabStandbyPage = *(_QWORD *)(v18 + 24) + v20;
      *(_DWORD *)(v18 + 128) = v23;
      if ( SlabStandbyPage != -1 )
        goto LABEL_23;
    }
    break;
  }
LABEL_41:
  *(_QWORD *)(v15 + 32) = 0LL;
  v16 = (_DWORD *)(v15 + 16);
LABEL_42:
  v29 = *(_QWORD *)(v15 + 8);
  if ( (v29 & 1) != 0 )
  {
    if ( v29 == 1 )
      j = 0LL;
    else
      j = v29 ^ (v15 | 1);
  }
  else
  {
    j = *(_QWORD *)(v15 + 8);
  }
LABEL_44:
  if ( !j )
  {
    SlabStandbyPage = -1LL;
    goto LABEL_23;
  }
  if ( !*(_DWORD *)(j + 132) )
    goto LABEL_46;
  v34 = *(_DWORD *)(j + 128);
  v35 = (unsigned int *)(j + 48);
  if ( v34 < 0x200 )
    v6 = v34;
  if ( _bittest64(*(const signed __int64 **)(j + 56), v6)
    || !(unsigned int)RtlInterlockedSetClearRun(j + 48, (unsigned int)v6, 1LL) )
  {
    while ( 2 )
    {
      v50 = v6 + 1;
      CurrentIrql = 0LL;
      v51 = *v35;
      SchedulerAssist = v50;
      v52 = *(_QWORD *)(j + 56);
      if ( v50 >= *v35 )
        SchedulerAssist = 0LL;
      v53 = v51 - 1;
      if ( (v52 & 4) != 0 )
      {
        v55 = 4LL;
        v54 = 32;
      }
      else
      {
        v54 = 0;
        v55 = 0LL;
      }
      v56 = v52 - v55;
      while ( 1 )
      {
        v9 = v54 + v53;
        v57 = v54 + SchedulerAssist;
        if ( v53 - (_DWORD)SchedulerAssist != -1 )
          break;
        v61 = -1;
LABEL_125:
        if ( !(_DWORD)SchedulerAssist )
          goto LABEL_117;
        v62 = v50 + 1;
        if ( v50 + 1 > v51 )
          v62 = *v35;
        v53 = v62 - 1;
        SchedulerAssist = 0LL;
      }
      v58 = (__int64 *)(v56 + 8 * ((unsigned __int64)v57 >> 6));
      v59 = *v58 | ((1LL << (v57 & 0x3F)) - 1);
      if ( v59 == -1 )
      {
        while ( (unsigned __int64)++v58 <= v56 + 8 * ((unsigned __int64)(unsigned int)v9 >> 6) )
        {
          v59 = *v58;
          if ( *v58 != -1 )
            goto LABEL_114;
        }
      }
      else
      {
LABEL_114:
        CurrentIrql = ~v59;
        _BitScanForward64(&v60, CurrentIrql);
        v61 = v60 + ((unsigned int)(((__int64)v58 - v56) >> 3) << 6);
        if ( v61 <= (unsigned int)v9 )
        {
          if ( v61 != -1 )
          {
            v61 -= v54;
LABEL_117:
            LODWORD(v6) = v61;
            if ( v61 != -1 )
            {
              if ( (unsigned int)RtlInterlockedSetClearRun(j + 48, v61, 1LL) )
              {
                v15 = v88;
                goto LABEL_58;
              }
              continue;
            }
            v15 = v88;
LABEL_179:
            v6 = 0LL;
LABEL_46:
            v31 = *(_QWORD ***)(j + 8);
            v32 = j;
            if ( v31 )
            {
              j = *(_QWORD *)(j + 8);
              for ( i = *v31; i; i = (_QWORD *)*i )
                j = (unsigned __int64)i;
            }
            else
            {
              for ( j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL; j; j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL )
              {
                if ( *(_QWORD *)j == v32 )
                  break;
                v32 = j;
              }
            }
            goto LABEL_44;
          }
          goto LABEL_124;
        }
      }
      break;
    }
    v61 = -1;
LABEL_124:
    CurrentIrql = 0LL;
    goto LABEL_125;
  }
LABEL_58:
  _InterlockedDecrement((volatile signed __int32 *)(j + 132));
  _InterlockedDecrement((volatile signed __int32 *)(v15 + 48));
  SlabStandbyPage = *(_QWORD *)(j + 24) + (unsigned int)v6;
  *(_DWORD *)(j + 128) = v6 + 1;
  if ( SlabStandbyPage == -1 )
    goto LABEL_179;
  *(_QWORD *)(v15 + 32) = j;
LABEL_23:
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v16, retaddr);
  }
  else
  {
    _InterlockedAnd(v16, 0xBFFFFFFF);
    _InterlockedDecrement(v16);
  }
  if ( KiIrqlFlags )
  {
    v76 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v76 <= 0xFu && (unsigned __int8)v87 <= 0xFu && v76 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      CurrentIrql = -1LL << ((unsigned __int8)v87 + 1);
      SchedulerAssist = (__int64)CurrentPrcb->SchedulerAssist;
      v78 = ~(unsigned __int16)CurrentIrql;
      v79 = (v78 & *(_DWORD *)(SchedulerAssist + 20)) == 0;
      v9 = (unsigned int)v78 & *(_DWORD *)(SchedulerAssist + 20);
      *(_DWORD *)(SchedulerAssist + 20) = v9;
      if ( v79 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8((unsigned __int8)v87);
  if ( SlabStandbyPage == -1 )
  {
    SlabStandbyPage = MiGetSlabStandbyPage(v15, CurrentIrql, v9, SchedulerAssist);
  }
  else
  {
    v24 = *(_DWORD *)(v15 + 80);
    if ( v24 <= 3 && v24 != 2 )
    {
      v80 = (unsigned __int8)MiLockPageInline(48 * SlabStandbyPage - 0x220000000000LL);
      MiUpdateSlabPagePlaceholderState(v15, SlabStandbyPage, 1LL);
      _InterlockedAnd64(
        (volatile signed __int64 *)(48 * SlabStandbyPage - 0x220000000000LL + 24),
        0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        v81 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v81 <= 0xFu && (unsigned __int8)v80 <= 0xFu && v81 >= 2u )
        {
          v82 = KeGetCurrentPrcb();
          SchedulerAssist = (__int64)v82->SchedulerAssist;
          v83 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v80 + 1));
          v79 = (v83 & *(_DWORD *)(SchedulerAssist + 20)) == 0;
          *(_DWORD *)(SchedulerAssist + 20) &= v83;
          if ( v79 )
            KiRemoveSystemWorkPriorityKick(v82);
        }
      }
      __writecr8(v80);
    }
  }
  if ( *(_QWORD *)(v15 + 56)
    && !*(_QWORD *)(v15 + 240)
    && *(_QWORD *)(v15 + 112) + *(_QWORD *)(v15 + 48) <= *(_QWORD *)(v15 + 56) >> 1 )
  {
    MiAsyncSlabReplenish(v15, 0LL, 1LL);
  }
  if ( SlabStandbyPage != -1 )
  {
    v25 = 48 * SlabStandbyPage - 0x220000000000LL;
    if ( (v94 & 0x10) != 0 && MiPfnZeroingNeeded(48 * SlabStandbyPage - 0x220000000000LL) )
    {
      MiZeroPhysicalPage(v28, SlabStandbyPage, 0LL, v27);
      *(_QWORD *)(v25 + 16) &= 0xFFFFFFFFFFFFFC1FuLL;
    }
    if ( (v94 & 8) != 0 && (*(_BYTE *)(v25 + 34) & 0xC0) != 0x40 )
      MiChangePageAttribute(48 * SlabStandbyPage - 0x220000000000LL, 1LL, 8LL, SchedulerAssist);
    return SlabStandbyPage;
  }
  SchedulerAssist = v94;
  v6 = 0LL;
  LODWORD(v9) = a2;
  v5 = a5;
  v11 = v89;
  v8 = a1;
LABEL_81:
  v13 = SchedulerAssist & 2;
  if ( (SchedulerAssist & 2) != 0 || *(_DWORD *)(v15 + 80) > 3u && (SchedulerAssist & 4) == 0 || *(_QWORD *)(v15 + 208) )
    goto LABEL_104;
  if ( v5 == (__int64 *)-1LL )
  {
    v49 = MiReplenishSlabAllocator(v15, 1LL);
    SchedulerAssist = v94;
    if ( v49 )
      --v11;
LABEL_104:
    v9 = a2;
    ++v11;
    v5 = a5;
    v8 = a1;
    v12 = v90;
    v89 = v11;
    goto LABEL_9;
  }
  if ( !v5 )
    goto LABEL_104;
  *v5 = v15;
LABEL_88:
  if ( (unsigned int)v9 > 3 && (SchedulerAssist & 5) == 0 )
    *(_BYTE *)((int)v9 + v8 + 16200) = 1;
  return SlabStandbyPage;
}
