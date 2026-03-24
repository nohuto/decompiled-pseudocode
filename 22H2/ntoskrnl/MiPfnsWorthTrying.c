/*
 * XREFs of MiPfnsWorthTrying @ 0x1402827B0
 * Callers:
 *     MiFindContiguousPages @ 0x140281D60 (MiFindContiguousPages.c)
 *     MiFindRebuildCandidate @ 0x140551D4C (MiFindRebuildCandidate.c)
 *     MiScrubNode @ 0x140563F8C (MiScrubNode.c)
 *     MmRelocatePfnList @ 0x1408D1B2C (MmRelocatePfnList.c)
 * Callees:
 *     MiPfnLargeBitSet @ 0x140282D20 (MiPfnLargeBitSet.c)
 *     MiActivePageClaimCandidate @ 0x140282D80 (MiActivePageClaimCandidate.c)
 *     MiIsPageOnBadList @ 0x140283BEC (MiIsPageOnBadList.c)
 *     MiGetLeafPfnBuddy @ 0x1403801FC (MiGetLeafPfnBuddy.c)
 *     MI_PFN_IS_PROTO @ 0x1403F3F48 (MI_PFN_IS_PROTO.c)
 *     MiGetPfnPageSizeIndexUnsynchronized @ 0x1403F6188 (MiGetPfnPageSizeIndexUnsynchronized.c)
 *     MiClusterVadFull @ 0x1405557A8 (MiClusterVadFull.c)
 */

__int64 __fastcall MiPfnsWorthTrying(__int16 *a1, unsigned __int64 a2, __int64 a3, int a4, _DWORD *a5)
{
  __int16 v6; // dx
  unsigned __int64 v7; // r15
  __int64 v9; // r9
  unsigned __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // edi
  unsigned int PfnPageSizeIndexUnsynchronized; // eax
  signed __int64 v15; // r14
  __int64 v16; // rdx
  PVOID *v17; // rax
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  _QWORD *v20; // rax
  __int64 v21; // rdx
  unsigned __int64 v22; // r8
  bool v23; // zf
  unsigned __int64 v24; // r8
  char v25; // cl
  int v26; // ebp
  bool v27; // zf
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rsi
  int v31; // eax
  __int64 LeafPfnBuddy; // rax
  __int64 active; // rax
  __int64 v34; // r15
  int v36; // eax
  unsigned __int64 v37; // [rsp+20h] [rbp-48h]
  __int16 v38; // [rsp+70h] [rbp+8h]
  int v39; // [rsp+78h] [rbp+10h] BYREF
  int v40; // [rsp+80h] [rbp+18h] BYREF

  v6 = *a1;
  v7 = a2 + 48 * a3;
  v38 = *a1;
  *a5 = 0;
  v9 = -1LL;
  v37 = -1LL;
  if ( a2 >= v7 )
    return 0LL;
  while ( 1 )
  {
    v11 = *(_QWORD *)(a2 + 40);
    if ( ((v11 >> 39) & 0x3FF) != v6 )
    {
      v36 = MiPfnLargeBitSet(&MiSystemPartition, (__int64)(a2 + 0x58000000000LL) / 48, 1023LL, v9);
      if ( v36 != -1 )
        a2 = 48 * (((__int64)(a2 + 0x58000000000LL) / 48) & -MiLargePageSizes[v36]) - 0x58000000000LL;
      goto LABEL_73;
    }
    v12 = 0xFFFFFFFFLL;
    v13 = *(_BYTE *)(a2 + 34) & 7;
    v39 = v13;
    if ( (v11 & 0x1000000000LL) != 0 )
    {
      v40 = 0;
      PfnPageSizeIndexUnsynchronized = MiGetPfnPageSizeIndexUnsynchronized(a2, &v39, &v40);
      v12 = PfnPageSizeIndexUnsynchronized;
      if ( PfnPageSizeIndexUnsynchronized == -1 )
        goto LABEL_65;
      v13 = v39;
      v15 = a2 + 0x58000000000LL;
      if ( v39 == 6 )
      {
        v34 = v7
            - 48 * (((__int64)(a2 + 0x58000000000LL) / 48) & -MiLargePageSizes[PfnPageSizeIndexUnsynchronized])
            + 0x58000000000LL;
        return v34 / 48;
      }
      v9 = v37;
    }
    else
    {
      v15 = a2 + 0x58000000000LL;
    }
    if ( v13 == 5 )
      break;
    if ( v13 <= 1 )
    {
      if ( (_DWORD)v12 == -1 )
        goto LABEL_65;
      goto LABEL_21;
    }
    v25 = *(_BYTE *)(a2 + 35);
    v26 = 0;
    if ( v25 < 0 )
    {
      if ( v13 == 2 )
      {
        v27 = *(_WORD *)(a2 + 32) == 0;
LABEL_31:
        if ( !v27 )
          goto LABEL_73;
        goto LABEL_65;
      }
      if ( v13 != 6
        || (*(_BYTE *)(a2 + 34) & 0x10) != 0
        || *(_WORD *)(a2 + 32) != 1
        || ((*(_QWORD *)(a2 + 40) >> 60) & 7) == 2
        || (v25 & 8) != 0
        || (*(_BYTE *)a2 & 1) == 0 )
      {
        goto LABEL_73;
      }
LABEL_61:
      active = MiActivePageClaimCandidate(a1, a2, 0LL);
      if ( active )
        return (__int64)(v7 + 0x58000000000LL) / 48 - (~(active - 1) & (v15 / 48));
      if ( (a4 & 8) != 0 || v26 == 1 && (unsigned int)MiClusterVadFull(a2, 0LL) == 1 )
        goto LABEL_73;
      goto LABEL_65;
    }
    if ( v13 > 4 )
    {
      v29 = (unsigned __int128)(v15 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
      v30 = v15 / 48;
      if ( ((v15 / 48) & 0xFFFFFFFFFFFFFE00uLL) != v9 )
      {
        v37 = v30 & 0xFFFFFFFFFFFFFE00uLL;
        v31 = MiPfnLargeBitSet(a1, v30, v12, v9);
        if ( v31 != -1 )
        {
          v34 = v7 - 48 * (v30 & -MiLargePageSizes[v31]) + 0x58000000000LL;
          return v34 / 48;
        }
      }
      if ( v13 != 6 )
        goto LABEL_73;
      if ( ((*(_QWORD *)(a2 + 40) >> 60) & 7) == 2 )
      {
        if ( (a4 & 8) != 0 )
          goto LABEL_73;
        LeafPfnBuddy = MiGetLeafPfnBuddy(a2, v29, v12);
        if ( LeafPfnBuddy == -32 )
          goto LABEL_73;
        if ( !LeafPfnBuddy )
          *a5 = 1;
        goto LABEL_65;
      }
      if ( (a4 & 0x800000) != 0 )
      {
        if ( (unsigned int)MI_PFN_IS_PROTO(a2) )
        {
          if ( (*(_QWORD *)(a2 + 24) & 0x3FFFFFFFFFFFFFFFuLL) > 1 )
            goto LABEL_73;
        }
        else if ( v30 == (v30 & 0xFFFFFFFFFFFFFFF0uLL) && (__int64)(v7 - a2) >= 768 )
        {
          v26 = 1;
        }
      }
      goto LABEL_61;
    }
    if ( *(_WORD *)(a2 + 32) )
      goto LABEL_73;
    if ( (a4 & 0x4000000) == 0 && (*(_QWORD *)(a2 + 40) & 0x1000000000LL) == 0 )
    {
      v28 = *(_QWORD *)(a2 + 8);
      v27 = v28 == 0;
      if ( v28 >= 0 )
        goto LABEL_31;
    }
LABEL_65:
    a2 += 48LL;
    if ( a2 >= v7 )
      return 0LL;
    v9 = v37;
    v6 = v38;
  }
  if ( (unsigned int)MiIsPageOnBadList(a2) )
    goto LABEL_73;
  if ( (_DWORD)v12 != -1 )
  {
LABEL_21:
    v21 = v15 / 48;
    v22 = MiLargePageSizes[(unsigned int)v12];
    if ( v22 < 0x200 )
      v23 = (a4 & 0x1000000) == 0;
    else
      v23 = (a4 & 0x2000000) == 0;
    if ( !v23 )
    {
      v34 = v7 - 48 * (v21 & -(__int64)v22) + 0x58000000000LL;
      return v34 / 48;
    }
    v24 = v22 - (v21 & (v22 - 1));
    if ( v24 > (__int64)(v7 - a2) / 48 )
      v24 = (__int64)(v7 - a2) / 48;
    a2 += 48 * v24 - 48;
    goto LABEL_65;
  }
  if ( (*(_BYTE *)a2 & 1) != 0 )
    goto LABEL_65;
  v16 = v15 / 48;
  v17 = &qword_140C4EDC8;
  v18 = 0;
  while ( (PVOID)v16 != *v17 )
  {
    ++v18;
    ++v17;
    if ( v18 >= 4 )
    {
      v19 = 0;
      v20 = &unk_140C4EDA8;
      while ( v16 != *v20 )
      {
        ++v19;
        ++v20;
        if ( v19 >= 4 )
          goto LABEL_65;
      }
      break;
    }
  }
LABEL_73:
  v34 = v7 - a2;
  return v34 / 48;
}
