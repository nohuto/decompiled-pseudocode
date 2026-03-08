/*
 * XREFs of MiCreateSharedZeroPages @ 0x14028A420
 * Callers:
 *     MiResolveDemandZeroFault @ 0x14026B720 (MiResolveDemandZeroFault.c)
 * Callees:
 *     MiLockAndDecrementShareCount @ 0x140210114 (MiLockAndDecrementShareCount.c)
 *     MiGetPageChain @ 0x14026E0E0 (MiGetPageChain.c)
 *     MiMakeValidPte @ 0x140273920 (MiMakeValidPte.c)
 *     MiInitializePfn @ 0x140289DB0 (MiInitializePfn.c)
 *     MiProtectionToCacheAttribute @ 0x14028A2D0 (MiProtectionToCacheAttribute.c)
 *     MiSharedVaToPartition @ 0x1402E21A4 (MiSharedVaToPartition.c)
 *     MiWritePteShadow @ 0x1402EB2BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402EB31C (MiPteHasShadow.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 *     MiAdvanceFaultList @ 0x140363F9C (MiAdvanceFaultList.c)
 *     MiArePageContentsZero @ 0x14064AE74 (MiArePageContentsZero.c)
 *     MiGetClusterPage @ 0x140667A14 (MiGetClusterPage.c)
 */

__int64 __fastcall MiCreateSharedZeroPages(int *a1, unsigned __int64 *a2)
{
  __int64 *v2; // rdi
  __int64 v4; // rsi
  __int64 v6; // r14
  unsigned int v7; // ebx
  unsigned int v8; // eax
  __int64 v9; // r10
  __int64 PageChain; // r13
  int v11; // edx
  unsigned __int64 v12; // r14
  unsigned int v13; // r12d
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rsi
  unsigned int v17; // ebx
  int v18; // eax
  int v19; // edx
  unsigned __int64 ValidPte; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  unsigned __int64 v25; // rax
  __int64 v26; // rax
  unsigned __int64 v27; // r8
  int v28; // r9d
  __int64 ClusterPage; // rax
  bool v30; // zf
  unsigned int v31; // eax
  int v32; // [rsp+20h] [rbp-68h]
  _QWORD *v33; // [rsp+40h] [rbp-48h]
  char v34; // [rsp+90h] [rbp+8h] BYREF
  unsigned __int64 *v35; // [rsp+98h] [rbp+10h]
  int v36; // [rsp+A0h] [rbp+18h]
  __int64 v37; // [rsp+A8h] [rbp+20h]

  v35 = a2;
  v2 = (__int64 *)*((_QWORD *)a1 + 3);
  v4 = *((_QWORD *)a1 + 8);
  v6 = *((_QWORD *)a1 + 2);
  v7 = (*(_DWORD *)v2 >> 5) & 0x1F;
  if ( v4 )
  {
    v25 = *(unsigned int *)(v4 + 48);
    if ( (v25 & 0x200000) == 0 && MiVadPageSizes[(v25 >> 19) & 3] == 16 )
    {
      v27 = *a2;
      v28 = a1[8];
      v32 = a1[9];
      v34 = 0;
      ClusterPage = MiGetClusterPage(v4, v6, v27, v28, v32, (__int64)&v34);
      PageChain = ClusterPage;
      if ( ClusterPage )
      {
        if ( (*(_QWORD *)(ClusterPage + 24) & 0xFFFFFFFFFFLL) == 0x3FFFFFFFFFLL )
        {
          v30 = v34 == 0;
          *a2 = 1LL;
          if ( !v30 )
            *a1 |= 4u;
        }
        else
        {
          *a2 = 16LL;
          v31 = (unsigned int)v6 >> 12;
          v6 &= 0xFFFFFFFFFFFF0000uLL;
          *((_QWORD *)a1 + 2) = v6;
          v2 -= v31 & 0xF;
        }
        v11 = 0;
        v33 = (_QWORD *)*((_QWORD *)a1 + 7);
        v36 = 0;
LABEL_22:
        v26 = *(unsigned int *)(v4 + 52);
        LODWORD(v26) = v26 & 0x7FFFFFFF;
        if ( (v26 | ((unsigned __int64)*(unsigned __int8 *)(v4 + 34) << 31)) == 0x7FFFFFFFELL )
        {
          v11 = 64;
          v36 = 64;
        }
        goto LABEL_4;
      }
      *a2 = 1LL;
    }
  }
  MiSharedVaToPartition(*(_QWORD *)(*((_QWORD *)a1 + 1) + 56LL), v6, *((_QWORD *)a1 + 3));
  v8 = MiProtectionToCacheAttribute(v7);
  PageChain = MiGetPageChain(
                v9,
                *(_QWORD *)(*((_QWORD *)a1 + 1) + 56LL),
                v6,
                a1[12],
                v8,
                258,
                0xFFFFFFFFFFFFFFFFuLL,
                a2);
  if ( !PageChain )
    return 3221225495LL;
  v11 = 0;
  v33 = (_QWORD *)*((_QWORD *)a1 + 7);
  v36 = 0;
  v37 = v6;
  if ( v4 )
    goto LABEL_22;
LABEL_4:
  v12 = v6 & 0xFFFFFFFFFFFFF000uLL;
  v13 = 0;
  while ( v13 < *v35 )
  {
    v14 = *(_QWORD *)(PageChain + 24) & 0xFFFFFFFFFFLL;
    v15 = PageChain;
    v37 = PageChain;
    if ( v14 == 0x3FFFFFFFFFLL )
      PageChain = 0LL;
    else
      PageChain = 48 * v14 - 0x220000000000LL;
    v16 = 0xAAAAAAAAAAAAAAABuLL * ((v15 + 0x220000000000LL) >> 4);
    if ( (MiFlags & 0x80u) != 0LL && (++dword_140C67BE0 & MmPageValidationFrequency) == 0 )
    {
      MiArePageContentsZero(0xAAAAAAAAAAAAAAABuLL * ((v15 + 0x220000000000LL) >> 4));
      v11 = v36;
      v15 = v37;
    }
    v17 = (*(_DWORD *)v2 >> 5) & 0x1F;
    if ( v17 == 24 )
      v17 = 1;
    v18 = *a1;
    v19 = v11 | 0x112;
    v36 = v19;
    if ( (v18 & 4) != 0 || ((v17 - 4) & 0xFFFFFFFD) != 0 )
    {
      v19 |= 0x20u;
      v36 = v19;
    }
    MiInitializePfn(v15, v2, v17, v19);
    ValidPte = MiMakeValidPte((unsigned __int64)v2, v16, v17 | 0x20000000);
    if ( (unsigned int)MiPteInShadowRange(v2) )
    {
      if ( (unsigned int)MiPteHasShadow(v22, v21, v23) )
      {
        if ( !HIBYTE(word_140C6697C) && (ValidPte & 1) != 0 )
          ValidPte |= 0x8000000000000000uLL;
        *v2 = ValidPte;
        MiWritePteShadow(v2, ValidPte);
        goto LABEL_14;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (ValidPte & 1) != 0 )
      {
        ValidPte |= 0x8000000000000000uLL;
      }
    }
    *v2 = ValidPte;
LABEL_14:
    if ( (*a1 & 4) != 0 )
    {
      MiLockAndDecrementShareCount(v37, 0);
      if ( v33 )
      {
        if ( (*a1 & 8) == 0 && v12 == *(_QWORD *)(v33[1] + 16LL * v33[3]) + (v33[4] << 12) )
          MiAdvanceFaultList(v33);
      }
    }
    ++v13;
    v11 = v36;
    v12 += 4096LL;
    ++v2;
  }
  return 273LL;
}
