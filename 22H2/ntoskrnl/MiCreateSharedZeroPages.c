/*
 * XREFs of MiCreateSharedZeroPages @ 0x1402410E0
 * Callers:
 *     MiResolveDemandZeroFault @ 0x14020FB10 (MiResolveDemandZeroFault.c)
 * Callees:
 *     MiGetPageChain @ 0x140212CD0 (MiGetPageChain.c)
 *     MiSharedVaToPartition @ 0x140240DBC (MiSharedVaToPartition.c)
 *     MiInitializePfn @ 0x140241370 (MiInitializePfn.c)
 *     MiProtectionToCacheAttribute @ 0x1402417B0 (MiProtectionToCacheAttribute.c)
 *     MiLockAndDecrementShareCount @ 0x140263D30 (MiLockAndDecrementShareCount.c)
 *     MiMakeValidPte @ 0x1402AEDC0 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiAdvanceFaultList @ 0x1402E40E8 (MiAdvanceFaultList.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     MiArePageContentsZero @ 0x14054EB08 (MiArePageContentsZero.c)
 *     MiGetClusterPage @ 0x1405558B0 (MiGetClusterPage.c)
 */

__int64 __fastcall MiCreateSharedZeroPages(int *a1, unsigned __int64 *a2)
{
  _DWORD *v2; // rsi
  __int64 v4; // r14
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // r8
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // eax
  __int64 v13; // r10
  __int64 PageChain; // r13
  int v15; // r8d
  unsigned __int64 v16; // rbp
  unsigned int i; // r14d
  __int64 v18; // r10
  __int64 v19; // rax
  ULONG_PTR v20; // r15
  unsigned int v21; // ebx
  int v22; // eax
  unsigned int v23; // r8d
  __int64 ValidPte; // rbx
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  unsigned __int64 v31; // rax
  __int64 v32; // rax
  unsigned __int64 v33; // r8
  int v34; // r9d
  __int64 ClusterPage; // rax
  bool v36; // zf
  unsigned int v37; // eax
  int v38; // [rsp+20h] [rbp-68h]
  _QWORD *v39; // [rsp+40h] [rbp-48h]
  char v40; // [rsp+90h] [rbp+8h] BYREF
  int v41; // [rsp+A0h] [rbp+18h]
  __int64 v42; // [rsp+A8h] [rbp+20h]

  v2 = (_DWORD *)*((_QWORD *)a1 + 3);
  v4 = *((_QWORD *)a1 + 8);
  v6 = *((_QWORD *)a1 + 2);
  v7 = (unsigned __int64)v2;
  v8 = (*v2 >> 5) & 0x1F;
  if ( v4 )
  {
    v31 = *(unsigned int *)(v4 + 48);
    if ( (v31 & 0x100000) == 0 && MiVadPageSizes[(v31 >> 18) & 3] == 16 )
    {
      v33 = *a2;
      v34 = a1[8];
      v38 = a1[9];
      v40 = 0;
      ClusterPage = MiGetClusterPage(v4, v6, v33, v34, v38, (__int64)&v40);
      PageChain = ClusterPage;
      if ( ClusterPage )
      {
        if ( (*(_QWORD *)(ClusterPage + 24) & 0xFFFFFFFFFLL) == 0xFFFFFFFFFLL )
        {
          v36 = v40 == 1;
          *a2 = 1LL;
          if ( v36 )
            *a1 |= 4u;
        }
        else
        {
          *a2 = 16LL;
          v37 = (unsigned int)v6 >> 12;
          v6 &= 0xFFFFFFFFFFFF0000uLL;
          *((_QWORD *)a1 + 2) = v6;
          v2 -= 2 * (v37 & 0xF);
        }
        goto LABEL_3;
      }
      v7 = *((_QWORD *)a1 + 3);
      *a2 = 1LL;
    }
  }
  MiSharedVaToPartition(*(_QWORD *)(*((_QWORD *)a1 + 1) + 56LL), v6, v7);
  v12 = MiProtectionToCacheAttribute(v8, v9, v10, v11);
  PageChain = MiGetPageChain(v13, *(_QWORD *)(*((_QWORD *)a1 + 1) + 56LL), a1[12], v12, 258, -1LL, a2);
  if ( !PageChain )
    return 3221225495LL;
LABEL_3:
  v15 = 0;
  v39 = (_QWORD *)*((_QWORD *)a1 + 7);
  v41 = 0;
  if ( v4 )
  {
    v32 = *(unsigned int *)(v4 + 52);
    LODWORD(v32) = v32 & 0x7FFFFFFF;
    if ( (v32 | ((unsigned __int64)*(unsigned __int8 *)(v4 + 34) << 31)) == 0x7FFFFFFFELL )
    {
      v15 = 64;
      v41 = 64;
    }
  }
  v16 = v6 & 0xFFFFFFFFFFFFF000uLL;
  for ( i = 0; i < *a2; ++i )
  {
    v18 = PageChain;
    v19 = *(_QWORD *)(PageChain + 24) & 0xFFFFFFFFFLL;
    v42 = PageChain;
    if ( v19 == 0xFFFFFFFFFLL )
      PageChain = 0LL;
    else
      PageChain = 48 * v19 - 0x58000000000LL;
    v20 = (v18 + 0x58000000000LL) / 48;
    if ( (MiFlags & 0x80u) != 0 && (++dword_140C4E7CC & MmPageValidationFrequency) == 0 )
    {
      MiArePageContentsZero(v20);
      v15 = v41;
      v18 = v42;
    }
    v21 = (*v2 >> 5) & 0x1F;
    if ( v21 == 24 )
      v21 = 1;
    v22 = *a1;
    v23 = v15 | 0x112;
    v41 = v23;
    if ( (v22 & 4) != 0 || ((v21 - 4) & 0xFFFFFFFD) != 0 )
    {
      v23 |= 0x20u;
      v41 = v23;
    }
    MiInitializePfn(v18, v2, v21, v23);
    ValidPte = MiMakeValidPte(v2, v20, v21 | 0x20000000);
    if ( (unsigned int)MiPteInShadowRange(v2, v25) )
    {
      if ( (unsigned int)MiPteHasShadow(v27, v26, v28, v29) )
      {
        if ( !HIBYTE(word_140C4E008) && (ValidPte & 1) != 0 )
          ValidPte |= 0x8000000000000000uLL;
        *(_QWORD *)v2 = ValidPte;
        MiWritePteShadow(v2, ValidPte);
        goto LABEL_14;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (ValidPte & 1) != 0 )
      {
        ValidPte |= 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)v2 = ValidPte;
LABEL_14:
    if ( (*a1 & 4) != 0 )
    {
      MiLockAndDecrementShareCount(v42, 0LL);
      if ( v39 )
      {
        if ( (*a1 & 8) == 0 && v16 == *(_QWORD *)(v39[1] + 16LL * v39[3]) + (v39[4] << 12) )
          MiAdvanceFaultList(v39);
      }
    }
    v15 = v41;
    v16 += 4096LL;
    v2 += 2;
  }
  return 273LL;
}
