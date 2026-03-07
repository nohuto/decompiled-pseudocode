__int64 __fastcall VslpVerifySessionSpace(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  __int64 v5; // rdx
  __int64 result; // rax
  __int64 v7; // rcx
  unsigned int v8; // r13d
  bool v9; // zf
  int v10; // r8d
  unsigned __int64 v11; // rcx
  void *Pool2; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  void *v15; // rsp
  void *v16; // rsp
  __int64 v17; // rax
  __int64 v18; // r15
  __int64 v19; // r12
  unsigned __int64 v20; // rsi
  unsigned __int8 CurrentIrql; // di
  _DWORD *SchedulerAssist; // r9
  __int64 v23; // rdx
  unsigned __int8 v24; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v26; // r9
  int v27; // eax
  int v28; // eax
  unsigned __int8 v29; // di
  _DWORD *v30; // r9
  __int64 v31; // rdx
  unsigned __int8 v32; // al
  struct _KPRCB *v33; // r10
  _DWORD *v34; // r9
  int v35; // eax
  int v36; // eax
  unsigned __int8 v37; // di
  _DWORD *v38; // r9
  __int64 v39; // rdx
  unsigned __int8 v40; // al
  struct _KPRCB *v41; // r10
  _DWORD *v42; // r9
  int v43; // eax
  int v44; // eax
  unsigned __int64 v45; // r15
  unsigned __int64 v46; // rdi
  unsigned __int8 v47; // di
  _DWORD *v48; // r9
  __int64 v49; // rdx
  unsigned __int8 v50; // al
  struct _KPRCB *v51; // r10
  _DWORD *v52; // r9
  int v53; // eax
  int v54; // eax
  unsigned int v55; // r8d
  int v56; // ecx
  unsigned __int64 v57; // rax
  unsigned int v58; // esi
  __int64 v59; // rdx
  unsigned int v60; // r9d
  unsigned int v61; // ecx
  int v62; // r11d
  char *v63; // r10
  unsigned int v64; // r15d
  unsigned int v65; // edx
  unsigned int v66; // r8d
  char *v67; // r8
  __int64 i; // rdx
  unsigned __int64 v69; // rax
  unsigned int SizeOfBitMap; // ecx
  unsigned int v71; // edi
  unsigned int *v72; // r9
  unsigned int *v73; // r10
  unsigned int v74; // edx
  unsigned int *v75; // rax
  __int64 v76; // rcx
  int v77; // edx
  unsigned int v78; // edx
  __int64 v79; // rax
  unsigned int v80; // edi
  __int64 v81; // r12
  unsigned __int8 v82; // r15
  _DWORD *v83; // r9
  __int64 v84; // rdx
  unsigned __int8 v85; // al
  struct _KPRCB *v86; // r10
  _DWORD *v87; // r9
  int v88; // eax
  int v89; // eax
  int v90; // r15d
  int v91; // [rsp+20h] [rbp+0h] BYREF
  int v92; // [rsp+24h] [rbp+4h]
  __int64 v93; // [rsp+28h] [rbp+8h]
  RTL_BITMAP BitMapHeader; // [rsp+30h] [rbp+10h] BYREF
  int v95; // [rsp+40h] [rbp+20h]
  unsigned int v96; // [rsp+44h] [rbp+24h]
  PVOID P; // [rsp+48h] [rbp+28h]
  __int64 v98; // [rsp+50h] [rbp+30h]

  v2 = *(_QWORD *)(a1 + 48) - qword_140C65668;
  v98 = a1;
  *(&BitMapHeader.SizeOfBitMap + 1) = 0;
  if ( v2 >= 0x8000000000LL )
    return 0LL;
  v5 = *(_QWORD *)(a2 + 8);
  if ( v5 == -1 )
  {
    ++*(_QWORD *)(a2 + 16);
    return 0LL;
  }
  v7 = (*(_QWORD *)a2)++;
  if ( v7 != v5 )
    return 0LL;
  v9 = ((*(_DWORD *)(a1 + 64) >> 12) & 0x1F) == 0;
  v10 = (*(_DWORD *)(a1 + 64) >> 12) & 0x1F;
  v96 = *(_DWORD *)(a1 + 64) >> 12;
  v8 = v96;
  P = 0LL;
  v11 = 4 * (((unsigned __int64)v96 >> 5) + !v9);
  if ( v11 <= 0x800 )
  {
    v13 = v11 + 15;
    if ( v11 + 15 < v11 )
      v13 = 0xFFFFFFFFFFFFFF0LL;
    v14 = v13 & 0xFFFFFFFFFFFFFFF0uLL;
    v15 = alloca(v14);
    BitMapHeader.SizeOfBitMap = v96;
    v16 = alloca(v14);
    BitMapHeader.Buffer = (unsigned int *)&v91;
    memset(&v91, 0, 4 * ((v10 != 0) + (v96 >> 5)));
  }
  else
  {
    Pool2 = (void *)ExAllocatePool2(256LL, v11, 1416850774LL);
    P = Pool2;
    if ( !Pool2 )
    {
      result = 3221225626LL;
      *(_DWORD *)(a2 + 24) = -1073741670;
      return result;
    }
    BitMapHeader.SizeOfBitMap = v96;
    BitMapHeader.Buffer = (unsigned int *)Pool2;
  }
  v17 = RtlImageNtHeader(*(_QWORD *)(a1 + 48));
  v18 = *(_QWORD *)(a1 + 48);
  v19 = v17;
  v91 = 0;
  v20 = v17 & 0xFFFFFFFFFFFFF000uLL;
  v93 = *(unsigned __int16 *)(v17 + 20) + v17 + 24;
  if ( (v17 & 0xFFFFFFFFFFFFF000uLL) != v18 )
  {
    do
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        if ( CurrentIrql == 2 )
          LODWORD(v23) = 4;
        else
          v23 = (-1LL << (CurrentIrql + 1)) & 4;
        SchedulerAssist[5] |= v23;
      }
      *(_DWORD *)(a2 + 24) = VslVerifyPage(v18, 1);
      if ( KiIrqlFlags )
      {
        v24 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v24 <= 0xFu && CurrentIrql <= 0xFu && v24 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v26 = CurrentPrcb->SchedulerAssist;
          v27 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v9 = (v27 & v26[5]) == 0;
          v26[5] &= v27;
          if ( v9 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(CurrentIrql);
      v28 = *(_DWORD *)(a2 + 24);
    }
    while ( v28 == -1073741267 );
    if ( v28 < 0 )
      goto LABEL_147;
  }
  do
  {
    v29 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v29 <= 0xFu )
    {
      v30 = KeGetCurrentPrcb()->SchedulerAssist;
      if ( v29 == 2 )
        LODWORD(v31) = 4;
      else
        v31 = (-1LL << (v29 + 1)) & 4;
      v30[5] |= v31;
    }
    *(_DWORD *)(a2 + 24) = VslVerifyPage(v20, 1);
    if ( KiIrqlFlags )
    {
      v32 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v32 <= 0xFu && v29 <= 0xFu && v32 >= 2u )
      {
        v33 = KeGetCurrentPrcb();
        v34 = v33->SchedulerAssist;
        v35 = ~(unsigned __int16)(-1LL << (v29 + 1));
        v9 = (v35 & v34[5]) == 0;
        v34[5] &= v35;
        if ( v9 )
          KiRemoveSystemWorkPriorityKick(v33);
      }
    }
    __writecr8(v29);
    v36 = *(_DWORD *)(a2 + 24);
  }
  while ( v36 == -1073741267 );
  if ( v36 < 0 )
    goto LABEL_147;
  if ( v20 != ((v19 + 264) & 0xFFFFFFFFFFFFF000uLL) )
  {
    v20 = (v19 + 264) & 0xFFFFFFFFFFFFF000uLL;
    do
    {
      v37 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v37 <= 0xFu )
      {
        v38 = KeGetCurrentPrcb()->SchedulerAssist;
        if ( v37 == 2 )
          LODWORD(v39) = 4;
        else
          v39 = (-1LL << (v37 + 1)) & 4;
        v38[5] |= v39;
      }
      *(_DWORD *)(a2 + 24) = VslVerifyPage(v20, 1);
      if ( KiIrqlFlags )
      {
        v40 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v40 <= 0xFu && v37 <= 0xFu && v40 >= 2u )
        {
          v41 = KeGetCurrentPrcb();
          v42 = v41->SchedulerAssist;
          v43 = ~(unsigned __int16)(-1LL << (v37 + 1));
          v9 = (v43 & v42[5]) == 0;
          v42[5] &= v43;
          if ( v9 )
            KiRemoveSystemWorkPriorityKick(v41);
        }
      }
      __writecr8(v37);
      v44 = *(_DWORD *)(a2 + 24);
    }
    while ( v44 == -1073741267 );
    if ( v44 < 0 )
      goto LABEL_147;
  }
  v45 = 0LL;
  if ( !*(_WORD *)(v19 + 6) )
    goto LABEL_147;
  v46 = v93;
  do
  {
    if ( (v46 & 0xFFFFFFFFFFFFF000uLL) != v20 )
    {
      v20 = v46 & 0xFFFFFFFFFFFFF000uLL;
      do
      {
        v47 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v47 <= 0xFu )
        {
          v48 = KeGetCurrentPrcb()->SchedulerAssist;
          if ( v47 == 2 )
            LODWORD(v49) = 4;
          else
            v49 = (-1LL << (v47 + 1)) & 4;
          v48[5] |= v49;
        }
        *(_DWORD *)(a2 + 24) = VslVerifyPage(v20, 1);
        if ( KiIrqlFlags )
        {
          v50 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v50 <= 0xFu && v47 <= 0xFu && v50 >= 2u )
          {
            v51 = KeGetCurrentPrcb();
            v52 = v51->SchedulerAssist;
            v53 = ~(unsigned __int16)(-1LL << (v47 + 1));
            v9 = (v53 & v52[5]) == 0;
            v52[5] &= v53;
            if ( v9 )
              KiRemoveSystemWorkPriorityKick(v51);
          }
        }
        __writecr8(v47);
        v54 = *(_DWORD *)(a2 + 24);
      }
      while ( v54 == -1073741267 );
      if ( v54 < 0 )
        goto LABEL_147;
      v46 = v93;
    }
    if ( (*(_DWORD *)(v46 + 36) & 0x82000000) != 0 )
      goto LABEL_90;
    v55 = *(_DWORD *)(v46 + 16);
    if ( v55 <= *(_DWORD *)(v46 + 8) )
      v55 = *(_DWORD *)(v46 + 8);
    if ( !v55 )
    {
LABEL_90:
      v56 = v91;
    }
    else
    {
      RtlSetBits(&BitMapHeader, *(_DWORD *)(v46 + 12) >> 12, v55 >> 12);
      v56 = 1;
      v91 = 1;
    }
    v57 = *(unsigned __int16 *)(v19 + 6);
    v46 += 40LL;
    ++v45;
    v93 = v46;
  }
  while ( v45 < v57 );
  if ( !v56 || *(_DWORD *)(v19 + 56) < 0x1000u )
    goto LABEL_147;
  v91 = 16;
  v58 = (unsigned int)ExGenRandom(0) % v8;
  v59 = (__int64)BitMapHeader.Buffer & 4;
  v93 = v59;
  do
  {
    v60 = v58 < BitMapHeader.SizeOfBitMap ? v58 : 0;
    v61 = BitMapHeader.SizeOfBitMap - 1;
    v62 = v59 != 0 ? 0x20 : 0;
    v63 = (char *)BitMapHeader.Buffer + (-(__int64)(v59 != 0) & 0xFFFFFFFFFFFFFFFCuLL);
    while ( 1 )
    {
      v64 = v61 + v62;
      v95 = 0;
      v65 = v60 + v62;
      if ( v61 - v60 == -1 )
        goto LABEL_97;
      v67 = &v63[8 * ((unsigned __int64)v65 >> 6)];
      for ( i = ~*(_QWORD *)v67 | ((1LL << (v65 & 0x3F)) - 1); i == -1; i = ~*(_QWORD *)v67 )
      {
        v67 += 8;
        if ( v67 > &v63[8 * ((unsigned __int64)v64 >> 6)] )
          goto LABEL_97;
      }
      _BitScanForward64(&v69, ~i);
      v66 = v69 + ((unsigned int)((v67 - v63) >> 3) << 6);
      v95 = v69;
      if ( v66 > v64 )
      {
LABEL_97:
        v66 = -1;
        goto LABEL_104;
      }
      if ( v66 != -1 )
        break;
LABEL_104:
      if ( !v60 )
        goto LABEL_110;
      SizeOfBitMap = v58 + 1;
      v60 = 0;
      if ( v58 + 1 > BitMapHeader.SizeOfBitMap )
        SizeOfBitMap = BitMapHeader.SizeOfBitMap;
      v61 = SizeOfBitMap - 1;
    }
    v66 -= v62;
LABEL_110:
    v71 = 0;
    v92 = 0;
    if ( v96 <= v66 )
    {
      v58 = v66;
      goto LABEL_127;
    }
    v72 = &BitMapHeader.Buffer[(unsigned __int64)v66 >> 5];
    v73 = &BitMapHeader.Buffer[(unsigned __int64)(v96 - 1) >> 5];
    v74 = (-1 << (v66 & 0x1F)) & *v72;
    v75 = v72 + 1;
    while ( !v74 )
    {
      if ( v75 > v73 )
        goto LABEL_117;
      ++v72;
      ++v75;
      v74 = *v72;
    }
    _BitScanForward64((unsigned __int64 *)&v76, v74);
    v58 = v76 + 32 * (v72 - BitMapHeader.Buffer);
    v92 = v76;
    if ( v58 > v96 )
    {
LABEL_117:
      v58 = v96;
      goto LABEL_127;
    }
    v77 = ((1 << v76) - 1) | v74;
    while ( 1 )
    {
      v78 = ~v77;
      if ( v78 )
        break;
      if ( v72 + 1 > v73 )
      {
        LODWORD(v79) = 32;
        goto LABEL_124;
      }
      v77 = v72[1];
      ++v72;
    }
    _BitScanForward64((unsigned __int64 *)&v79, v78);
LABEL_124:
    v92 = v79;
    v80 = v79 + 32 * (v72 - BitMapHeader.Buffer);
    if ( v80 > v96 )
      v80 = v96;
    v71 = v80 - v58;
    do
    {
LABEL_127:
      v81 = *(_QWORD *)(v98 + 48) + (v58 << 12);
      do
      {
        v82 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v82 <= 0xFu )
        {
          v83 = KeGetCurrentPrcb()->SchedulerAssist;
          if ( v82 == 2 )
            LODWORD(v84) = 4;
          else
            v84 = (-1LL << (v82 + 1)) & 4;
          v83[5] |= v84;
        }
        *(_DWORD *)(a2 + 24) = VslVerifyPage(v81, 1);
        if ( KiIrqlFlags )
        {
          v85 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v85 <= 0xFu && v82 <= 0xFu && v85 >= 2u )
          {
            v86 = KeGetCurrentPrcb();
            v87 = v86->SchedulerAssist;
            v88 = ~(unsigned __int16)(-1LL << (v82 + 1));
            v9 = (v88 & v87[5]) == 0;
            v87[5] &= v88;
            if ( v9 )
              KiRemoveSystemWorkPriorityKick(v86);
          }
        }
        __writecr8(v82);
        v89 = *(_DWORD *)(a2 + 24);
      }
      while ( v89 == -1073741267 );
      if ( v89 < 0 )
        goto LABEL_147;
      v90 = v91 - 1;
      ++v58;
      --v91;
      --v71;
    }
    while ( v71 && v90 );
    v59 = v93;
  }
  while ( v90 );
LABEL_147:
  if ( P )
    ExFreePoolWithTag(P, 0);
  return 3221225473LL;
}
