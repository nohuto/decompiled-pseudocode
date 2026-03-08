/*
 * XREFs of MiPfnsWorthTrying @ 0x1403B6374
 * Callers:
 *     MiFindContiguousPagesEx @ 0x1403B5CF8 (MiFindContiguousPagesEx.c)
 *     MiFindRebuildCandidate @ 0x140466112 (MiFindRebuildCandidate.c)
 *     MmIdentifyPhysicalMemory @ 0x140A2C028 (MmIdentifyPhysicalMemory.c)
 *     MmRelocatePfnList @ 0x140A39D10 (MmRelocatePfnList.c)
 *     MiScrubNode @ 0x140A43A10 (MiScrubNode.c)
 * Callees:
 *     MiCheckSlabPfnBitmap @ 0x1402B7400 (MiCheckSlabPfnBitmap.c)
 *     MiIsPageOnBadList @ 0x14034B1D0 (MiIsPageOnBadList.c)
 *     MiGetPfnPageSizeIndexUnsynchronized @ 0x14035094C (MiGetPfnPageSizeIndexUnsynchronized.c)
 *     MiGetLeafPfnBuddy @ 0x140386E8C (MiGetLeafPfnBuddy.c)
 *     MiFindNextLowerLargePageCandidate @ 0x1403A0318 (MiFindNextLowerLargePageCandidate.c)
 *     MiActivePageClaimCandidate @ 0x1403B68D8 (MiActivePageClaimCandidate.c)
 *     MiPfnLargeBitSet @ 0x1403B6D48 (MiPfnLargeBitSet.c)
 *     MiRequestIoPageMdlCacheRelease @ 0x1403D146C (MiRequestIoPageMdlCacheRelease.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     MiClusterVadFull @ 0x1404674C0 (MiClusterVadFull.c)
 */

__int64 __fastcall MiPfnsWorthTrying(__int64 a1, unsigned __int64 a2, __int64 a3, int a4, _DWORD *a5)
{
  unsigned __int16 *v8; // rbp
  _DWORD *v9; // r12
  unsigned __int64 v10; // r11
  __int64 v11; // rdx
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // r10
  unsigned __int64 v14; // r9
  unsigned __int64 v15; // rcx
  __int64 v16; // r15
  int v17; // r14d
  __int64 v18; // rsi
  char v19; // cl
  int v20; // r15d
  int v21; // r8d
  unsigned __int64 v22; // rbp
  int v23; // eax
  __int64 v24; // rcx
  unsigned __int64 v25; // r14
  unsigned __int64 active; // rax
  unsigned __int64 v27; // rsi
  unsigned __int64 v28; // rbx
  __int64 v31; // r9
  int v32; // eax
  __int64 *v33; // rax
  unsigned __int64 v34; // rsi
  unsigned int v35; // ecx
  __int64 v36; // rbx
  unsigned __int64 LeafPfnBuddy; // rax
  unsigned __int64 v38; // rcx
  unsigned __int64 v39; // rsi
  bool v40; // zf
  unsigned __int64 v41; // rcx
  int v42; // eax
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // rax
  unsigned int PfnPageSizeIndexUnsynchronized; // eax
  unsigned __int64 v47; // r8
  unsigned __int64 v48; // rbp
  unsigned __int64 v49; // rbx
  unsigned __int64 v50; // rax
  __int64 v51; // rbx
  int v52; // eax
  signed __int64 v53; // rbx
  unsigned __int64 v54; // rax
  unsigned __int64 v55; // rdi
  __int64 v56; // rbx
  int v57; // eax
  unsigned __int64 v58; // r8
  unsigned __int64 NextLowerLargePageCandidate; // rax
  int v60; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v61; // [rsp+38h] [rbp-50h]
  unsigned __int64 v62; // [rsp+40h] [rbp-48h]
  unsigned __int16 v64; // [rsp+98h] [rbp+10h]

  v8 = (unsigned __int16 *)a1;
  if ( (MiZeroCont & 2) != 0 )
    memset(&MiCont, 0, 0x2E0uLL);
  v9 = a5;
  v62 = -1LL;
  v10 = 0LL;
  v11 = *v8;
  v12 = a2 + 48 * a3;
  v64 = *v8;
  *a5 = 0;
  v61 = 0LL;
  if ( a2 >= v12 )
    return 0LL;
  v13 = 0xAAAAAAAAAAAAAAABuLL;
  v14 = 1LL;
  while ( 1 )
  {
    v15 = *(_QWORD *)(a2 + 40);
    if ( ((v15 >> 43) & 0x3FF) != (_WORD)v11 )
    {
      v55 = v13 * ((__int64)(a2 + 0x220000000000LL) >> 4);
      v56 = v13 * ((__int64)(v12 + 0x220000000000LL) >> 4);
      v57 = MiPfnLargeBitSet(&MiSystemPartition, v55);
      if ( v57 != -1 )
      {
        v58 = MiLargePageSizes[v57];
        v55 &= ~(v58 - 1);
        NextLowerLargePageCandidate = MiFindNextLowerLargePageCandidate((__int64)&MiSystemPartition, v55, v58);
        if ( NextLowerLargePageCandidate >= v55 )
        {
          ++dword_140C13720;
        }
        else
        {
          ++dword_140C13724;
          v55 = NextLowerLargePageCandidate;
        }
      }
      ++dword_140C136FC;
      return v56 - v55;
    }
    v16 = 0xFFFFFFFFLL;
    v17 = *(_BYTE *)(a2 + 34) & 7;
    LODWORD(a5) = v17;
    if ( (v15 & 0x10000000000LL) != 0 )
    {
      v60 = v10;
      PfnPageSizeIndexUnsynchronized = MiGetPfnPageSizeIndexUnsynchronized(a2, (int *)&a5, &v60);
      v16 = PfnPageSizeIndexUnsynchronized;
      if ( PfnPageSizeIndexUnsynchronized == -1 )
      {
        v14 = 1LL;
        v13 = 0xAAAAAAAAAAAAAAABuLL;
        v10 = 0LL;
        goto LABEL_28;
      }
      v47 = MiLargePageSizes[PfnPageSizeIndexUnsynchronized];
      v17 = (int)a5;
      v18 = a2 + 0x220000000000LL;
      if ( (_DWORD)a5 == 6 )
      {
        v48 = ~(v47 - 1) & (0xAAAAAAAAAAAAAAABuLL * (v18 >> 4));
        v49 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v12 + 0x220000000000LL) >> 4);
        v50 = MiFindNextLowerLargePageCandidate(a1, v48, v47);
        if ( v50 >= v48 )
        {
          ++dword_140C13700;
        }
        else
        {
          ++dword_140C13704;
          v48 = v50;
        }
        return v49 - v48;
      }
      v8 = (unsigned __int16 *)a1;
      v14 = 1LL;
      v10 = 0LL;
    }
    else
    {
      v18 = a2 + 0x220000000000LL;
    }
    if ( v17 == 5 )
    {
      if ( MiIsPageOnBadList(a2) )
      {
        dword_140C13710 += v31;
        goto LABEL_42;
      }
      if ( *(_QWORD *)(a2 + 8) == -8LL )
      {
        dword_140C13714 += v31;
        goto LABEL_42;
      }
      v32 = MiCheckSlabPfnBitmap(a2, v31, 0);
      v10 = 0LL;
      if ( v32 )
      {
        ++dword_140C1378C;
        goto LABEL_116;
      }
      v14 = 1LL;
      if ( (_DWORD)v16 == -1 )
      {
        v13 = 0xAAAAAAAAAAAAAAABuLL;
        if ( (*(_BYTE *)a2 & 1) == 0 )
        {
          v33 = &qword_140C693B8;
          v34 = 0xAAAAAAAAAAAAAAABuLL * (v18 >> 4);
          v35 = 0;
          while ( v34 != v33[4] && v34 != *v33 )
          {
            ++v35;
            ++v33;
            if ( v35 >= 4 )
              goto LABEL_28;
          }
          ++dword_140C137BC;
          goto LABEL_42;
        }
        goto LABEL_28;
      }
      v17 = 1;
    }
    if ( v17 > (int)v14 )
      break;
    v13 = 0xAAAAAAAAAAAAAAABuLL;
    if ( (_DWORD)v16 == -1 )
      goto LABEL_28;
    v38 = MiLargePageSizes[v16];
    v39 = 0xAAAAAAAAAAAAAAABuLL * (v18 >> 4);
    if ( v38 >= 0x200 )
      v40 = (a4 & 0x2000000) == 0;
    else
      v40 = (a4 & 0x1000000) == 0;
    if ( !v40 )
    {
      dword_140C137A0 += v14;
      v36 = v12 - 48 * (v39 & -(__int64)v38) + 0x220000000000LL;
      return v13 * (v36 >> 4);
    }
    v41 = v38 - (v39 & (v38 - 1));
    if ( v41 > 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v12 - a2) >> 4) )
      v41 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v12 - a2) >> 4);
    a2 += 48 * v41 - 48;
LABEL_28:
    a2 += 48LL;
    if ( a2 >= v12 )
      return 0LL;
    v11 = v64;
  }
  v19 = *(_BYTE *)(a2 + 35);
  v20 = v10;
  v21 = v10;
  if ( v19 < 0 )
  {
    if ( v17 != 2 && v17 != 7 )
    {
      if ( v17 != 6
        || (*(_BYTE *)(a2 + 34) & 0x10) != 0
        || *(_WORD *)(a2 + 32) != (_WORD)v14
        || ((*(_QWORD *)(a2 + 40) >> 60) & 7) == 2
        || (v19 & 8) != 0
        || ((unsigned __int8)v14 & *(_BYTE *)a2) == 0 )
      {
        dword_140C1379C += v14;
        goto LABEL_71;
      }
      v25 = v61;
      goto LABEL_20;
    }
    if ( *(_WORD *)(a2 + 32) == (_WORD)v10 )
      goto LABEL_27;
    MiRequestIoPageMdlCacheRelease(0xAAAAAAAAAAAAAAABuLL * (v18 >> 4), v11, (unsigned int)v10);
    v10 = 0LL;
    if ( *(_WORD *)(a2 + 32) )
    {
      ++dword_140C1379C;
      v53 = v12 - a2;
      return 0xAAAAAAAAAAAAAAABuLL * (v53 >> 4);
    }
    v14 = 1LL;
    v13 = 0xAAAAAAAAAAAAAAABuLL;
    goto LABEL_28;
  }
  v13 = 0xAAAAAAAAAAAAAAABuLL;
  v22 = 0xAAAAAAAAAAAAAAABuLL * (v18 >> 4);
  if ( v17 <= 4 )
  {
    v42 = MiCheckSlabPfnBitmap(a2, v14, 0);
    v10 = 0LL;
    if ( !v42 )
    {
      if ( *(_WORD *)(a2 + 32)
        && (MiRequestIoPageMdlCacheRelease(0xAAAAAAAAAAAAAAABuLL * (v18 >> 4), v43, v44), v10 = 0LL, *(_WORD *)(a2 + 32))
        || (a4 & 0x4000000) == 0
        && !_bittest64((const signed __int64 *)(a2 + 40), 0x28u)
        && (v45 = *(_QWORD *)(a2 + 8), v45 >= 0)
        && v45 )
      {
        ++dword_140C13718;
        goto LABEL_71;
      }
      v8 = (unsigned __int16 *)a1;
LABEL_26:
      v14 = 1LL;
LABEL_27:
      v13 = 0xAAAAAAAAAAAAAAABuLL;
      goto LABEL_28;
    }
    ++dword_140C13790;
LABEL_116:
    v53 = v12 - 48 * ((0xAAAAAAAAAAAAAAABuLL * (v18 >> 4)) & 0xFFFFFFFFFFFFFE00uLL) + 0x220000000000LL;
    return 0xAAAAAAAAAAAAAAABuLL * (v53 >> 4);
  }
  if ( (v22 & 0xFFFFFFFFFFFFFE00uLL) != v62 )
  {
    v62 = v22 & 0xFFFFFFFFFFFFFE00uLL;
    v23 = MiPfnLargeBitSet(a1, 0xAAAAAAAAAAAAAAABuLL * (v18 >> 4));
    if ( v23 != -1 )
    {
      ++dword_140C13720;
      v51 = v12 - 48 * (v22 & -MiLargePageSizes[v23]) + 0x220000000000LL;
      return 0xAAAAAAAAAAAAAAABuLL * (v51 >> 4);
    }
    v14 = 1LL;
    v13 = 0xAAAAAAAAAAAAAAABuLL;
    v10 = 0LL;
  }
  v21 = 2;
  if ( v17 != 6 )
  {
    dword_140C1371C += v14;
LABEL_42:
    v36 = v12 - a2;
    return v13 * (v36 >> 4);
  }
  v24 = *(_QWORD *)(a2 + 40);
  if ( (((unsigned __int64)v24 >> 60) & 7) == 2 )
  {
    if ( (a4 & 8) != 0 )
    {
      dword_140C1372C += v14;
      goto LABEL_42;
    }
    LeafPfnBuddy = MiGetLeafPfnBuddy((_QWORD *)a2);
    if ( LeafPfnBuddy == -32LL )
    {
      dword_140C13728 += v14;
      goto LABEL_42;
    }
    v8 = (unsigned __int16 *)a1;
    if ( !LeafPfnBuddy )
      *v9 |= v14;
    goto LABEL_28;
  }
  if ( (a4 & 0x800000) == 0 )
    goto LABEL_18;
  if ( v24 < 0 )
  {
    if ( (v24 & 0x10000000000LL) == 0 && *(__int64 *)(a2 + 8) > 0 )
    {
      *v9 |= 2u;
      dword_140C13780 += v14;
      goto LABEL_42;
    }
    if ( (*(_QWORD *)(a2 + 24) & 0x3FFFFFFFFFFFFFFFuLL) > v14 && (a4 & 0x8000000) == 0 )
    {
      dword_140C13730 += v14;
      goto LABEL_42;
    }
LABEL_18:
    v25 = v61;
    goto LABEL_19;
  }
  if ( (a4 & 0x8000000) == 0 || a3 == 16 )
  {
    v25 = 16LL;
LABEL_97:
    v61 = v25;
    if ( v22 != (v22 & ~(v25 - 1)) )
      goto LABEL_19;
    v8 = (unsigned __int16 *)a1;
    if ( 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v12 - a2) >> 4) >= v25 )
      v20 = v14;
  }
  else
  {
    if ( a3 == 512 )
    {
      v25 = 512LL;
      goto LABEL_97;
    }
    v25 = v10;
    v61 = v10;
LABEL_19:
    v8 = (unsigned __int16 *)a1;
  }
LABEL_20:
  active = MiActivePageClaimCandidate((_DWORD)v8, a2, v21, 0, (__int64)v9);
  v10 = 0LL;
  if ( active )
  {
    v27 = ~(active - 1) & (0xAAAAAAAAAAAAAAABuLL * (v18 >> 4));
    v28 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v12 + 0x220000000000LL) >> 4);
    if ( active >= 0x200 )
    {
      v54 = MiFindNextLowerLargePageCandidate((__int64)v8, v27, active);
      if ( v54 >= v27 )
      {
        ++dword_140C1370C;
      }
      else
      {
        ++dword_140C13708;
        v27 = v54;
      }
    }
    return v28 - v27;
  }
  if ( (a4 & 8) == 0 )
  {
    if ( v20 )
    {
      v52 = MiClusterVadFull(a2, v25, 0LL);
      v10 = 0LL;
      if ( v52 )
      {
        ++dword_140C137D0;
        goto LABEL_71;
      }
    }
    goto LABEL_26;
  }
  ++dword_140C1372C;
LABEL_71:
  v51 = v12 - a2;
  return 0xAAAAAAAAAAAAAAABuLL * (v51 >> 4);
}
