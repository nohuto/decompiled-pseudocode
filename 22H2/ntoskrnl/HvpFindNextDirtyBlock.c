/*
 * XREFs of HvpFindNextDirtyBlock @ 0x1406BEED8
 * Callers:
 *     HvpGenerateLogEntryDirtyData @ 0x140331580 (HvpGenerateLogEntryDirtyData.c)
 *     HvStoreModifiedData @ 0x140720430 (HvStoreModifiedData.c)
 *     HvWriteHivePrimaryFile @ 0x140724610 (HvWriteHivePrimaryFile.c)
 * Callees:
 *     HvpFindNextDirtyRun @ 0x1403300F8 (HvpFindNextDirtyRun.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     HvpMapEntryGetFreeBin @ 0x14065579C (HvpMapEntryGetFreeBin.c)
 *     HvpGetCellMap @ 0x140655DC0 (HvpGetCellMap.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

char __fastcall HvpFindNextDirtyBlock(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        unsigned int *a3,
        _QWORD *a4,
        unsigned int *a5,
        _DWORD *a6,
        char a7)
{
  char *PoolWithTag; // rdi
  unsigned int v10; // ebx
  unsigned int v11; // r15d
  _BYTE *CellMap; // rax
  __int64 FreeBin; // rax
  _QWORD *v14; // r8
  int v15; // r10d
  int v16; // r11d
  unsigned __int64 v17; // rcx
  char *v18; // rax
  int v19; // edx
  unsigned int v20; // r8d
  unsigned int v21; // ebp
  unsigned int v22; // r14d
  unsigned int v24; // esi
  unsigned int v25; // ebx
  _BYTE *v26; // rax
  __int64 v27; // rax
  _QWORD *v28; // r8
  size_t v29; // r10
  const void *v30; // rdx
  unsigned int v31; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v32; // [rsp+34h] [rbp-34h] BYREF
  unsigned int v33; // [rsp+38h] [rbp-30h]
  unsigned int v34; // [rsp+3Ch] [rbp-2Ch]

  v32 = 0;
  v31 = 0;
  PoolWithTag = 0LL;
  if ( !HvpFindNextDirtyRun(a2, a3, &v31, &v32) )
    return 0;
  v10 = v31 << 9;
  v11 = (v32 << 9) - (v31 << 9);
  v34 = v32 << 9;
  if ( a7 && (PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v11, 0x33354D43u)) == 0LL )
  {
    *a4 = 0LL;
    return 1;
  }
  else
  {
    CellMap = (_BYTE *)HvpGetCellMap(BugCheckParameter2, v10);
    if ( !CellMap )
      KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v10, 0x1287uLL);
    FreeBin = HvpMapEntryGetFreeBin(CellMap);
    if ( FreeBin )
      v17 = (v14[1] & 0xFFFFFFFFFFFFFFF0uLL) + v10 - *(_DWORD *)(FreeBin + 20);
    else
      v17 = *v14 + (v14[1] & 0xFFFFFFFFFFFFFFF0uLL);
    if ( a7 )
      v18 = PoolWithTag;
    else
      v18 = (char *)(v17 + (v10 & 0xFFF));
    *a4 = v18;
    v19 = v15 & 7;
    v20 = v16 - v15;
    v21 = v16 - v15;
    v33 = v16 - v15;
    *a6 = v10 + 4096;
    if ( v16 - v15 >= (unsigned int)(8 - v19) )
      v21 = 8 - v19;
    v22 = v21 << 9;
    if ( a7 )
    {
      memmove(PoolWithTag, (const void *)(v17 + (unsigned int)(v19 << 9)), v22);
      v20 = v33;
      PoolWithTag += v22;
    }
    if ( v20 > v21 )
    {
      v24 = (v10 + 4096) & 0xFFFFF000;
      if ( v22 < v11 )
      {
        v25 = v34;
        do
        {
          v26 = (_BYTE *)HvpGetCellMap(BugCheckParameter2, v24);
          if ( !v26 )
            KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v24, 0x12F1uLL);
          if ( !a7 && (v26[8] & 1) != 0 )
            break;
          v27 = HvpMapEntryGetFreeBin(v26);
          if ( v27 )
            v30 = (const void *)((v28[1] & 0xFFFFFFFFFFFFFFF0uLL) + v24 - *(_DWORD *)(v27 + 20));
          else
            v30 = (const void *)(*v28 + (v28[1] & 0xFFFFFFFFFFFFFFF0uLL));
          if ( v25 - v24 <= (unsigned int)v29 )
          {
            if ( a7 )
              memmove(PoolWithTag, v30, v25 - v24);
            goto LABEL_13;
          }
          if ( a7 )
          {
            memmove(PoolWithTag, v30, v29);
            LODWORD(v29) = 4096;
            PoolWithTag += 4096;
          }
          v22 += v29;
          v21 += 8;
          v24 += v29;
        }
        while ( v22 < v11 );
      }
      *a5 = v22;
      if ( v21 + v31 != v32 )
        *a3 = v21 + v31;
    }
    else
    {
LABEL_13:
      *a5 = v11;
    }
    return 1;
  }
}
