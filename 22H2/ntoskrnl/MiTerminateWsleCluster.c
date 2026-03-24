/*
 * XREFs of MiTerminateWsleCluster @ 0x1402BB3B0
 * Callers:
 *     MiDeleteSystemPagableVm @ 0x140286100 (MiDeleteSystemPagableVm.c)
 *     MiRemoveMappedPtes @ 0x140288B80 (MiRemoveMappedPtes.c)
 *     MiDecommitPages @ 0x1402B4EB0 (MiDecommitPages.c)
 *     MiAppendWsleCluster @ 0x1402B6160 (MiAppendWsleCluster.c)
 *     MiDeleteVa @ 0x1402B8110 (MiDeleteVa.c)
 *     MiDeleteVaTail @ 0x1402BB1C0 (MiDeleteVaTail.c)
 *     MiDeletePteWsleCluster @ 0x14031A2EC (MiDeletePteWsleCluster.c)
 * Callees:
 *     MiDeleteValidSystemPage @ 0x1402A94B0 (MiDeleteValidSystemPage.c)
 *     MiInsertTbFlushEntry @ 0x1402B6400 (MiInsertTbFlushEntry.c)
 *     MiRemoveWsle @ 0x1402B9670 (MiRemoveWsle.c)
 *     MiFlushTbList @ 0x1402BBBB0 (MiFlushTbList.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiCountWslesInPageTable @ 0x1402DAFF0 (MiCountWslesInPageTable.c)
 *     MiInitializeTbFlushStamps @ 0x1402E9930 (MiInitializeTbFlushStamps.c)
 *     MiCompressTbFlushList @ 0x1402FBB30 (MiCompressTbFlushList.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     MiUnlockWsle @ 0x140338C2C (MiUnlockWsle.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     qsort @ 0x1403D23C0 (qsort.c)
 *     memset @ 0x140413800 (memset.c)
 */

__int64 __fastcall MiTerminateWsleCluster(__int64 a1)
{
  __int64 v2; // rdx
  unsigned __int64 v3; // r13
  unsigned __int64 v4; // r8
  __int64 v5; // rdi
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // r15
  char v8; // al
  unsigned __int8 v9; // al
  int v10; // ecx
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rsi
  __int64 v14; // rbx
  __int64 v15; // rdx
  unsigned __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  char v21; // r9
  __int64 v22; // rbx
  unsigned __int64 v23; // r15
  unsigned int v24; // r8d
  char v25; // r9
  __int64 v26; // rax
  unsigned __int64 v27; // r10
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rbx
  _KPROCESS *Process; // rcx
  unsigned __int64 *v31; // rbx
  __int64 v32; // rbx
  __int64 result; // rax
  __int64 v34; // rax
  __int64 v35; // rdx
  unsigned __int64 v36; // rax
  char v37; // r11
  char v38; // cl
  int v39; // edx
  unsigned __int64 v40; // rdi
  int v41; // esi
  unsigned __int64 v42; // rbx
  __int64 v43; // rdx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rax
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v50; // rax
  __int64 v51; // rdx
  unsigned __int64 v53; // rcx
  __int64 v54; // rsi
  unsigned __int64 v55; // rdi
  unsigned __int64 v56; // rbx
  struct _LIST_ENTRY *v57; // rdx
  __int64 v58; // rax
  __int64 v59; // rdx
  struct _LIST_ENTRY *v60; // rax
  __int64 v61; // rax
  struct _LIST_ENTRY *v62; // rdx
  __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // [rsp+30h] [rbp-D0h]
  unsigned __int64 v66; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v67; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v68; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v69; // [rsp+50h] [rbp-B0h] BYREF
  _OWORD v70[3]; // [rsp+58h] [rbp-A8h] BYREF
  int v71; // [rsp+90h] [rbp-70h] BYREF
  __int16 v72; // [rsp+94h] [rbp-6Ch]
  __int16 v73; // [rsp+96h] [rbp-6Ah]
  __int64 v74; // [rsp+98h] [rbp-68h]
  __int64 v75; // [rsp+A0h] [rbp-60h]
  _QWORD Base[21]; // [rsp+A8h] [rbp-58h] BYREF
  _DWORD v77[8]; // [rsp+150h] [rbp+50h] BYREF

  v73 = 0;
  memset(&Base[1], 0, 0x98uLL);
  v3 = *(_QWORD *)(a1 + 8);
  v67 = v3;
  memset(v70, 0, sizeof(v70));
  if ( !v3 )
    return 0LL;
  v4 = 0xFFFFF68000000000uLL;
  v5 = *(_QWORD *)a1;
  v6 = 0LL;
  v65 = *(_QWORD *)a1;
  v7 = (__int64)(v3 << 25) >> 16;
  v8 = *(_BYTE *)(*(_QWORD *)a1 + 184LL);
  v68 = v7;
  v9 = v8 & 7;
  if ( v9 )
  {
    v10 = 2;
    if ( v9 >= 2u )
      v10 = 0;
  }
  else
  {
    v10 = 1;
  }
  v74 = 20LL;
  v71 = v10;
  v72 = 0;
  v75 = 0LL;
  Base[0] = 0LL;
  v11 = 0xFFFFF6FB7DBED7F8uLL;
  if ( (*(_BYTE *)(v5 + 184) & 7) == 0 )
  {
    if ( !*(_QWORD *)(a1 + 16) )
      goto LABEL_26;
    v12 = v3;
    v13 = (__int64)(v3 << 25) >> 16;
    while ( 1 )
    {
      v14 = *(_QWORD *)v12;
      if ( v12 >= 0xFFFFF6FB7DBED000uLL
        && v12 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v14 & 1) != 0
        && ((v14 & 0x20) == 0 || (v14 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v50 = *((_QWORD *)&Flink->Flink + ((v12 >> 3) & 0x1FF));
          v51 = v14 | 0x20;
          if ( (v50 & 0x20) == 0 )
            v51 = *(_QWORD *)v12;
          v14 = v51;
          if ( (v50 & 0x42) != 0 )
            v14 = v51 | 0x42;
        }
      }
      v15 = *(_QWORD *)v12;
      v16 = v14 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
      v66 = v16;
      if ( v12 >= 0xFFFFF6FB7DBED000uLL && v12 <= 0xFFFFF6FB7DBED7F8uLL )
      {
        if ( (unsigned int)MiPteHasShadow(0xFFFFF6FFFFFFFFFFuLL, v15, 0xFFFFF68000000000uLL, 0xFFFFF6FB7DBED7F8uLL) )
          v15 |= 0x20uLL;
      }
      if ( (MiFlags & 0x800) != 0 )
      {
        v15 = 32LL;
      }
      else if ( (MiFlags & 0x4000000) != 0 )
      {
        _mm_lfence();
      }
      if ( (v15 & 0x20) != 0 )
      {
        if ( (unsigned int)MiPteInShadowRange(v12, v15) && (unsigned int)MiPteHasShadow(v18, v17, v19, v20) )
        {
          *(_QWORD *)v12 = v16;
          MiWritePteShadow(v12, v16);
        }
        else
        {
          *(_QWORD *)v12 = v16;
        }
        v4 = 0xFFFFF68000000000uLL;
      }
      else
      {
        v37 = _InterlockedExchange64((volatile __int64 *)v12, v16);
        if ( v12 >= 0xFFFFF6FB7DBED000uLL && v12 <= v11 )
        {
          MiWritePteShadow(v12, v16);
          v4 = 0xFFFFF68000000000uLL;
        }
        if ( (v37 & 0x20) == 0 )
          goto LABEL_24;
      }
      v21 = v72;
      v22 = 1LL;
      v23 = v13;
      if ( v71 != 1 && (v72 & 8) == 0 && v13 >= v4 && v13 <= 0xFFFFF6FFFFFFFFFFuLL )
      {
        v21 = v72 | 8;
        LOBYTE(v72) = v72 | 8;
      }
      v24 = HIDWORD(v74);
      if ( !HIDWORD(v74) )
      {
LABEL_36:
        if ( HIDWORD(v74) >= (unsigned int)v74 )
        {
          HIBYTE(v72) = 1;
        }
        else
        {
          while ( 1 )
          {
            v35 = (unsigned __int64)(v22 - 1) > 0x3FF ? 1024LL : v22;
            v36 = v23 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v35 - 1) & 0x3FF;
            v22 -= v35;
            v23 += v35 << 12;
            Base[v24] = v36;
            v75 += v35;
            v24 = HIDWORD(v74) + 1;
            HIDWORD(v74) = v24;
            if ( v24 == (_DWORD)v74 && (v72 & 4) == 0 )
            {
              qsort(Base, v24, 8uLL, MiTbFlushSort);
              MiCompressTbFlushList(&v71);
              v24 = HIDWORD(v74);
              if ( HIDWORD(v74) == (_DWORD)v74 )
                break;
            }
            if ( !v22 )
              goto LABEL_24;
          }
          if ( v22 )
          {
            HIBYTE(v72) = 1;
            v75 = HIDWORD(v74);
          }
        }
        goto LABEL_24;
      }
      v25 = v21 & 4;
      if ( v25
        || (v26 = Base[HIDWORD(v74) - 1], (v26 & 0xC00) != 0)
        || (v27 = Base[HIDWORD(v74) - 1] & 0x3FFLL, (v26 & 0xFFFFFFFFFFFFF000uLL) + ((v27 + 1) << 12) != v13)
        || v27 + 1 < v27
        || v27 + 1 > 0x3FF )
      {
        if ( v25 )
          goto LABEL_36;
        v34 = Base[HIDWORD(v74) - 1];
        if ( (v34 & 0xC00) != 0 )
          goto LABEL_36;
        if ( (v34 & 0xFFFFFFFFFFFFF000uLL) != v13 + 4096 )
          goto LABEL_36;
        v53 = Base[HIDWORD(v74) - 1] & 0x3FFLL;
        if ( v53 + 1 < v53 || v53 + 1 > 0x3FF )
          goto LABEL_36;
        ++v75;
        Base[HIDWORD(v74) - 1] = (v34 - 4096) ^ ((unsigned __int16)(v34 - 4096) ^ (unsigned __int16)(v34 - 4096 + 1)) & 0x3FF;
      }
      else
      {
        ++v75;
        Base[HIDWORD(v74) - 1] = v26 ^ ((unsigned __int16)v26 ^ (unsigned __int16)(v26 + 1)) & 0x3FF;
      }
LABEL_24:
      ++v6;
      v4 = 0xFFFFF68000000000uLL;
      v12 += 8LL;
      v13 += 4096LL;
      v11 = 0xFFFFF6FB7DBED7F8uLL;
      if ( v6 >= *(_QWORD *)(a1 + 16) )
      {
        v3 = v67;
        v7 = v68;
        v5 = v65;
        goto LABEL_26;
      }
    }
  }
  if ( (*(_BYTE *)(a1 + 28) & 0xF) == 8 && *(_QWORD *)(a1 + 16) )
  {
    v54 = (__int64)(v3 << 25) >> 16;
    v55 = v3;
    do
    {
      v56 = *(_QWORD *)v55;
      if ( (unsigned int)MiPteInShadowRange(v55, v2)
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v56 & 1) != 0
        && ((v56 & 0x20) == 0 || (v56 & 0x42) == 0) )
      {
        v57 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v57 )
        {
          v58 = *((_QWORD *)&v57->Flink + ((v55 >> 3) & 0x1FF));
          v59 = v56 | 0x20;
          if ( (v58 & 0x20) == 0 )
            v59 = v56;
          v56 = v59;
          if ( (v58 & 0x42) != 0 )
            v56 = v59 | 0x42;
        }
      }
      MiUnlockWsle(v65, v54, 48 * ((v56 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
      ++v6;
      v55 += 8LL;
      v54 += 4096LL;
    }
    while ( v6 < *(_QWORD *)(a1 + 16) );
    v3 = v67;
    v7 = v68;
    v5 = v65;
  }
  if ( (*(_DWORD *)(a1 + 24) & 4) == 0 )
    MiInsertTbFlushEntry((__int64)&v71, v7, *(_QWORD *)(a1 + 16), 0);
LABEL_26:
  MiRemoveWsle(v5, v7, *(_QWORD *)(a1 + 16), *(_BYTE *)(a1 + 28), 10, *(_DWORD *)(a1 + 24) & 1);
  v28 = ((v7 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v29 = *(_QWORD *)v28;
  if ( v28 >= 0xFFFFF6FB7DBED000uLL
    && v28 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v29 & 1) != 0
    && ((v29 & 0x20) == 0 || (v29 & 0x42) == 0) )
  {
    v60 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v60 )
    {
      v61 = *((_QWORD *)&v60->Flink + ((v28 >> 3) & 0x1FF));
      v28 = v29 | 0x20;
      if ( (v61 & 0x20) == 0 )
        v28 = v29;
      v29 = v28;
      if ( (v61 & 0x42) != 0 )
        v29 = v28 | 0x42;
    }
  }
  v69 = v29;
  if ( (unsigned int)MiPteInShadowRange(&v69, v28) )
  {
    if ( (MiFlags & 0xC00000) != 0 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process->AddressPolicy != 1 && (v29 & 1) != 0 && ((v29 & 0x20) == 0 || (v29 & 0x42) == 0) )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        v62 = Process[1].ProcessListEntry.Flink;
        if ( v62 )
        {
          v63 = *((_QWORD *)&v62->Flink + (((unsigned __int64)&v69 >> 3) & 0x1FF));
          v64 = v29 | 0x20;
          Process = (_KPROCESS *)(unsigned __int8)v63;
          LOBYTE(Process) = v63 & 0x20;
          if ( (v63 & 0x20) == 0 )
            v64 = v29;
          v29 = v64;
          if ( (v63 & 0x42) != 0 )
            v29 = v64 | 0x42;
        }
      }
    }
  }
  v31 = (unsigned __int64 *)(48 * ((v29 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
  if ( ((*(_DWORD *)v31 >> 4) & 0x3FF) == 0 )
  {
    MiCountWslesInPageTable(Process, v7, v77);
    v38 = 8;
    while ( 1 )
    {
      v39 = v77[(unsigned __int8)--v38];
      if ( v39 )
        break;
      if ( !v38 )
        goto LABEL_29;
    }
    *v31 = *v31 & 0xFFFFFFFFFFFE000FuLL | (16 * (v39 & 0x3FF | ((unsigned __int64)(v38 & 7) << 10)));
  }
LABEL_29:
  if ( (*(_BYTE *)(v5 + 184) & 7) != 0 )
  {
    v40 = 0LL;
    v41 = (2 * (*(_DWORD *)(a1 + 24) & 8)) | 4;
    if ( (*(_DWORD *)(a1 + 24) & 0x10) == 0 )
      v41 = 2 * (*(_DWORD *)(a1 + 24) & 8);
    if ( *(_QWORD *)(a1 + 16) )
    {
      while ( 1 )
      {
        MiDeleteValidSystemPage(v65, v3, v41, (__int64)v70);
        if ( (*(_DWORD *)(a1 + 24) & 4) != 0 )
          break;
LABEL_61:
        ++v40;
        v3 += 8LL;
        v7 += 4096LL;
        if ( v40 >= *(_QWORD *)(a1 + 16) )
          goto LABEL_30;
      }
      v66 = 0LL;
      MiInitializeTbFlushStamps(&v66);
      v42 = v66;
      if ( (unsigned int)MiPteInShadowRange(v3, v43) )
      {
        if ( (unsigned int)MiPteHasShadow(v45, v44, v46, v47) )
        {
          if ( !HIBYTE(word_140C4E008) && (v42 & 1) != 0 )
            v42 |= 0x8000000000000000uLL;
          *(_QWORD *)v3 = v42;
          MiWritePteShadow(v3, v42);
          goto LABEL_56;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (v42 & 1) != 0 )
        {
          v42 |= 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v3 = v42;
LABEL_56:
      v48 = v66;
      if ( qword_140C4DF40 && (v66 & 0x10) == 0 )
        v48 = v66 & ~qword_140C4DF40;
      if ( (v48 & 0xFFFFFFFF00000000uLL) == 0 )
        MiInsertTbFlushEntry((__int64)&v71, v7, 1LL, 0);
      goto LABEL_61;
    }
  }
LABEL_30:
  v32 = 0LL;
  if ( (*(_BYTE *)(a1 + 24) & 1) != 0 )
    v32 = *((_QWORD *)&v70[0] + 1);
  MiFlushTbList(&v71);
  result = v32;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  return result;
}
