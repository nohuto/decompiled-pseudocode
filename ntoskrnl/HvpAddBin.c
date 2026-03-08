/*
 * XREFs of HvpAddBin @ 0x14072F9F0
 * Callers:
 *     HvpDoAllocateCell @ 0x1407A6420 (HvpDoAllocateCell.c)
 * Callees:
 *     HvpGrowDirtyVectors @ 0x1402B32C4 (HvpGrowDirtyVectors.c)
 *     RtlNumberOfSetBits @ 0x14035C520 (RtlNumberOfSetBits.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     CmpClaimGlobalQuota @ 0x14072C8EC (CmpClaimGlobalQuota.c)
 *     HvpPointMapEntriesToBuffer @ 0x140730010 (HvpPointMapEntriesToBuffer.c)
 *     HvpAdjustHiveFreeDisplay @ 0x1407300D8 (HvpAdjustHiveFreeDisplay.c)
 *     HvpExpandMap @ 0x14073024C (HvpExpandMap.c)
 *     CmpCanGrowHive @ 0x14073039C (CmpCanGrowHive.c)
 *     HvpAllocateBin @ 0x140730410 (HvpAllocateBin.c)
 *     CmpUpdateSystemHiveHysteresis @ 0x140731F58 (CmpUpdateSystemHiveHysteresis.c)
 *     CmpDoFileSetSizeEx @ 0x140731FA4 (CmpDoFileSetSizeEx.c)
 *     HvpViewMapCOWAndUnsealRange @ 0x140732640 (HvpViewMapCOWAndUnsealRange.c)
 *     HvpViewMapExtendStorage @ 0x140732D5C (HvpViewMapExtendStorage.c)
 *     HvpViewMapPromoteRangeToMapping @ 0x140779930 (HvpViewMapPromoteRangeToMapping.c)
 *     HvpFreeBin @ 0x14079AE68 (HvpFreeBin.c)
 *     HvpProtectBinPartial @ 0x1407A4030 (HvpProtectBinPartial.c)
 *     CmpReleaseGlobalQuota @ 0x1407A5908 (CmpReleaseGlobalQuota.c)
 *     HvpSetRangeProtection @ 0x1407A5934 (HvpSetRangeProtection.c)
 *     HvpMarkDirty @ 0x1407D25D0 (HvpMarkDirty.c)
 *     HvpViewMapShrinkStorage @ 0x140A1A654 (HvpViewMapShrinkStorage.c)
 *     HvpShrinkMap @ 0x140A22E44 (HvpShrinkMap.c)
 *     HvpGetCellMap @ 0x140AF2670 (HvpGetCellMap.c)
 */

__int64 __fastcall HvpAddBin(ULONG_PTR BugCheckParameter2, unsigned int a2, unsigned int a3, unsigned int *a4)
{
  __int64 v4; // rsi
  __int64 v5; // r8
  unsigned int v6; // edi
  ULONG_PTR v9; // r12
  unsigned int *v10; // rdx
  __int64 *i; // rbx
  unsigned int v12; // r15d
  unsigned int v13; // r15d
  unsigned int v14; // r12d
  unsigned int v15; // r13d
  int Bin; // esi
  unsigned int *v17; // rbx
  __int64 v18; // rdx
  unsigned int v19; // eax
  char v20; // bl
  int v21; // r8d
  int v22; // eax
  _DWORD *v23; // rsi
  void *v24; // rcx
  int v25; // eax
  char v26; // cl
  signed __int64 v28; // rax
  __int64 *v29; // rax
  __int64 **v30; // rcx
  __int64 v31; // r8
  unsigned int j; // edi
  __int64 CellMap; // rax
  unsigned int v34; // r8d
  unsigned int v35; // r11d
  _QWORD *v36; // r10
  __int64 v37; // rax
  int v38; // eax
  _DWORD *v39; // rcx
  __int64 v40; // rax
  __int64 *v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rdx
  int v44; // r8d
  __int64 *v45; // rax
  int v46; // ebx
  ULONG v47; // eax
  __int64 v48; // rax
  char v49; // [rsp+30h] [rbp-48h]
  char v50; // [rsp+31h] [rbp-47h]
  char v51; // [rsp+32h] [rbp-46h]
  unsigned int Size; // [rsp+34h] [rbp-44h]
  unsigned int *Size_4; // [rsp+38h] [rbp-40h]
  unsigned int v54; // [rsp+40h] [rbp-38h]
  void *v55; // [rsp+48h] [rbp-30h] BYREF
  void *v56; // [rsp+50h] [rbp-28h] BYREF
  __int64 v57; // [rsp+58h] [rbp-20h]
  __int64 *v58; // [rsp+60h] [rbp-18h]
  char v59; // [rsp+C0h] [rbp+48h]
  char v60; // [rsp+C8h] [rbp+50h]
  int v62; // [rsp+D0h] [rbp+58h]

  v4 = (int)a3;
  v5 = 0LL;
  v6 = (a2 + 4127) & 0xFFFFF000;
  Size = 0;
  v51 = 0;
  v55 = 0LL;
  v57 = 0LL;
  v56 = 0LL;
  v59 = 0;
  v54 = 0;
  v60 = 0;
  if ( v6 <= 0x3000 && v6 - (unsigned __int64)a2 - 32 < 0xE00 )
    v6 += 4096;
  v9 = 632 * v4 + BugCheckParameter2 + 888;
  v10 = (unsigned int *)(632 * v4 + BugCheckParameter2 + 280);
  v58 = (__int64 *)v9;
  Size_4 = v10;
  for ( i = *(__int64 **)v9; i != (__int64 *)v9; i = (__int64 *)*i )
  {
    v12 = *((_DWORD *)i + 4);
    if ( v12 >= v6 && v12 + *((_DWORD *)i + 5) <= *v10 )
    {
      if ( !i )
        goto LABEL_11;
      v29 = (__int64 *)*i;
      if ( *(__int64 **)(*i + 8) == i )
      {
        v30 = (__int64 **)i[1];
        if ( *v30 == i )
        {
          *v30 = v29;
          v29[1] = (__int64)v30;
          v62 = (_DWORD)v4 << 31;
          Bin = HvpMarkDirty(BugCheckParameter2);
          if ( Bin >= 0 )
          {
            v31 = 0LL;
            for ( j = *((_DWORD *)i + 5) + v62; (unsigned int)v31 < v12; *v36 = v37 )
            {
              CellMap = HvpGetCellMap(BugCheckParameter2, (unsigned int)v31 + j);
              v36 = (_QWORD *)CellMap;
              if ( !CellMap )
                KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v35, 0x391uLL);
              *(_QWORD *)(CellMap + 8) &= ~2uLL;
              v37 = v34;
              v31 = v34 + 4096;
            }
            (*(void (__fastcall **)(__int64 *, __int64, __int64))(BugCheckParameter2 + 32))(i, 24LL, v31);
            *a4 = j;
            return 0;
          }
          v45 = *(__int64 **)v9;
          if ( *(_QWORD *)(*(_QWORD *)v9 + 8LL) == v9 )
          {
            *i = (__int64)v45;
            i[1] = v9;
            v45[1] = (__int64)i;
            *(_QWORD *)v9 = i;
            return (unsigned int)Bin;
          }
        }
      }
LABEL_79:
      __fastfail(3u);
    }
  }
  Size_4 = (unsigned int *)(632 * v4 + BugCheckParameter2 + 280);
LABEL_11:
  v13 = *v10;
  v14 = *v10;
  v15 = *v10 + v6;
  if ( !(_DWORD)v4 && v6 <= 0x40000 && (((v13 + 4096) ^ (v15 + 4095)) & 0xFFFC0000) != 0 )
  {
    v14 = ((v13 + 266239) & 0xFFFC0000) - 4096;
    v5 = v14 - v13;
    Size = v14 - v13;
    v15 = v14 + v6;
  }
  if ( v15 < v13 || !(unsigned __int8)CmpCanGrowHive(BugCheckParameter2, v15, v5, 4096LL) )
    return (unsigned int)-1073741670;
  Bin = HvpExpandMap(BugCheckParameter2, (unsigned int)v4, v13, v15);
  if ( Bin >= 0 )
  {
    v17 = Size_4;
    *Size_4 = v15;
    Bin = HvpAdjustHiveFreeDisplay(BugCheckParameter2, v15, a3);
    if ( Bin < 0 )
    {
LABEL_81:
      HvpShrinkMap(BugCheckParameter2, a3, v15, v13);
      *v17 = v13;
      if ( v51 )
      {
        *(_QWORD *)(BugCheckParameter2 + 96) = *(_QWORD *)(BugCheckParameter2 + 96);
        *(_DWORD *)(BugCheckParameter2 + 88) = v13 >> 9;
        v46 = *(_DWORD *)(BugCheckParameter2 + 104);
        v47 = RtlNumberOfSetBits((PRTL_BITMAP)(BugCheckParameter2 + 88));
        *(_DWORD *)(BugCheckParameter2 + 104) = v47;
        _InterlockedExchangeAdd(&CmpDirtySectorCount, v47 - v46);
        v48 = *(_QWORD *)(BugCheckParameter2 + 120);
        *(_DWORD *)(BugCheckParameter2 + 112) = v13 >> 9;
        *(_QWORD *)(BugCheckParameter2 + 120) = v48;
        *(_DWORD *)(BugCheckParameter2 + 128) = RtlNumberOfSetBits((PRTL_BITMAP)(BugCheckParameter2 + 112));
      }
      if ( v60 )
        HvpViewMapShrinkStorage(BugCheckParameter2 + 224, v13);
      if ( v55 && !v59 )
        HvpFreeBin(BugCheckParameter2, v14 - v13, v55);
      if ( v57 )
        (*(void (__fastcall **)(__int64, __int64))(BugCheckParameter2 + 32))(v57, 24LL);
      if ( v56 && !v59 )
        HvpFreeBin(BugCheckParameter2, v15 - v14, v56);
      if ( v54 )
        CmpReleaseGlobalQuota(v54);
      return (unsigned int)Bin;
    }
    v19 = a3;
    v49 = 1;
    v50 = 1;
    if ( a3 )
    {
      v20 = 0;
      goto LABEL_18;
    }
    if ( (*(_DWORD *)(BugCheckParameter2 + 160) & 1) == 0 )
    {
      Bin = HvpGrowDirtyVectors(BugCheckParameter2, v15);
      if ( Bin < 0 )
        goto LABEL_80;
      v51 = 1;
    }
    if ( (*(_DWORD *)(BugCheckParameter2 + 160) & 0x8001) == 0 )
    {
      Bin = CmpDoFileSetSizeEx(BugCheckParameter2, 0LL, v15 + 4096, 1LL);
      if ( Bin < 0 )
        goto LABEL_80;
      if ( (*(_DWORD *)(BugCheckParameter2 + 4112) & 0x800) != 0 && !*(_DWORD *)(BugCheckParameter2 + 4228) )
        *(_DWORD *)(BugCheckParameter2 + 4228) = v13;
    }
    v49 = 1;
    v50 = 1;
    if ( (*(_DWORD *)(BugCheckParameter2 + 160) & 0x20000) == 0 )
      goto LABEL_39;
    v18 = 2147479552LL;
    if ( (*(_DWORD *)(BugCheckParameter2 + 256) & 1) == 0
      || (v28 = *(_QWORD *)(BugCheckParameter2 + 240) & 0xFFFFFFFFFFFFF000uLL, v28 >= 2147479552) )
    {
      LODWORD(v28) = 2147479552;
    }
    v49 = 1;
    v50 = 1;
    if ( v15 > (int)v28 - 4096 )
    {
LABEL_39:
      v20 = 0;
LABEL_40:
      v19 = 0;
LABEL_18:
      if ( Size )
      {
        if ( v20 )
        {
          if ( !CmpClaimGlobalQuota(Size, v18) )
            goto LABEL_78;
          v54 = Size;
          v60 = v20;
          Bin = HvpViewMapPromoteRangeToMapping(BugCheckParameter2 + 224, v13, Size, &v55);
          if ( Bin < 0 )
            goto LABEL_72;
          v38 = HvpViewMapCOWAndUnsealRange(BugCheckParameter2 + 224, v13, Size);
        }
        else
        {
          v60 = 0;
          Bin = HvpAllocateBin(BugCheckParameter2, Size, v19, 808602947, (__int64)&v55);
          if ( Bin < 0 )
            goto LABEL_72;
          v38 = HvpProtectBinPartial(BugCheckParameter2, (_DWORD)v55, v44, 0, Size, 1);
        }
        v60 = v20;
        Bin = v38;
        if ( v38 < 0 )
          goto LABEL_72;
        memset(v55, 0, Size);
        v39 = v55;
        *((_DWORD *)v55 + 7) = 0;
        v39[1] = v13 & 0x7FFFFFFF;
        v39[8] = Size - 32;
        *v39 = 1852400232;
        v39[2] = Size;
        v40 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(BugCheckParameter2 + 24))(24LL, 0LL, 825380163LL);
        v57 = v40;
        if ( !v40 )
        {
LABEL_78:
          Bin = -1073741670;
          v60 = v20;
          goto LABEL_72;
        }
        *(_DWORD *)(v40 + 16) = Size;
        *(_DWORD *)(v40 + 20) = v13;
      }
      if ( !v20 )
      {
        v60 = 0;
        Bin = HvpAllocateBin(BugCheckParameter2, v6, a3, 909200707, (__int64)&v56);
        if ( Bin >= 0 )
        {
          v22 = HvpProtectBinPartial(BugCheckParameter2, (_DWORD)v56, v21, 0, v6, 1);
          goto LABEL_22;
        }
        goto LABEL_72;
      }
      if ( CmpClaimGlobalQuota(v6, v18) )
      {
        v54 += v6;
        v60 = v20;
        Bin = HvpViewMapPromoteRangeToMapping(BugCheckParameter2 + 224, v14, v6, &v56);
        if ( Bin >= 0 )
        {
          v22 = HvpViewMapCOWAndUnsealRange(BugCheckParameter2 + 224, v14, v6);
LABEL_22:
          v60 = v20;
          Bin = v22;
          if ( v22 >= 0 )
          {
            v23 = v56;
            memset(v56, 0, v6);
            v23[7] = 0;
            v24 = v55;
            v23[1] = v14 & 0x7FFFFFFF;
            v23[8] = v6 - 32;
            v25 = a3 << 31;
            *v23 = 1852400232;
            v23[2] = v6;
            if ( v24 )
            {
              HvpPointMapEntriesToBuffer(BugCheckParameter2, v49, v57);
              v41 = v58;
              v42 = *v58;
              if ( *(__int64 **)(*v58 + 8) != v58 )
                goto LABEL_79;
              v43 = v57;
              *(_QWORD *)v57 = v42;
              *(_QWORD *)(v43 + 8) = v41;
              *(_QWORD *)(v42 + 8) = v43;
              v26 = v49;
              *v41 = v43;
              v25 = a3 << 31;
            }
            else
            {
              v26 = v50;
            }
            v14 += v25;
            HvpPointMapEntriesToBuffer(BugCheckParameter2, v26, 0LL);
            if ( a3 )
            {
LABEL_26:
              *a4 = v14;
              return 0;
            }
            if ( (*(_DWORD *)(BugCheckParameter2 + 160) & 1) != 0
              || (Bin = HvpMarkDirty(BugCheckParameter2), v60 = v59, Bin >= 0) )
            {
              CmpUpdateSystemHiveHysteresis(BugCheckParameter2, v15, v13);
              HvpSetRangeProtection(BugCheckParameter2, v13);
              goto LABEL_26;
            }
          }
        }
LABEL_72:
        v17 = Size_4;
        goto LABEL_80;
      }
      goto LABEL_78;
    }
    Bin = HvpViewMapExtendStorage(BugCheckParameter2 + 224, v15);
    if ( Bin >= 0 )
    {
      v20 = 1;
      v49 = 0;
      v59 = 1;
      v50 = 0;
      goto LABEL_40;
    }
LABEL_80:
    HvpAdjustHiveFreeDisplay(BugCheckParameter2, v13, a3);
    goto LABEL_81;
  }
  return (unsigned int)Bin;
}
