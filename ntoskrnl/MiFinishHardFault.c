__int64 MiFinishHardFault(__int64 a1, __int64 a2, __int64 a3, ...)
{
  __int64 v6; // r8
  __int64 v7; // rdx
  _DWORD *v8; // r9
  __int64 v9; // r12
  _QWORD *v10; // r13
  _DWORD *v11; // rax
  _QWORD *v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // r9
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 CurrentIrql; // rcx
  bool v20; // zf
  unsigned __int8 v21; // r14
  __int64 v22; // rcx
  int v23; // r14d
  ULONG_PTR DecayPfn; // rcx
  _QWORD *v25; // r12
  __int64 v26; // rcx
  __int64 *v27; // r15
  __int64 v28; // rbx
  int v29; // ecx
  char v30; // al
  __int64 v31; // rdx
  int v32; // r14d
  unsigned __int8 v33; // al
  unsigned __int8 v34; // bl
  __int64 v35; // rcx
  _QWORD *v37; // rcx
  _DWORD *v38; // rbx
  __int64 *v39; // r12
  __int64 v40; // rax
  __int64 v41; // rbx
  unsigned __int64 v42; // rsi
  unsigned __int8 v43; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v46; // eax
  unsigned __int8 v47; // cl
  struct _KPRCB *v48; // r10
  _DWORD *v49; // r9
  int v50; // eax
  __int64 v51; // rbx
  unsigned __int64 v52; // rsi
  struct _KPRCB *v53; // r8
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v55; // eax
  unsigned __int64 v56; // [rsp+20h] [rbp-E0h]
  int v57; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v58; // [rsp+38h] [rbp-C8h]
  __int64 v59; // [rsp+40h] [rbp-C0h] BYREF
  int v60; // [rsp+48h] [rbp-B8h]
  _BYTE v61[12]; // [rsp+4Ch] [rbp-B4h] BYREF
  unsigned __int64 v62; // [rsp+58h] [rbp-A8h]
  __int64 v63; // [rsp+60h] [rbp-A0h]
  __int16 v64; // [rsp+68h] [rbp-98h]
  int v65; // [rsp+6Ah] [rbp-96h]
  __int16 v66; // [rsp+6Eh] [rbp-92h]
  __int64 v67; // [rsp+70h] [rbp-90h]
  ULONG_PTR BugCheckParameter2; // [rsp+78h] [rbp-88h]
  _DWORD *v69; // [rsp+80h] [rbp-80h]
  __int64 v70; // [rsp+88h] [rbp-78h]
  __int64 v71; // [rsp+90h] [rbp-70h]
  __int64 v72; // [rsp+98h] [rbp-68h]
  _QWORD v73[20]; // [rsp+A0h] [rbp-60h] BYREF
  int v74; // [rsp+150h] [rbp+50h] BYREF
  int v75; // [rsp+160h] [rbp+60h] BYREF
  __int64 v76; // [rsp+168h] [rbp+68h] BYREF
  va_list va; // [rsp+168h] [rbp+68h]
  va_list va1; // [rsp+170h] [rbp+70h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v76 = va_arg(va1, _QWORD);
  memset(v73, 0, 0x68uLL);
  v6 = *(_QWORD *)(a1 + 56);
  v7 = *(_QWORD *)(a3 + 152);
  v8 = (_DWORD *)(a3 + 272);
  v9 = *(_QWORD *)(a3 + 232);
  v72 = a1 + 56;
  v10 = 0LL;
  v11 = *(_DWORD **)(a3 + 256);
  memset(v61, 0, sizeof(v61));
  if ( v11 )
    v8 = v11;
  v65 = 0;
  v66 = 0;
  BugCheckParameter2 = 0LL;
  v64 = 0;
  v12 = v8 + 12;
  v13 = (v8[8] + v8[11]) & 0xFFF;
  v14 = (unsigned int)v8[10] + 4095LL;
  v71 = v6;
  v69 = v8;
  v56 = (unsigned __int64)&v8[2 * ((unsigned __int64)(v13 + v14) >> 12) + 10];
  v15 = *(unsigned int *)(a3 + 188);
  if ( (_DWORD)v15 == -1 )
    v62 = -1LL;
  else
    v62 = (unsigned __int64)&v12[v15];
  v16 = 1LL;
  v17 = *(_QWORD *)(a3 + 160);
  v70 = *(_QWORD *)(a3 + 224);
  v18 = *(unsigned int *)(a3 + 192);
  if ( (v18 & 0x100000) != 0 || !v6 || (v18 & 8) != 0 )
  {
    v60 = -1073740748;
    LOBYTE(v74) = 17;
    if ( !v6 )
    {
      LOBYTE(v18) = 17;
      v58 = v18;
      goto LABEL_17;
    }
  }
  else
  {
    v60 = 0;
    LOBYTE(v74) = 17;
  }
  CurrentIrql = KeGetCurrentIrql();
  v58 = CurrentIrql;
  __writecr8(1uLL);
  if ( (*(_DWORD *)(a3 + 192) & 0x1000000) == 0 )
  {
    if ( (*(_BYTE *)(v6 + 184) & 7) != 0 )
    {
      v20 = (*(_WORD *)(v7 + 486))++ == 0xFFFF;
      if ( v20 && *(_QWORD *)(v7 + 152) != v7 + 152 )
        KiCheckForKernelApcDelivery(CurrentIrql, v7, v6, 1LL);
    }
    else
    {
      KeLeaveCriticalRegionThread(v7);
    }
  }
  MiRelockFaultState((__int64 *)(a1 + 56), a2, v6, v16);
  LOBYTE(v18) = v58;
  *(_BYTE *)(a1 + 68) = v58;
LABEL_17:
  if ( v17 )
  {
    if ( (_BYTE)v18 == 17 )
    {
      v21 = MiLockPageInline(v17);
      LOBYTE(v74) = v21;
    }
    else
    {
      v75 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v75);
        while ( *(__int64 *)(v17 + 24) < 0 );
      }
      v21 = 17;
    }
    if ( !(unsigned int)MiAreChargesNeededToLockPage(v17) || (unsigned int)MiChargeForLockedPage(v22, 1LL) )
      ++*(_WORD *)(v17 + 32);
    MiLockOwnedProtoPage(v17, v21);
  }
  if ( *(_DWORD *)(a3 + 180) )
  {
    *(_DWORD *)(a3 + 80) = -1073741670;
    *(_QWORD *)(a3 + 88) = 0LL;
  }
  v23 = *(_DWORD *)(a3 + 80);
  if ( *(_QWORD *)(a3 + 16) != a3 + 16 )
  {
    HIBYTE(v64) = MiInvalidateCollidedIos(a3);
    if ( !HIBYTE(v64) )
    {
      *(_DWORD *)(a3 + 80) = -1073741801;
      *(_QWORD *)(a3 + 88) = 0LL;
    }
  }
  if ( v17 )
  {
    v57 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v57);
      while ( *(__int64 *)(v17 + 24) < 0 );
    }
    if ( (unsigned int)MiRemoveLockedPageCharge(v17) )
      MiPfnReferenceCountIsZero(v17, 0xAAAAAAAAAAAAAAABuLL * ((v17 + 0x220000000000LL) >> 4));
    _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( v60 >= 0 && !(unsigned int)MiIsFaultPteIntact(a1, v70, v9, a3 + 168) )
    v60 = -1073740748;
  if ( v23 >= 0
    && ((*(_DWORD *)(a3 + 192) & 8) != 0
     || *(_QWORD *)(a3 + 256)
     || (_DWORD *)v56 != v69 + 12 && v62 > (unsigned __int64)(v69 + 14))
    && (*(_DWORD *)(a3 + 192) & 0x88000) == 0x80000
    && (*(_DWORD *)(a3 + 192) & 0xE00) != 0 )
  {
    DecayPfn = MiCreateDecayPfn();
    BugCheckParameter2 = DecayPfn;
  }
  else
  {
    DecayPfn = 0LL;
    BugCheckParameter2 = 0LL;
  }
  v25 = 0LL;
  v63 = *(_QWORD *)(a1 + 56);
  v67 = v76;
  v73[2] = 0x3FFFFFFFFFLL;
  v73[3] = 0x3FFFFFFFFFLL;
  v59 = a3;
  LODWORD(v73[1]) = 0;
  LODWORD(v73[12]) = 2;
  v73[11] = DecayPfn;
  if ( (unsigned __int64)v12 > v56 )
  {
    v27 = (__int64 *)(a3 + 248);
    MiInsertPagesInList(v73, 0LL);
  }
  else
  {
    do
    {
      v26 = 48LL * *v12 - 0x220000000000LL;
      if ( v26 == qword_140C69380 || (*(_BYTE *)(v26 + 34) & 7) == 7 && *(_QWORD *)(v26 + 8) == -3LL )
      {
        if ( (unsigned int)MiInPageGapPage() )
        {
          *v37 = v25;
          v25 = v37;
        }
      }
      else if ( v26 == *(_QWORD *)(a3 + 248) )
      {
        v10 = v12;
      }
      else
      {
        *(_QWORD *)&v61[4] = v12;
        MiAddPageToInsertList(v73, &v59);
      }
      ++v12;
      v27 = (__int64 *)(a3 + 248);
    }
    while ( (unsigned __int64)v12 <= v56 );
    MiInsertPagesInList(v73, 0LL);
    if ( v25 )
      MiReleasePrefetchGapPages(v25);
  }
  v28 = *v27;
  LODWORD(v76) = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v28 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx((__int64 *)va);
    while ( *(__int64 *)(v28 + 24) < 0 );
  }
  v29 = HIWORD(*(_DWORD *)(a3 + 112));
  if ( (*(_DWORD *)(a3 + 112) & 1) != 0 && (_WORD)v29 )
    *(_WORD *)(a3 + 114) = v29 - 1;
  v30 = *(_BYTE *)(v28 + 34) & 0xDF;
  *(_QWORD *)&v61[4] = v10;
  *(_BYTE *)(v28 + 34) = v30;
  *(_QWORD *)v28 = 0LL;
  MiHardFaultPageRelease(&v59, v28);
  v32 = *(_DWORD *)(a3 + 80);
  _InterlockedAnd64((volatile signed __int64 *)(*v27 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v17 )
  {
    v33 = v74;
    v34 = 17;
    v74 = 0;
    if ( (_BYTE)v58 == 17 )
      v34 = v33;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v74);
      while ( *(__int64 *)(v17 + 24) < 0 );
    }
    *(_BYTE *)(v17 + 34) &= ~0x20u;
    if ( (unsigned int)MiRemoveLockedPageCharge(v17) )
      MiPfnReferenceCountIsZero(v17, 0xAAAAAAAAAAAAAAABuLL * ((v17 + 0x220000000000LL) >> 4));
    _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v34 != 17 )
    {
      if ( KiIrqlFlags )
      {
        v43 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v43 <= 0xFu && v34 <= 0xFu && v43 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v31 = -1LL << (v34 + 1);
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v46 = ~(unsigned __int16)v31;
          v20 = (v46 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v46;
          if ( v20 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(v34);
    }
  }
  if ( (*(_DWORD *)(a3 + 192) & 0x8000) != 0 )
  {
    v38 = v69;
    MmCheckCachedPageStates(v70 + (*(_DWORD *)(a3 + 96) & 0x3FFFF), (unsigned int)v69[10], 2, 0LL);
    v39 = (__int64 *)(v38 + 12);
    if ( (unsigned __int64)(v38 + 12) <= v56 )
    {
      do
      {
        if ( *v39 < 0 )
        {
          v40 = *v39 & 0x7FFFFFFFFFFFFFFFLL;
          *v39 = v40;
          v41 = 48 * v40 - 0x220000000000LL;
          v42 = (unsigned __int8)MiLockPageInline(v41);
          MiRemoveLockedPageChargeAndDecRef(v41);
          _InterlockedAnd64((volatile signed __int64 *)(v41 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( KiIrqlFlags )
          {
            v47 = KeGetCurrentIrql();
            if ( (KiIrqlFlags & 1) != 0 && v47 <= 0xFu && (unsigned __int8)v42 <= 0xFu && v47 >= 2u )
            {
              v48 = KeGetCurrentPrcb();
              v31 = -1LL << ((unsigned __int8)v42 + 1);
              v49 = v48->SchedulerAssist;
              v50 = ~(unsigned __int16)v31;
              v20 = (v50 & v49[5]) == 0;
              v49[5] &= v50;
              if ( v20 )
                KiRemoveSystemWorkPriorityKick(v48);
            }
          }
          __writecr8(v42);
        }
        ++v39;
      }
      while ( (unsigned __int64)v39 <= v56 );
    }
  }
  if ( BugCheckParameter2 )
    MiDecayPfnFullyInitialized(BugCheckParameter2);
  if ( v71 && (*(_DWORD *)(a3 + 192) & 0x1000000) != 0 )
  {
    LOBYTE(v31) = 17;
    MiReleaseFaultState(v72, v31, 0LL);
  }
  if ( (*(_DWORD *)(a3 + 192) & 0x200000) == 0 )
    ObDereferenceObjectDeferDeleteWithTag(*(PVOID *)(a3 + 200), 0x746C6644u);
  if ( *(int *)(a3 + 176) > 1 )
    KeSetEvent((PRKEVENT)(a3 + 56), 0, 0);
  v35 = *(_QWORD *)(a3 + 104);
  if ( !v35 )
    goto LABEL_71;
  v51 = *(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(v35 + 40) >> 43) & 0x3FFLL));
  MiReleaseFreshPage(v35);
  v52 = 1LL;
  MiReturnCommit(v51, 1LL);
  if ( (_UNKNOWN *)v51 != &MiSystemPartition
    || (v53 = KeGetCurrentPrcb(),
        CachedResidentAvailable = (int)v53->CachedResidentAvailable,
        (_DWORD)CachedResidentAvailable == -1) )
  {
LABEL_131:
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v51 + 17280), v52);
    goto LABEL_71;
  }
  if ( (unsigned __int64)(CachedResidentAvailable + 1) > 0x100 )
  {
LABEL_127:
    if ( (int)CachedResidentAvailable > 192
      && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                              (volatile signed __int32 *)&v53->CachedResidentAvailable,
                                              192,
                                              CachedResidentAvailable) )
    {
      v52 = (int)CachedResidentAvailable - 192 + 1LL;
    }
    if ( !v52 )
      goto LABEL_71;
    goto LABEL_131;
  }
  while ( 1 )
  {
    v55 = _InterlockedCompareExchange(
            (volatile signed __int32 *)&v53->CachedResidentAvailable,
            CachedResidentAvailable + 1,
            CachedResidentAvailable);
    v20 = (_DWORD)CachedResidentAvailable == v55;
    LODWORD(CachedResidentAvailable) = v55;
    if ( v20 )
      break;
    if ( v55 == -1 || (unsigned __int64)(v55 + 1LL) > 0x100 )
      goto LABEL_127;
  }
LABEL_71:
  if ( v32 < 0 )
  {
    if ( (*(_DWORD *)(a3 + 112) & 3) != 1 )
      goto LABEL_73;
    goto LABEL_92;
  }
  v32 = v60;
  if ( !(_BYTE)v64 )
LABEL_92:
    v32 = -1073740748;
LABEL_73:
  MiFreeInPageSupportBlock((PSLIST_ENTRY)a3);
  return (unsigned int)v32;
}
