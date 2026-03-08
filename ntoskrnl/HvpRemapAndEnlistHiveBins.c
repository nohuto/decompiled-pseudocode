/*
 * XREFs of HvpRemapAndEnlistHiveBins @ 0x1407A488C
 * Callers:
 *     HvLoadHive @ 0x14072F5C0 (HvLoadHive.c)
 * Callees:
 *     SetFailureLocation @ 0x140243E5C (SetFailureLocation.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     HvpPointMapEntriesToBuffer @ 0x140730010 (HvpPointMapEntriesToBuffer.c)
 *     HvpAllocateBin @ 0x140730410 (HvpAllocateBin.c)
 *     HvpViewMapPromoteRangeToMapping @ 0x140779930 (HvpViewMapPromoteRangeToMapping.c)
 *     HvpFreeBin @ 0x14079AE68 (HvpFreeBin.c)
 *     HvpProtectBinPartial @ 0x1407A4030 (HvpProtectBinPartial.c)
 *     HvpEnlistFreeCells @ 0x1407A4A50 (HvpEnlistFreeCells.c)
 *     HvpValidateLoadedBin @ 0x1407A4B30 (HvpValidateLoadedBin.c)
 *     CmpReleaseGlobalQuota @ 0x1407A5908 (CmpReleaseGlobalQuota.c)
 *     HvpMarkDirty @ 0x1407D25D0 (HvpMarkDirty.c)
 *     HvIsRangeDirty @ 0x140A22C54 (HvIsRangeDirty.c)
 *     HvpGetBinContextInitialize @ 0x140AF2644 (HvpGetBinContextInitialize.c)
 *     HvpMapEntryGetBinAddress @ 0x140AF2654 (HvpMapEntryGetBinAddress.c)
 *     HvpGetCellMap @ 0x140AF2670 (HvpGetCellMap.c)
 *     HvpMapEntryReleaseBinAddress @ 0x140AF26CC (HvpMapEntryReleaseBinAddress.c)
 */

__int64 __fastcall HvpRemapAndEnlistHiveBins(ULONG_PTR BugCheckParameter2, int a2, __int64 a3)
{
  __int64 v4; // r14
  bool v5; // zf
  __int64 v6; // rdx
  __int64 v7; // r13
  unsigned int v8; // r10d
  unsigned int v9; // r12d
  char v10; // bl
  unsigned int v11; // edi
  __int64 v12; // rcx
  unsigned int v13; // r10d
  _DWORD *BinAddress; // r15
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned int v20; // ebx
  unsigned int v22; // r11d
  __int64 v23; // rcx
  int v24; // eax
  int v25; // r9d
  __int64 v26; // rcx
  unsigned int v27; // r10d
  _DWORD *v28; // r15
  __int64 v29; // rdx
  __int64 v30; // rcx
  int v31; // eax
  unsigned int v32; // ebx
  __int64 v33; // r14
  __int64 v34; // rcx
  const void *v35; // r15
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  int v39; // eax
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx
  int v43; // [rsp+20h] [rbp-38h]
  __int64 v44; // [rsp+28h] [rbp-30h]
  unsigned int v45; // [rsp+30h] [rbp-28h]
  unsigned int v46; // [rsp+34h] [rbp-24h]
  __int64 v47; // [rsp+38h] [rbp-20h] BYREF
  __int64 v48; // [rsp+40h] [rbp-18h] BYREF
  __int64 CellMap; // [rsp+48h] [rbp-10h]
  char v50; // [rsp+A0h] [rbp+48h]
  __int16 v53; // [rsp+B8h] [rbp+60h] BYREF

  v53 = 0;
  v4 = a3;
  HvpGetBinContextInitialize(&v53);
  v5 = (*(_DWORD *)(BugCheckParameter2 + 160) & 0x20000) == 0;
  v7 = (unsigned int)v6;
  v8 = *(_DWORD *)(BugCheckParameter2 + 280);
  v9 = v6;
  v48 = v6;
  v10 = v6;
  v47 = v6;
  v11 = v6;
  v50 = v6;
  v45 = v8;
  if ( !v5 )
  {
    v46 = *(_DWORD *)(BugCheckParameter2 + 232) - 4096;
    if ( *(_DWORD *)(BugCheckParameter2 + 232) != 4096 )
    {
      do
      {
        CellMap = HvpGetCellMap(BugCheckParameter2, v11);
        BinAddress = (_DWORD *)HvpMapEntryGetBinAddress(v12, CellMap, &v53);
        if ( !(unsigned __int8)HvpValidateLoadedBin(BinAddress, v11, v13) )
        {
          v20 = -1073741492;
          SetFailureLocation(v4, 1, 34, -1073741492, 16);
          if ( (a2 & 0x20000) != 0 || BYTE2(NlsMbOemCodePageTag) == (_BYTE)v7 && (CmpBootType & 6) == 0 )
          {
            v43 = 32;
            goto LABEL_30;
          }
          v24 = HvpMarkDirty(BugCheckParameter2);
          v20 = v24;
          if ( v24 < 0 )
          {
            v43 = 48;
            goto LABEL_27;
          }
          memset(BinAddress, 0, 0x1000uLL);
          BinAddress[2] = 4096;
          BinAddress[1] = v11 & 0x7FFFFFFF;
          *BinAddress = 1852400232;
          BinAddress[8] = 4064;
          v50 = 1;
          *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
        }
        if ( BinAddress[2] != 4096 )
        {
          v9 = BinAddress[2];
          HvpMapEntryReleaseBinAddress(v16, v15, &v53);
          HvpGetBinContextInitialize(&v53);
          if ( v9 + v11 > v22 )
          {
            v10 = v50;
            goto LABEL_58;
          }
          v17 = HvpViewMapPromoteRangeToMapping(BugCheckParameter2 + 224, v11, v9, &v48);
          v20 = v17;
          if ( v17 < 0 )
          {
            v43 = 64;
            goto LABEL_32;
          }
          HvpPointMapEntriesToBuffer(BugCheckParameter2, v48, v9, v11, v7, v7 & v44);
          BinAddress = (_DWORD *)HvpMapEntryGetBinAddress(v23, CellMap, &v53);
        }
        v17 = HvpEnlistFreeCells(BugCheckParameter2);
        v20 = v17;
        if ( v17 == 1073741833 )
        {
          v10 = 1;
          v50 = 1;
        }
        else
        {
          if ( v17 < 0 )
          {
            v43 = 80;
            goto LABEL_32;
          }
          v10 = v50;
        }
        v11 += BinAddress[2];
        HvpMapEntryReleaseBinAddress(v19, v18, &v53);
        HvpGetBinContextInitialize(&v53);
        v8 = v45;
      }
      while ( v11 < v46 );
    }
  }
  while ( v11 < v8 )
  {
    v48 = HvpGetCellMap(BugCheckParameter2, v11);
    v28 = (_DWORD *)HvpMapEntryGetBinAddress(v26, v48, &v53);
    if ( !(unsigned __int8)HvpValidateLoadedBin(v28, v11, v27) )
    {
      v20 = -1073741492;
      SetFailureLocation(v4, 1, 34, -1073741492, 96);
      if ( (a2 & 0x20000) != 0 || !BYTE2(NlsMbOemCodePageTag) && (CmpBootType & 6) == 0 )
      {
        v43 = 112;
LABEL_30:
        v25 = -1073741492;
        goto LABEL_33;
      }
      v24 = HvpMarkDirty(BugCheckParameter2);
      v20 = v24;
      if ( v24 < 0 )
      {
        v43 = 128;
LABEL_27:
        v25 = v24;
LABEL_33:
        SetFailureLocation(v4, 0, 34, v25, v43);
        return v20;
      }
      memset(v28, 0, 0x1000uLL);
      v28[2] = 4096;
      *v28 = 1852400232;
      v28[1] = v11 & 0x7FFFFFFF;
      v28[8] = 4064;
      v50 = 1;
      *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
    }
    if ( v28[2] != 4096 )
    {
      v9 = v28[2];
      HvpMapEntryReleaseBinAddress(v30, v29, &v53);
      HvpGetBinContextInitialize(&v53);
      v31 = HvpAllocateBin(BugCheckParameter2, v9, 0, 0x31334D43u, &v47);
      v20 = v31;
      if ( v31 < 0 )
      {
        SetFailureLocation(v4, 0, 34, v31, 144);
        v7 = v47;
        goto LABEL_12;
      }
      v7 = v47;
      v32 = 0;
      if ( v9 )
      {
        do
        {
          v48 = HvpGetCellMap(BugCheckParameter2, v32 + v11);
          v33 = v48;
          v35 = (const void *)HvpMapEntryGetBinAddress(v34, v48, &v53);
          memmove((void *)(v7 + v32), v35, 0x1000uLL);
          HvpMapEntryReleaseBinAddress(v37, v36, &v53);
          HvpGetBinContextInitialize(&v53);
          if ( (*(_BYTE *)(v33 + 8) & 8) != 0 )
            HvpFreeBin(BugCheckParameter2, 0x1000u, (__int64)v35);
          else
            CmpReleaseGlobalQuota(4096LL);
          *(_QWORD *)v33 = 0LL;
          v32 += 4096;
          *(_QWORD *)(v33 + 8) = 0LL;
          *(_DWORD *)(v33 + 16) = 0;
        }
        while ( v32 < v9 );
        v4 = a3;
      }
      if ( !(unsigned __int8)HvIsRangeDirty(BugCheckParameter2, v11, v9) )
      {
        v39 = HvpProtectBinPartial(BugCheckParameter2, v7, v38, 0, v9, 0);
        v20 = v39;
        if ( v39 < 0 )
        {
          SetFailureLocation(v4, 0, 34, v39, 160);
          goto LABEL_12;
        }
      }
      HvpPointMapEntriesToBuffer(BugCheckParameter2, v7, v9, v11, 1, 0LL);
      v7 = 0LL;
      v28 = (_DWORD *)HvpMapEntryGetBinAddress(v40, v48, &v53);
      v47 = 0LL;
    }
    v17 = HvpEnlistFreeCells(BugCheckParameter2);
    v20 = v17;
    if ( v17 == 1073741833 )
    {
      v10 = 1;
      v50 = 1;
    }
    else
    {
      if ( v17 < 0 )
      {
        v43 = 176;
LABEL_32:
        v25 = v17;
        goto LABEL_33;
      }
      v10 = v50;
    }
    v11 += v28[2];
    HvpMapEntryReleaseBinAddress(v42, v41, &v53);
    HvpGetBinContextInitialize(&v53);
LABEL_58:
    v8 = v45;
  }
  if ( v10 )
  {
    return 1073741833;
  }
  else
  {
    v20 = 0;
LABEL_12:
    if ( v7 )
      HvpFreeBin(BugCheckParameter2, v9, v7);
  }
  return v20;
}
