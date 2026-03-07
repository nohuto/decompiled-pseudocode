__int64 __fastcall MiTryUnlinkNodeLargePages(
        __int64 a1,
        ULONG_PTR a2,
        unsigned int a3,
        __int64 a4,
        __int16 a5,
        _DWORD *a6,
        unsigned __int64 a7)
{
  __int64 v8; // r15
  __int64 v9; // r12
  __int64 v10; // rdi
  __int64 v11; // rsi
  unsigned int PfnChannel; // eax
  int v13; // edx
  __int64 v14; // r13
  unsigned __int8 CurrentIrql; // r14
  __int64 v16; // r9
  __int64 v17; // r8
  _QWORD *v18; // rax
  unsigned __int64 v19; // r12
  unsigned __int8 v20; // cl
  _DWORD *SchedulerAssist; // r8
  __int64 v23; // rax
  ULONG_PTR v24; // rcx
  _QWORD *v25; // rax
  __int64 v26; // r12
  _DWORD *v27; // r12
  volatile LONG *v28; // rcx
  unsigned __int8 v29; // al
  struct _KPRCB *v30; // r10
  _DWORD *v31; // r9
  int v32; // edx
  bool v33; // zf
  unsigned __int8 v34; // cl
  _DWORD *v35; // r9
  __int64 v36; // rdx
  unsigned __int8 v37; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v39; // r9
  int v40; // edx
  unsigned int v41; // eax
  __int64 v42; // rdi
  unsigned __int64 v43; // rdx
  _QWORD *v44; // r10
  _BOOL8 v45; // r11
  unsigned __int64 v46; // r9
  __int64 v47; // r12
  __int64 v48; // rcx
  _QWORD *v49; // rax
  __int64 *v50; // r15
  __int64 v51; // rcx
  __int64 *v52; // r8
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rcx
  __int64 v56; // rax
  unsigned __int64 v57; // rcx
  unsigned __int64 v58; // rdx
  __int64 v59; // rax
  unsigned __int8 v60; // al
  struct _KPRCB *v61; // r10
  _DWORD *v62; // r9
  int v63; // edx
  int v64; // [rsp+38h] [rbp-71h]
  unsigned int v65; // [rsp+3Ch] [rbp-6Dh]
  int v66; // [rsp+40h] [rbp-69h]
  char v67; // [rsp+44h] [rbp-65h]
  int v68; // [rsp+48h] [rbp-61h] BYREF
  int v69; // [rsp+4Ch] [rbp-5Dh] BYREF
  __int64 v70; // [rsp+50h] [rbp-59h]
  _QWORD *v71; // [rsp+58h] [rbp-51h]
  _QWORD *v72; // [rsp+60h] [rbp-49h]
  __int64 v73; // [rsp+68h] [rbp-41h]
  __int64 v74; // [rsp+70h] [rbp-39h]
  __int64 v75; // [rsp+78h] [rbp-31h] BYREF
  _DWORD v76[2]; // [rsp+80h] [rbp-29h] BYREF
  _QWORD v77[2]; // [rsp+88h] [rbp-21h] BYREF
  __int64 v78; // [rsp+98h] [rbp-11h]
  unsigned __int64 BugCheckParameter2; // [rsp+100h] [rbp+57h]
  __int64 v83; // [rsp+110h] [rbp+67h]

  BugCheckParameter2 = a2;
  v74 = a3;
  v8 = 0LL;
  v71 = 0LL;
  v70 = MiLargePageSizes[a3];
  v9 = 48 * a2;
  v10 = *((unsigned int *)MiSearchNumaNodeTable(a2) + 2);
  v11 = v9 - 0x220000000000LL;
  PfnChannel = MiGetPfnChannel(v9 - 0x220000000000LL);
  v13 = 0;
  v65 = PfnChannel;
  v64 = 0;
  v14 = 25408 * v10 + *(_QWORD *)(a1 + 16);
  v78 = 25408 * v10;
  v66 = 0;
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
    v13 = 0;
  }
  if ( !a4 )
    return v8;
  v16 = v70;
  v67 = CurrentIrql + 1;
  v17 = 48 * v70;
  v73 = 48 * v70;
  v18 = (_QWORD *)(v9 - 0x21FFFFFFFFD8LL);
  v72 = (_QWORD *)(v9 - 0x21FFFFFFFFD8LL);
  while ( 1 )
  {
    if ( v13 )
    {
      v24 = v16 + BugCheckParameter2;
      v25 = (_QWORD *)((char *)v18 + v17);
      BugCheckParameter2 = v24;
      v72 = v25;
      if ( v24 > qword_140C65820 )
        goto LABEL_27;
      if ( (*v25 & 0x40000000000000LL) == 0 )
        goto LABEL_27;
      if ( *((_DWORD *)MiSearchNumaNodeTable(v24) + 2) != (_DWORD)v10 )
        goto LABEL_27;
      v26 = v11 + v73;
      if ( (unsigned int)MiGetPfnChannel(v11 + v73) != v65
        || _interlockedbittestandset64((volatile signed __int32 *)(v26 + 24), 0x3FuLL) )
      {
        goto LABEL_27;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v11 = v26;
    }
    else
    {
      if ( BugCheckParameter2 > qword_140C65820
        || (*v18 & 0x40000000000000LL) == 0
        || *((_DWORD *)MiSearchNumaNodeTable(BugCheckParameter2) + 2) != (_DWORD)v10
        || (unsigned int)MiGetPfnChannel(v11) != v65 )
      {
        goto LABEL_28;
      }
      v68 = 0;
      v66 = 1;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v68);
        while ( *(__int64 *)(v11 + 24) < 0 );
      }
    }
    if ( *(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(v11 + 40) >> 43) & 0x3FFLL)) != a1 )
      break;
    if ( !v64 )
    {
      v64 = 1;
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v14 + 23104));
    }
    if ( (unsigned int)MiGetPfnPageSizeIndex(v11) == a3 )
    {
      v19 = *(unsigned __int8 *)(v11 + 34);
      v20 = *(_BYTE *)(v11 + 34) & 7;
      if ( v20 <= 1u )
      {
        if ( a7 )
        {
          if ( (v19 & 8) == 0 )
          {
            v41 = MiPageToChannel(BugCheckParameter2);
            v42 = *(_BYTE *)(v11 + 34) & 7;
            v43 = BugCheckParameter2 / MiLargePageSizes[v74] % (unsigned int)dword_140C65800[v74];
            v83 = v41;
            v44 = (_QWORD *)(v14 + 1072 * v74);
            v45 = BugCheckParameter2 < 0x100000;
            v46 = v19 >> 6;
            v47 = 3LL * (unsigned int)v43;
            v48 = v44[32 * v45 + 70 + 16 * v42 + 4 * v41 + v46];
            v49 = *(_QWORD **)(v11 + 8);
            v50 = (__int64 *)(v48 + 24LL * (unsigned int)v43);
            v51 = *(_QWORD *)v11;
            v52 = v50;
            if ( *(_QWORD *)(*(_QWORD *)v11 + 8LL) != v11 || *v49 != v11 )
              goto LABEL_94;
            *v49 = v51;
            *(_QWORD *)(v51 + 8) = v49;
            if ( !(_DWORD)v42 )
            {
              v53 = 4 * (v83 + 8 * v45);
              v54 = v44[v53 + 86 + v46];
              *(_BYTE *)(v11 + 34) = *(_BYTE *)(v11 + 34) & 0xF8 | 1;
              v52 = (__int64 *)(v54 + 8 * v47);
              ++v44[1];
              v55 = 134 * v74;
              v56 = 2 * (v45 + 67 * v74);
              ++*(_QWORD *)(v14 + 8 * v56 + 24);
              --*v44;
              v57 = v46 + v53 + v55;
              --*(_QWORD *)(v14 + 8 * v56 + 16);
              ++v52[2];
              --v50[2];
              ++*(_QWORD *)(v14 + 8 * v57 + 176);
              --*(_QWORD *)(v14 + 8 * v57 + 48);
              v58 = v70;
              _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 2560), -v70);
              _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 2688), v58);
            }
            v59 = *v52;
            if ( *(__int64 **)(*v52 + 8) != v52 )
LABEL_94:
              __fastfail(3u);
            *(_QWORD *)(v11 + 8) = v52;
            *(_QWORD *)v11 = v59;
            *(_QWORD *)(v59 + 8) = v11;
            *v52 = v11;
            MiBeginPageAccessor(a7, v11, 0);
            v8 = v11;
          }
          goto LABEL_26;
        }
        if ( !(unsigned int)MiUnlinkNodeLargePageHelper((_QWORD *)v14, v11, a3, v65, a5) )
        {
          if ( !v8 )
            *a6 = 0;
          goto LABEL_26;
        }
        if ( (a5 & 0x100) != 0 && !v8 )
        {
          ++*(_DWORD *)(v78 + *(_QWORD *)(a1 + 16) + 23004);
          *(_QWORD *)v11 = 0LL;
          goto LABEL_22;
        }
        *(_QWORD *)v11 = 0LL;
        if ( v8 )
          *v71 = v11;
        else
LABEL_22:
          v8 = v11;
        --a4;
        v71 = (_QWORD *)v11;
LABEL_24:
        v13 = v64;
        goto LABEL_25;
      }
      v27 = a6;
      if ( v8 )
        goto LABEL_26;
      *a6 = v20 != 5;
    }
    else
    {
      v27 = a6;
      if ( v8 )
        goto LABEL_26;
      *a6 = 1;
    }
    if ( a7 || !*(_DWORD *)(v14 + 23004) )
      goto LABEL_26;
    v28 = (volatile LONG *)(v14 + 23104);
    if ( (a5 & 0x80u) == 0 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(v28);
      _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        v37 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v37 <= 0xFu && CurrentIrql <= 0xFu && v37 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v39 = CurrentPrcb->SchedulerAssist;
          v40 = ~(unsigned __int16)(-1LL << v67);
          v33 = (v40 & v39[5]) == 0;
          v39[5] &= v40;
          if ( v33 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(CurrentIrql);
      if ( CurrentIrql != 2 )
      {
        *v27 = 0;
        return 0LL;
      }
      v69 = 0;
      while ( *(_DWORD *)(v14 + 23004) )
        KeYieldProcessorEx(&v69);
    }
    else
    {
      v76[1] = 0;
      v77[1] = v77;
      v77[0] = v77;
      v75 = *(_QWORD *)(v14 + 23008);
      *(_QWORD *)(v14 + 23008) = &v75;
      v76[0] = 393479;
      ExReleaseSpinLockExclusiveFromDpcLevel(v28);
      _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        v29 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v29 <= 0xFu && CurrentIrql <= 0xFu && v29 >= 2u )
        {
          v30 = KeGetCurrentPrcb();
          v31 = v30->SchedulerAssist;
          v32 = ~(unsigned __int16)(-1LL << v67);
          v33 = (v32 & v31[5]) == 0;
          v31[5] &= v32;
          if ( v33 )
            KiRemoveSystemWorkPriorityKick(v30);
        }
      }
      __writecr8(CurrentIrql);
      KeWaitForGate((__int64)v76, 18LL, 0);
    }
    v13 = 0;
    v66 = 0;
    v64 = 0;
    v34 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v34 <= 0xFu )
    {
      v35 = KeGetCurrentPrcb()->SchedulerAssist;
      if ( v34 == 2 )
        LODWORD(v36) = 4;
      else
        v36 = (-1LL << (v34 + 1)) & 4;
      v35[5] |= v36;
      goto LABEL_24;
    }
LABEL_25:
    if ( !a4 )
      goto LABEL_26;
    v18 = v72;
    v17 = v73;
    v16 = v70;
  }
  if ( !v8 )
    *a6 = 1;
LABEL_26:
  if ( !v64 )
    goto LABEL_28;
LABEL_27:
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v14 + 23104));
LABEL_28:
  if ( v8 && (a5 & 0x100) != 0 )
    CurrentIrql = 2;
  if ( v66 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      v60 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v60 <= 0xFu && CurrentIrql <= 0xFu && v60 >= 2u )
      {
        v61 = KeGetCurrentPrcb();
        v62 = v61->SchedulerAssist;
        v63 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v33 = (v63 & v62[5]) == 0;
        v62[5] &= v63;
        if ( v33 )
          KiRemoveSystemWorkPriorityKick(v61);
      }
    }
    __writecr8(CurrentIrql);
  }
  return v8;
}
