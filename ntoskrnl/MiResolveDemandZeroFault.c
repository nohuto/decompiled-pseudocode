/*
 * XREFs of MiResolveDemandZeroFault @ 0x14026B720
 * Callers:
 *     MiSystemFault @ 0x1402220A0 (MiSystemFault.c)
 *     MiDispatchFault @ 0x14026A900 (MiDispatchFault.c)
 *     MiResolveProtoPteFault @ 0x140270A50 (MiResolveProtoPteFault.c)
 * Callees:
 *     MiCheckVirtualAddress @ 0x140225600 (MiCheckVirtualAddress.c)
 *     MiCheckUserVirtualAddress @ 0x1402258B0 (MiCheckUserVirtualAddress.c)
 *     MiLocateAddress @ 0x140228680 (MiLocateAddress.c)
 *     MiResolvePrivateZeroFault @ 0x14026BD60 (MiResolvePrivateZeroFault.c)
 *     MiCompleteProtoPteFault @ 0x14026F5F0 (MiCompleteProtoPteFault.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14027F8D0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiUnlockProtoPoolPage @ 0x1402861D0 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140286264 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiCreateSharedZeroPages @ 0x14028A420 (MiCreateSharedZeroPages.c)
 *     MiExpandSharedZeroCluster @ 0x14029E7B4 (MiExpandSharedZeroCluster.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 *     MiUnlockVadTree @ 0x140330EC8 (MiUnlockVadTree.c)
 *     MiLockVadTree @ 0x1403334B4 (MiLockVadTree.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 */

__int64 __fastcall MiResolveDemandZeroFault(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r9
  unsigned __int64 v5; // rdi
  int v9; // r10d
  __int64 v10; // rcx
  char v11; // r8
  unsigned __int64 v12; // rcx
  struct _LIST_ENTRY *Flink; // r8
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r10
  __int64 **v16; // rsi
  int v17; // ebx
  unsigned __int64 v18; // r12
  struct _KTHREAD *CurrentThread; // r13
  _KPROCESS *v20; // rdx
  unsigned __int64 v21; // rcx
  __int64 v22; // rdx
  unsigned __int64 v23; // rcx
  __int64 v24; // r13
  unsigned __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v28; // rbx
  int v29; // eax
  __int64 v30; // rsi
  int v31; // r13d
  unsigned __int64 v32; // r12
  unsigned __int64 v33; // rsi
  unsigned __int64 v34; // rax
  __int64 v35; // r15
  __int64 v36; // rbx
  int v37; // r8d
  int v38; // eax
  unsigned int v39; // eax
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // r12
  __int64 **Address; // rax
  __int64 v45; // rdx
  __int64 v46; // rax
  unsigned __int64 v47; // rax
  struct _LIST_ENTRY *v48; // rdx
  __int64 v49; // rax
  unsigned __int64 v50; // [rsp+30h] [rbp-49h]
  unsigned __int64 v51; // [rsp+30h] [rbp-49h]
  __int64 **v52; // [rsp+38h] [rbp-41h] BYREF
  unsigned __int64 Process; // [rsp+40h] [rbp-39h] BYREF
  int v54; // [rsp+48h] [rbp-31h] BYREF
  _QWORD v55[2]; // [rsp+50h] [rbp-29h] BYREF
  unsigned __int64 v56; // [rsp+60h] [rbp-19h]
  unsigned __int64 v57; // [rsp+68h] [rbp-11h]
  int v58; // [rsp+70h] [rbp-9h]
  int v59; // [rsp+74h] [rbp-5h]
  __int64 v60; // [rsp+78h] [rbp-1h]
  int v61; // [rsp+80h] [rbp+7h]
  int v62; // [rsp+84h] [rbp+Bh]
  unsigned __int64 v63; // [rsp+88h] [rbp+Fh]
  __int64 **v64; // [rsp+90h] [rbp+17h]
  __int64 v65; // [rsp+98h] [rbp+1Fh]
  _KPROCESS *v66; // [rsp+E0h] [rbp+67h] BYREF
  __int64 v67; // [rsp+F0h] [rbp+77h]
  __int64 v68; // [rsp+F8h] [rbp+7Fh]

  v68 = a4;
  v67 = a3;
  v4 = *(_QWORD *)(a1 + 56);
  v5 = 0LL;
  v60 = 0LL;
  v62 = 0;
  v55[0] = 0LL;
  v9 = 0;
  v65 = 0LL;
  if ( (*(_BYTE *)(v4 + 184) & 7) == 0 )
  {
    v9 = 64;
    LODWORD(v55[0]) = 64;
  }
  v10 = *(_QWORD *)(a1 + 16);
  v11 = v10;
  v12 = v10 & 0xFFFFFFFFFFFFFFFEuLL;
  Flink = (struct _LIST_ENTRY *)(v11 & 1);
  if ( Flink )
  {
    switch ( *(_BYTE *)v12 )
    {
      case 2:
        v9 |= 1u;
        LODWORD(v55[0]) = v9;
        break;
      case 1:
        v9 |= 2u;
        LODWORD(v55[0]) = v9;
        break;
      case 5:
        v9 |= 8u;
        LODWORD(v55[0]) = v9;
        break;
    }
    if ( *(_BYTE *)v12 == 4 )
      goto LABEL_16;
  }
  if ( (v9 & 0xB) != 0 )
  {
LABEL_16:
    v14 = v12;
    if ( Flink && *(_BYTE *)v12 == 4 )
      v65 = *(_QWORD *)(v12 + 48);
    if ( (v9 & 2) != 0 && (*(_DWORD *)(v12 + 80) & 0x4000) != 0 )
    {
      v9 |= 4u;
      LODWORD(v55[0]) = v9;
    }
    if ( (v9 & 8) != 0 )
    {
      if ( *(_QWORD *)(*(_QWORD *)(v12 + 8) + 8LL) > 0x1000uLL )
      {
        v9 |= 0x10u;
        LODWORD(v55[0]) = v9;
      }
      if ( (*(_DWORD *)(v12 + 56) & 0x20) != 0 )
      {
        v9 |= 0x10000u;
        LODWORD(v55[0]) = v9;
      }
    }
  }
  else
  {
    v14 = 0LL;
  }
  v63 = v14;
  if ( (v9 & 6) != 2 )
  {
    if ( (v9 & 8) != 0 && (*(_DWORD *)(v14 + 56) & 8) != 0 )
    {
      if ( a3 )
      {
        LOBYTE(v14) = 17;
        MiUnlockProtoPoolPage(a3, v14);
      }
      return 3221225495LL;
    }
    v15 = *(_QWORD *)a1;
    v16 = 0LL;
    Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
    v50 = v15;
    v52 = 0LL;
    if ( Flink && (*(_BYTE *)v12 == 2 || *(_BYTE *)v12 == 4 || *(_BYTE *)v12 == 7 || *(_BYTE *)v12 == 8) )
    {
      v17 = *(_DWORD *)(v12 + 40);
      if ( v17 )
        goto LABEL_71;
    }
    else
    {
      v17 = 0;
    }
    v18 = 0LL;
    if ( Flink )
      v18 = v12;
    if ( (*(_BYTE *)(v4 + 184) & 7) != 0 )
      goto LABEL_34;
    CurrentThread = KeGetCurrentThread();
    v20 = CurrentThread->ApcState.Process;
    v66 = v20;
    v21 = v20[1].ActiveProcessors.StaticBitmap[28];
    if ( v15 >= 0xFFFFF68000000000uLL && v15 <= 0xFFFFF6FFFFFFFFFFuLL )
    {
      v16 = v52;
LABEL_69:
      if ( v18 && CurrentThread->ApcStateIndex == 1 )
        v17 = v20->IdealNode[CurrentThread->AffinityPrimaryGroup] + 1;
      if ( v17 )
        goto LABEL_71;
LABEL_34:
      v61 = v17;
      v56 = v15;
      v55[1] = a1;
      if ( !v16 && a2 <= 0xFFFFF6BFFFFFFF78uLL && a2 >= 0xFFFFF68000000000uLL )
      {
        Flink = (struct _LIST_ENTRY *)Process;
        v22 = *(_QWORD *)(qword_140C67048 + 8LL * *(unsigned __int16 *)(Process + 1838));
        if ( *(_DWORD *)(v22 + 1192) )
        {
          if ( *(_QWORD *)(v22 + 1344) == Process )
          {
            MiLockVadTree(1LL);
            Address = MiLocateAddress(v50);
            LOBYTE(v45) = 17;
            v52 = Address;
            v16 = Address;
            MiUnlockVadTree(1LL, v45);
            v15 = v50;
          }
        }
      }
      v23 = *(_QWORD *)a2;
      v64 = v16;
      if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0x600000) != 0 )
      {
        if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v23 & 1) != 0
          && ((v23 & 0x20) == 0 || (v23 & 0x42) == 0) )
        {
          Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( Flink )
          {
            v46 = *((_QWORD *)&Flink->Flink + ((a2 >> 3) & 0x1FF));
            if ( (v46 & 0x20) != 0 )
              v23 |= 0x20uLL;
            if ( (v46 & 0x42) != 0 )
              v23 |= 0x42uLL;
          }
        }
        v16 = v52;
      }
      v24 = v67;
      if ( !v67 )
      {
        v25 = *(_QWORD *)(a1 + 16);
        v26 = (v23 >> 5) & 0x1F;
        if ( (v25 & 1) != 0 && (v25 &= ~1uLL, *(_BYTE *)v25 == 4) || (v23 & 0x400) != 0 )
          LODWORD(v26) = 4;
        v58 = v26;
        v59 = v26;
        v57 = 0LL;
        return MiResolvePrivateZeroFault(v55, v25);
      }
      v28 = v63;
      v57 = a2;
      Process = 1LL;
      LODWORD(v66) = 24;
      if ( (v55[0] & 0x15) != 0 && (v55[0] & 0x40) != 0 )
      {
        v41 = MiCheckVirtualAddress(v15, &v66, &v52);
        v16 = v52;
        v43 = v41;
        if ( v52 )
        {
          LOBYTE(v42) = 17;
          MiUnlockVadTree(1LL, v42);
        }
      }
      else
      {
        if ( !v16 || (v47 = *((unsigned int *)v16 + 12), (v47 & 0x200000) != 0) || MiVadPageSizes[(v47 >> 19) & 3] != 16 )
        {
          v58 = 24;
          v59 = 24;
LABEL_53:
          v29 = MiCreateSharedZeroPages(v55, &Process);
          v30 = v67;
          v31 = v29;
          v54 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v30 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v54);
            while ( *(__int64 *)(v30 + 24) < 0 );
          }
          *(_BYTE *)(v30 + 34) &= ~0x20u;
          MiRemoveLockedPageChargeAndDecRef(v30);
          _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v31 >= 0 && (v55[0] & 4) == 0 )
          {
            v32 = v56;
            v33 = a2 - 8LL * (unsigned int)((v50 - v56) >> 12);
            v34 = *(_QWORD *)a1;
            v51 = *(_QWORD *)a1;
            v35 = 0LL;
            if ( (v55[0] & 8) != 0 )
              v35 = v28;
            if ( Process )
            {
              do
              {
                v36 = *(_QWORD *)v33;
                if ( (unsigned int)MiPteInShadowRange(v33)
                  && (MiFlags & 0x600000) != 0
                  && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
                  && (v36 & 1) != 0
                  && ((v36 & 0x20) == 0 || (v36 & 0x42) == 0) )
                {
                  v48 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
                  if ( v48 )
                  {
                    v49 = *((_QWORD *)&v48->Flink + ((v33 >> 3) & 0x1FF));
                    if ( (v49 & 0x20) != 0 )
                      LODWORD(v36) = v36 | 0x20;
                    if ( (v49 & 0x42) != 0 )
                      LODWORD(v36) = v36 | 0x42;
                  }
                }
                v37 = v68;
                *(_QWORD *)a1 = v32;
                v38 = MiCompleteProtoPteFault(a1, v36, v37, 1, v35);
                v32 += 4096LL;
                if ( !v5 && v38 < 0 )
                  v31 = v38;
                __incgsdword(0x2E9Cu);
                ++v5;
                v33 += 8LL;
              }
              while ( v5 < Process );
              v34 = v51;
            }
            *(_QWORD *)a1 = v34;
          }
          return (unsigned int)v31;
        }
        v43 = MiCheckUserVirtualAddress(v15, (__int64)v16, (__int64)Flink, (int *)&v66);
      }
      v59 = (int)v66;
      v58 = (int)v66;
      if ( (v55[0] & 4) != 0
        && (unsigned int)v66 >> 3 != 1
        && ((unsigned int)v66 >> 3 != 3 || ((unsigned __int8)v66 & 7) == 0) )
      {
        LOBYTE(v42) = 17;
        MiUnlockProtoPoolPage(v24, v42);
        return 0LL;
      }
      if ( v43 && v16 && (_DWORD)v66 != 24 && ((unsigned int)v66 & 0xFFFFFFF8) != 0x10 )
        Process = MiExpandSharedZeroCluster(v55);
      goto LABEL_53;
    }
    if ( !v18 && !*(_QWORD *)(v21 + 408) && !*(_QWORD *)(v21 + 416) && !*(_BYTE *)(v21 + 340) )
    {
      v16 = v52;
      goto LABEL_34;
    }
    MiLockVadTree(1LL);
    v16 = MiLocateAddress(*(_QWORD *)a1);
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[28]
                                                      + 284));
    v52 = v16;
    if ( !v16
      || (v39 = *((_DWORD *)v16 + 12), (v17 = (v39 >> 12) & 0x7F) == 0)
      && ((v39 & 0x200000) != 0 || (v40 = *v16[9]) == 0 || (v17 = (*(_DWORD *)(v40 + 56) >> 20) & 0x7F) == 0) )
    {
      v15 = v50;
      v20 = v66;
      goto LABEL_69;
    }
LABEL_71:
    *(_DWORD *)(a1 + 80) |= 0x10000u;
    v15 = v50;
    goto LABEL_34;
  }
  if ( a3 )
  {
    LOBYTE(v14) = 17;
    MiUnlockProtoPoolPage(a3, v14);
  }
  return 0LL;
}
