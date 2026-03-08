/*
 * XREFs of HvpFindNextDirtyBlock @ 0x1407A4B70
 * Callers:
 *     HvpGenerateLogEntryDirtyData @ 0x14030C5F8 (HvpGenerateLogEntryDirtyData.c)
 *     HvStoreModifiedData @ 0x14072D6A8 (HvStoreModifiedData.c)
 *     HvWriteHivePrimaryFile @ 0x14073216C (HvWriteHivePrimaryFile.c)
 * Callees:
 *     HvpFindNextDirtyRun @ 0x14030C6F0 (HvpFindNextDirtyRun.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     HvpMapEntryGetFreeBin @ 0x1407A6910 (HvpMapEntryGetFreeBin.c)
 *     HvpMapEntryGetBlockAddress @ 0x1407B46A4 (HvpMapEntryGetBlockAddress.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     HvpGetBinContextInitialize @ 0x140AF2644 (HvpGetBinContextInitialize.c)
 *     HvpMapEntryGetBinAddress @ 0x140AF2654 (HvpMapEntryGetBinAddress.c)
 *     HvpGetCellMap @ 0x140AF2670 (HvpGetCellMap.c)
 *     HvpMapEntryReleaseBinAddress @ 0x140AF26CC (HvpMapEntryReleaseBinAddress.c)
 */

char __fastcall HvpFindNextDirtyBlock(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        _DWORD *a3,
        _QWORD *a4,
        unsigned int *a5,
        _DWORD *a6,
        char a7)
{
  char *Pool2; // rdi
  unsigned int *v10; // r10
  unsigned int *v11; // r11
  unsigned int v12; // r12d
  unsigned int v13; // ebx
  unsigned int v14; // esi
  __int64 CellMap; // rcx
  __int64 v16; // rcx
  __int64 BlockAddress; // rcx
  char *v18; // rax
  __int64 v19; // rdx
  unsigned int v20; // r8d
  unsigned int v21; // r15d
  unsigned int v22; // r12d
  unsigned int v24; // r14d
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  const void *v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // r9
  __int64 BinAddress; // rax
  __int64 v33; // r9
  _WORD v34[2]; // [rsp+30h] [rbp-20h] BYREF
  _WORD v35[2]; // [rsp+34h] [rbp-1Ch] BYREF
  unsigned int v36; // [rsp+38h] [rbp-18h] BYREF
  unsigned int v37; // [rsp+3Ch] [rbp-14h] BYREF
  unsigned int v38; // [rsp+40h] [rbp-10h]
  unsigned int v39; // [rsp+44h] [rbp-Ch]

  Pool2 = 0LL;
  v37 = 0;
  v35[0] = 0;
  v36 = 0;
  v34[0] = 0;
  HvpGetBinContextInitialize(v35);
  HvpGetBinContextInitialize(v34);
  if ( !HvpFindNextDirtyRun(v10, v11, &v36, &v37) )
    return 0;
  v12 = v36;
  v13 = v36 << 9;
  v39 = v36;
  v14 = (v37 << 9) - (v36 << 9);
  v38 = v37 << 9;
  if ( !a7 || (Pool2 = (char *)ExAllocatePool2(256LL, v14, 859131203LL)) != 0LL )
  {
    CellMap = HvpGetCellMap(BugCheckParameter2, v13);
    if ( !CellMap )
      KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v13, 0x1285uLL);
    if ( HvpMapEntryGetFreeBin(CellMap) )
    {
      BinAddress = HvpMapEntryGetBinAddress(v16, v16, v34);
      BlockAddress = v13 - *(_DWORD *)(v33 + 20) + BinAddress;
    }
    else
    {
      BlockAddress = HvpMapEntryGetBlockAddress(BugCheckParameter2, v16, v34);
    }
    if ( a7 )
      v18 = Pool2;
    else
      v18 = (char *)(BlockAddress + (v13 & 0xFFF));
    *a4 = v18;
    v19 = v12 & 7;
    v20 = v37 - v12;
    v21 = v37 - v12;
    v36 = v37 - v12;
    *a6 = v13 + 4096;
    if ( v20 >= 8 - (int)v19 )
      v21 = 8 - v19;
    v22 = v21 << 9;
    if ( a7 )
    {
      memmove(Pool2, (const void *)(BlockAddress + (unsigned int)((_DWORD)v19 << 9)), v22);
      v20 = v36;
      Pool2 += v22;
    }
    if ( v20 > v21 )
    {
      v24 = (v13 + 4096) & 0xFFFFF000;
      while ( v22 < v14 )
      {
        v25 = HvpGetCellMap(BugCheckParameter2, v24);
        v19 = v25;
        if ( !v25 )
          KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v24, 0x12EFuLL);
        if ( !a7 && (*(_BYTE *)(v25 + 8) & 1) != 0 )
          break;
        if ( HvpMapEntryGetFreeBin(v25) )
        {
          v30 = HvpMapEntryGetBinAddress(v27, v26, v35);
          v28 = (const void *)(v30 + v24 - *(_DWORD *)(v31 + 20));
        }
        else
        {
          v28 = (const void *)HvpMapEntryGetBlockAddress(BugCheckParameter2, v26, v35);
        }
        if ( v38 - v24 <= 0x1000 )
        {
          if ( a7 )
            memmove(Pool2, v28, v38 - v24);
          *a5 = v14;
          HvpMapEntryReleaseBinAddress(v29, v28, v35);
          goto LABEL_14;
        }
        if ( a7 )
        {
          memmove(Pool2, v28, 0x1000uLL);
          Pool2 += 4096;
        }
        v22 += 4096;
        v21 += 8;
        v24 += 4096;
        HvpMapEntryReleaseBinAddress(v29, v28, v35);
      }
      *a5 = v22;
      if ( v21 + v39 != v37 )
      {
        BlockAddress = (__int64)a3;
        *a3 = v21 + v39;
      }
    }
    else
    {
      *a5 = v14;
    }
LABEL_14:
    HvpMapEntryReleaseBinAddress(BlockAddress, v19, v34);
  }
  else
  {
    *a4 = 0LL;
  }
  return 1;
}
