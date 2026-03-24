/*
 * XREFs of MiResolveDemandZeroFault @ 0x14020FB10
 * Callers:
 *     MiDispatchFault @ 0x14020EEC0 (MiDispatchFault.c)
 *     MiResolveProtoPteFault @ 0x140215390 (MiResolveProtoPteFault.c)
 *     MiSystemFault @ 0x140291A80 (MiSystemFault.c)
 * Callees:
 *     MiResolvePrivateZeroFault @ 0x1402100E0 (MiResolvePrivateZeroFault.c)
 *     MiCompleteProtoPteFault @ 0x140213D50 (MiCompleteProtoPteFault.c)
 *     MiUnlockProtoPoolPage @ 0x140239160 (MiUnlockProtoPoolPage.c)
 *     MiCreateSharedZeroPages @ 0x1402410E0 (MiCreateSharedZeroPages.c)
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     MiLocateAddress @ 0x14025B070 (MiLocateAddress.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1402A9250 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiCheckUserVirtualAddress @ 0x1402AF090 (MiCheckUserVirtualAddress.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiCheckVirtualAddress @ 0x1402E34B0 (MiCheckVirtualAddress.c)
 *     MiExpandSharedZeroCluster @ 0x140339F98 (MiExpandSharedZeroCluster.c)
 */

__int64 __fastcall MiResolveDemandZeroFault(unsigned __int64 *a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // r12
  int v8; // r10d
  char v9; // r15
  char v10; // r15
  unsigned __int64 v11; // r11
  __int64 v12; // rcx
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // r9
  _KPROCESS *Process; // r13
  unsigned __int64 v16; // r10
  __int64 v17; // r14
  struct _KTHREAD *CurrentThread; // r15
  _KPROCESS *v19; // r13
  unsigned __int64 v20; // rcx
  __int64 v21; // rdx
  unsigned __int64 v22; // rcx
  __int64 v23; // r8
  unsigned __int64 v24; // rdx
  __int64 v25; // rax
  char v27; // r13
  char v28; // r15
  unsigned int v29; // ecx
  __int64 v30; // rdx
  int v31; // eax
  __int64 v32; // r14
  int v33; // r13d
  __int64 v34; // rdx
  unsigned __int64 v35; // r15
  unsigned __int64 v36; // r14
  unsigned __int64 v37; // r12
  __int64 v38; // r12
  __int64 v39; // rbx
  int v40; // r8d
  int v41; // eax
  __int64 Address; // rax
  unsigned int v43; // ecx
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rax
  struct _LIST_ENTRY *Flink; // r8
  __int64 v48; // rax
  __int64 v49; // r8
  unsigned __int64 v50; // rax
  __int64 v51; // rax
  struct _LIST_ENTRY *v52; // rdx
  __int64 v53; // rax
  int v54; // edx
  unsigned __int64 v55; // [rsp+30h] [rbp-59h]
  unsigned __int64 v56; // [rsp+30h] [rbp-59h]
  __int64 v57; // [rsp+38h] [rbp-51h] BYREF
  _KPROCESS *v58; // [rsp+40h] [rbp-49h]
  unsigned __int64 v59; // [rsp+48h] [rbp-41h] BYREF
  int v60[4]; // [rsp+50h] [rbp-39h] BYREF
  _QWORD v61[2]; // [rsp+60h] [rbp-29h] BYREF
  unsigned __int64 v62; // [rsp+70h] [rbp-19h]
  unsigned __int64 v63; // [rsp+78h] [rbp-11h]
  int v64; // [rsp+80h] [rbp-9h]
  int v65; // [rsp+84h] [rbp-5h]
  __int64 v66; // [rsp+88h] [rbp-1h]
  int v67; // [rsp+90h] [rbp+7h]
  int v68; // [rsp+94h] [rbp+Bh]
  unsigned __int64 v69; // [rsp+98h] [rbp+Fh]
  __int64 v70; // [rsp+A0h] [rbp+17h]
  __int64 v71; // [rsp+A8h] [rbp+1Fh]
  int v72; // [rsp+F0h] [rbp+67h] BYREF
  __int64 v73; // [rsp+100h] [rbp+77h]
  __int64 v74; // [rsp+108h] [rbp+7Fh]

  v74 = a4;
  v73 = a3;
  v4 = a1[7];
  v5 = 0LL;
  v61[0] = 0LL;
  v6 = a2;
  v66 = 0LL;
  v68 = 0;
  v8 = 0;
  v9 = *(_BYTE *)(v4 + 184);
  v71 = 0LL;
  v10 = v9 & 7;
  if ( !v10 )
  {
    v8 = 64;
    LODWORD(v61[0]) = 64;
  }
  v11 = a1[2] & 0xFFFFFFFFFFFFFFFEuLL;
  v12 = a1[2] & 1;
  if ( v12 )
  {
    switch ( *(_BYTE *)v11 )
    {
      case 2:
        v8 |= 1u;
        break;
      case 1:
        v8 |= 2u;
        break;
      case 5:
        v8 |= 8u;
        break;
      default:
        goto LABEL_61;
    }
    LODWORD(v61[0]) = v8;
LABEL_61:
    if ( *(_BYTE *)v11 == 4 )
      goto LABEL_62;
  }
  if ( (v8 & 0xB) == 0 )
  {
    v13 = 0LL;
    goto LABEL_6;
  }
LABEL_62:
  v13 = v11;
  if ( v12 && *(_BYTE *)v11 == 4 )
    v71 = *(_QWORD *)(v11 + 40);
  if ( (v8 & 2) != 0 && (*(_DWORD *)(v11 + 80) & 0x4000) != 0 )
  {
    v8 |= 4u;
    LODWORD(v61[0]) = v8;
  }
  if ( (v8 & 8) != 0 && *(_QWORD *)(*(_QWORD *)(v11 + 8) + 8LL) > 0x1000uLL )
  {
    v8 |= 0x10u;
    LODWORD(v61[0]) = v8;
  }
LABEL_6:
  v69 = v13;
  if ( (v8 & 2) != 0 && (v8 & 4) == 0 )
  {
    if ( a3 )
    {
      LOBYTE(a2) = 17;
      MiUnlockProtoPoolPage(a3, a2);
    }
    return 0LL;
  }
  if ( (v8 & 8) != 0 && (*(_DWORD *)(v13 + 56) & 8) != 0 )
  {
    if ( a3 )
    {
      LOBYTE(a2) = 17;
      MiUnlockProtoPoolPage(a3, a2);
    }
    return 3221225495LL;
  }
  v14 = *a1;
  Process = KeGetCurrentThread()->ApcState.Process;
  v16 = a1[1] >> 57;
  v17 = 0LL;
  v58 = Process;
  v55 = v14;
  v57 = 0LL;
  if ( (_DWORD)v16 )
    goto LABEL_19;
  if ( !v12 )
  {
    v11 = 0LL;
    goto LABEL_11;
  }
  if ( *(_BYTE *)v11 == 4 )
  {
    LODWORD(v16) = *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[*(unsigned int *)(*(_QWORD *)(v11 + 40) + 588LL)]
                                                   + 192)
                                       + 146LL)
                 + 1;
  }
  else
  {
    if ( *(_BYTE *)v11 != 2 )
      goto LABEL_11;
    LODWORD(v16) = *(_DWORD *)(v11 + 40);
  }
  if ( (_DWORD)v16 )
    goto LABEL_19;
LABEL_11:
  if ( !v10 )
  {
    CurrentThread = KeGetCurrentThread();
    v19 = CurrentThread->ApcState.Process;
    v20 = v19[1].ActiveProcessorsPadding[8];
    if ( v14 >= 0xFFFFF68000000000uLL && v14 <= 0xFFFFF6FFFFFFFFFFuLL )
    {
      v17 = v57;
LABEL_55:
      if ( v11 && CurrentThread->ApcStateIndex == 1 )
        LODWORD(v16) = v19->IdealNode[CurrentThread->Affinity.Group] + 1;
      goto LABEL_18;
    }
    if ( v11 || *(_QWORD *)(v20 + 424) || *(_QWORD *)(v20 + 432) || *(_BYTE *)(v20 + 352) == 1 )
    {
      Address = MiLocateAddress(v14);
      v57 = Address;
      v17 = Address;
      if ( !Address
        || (v43 = *(_DWORD *)(Address + 48), LODWORD(v16) = (v43 >> 12) & 0x3F, !(_DWORD)v16)
        && ((v43 & 0x100000) != 0
         || (v44 = **(_QWORD **)(Address + 72)) == 0
         || (LODWORD(v16) = (*(_DWORD *)(v44 + 56) >> 20) & 0x3F, !(_DWORD)v16)) )
      {
        v14 = v55;
        goto LABEL_55;
      }
      v14 = v55;
    }
    else
    {
      v17 = v57;
    }
LABEL_18:
    Process = v58;
  }
LABEL_19:
  v67 = v16;
  v62 = v14;
  v61[1] = a1;
  if ( !v17 && v6 <= 0xFFFFF6BFFFFFFF78uLL && v6 >= 0xFFFFF68000000000uLL )
  {
    v21 = *(_QWORD *)(qword_140C4E648 + 8LL * Process[1].IdealProcessorPadding[5]);
    if ( *(_DWORD *)(v21 + 1160) )
    {
      if ( *(_KPROCESS **)(v21 + 1280) == Process )
      {
        v46 = MiLocateAddress(v14);
        v14 = v55;
        v17 = v46;
        v57 = v46;
      }
    }
  }
  v22 = *(_QWORD *)v6;
  v70 = v17;
  if ( v6 >= 0xFFFFF6FB7DBED000uLL && v6 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0xC00000) != 0 )
  {
    if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v22 & 1) != 0
      && ((v22 & 0x20) == 0 || (v22 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v48 = *((_QWORD *)&Flink->Flink + ((v6 >> 3) & 0x1FF));
        v49 = v22 | 0x20;
        if ( (v48 & 0x20) == 0 )
          v49 = v22;
        v22 = v49;
        if ( (v48 & 0x42) != 0 )
          v22 = v49 | 0x42;
      }
    }
    v17 = v57;
  }
  v23 = v73;
  if ( !v73 )
  {
    v24 = a1[2];
    v25 = (v22 >> 5) & 0x1F;
    if ( (v24 & 1) != 0 && *(_BYTE *)(v24 & 0xFFFFFFFFFFFFFFFEuLL) == 4 || (v22 & 0x400) != 0 )
      LODWORD(v25) = 4;
    v64 = v25;
    v65 = v25;
    v63 = 0LL;
    return MiResolvePrivateZeroFault(v61);
  }
  v27 = v61[0];
  v28 = 0;
  v63 = v6;
  v29 = 24;
  v59 = 1LL;
  v30 = 0LL;
  v72 = 24;
  if ( (v61[0] & 0x15) != 0 && (v61[0] & 0x40) != 0 )
  {
    v45 = MiCheckVirtualAddress(v14, &v72, &v57);
    v29 = v72;
    v30 = v45;
    v17 = v57;
    v23 = v73;
    v64 = v72;
    v65 = v72;
LABEL_89:
    if ( (v27 & 4) != 0 && v29 >> 3 != 1 && (v29 >> 3 != 3 || (v29 & 7) == 0) )
    {
      LOBYTE(v30) = 17;
      MiUnlockProtoPoolPage(v23, v30);
      return 0LL;
    }
    if ( v30 && v17 && v29 != 24 && (v29 & 0xFFFFFFF8) != 0x10 )
      v59 = MiExpandSharedZeroCluster(v61);
    goto LABEL_34;
  }
  if ( v17 )
  {
    v50 = *(unsigned int *)(v17 + 48);
    if ( (v50 & 0x100000) == 0 && MiVadPageSizes[(v50 >> 18) & 3] == 16 )
    {
      v28 = 1;
      v51 = MiCheckUserVirtualAddress(v14, &v72);
      v29 = v72;
      v30 = v51;
      v23 = v73;
    }
  }
  v64 = v29;
  v65 = v29;
  if ( v28 == 1 )
    goto LABEL_89;
LABEL_34:
  v31 = MiCreateSharedZeroPages(v61, &v59);
  v32 = v73;
  v33 = v31;
  v60[0] = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v32 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(v60);
    while ( *(__int64 *)(v32 + 24) < 0 );
  }
  *(_BYTE *)(v32 + 34) &= ~0x20u;
  MiRemoveLockedPageChargeAndDecRef(v32);
  _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v33 >= 0 && (v61[0] & 4) == 0 )
  {
    v35 = v62;
    v58 = 0LL;
    v36 = v6 - 8LL * (unsigned int)((v55 - v62) >> 12);
    v37 = *a1;
    v56 = *a1;
    if ( (v61[0] & 8) != 0 )
      v58 = (_KPROCESS *)v13;
    if ( v59 )
    {
      v38 = (__int64)v58;
      do
      {
        v39 = *(_QWORD *)v36;
        if ( (unsigned int)MiPteInShadowRange(v36, v34)
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v39 & 1) != 0
          && ((v39 & 0x20) == 0 || (v39 & 0x42) == 0) )
        {
          v52 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v52 )
          {
            v53 = *((_QWORD *)&v52->Flink + ((v36 >> 3) & 0x1FF));
            v54 = v39 | 0x20;
            if ( (v53 & 0x20) == 0 )
              v54 = v39;
            LODWORD(v39) = v54;
            if ( (v53 & 0x42) != 0 )
              LODWORD(v39) = v54 | 0x42;
          }
        }
        v40 = v74;
        *a1 = v35;
        v41 = MiCompleteProtoPteFault((_DWORD)a1, v39, v40, 1, v38);
        v35 += 4096LL;
        if ( !v5 && v41 < 0 )
          v33 = v41;
        __incgsdword(0x2E9Cu);
        ++v5;
        v36 += 8LL;
      }
      while ( v5 < v59 );
      v37 = v56;
    }
    *a1 = v37;
  }
  return (unsigned int)v33;
}
