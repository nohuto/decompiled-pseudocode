void __fastcall MiInitializeDynamicPfns(
        __int64 BugCheckParameter2,
        ULONG_PTR a2,
        unsigned __int16 *a3,
        unsigned int a4,
        __int64 a5,
        unsigned __int16 *a6)
{
  unsigned __int16 *v6; // rsi
  unsigned __int64 v10; // rbx
  KIRQL v11; // al
  unsigned __int64 v12; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v16; // eax
  bool v17; // zf
  int v18; // eax
  int v19; // r9d
  signed __int64 v20; // rsi
  unsigned __int8 v21; // r13
  ULONG_PTR v22; // rax
  __int64 v23; // rbx
  _QWORD *v24; // rax
  __int64 v25; // r8
  int v26; // eax
  unsigned __int16 *v27; // rdx
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // r15
  __int64 v30; // r12
  unsigned __int8 v31; // di
  _DWORD *v32; // r9
  __int64 v33; // rdx
  int v34; // r14d
  unsigned __int64 v35; // rsi
  int v36; // eax
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  unsigned __int8 v41; // cl
  unsigned __int8 v42; // di
  struct _KPRCB *v43; // r10
  _DWORD *v44; // r9
  int v45; // eax
  _DWORD *v46; // r9
  __int64 v47; // rdx
  unsigned __int8 v48; // al
  struct _KPRCB *v49; // r9
  _DWORD *v50; // r8
  int v51; // eax
  char v52[4]; // [rsp+40h] [rbp-C0h] BYREF
  int v53; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v54; // [rsp+48h] [rbp-B8h]
  unsigned __int16 *v55; // [rsp+50h] [rbp-B0h]
  unsigned __int16 *v56; // [rsp+58h] [rbp-A8h]
  __int128 v57; // [rsp+60h] [rbp-A0h]
  __int128 v58; // [rsp+70h] [rbp-90h]
  __int128 v59; // [rsp+80h] [rbp-80h]
  __int128 v60; // [rsp+90h] [rbp-70h]
  __int128 v61; // [rsp+A0h] [rbp-60h]
  __int128 v62; // [rsp+B0h] [rbp-50h]
  __m128i v63[3]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v64[46]; // [rsp+F0h] [rbp-10h] BYREF

  v6 = a3;
  v56 = a3;
  v55 = a6;
  v60 = 0LL;
  v61 = 0LL;
  v62 = 0LL;
  v57 = 0LL;
  v58 = 0LL;
  v59 = 0LL;
  memset(v64, 0, 0x168uLL);
  LOWORD(v53) = *v6;
  v10 = 48 * BugCheckParameter2 - 0x220000000000LL;
  LODWORD(v54) = 5;
  if ( (a4 & 0x10000A) == 8 )
  {
    v11 = ExAcquireSpinLockExclusive(&dword_140C6B1A0);
    qword_140C6F350 += a2;
    v12 = v11;
    byte_140C6B0CC = 1;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C6B1A0);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v12 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
        v17 = (v16 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v16;
        if ( v17 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(v12);
    v6 = v56;
    LODWORD(v54) = 6;
  }
  if ( (a4 & 1) != 0 )
  {
    memset(v63, 0, sizeof(v63));
    if ( (a4 & 0x3000) != 0 )
    {
      v18 = MiDetermineNewPfnHeatState(0, (a4 >> 12) & 1);
      MiInitializeAllResidentPageBasePfns(v6, BugCheckParameter2, a2, v19, 1, v18 == 0, 0);
    }
    if ( (a4 & 2) != 0 )
    {
      v20 = *(_QWORD *)(a5 + 8);
      MiReferenceControlAreaPfn(**(_QWORD **)a5, *(_QWORD *)a5, a2);
      a4 |= *(_DWORD *)(a5 + 16);
    }
    else
    {
      if ( v56 != (unsigned __int16 *)&MiSystemPartition )
        MiUpdatePartitionChildPageCounts(v56, &MiSystemPartition, BugCheckParameter2, a2);
      v20 = 0LL;
    }
    v54 = 0LL;
    v21 = 17;
    v52[0] = 17;
    if ( a5 )
      MiCreatePfnTemplate((__int64)v63, a4, v53);
    while ( a2 )
    {
      v22 = MiRestrictRangeToNode(BugCheckParameter2, a2);
      v23 = v22;
      if ( a5 )
      {
        if ( v22 > (unsigned __int64)(4096 - (unsigned int)(v20 & 0xFFF)) >> 3 )
          v23 = (unsigned __int64)(4096 - (unsigned int)(v20 & 0xFFF)) >> 3;
        v54 = MiLockProtoPoolPageForce(v20, (__int64)v52);
        MiInitializeNewPfns(
          (__m128i *)(48 * BugCheckParameter2 - 0x220000000000LL),
          v23,
          v63,
          v53,
          a4,
          *(_QWORD *)a5,
          (unsigned __int64 *)v20);
        v21 = v52[0];
      }
      else
      {
        v24 = MiSearchNumaNodeTable(BugCheckParameter2);
        MiInitializeDpcGang(v64, *((_DWORD *)v24 + 2), v25, 1u);
        v64[21] = (__int64)v56;
        v26 = LODWORD(v64[23]) | 4;
        HIDWORD(v64[22]) = a4;
        v64[0] = BugCheckParameter2;
        v64[1] = v23;
        LODWORD(v64[23]) |= 4u;
        v64[20] = (__int64)v55;
        if ( v55 )
        {
          v26 |= 8u;
          LODWORD(v64[23]) = v26;
        }
        if ( (a4 & 0x80000) == 0 )
          LODWORD(v64[23]) = v26 | 2;
        MiStartDpcGang(v64);
        MiEndDpcGang((__int64)v64);
      }
      if ( v20 )
      {
        MiUnlockProtoPoolPage(v54, v21);
        v20 += 8 * v23;
      }
      a2 -= v23;
      BugCheckParameter2 += v23;
      v55 += 2048 * v23;
    }
    return;
  }
  if ( (a4 & 2) == 0 )
    MiUpdateLargePageBitMap((__int64)&MiSystemPartition, BugCheckParameter2, a2, 0, 0);
  v27 = *(unsigned __int16 **)(qword_140C67048 + 8 * ((*(_QWORD *)(v10 + 40) >> 43) & 0x3FFLL));
  *((_QWORD *)&v61 + 1) |= 0x8000000000000000uLL;
  *((_QWORD *)&v58 + 1) |= 0x8000000000000000uLL;
  v28 = (unsigned __int64)*v27 << 43;
  BYTE2(v59) = v54 | BYTE2(v59) & 0xF8;
  v55 = v27;
  *((_QWORD *)&v59 + 1) ^= (*((_QWORD *)&v59 + 1) ^ v28) & 0x1FF80000000000LL;
  if ( v27 != (unsigned __int16 *)&MiSystemPartition )
    MiUpdatePartitionChildPageCounts(&MiSystemPartition, v27, BugCheckParameter2, a2);
  v29 = v10 + 48 * a2;
  v30 = 0LL;
  v31 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v31 <= 0xFu )
  {
    v32 = KeGetCurrentPrcb()->SchedulerAssist;
    if ( v31 == 2 )
      LODWORD(v33) = 4;
    else
      v33 = (-1LL << (v31 + 1)) & 4;
    v32[5] |= v33;
  }
  v52[0] = v31;
  if ( v10 < v29 )
  {
    v34 = a4 & 0x20;
    v35 = v10 + 24;
    while ( 1 )
    {
      v53 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)v35, 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v53);
        while ( *(__int64 *)v35 < 0 );
      }
      if ( (*(_BYTE *)(v35 + 11) & 0x40) != 0 )
        MiSetPfnRemovalRequested(v10, 0LL, 1LL);
      LOBYTE(v36) = MiPageCombiningActive((__int64)v55);
      if ( v36 )
        break;
      if ( v34 )
        goto LABEL_56;
      v37 = v58;
      *(_OWORD *)v10 = v57;
      v38 = v59;
LABEL_57:
      *(_OWORD *)(v10 + 16) = v37;
      *(_OWORD *)(v10 + 32) = v38;
LABEL_58:
      _InterlockedAnd64((volatile signed __int64 *)v35, 0x7FFFFFFFFFFFFFFFuLL);
      v10 += 48LL;
      v35 += 48LL;
      if ( (++v30 & 0x3F) != 0 || !KeShouldYieldProcessor() )
      {
        v31 = v52[0];
      }
      else
      {
        if ( KiIrqlFlags && (v41 = KeGetCurrentIrql(), (KiIrqlFlags & 1) != 0) && v41 <= 0xFu )
        {
          v42 = v52[0];
          if ( v52[0] <= 0xFu && v41 >= 2u )
          {
            v43 = KeGetCurrentPrcb();
            v44 = v43->SchedulerAssist;
            v42 = v52[0];
            v45 = ~(unsigned __int16)(-1LL << (v52[0] + 1));
            v17 = (v45 & v44[5]) == 0;
            v44[5] &= v45;
            if ( v17 )
              KiRemoveSystemWorkPriorityKick((__int64)v43);
          }
        }
        else
        {
          v42 = v52[0];
        }
        __writecr8(v42);
        v31 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v31 <= 0xFu )
        {
          v46 = KeGetCurrentPrcb()->SchedulerAssist;
          if ( v31 == 2 )
            LODWORD(v47) = 4;
          else
            v47 = (-1LL << (v31 + 1)) & 4;
          v46[5] |= v47;
        }
        v52[0] = v31;
      }
      if ( v10 >= v29 )
        goto LABEL_78;
    }
    v39 = v58;
    *(_OWORD *)v10 = v57;
    v40 = v59;
    *(_OWORD *)(v10 + 16) = v39;
    *(_OWORD *)(v10 + 32) = v40;
    MiAbortCombineScan(v10);
    if ( !v34 )
      goto LABEL_58;
LABEL_56:
    v37 = v61;
    *(_OWORD *)v10 = v60;
    v38 = v62;
    goto LABEL_57;
  }
LABEL_78:
  if ( KiIrqlFlags )
  {
    v48 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v48 <= 0xFu && v31 <= 0xFu && v48 >= 2u )
    {
      v49 = KeGetCurrentPrcb();
      v50 = v49->SchedulerAssist;
      v31 = v52[0];
      v51 = ~(unsigned __int16)(-1LL << (v52[0] + 1));
      v17 = (v51 & v50[5]) == 0;
      v50[5] &= v51;
      if ( v17 )
        KiRemoveSystemWorkPriorityKick((__int64)v49);
    }
  }
  __writecr8(v31);
}
