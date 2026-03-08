/*
 * XREFs of MiAllocateFileExtents @ 0x140A303A8
 * Callers:
 *     MiAddViewsForSection @ 0x140331DC0 (MiAddViewsForSection.c)
 *     MiCreatePrototypePtes @ 0x14036862C (MiCreatePrototypePtes.c)
 *     MiUpdateActiveSubsection @ 0x1406337C0 (MiUpdateActiveSubsection.c)
 *     MiInitializeCachedExtentWalker @ 0x14063B7E8 (MiInitializeCachedExtentWalker.c)
 *     MiRefillPurgedExtents @ 0x14063CD7C (MiRefillPurgedExtents.c)
 *     MiFaultGetFileExtents @ 0x1406438D0 (MiFaultGetFileExtents.c)
 *     MiInitializeImageExtents @ 0x140A311CC (MiInitializeImageExtents.c)
 * Callees:
 *     MiAllocatePool @ 0x140289CF0 (MiAllocatePool.c)
 *     MiStartingOffset @ 0x14028C530 (MiStartingOffset.c)
 *     MiSetSubsectionBase @ 0x1402A4B24 (MiSetSubsectionBase.c)
 *     MiEndingOffset @ 0x140324248 (MiEndingOffset.c)
 *     MiReferenceControlAreaFile @ 0x140344094 (MiReferenceControlAreaFile.c)
 *     MiDereferenceControlAreaFile @ 0x1403441A0 (MiDereferenceControlAreaFile.c)
 *     MiUpdateSystemProtoPtesTree @ 0x140368AE0 (MiUpdateSystemProtoPtesTree.c)
 *     FsRtlGetFileExtents @ 0x14053A498 (FsRtlGetFileExtents.c)
 *     MiChangingSubsectionProtos @ 0x1406399E8 (MiChangingSubsectionProtos.c)
 *     MiEliminateStaleExtents @ 0x14063A788 (MiEliminateStaleExtents.c)
 *     MiInsertCopyExtents @ 0x14063BA1C (MiInsertCopyExtents.c)
 *     MiMergeCopyExtents @ 0x14063BFCC (MiMergeCopyExtents.c)
 *     MiSubsectionProtosCreated @ 0x14063D324 (MiSubsectionProtosCreated.c)
 *     MiUnlinkSubsectionWaitBlock @ 0x14063DD78 (MiUnlinkSubsectionWaitBlock.c)
 *     MiReplaceSystemProtoPtesNode @ 0x140667768 (MiReplaceSystemProtoPtesNode.c)
 *     MiNewPfnsSuitable @ 0x140A29EF0 (MiNewPfnsSuitable.c)
 *     MiConvertRunsToPages @ 0x140A30B34 (MiConvertRunsToPages.c)
 *     MiCreateFileOnlyPfns @ 0x140A30F88 (MiCreateFileOnlyPfns.c)
 *     MiDeleteFileExtentList @ 0x140A31150 (MiDeleteFileExtentList.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiAllocateFileExtents(
        ULONG_PTR BugCheckParameter2,
        unsigned int a2,
        signed __int64 a3,
        int a4,
        int a5,
        unsigned int a6)
{
  unsigned __int64 v7; // r9
  unsigned __int64 v9; // rax
  unsigned int *inserted; // r12
  __int64 v11; // r15
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rax
  unsigned int v15; // r13d
  _DWORD *Pool; // rax
  _DWORD *v17; // rsi
  __int64 v19; // rdx
  unsigned __int64 v20; // rbx
  int FileExtents; // ebx
  unsigned int v22; // ebx
  __int64 v23; // rdx
  struct _FILE_OBJECT *v24; // r13
  void *v25; // rdi
  __int64 v26; // r8
  __int64 v27; // r13
  int v28; // eax
  unsigned __int64 *v29; // rcx
  int v30; // edx
  void *v31; // rcx
  __int64 v32; // [rsp+28h] [rbp-99h]
  __int64 v33; // [rsp+38h] [rbp-89h] BYREF
  struct _FILE_OBJECT *v34; // [rsp+40h] [rbp-81h] BYREF
  unsigned int *v35; // [rsp+48h] [rbp-79h] BYREF
  unsigned __int64 v36; // [rsp+50h] [rbp-71h]
  unsigned __int64 v37; // [rsp+58h] [rbp-69h]
  unsigned __int64 v38; // [rsp+60h] [rbp-61h]
  _OWORD v39[2]; // [rsp+68h] [rbp-59h] BYREF
  __int64 v40; // [rsp+88h] [rbp-39h]
  __int128 v41; // [rsp+90h] [rbp-31h] BYREF
  __int128 v42; // [rsp+A0h] [rbp-21h]
  __int128 v43; // [rsp+B0h] [rbp-11h]
  int v44; // [rsp+118h] [rbp+57h]
  unsigned int v45; // [rsp+120h] [rbp+5Fh]

  v45 = a2;
  v7 = a3;
  v36 = 0LL;
  v9 = (unsigned int)(a4 << 12);
  inserted = 0LL;
  v38 = (unsigned int)v9;
  memset(v39, 0, sizeof(v39));
  v40 = 0LL;
  v35 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  v43 = 0LL;
LABEL_2:
  v11 = *(_QWORD *)BugCheckParameter2;
  v12 = v9;
  if ( (*(_DWORD *)(*(_QWORD *)BugCheckParameter2 + 56LL) & 0x20) != 0 )
  {
    v44 = 1;
    if ( *(_QWORD *)(BugCheckParameter2 + 8) )
      v13 = MiStartingOffset((__int64 *)BugCheckParameter2, v7, a6);
    else
      v13 = (unsigned __int64)a2 << 12;
    v14 = MiEndingOffset(BugCheckParameter2);
    v36 = v14;
    if ( v13 == v14 && !v13 )
      return 0LL;
    if ( v12 + v13 > v14 )
      v12 = ((unsigned int)(v14 - v13) + 511LL) & 0xFFFFFFFFFFFFFE00uLL;
  }
  else
  {
    v44 = 2;
    v13 = (a2
         + (*(unsigned int *)(BugCheckParameter2 + 36) | ((unsigned __int64)(*(_WORD *)(BugCheckParameter2 + 32) & 0xFFC0) << 26))) << 12;
  }
  v34 = (struct _FILE_OBJECT *)MiReferenceControlAreaFile(v11);
  HIDWORD(v33) = 1;
  v15 = ((__rdtsc() >> 4) & 7) + 8;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( !v15 )
      {
LABEL_16:
        MiDereferenceControlAreaFile(v11, (__int64)v34);
        return 3221225626LL;
      }
      Pool = MiAllocatePool(64, 16LL * (v15 - 1) + 24, 0x3446694Du);
      v17 = Pool;
      if ( Pool )
        break;
      if ( !HIDWORD(v33) )
        goto LABEL_16;
      v15 >>= 1;
    }
    *Pool = v15;
    Pool[1] = 0;
    v33 = 0LL;
    if ( v44 == 1 )
    {
      if ( v12 + v13 > v36 )
        v12 = (unsigned int)(v36 - v13);
      v19 = *(_QWORD *)(BugCheckParameter2 + 8);
      if ( v19 && (*(_BYTE *)(*(_QWORD *)(v11 + 96) + 48LL) & 1) != 0 )
        v13 = (v19 - *(_QWORD *)(*(_QWORD *)v11 + 64LL)) >> 3 << 12;
    }
    v20 = (v12 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    v37 = v20;
    if ( v44 != 1 || (*(_DWORD *)(v11 + 56) & 2) == 0 )
      break;
LABEL_27:
    FileExtents = FsRtlGetFileExtents(v34, v44, v13, v20, v17);
    if ( FileExtents < 0 )
    {
      MiDereferenceControlAreaFile(v11, (__int64)v34);
      if ( (_DWORD)v33 )
        MiUnlinkSubsectionWaitBlock((__int64 *)BugCheckParameter2, (__int64)v39, 0);
      v31 = v17;
LABEL_97:
      ExFreePoolWithTag(v31, 0);
      return (unsigned int)FileExtents;
    }
    if ( v17[1] <= v15 )
    {
      MiDereferenceControlAreaFile(v11, (__int64)v34);
      if ( (unsigned int)MiNewPfnsSuitable((__int64)v17) )
      {
        HIDWORD(v33) = -1;
        v24 = 0LL;
        v25 = 0LL;
        v34 = 0LL;
        if ( v17[1] )
        {
          v25 = (void *)MiConvertRunsToPages(v17, v23, &v34, (char *)&v33 + 4);
          if ( v25 )
          {
            if ( (a5 & 0x40) == 0 || HIDWORD(v33) <= 1 )
            {
              if ( v44 != 1 || (*(_DWORD *)(v11 + 56) & 2) == 0 )
              {
                v24 = v34;
                goto LABEL_44;
              }
              v24 = v34;
              goto LABEL_53;
            }
            FileExtents = -1073741800;
          }
          else
          {
LABEL_37:
            FileExtents = -1073741670;
          }
        }
        else
        {
          if ( (a5 & 0x40) == 0 && v44 != 1 )
          {
            if ( (*(_BYTE *)(v11 + 62) & 0xC) == 8 )
              goto LABEL_37;
LABEL_44:
            FileExtents = MiChangingSubsectionProtos((_QWORD *)BugCheckParameter2, a5 | 0x10u, (__int64)v39);
            if ( FileExtents < 0 )
            {
              ExFreePoolWithTag(v17, 0);
              if ( v25 )
                ExFreePoolWithTag(v25, 0);
              if ( FileExtents == -1073740748 )
              {
                v7 = a3;
                a2 = v45;
                v9 = v38;
                goto LABEL_2;
              }
              return (unsigned int)FileExtents;
            }
            if ( v25 && (*(_BYTE *)(v11 + 62) & 0xC) == 4 && (a5 & 1) == 0 )
              MiEliminateStaleExtents(a3, (__int64)v25, (unsigned __int64)v24);
            if ( v44 == 1 || (*(_BYTE *)(v11 + 62) & 0xC) != 8 )
              goto LABEL_53;
            if ( (a5 & 1) != 0 )
            {
              inserted = MiInsertCopyExtents((__int64)v17, 0LL, 1);
              if ( !inserted )
              {
                FileExtents = -1073741670;
                goto LABEL_67;
              }
LABEL_53:
              ExFreePoolWithTag(v17, 0);
              if ( inserted )
              {
                v27 = a3;
                FileExtents = 0;
                goto LABEL_73;
              }
              if ( v25 && (*(_BYTE *)(v11 + 56) & 0x20) == 0 && (a5 & 1) != 0 && (*(_BYTE *)(v11 + 62) & 0xC) == 4 )
              {
                *((_QWORD *)&v43 + 1) = v24;
                *((_QWORD *)&v42 + 1) = *((_QWORD *)&v42 + 1) & 0xFFFFFFFFFFFFFFF8uLL | 4;
                *(_QWORD *)&v43 = a3;
                MiUpdateSystemProtoPtesTree((unsigned __int64 *)&v41, 1);
              }
              v32 = (__int64)v24;
              v27 = a3;
              FileExtents = MiCreateFileOnlyPfns(BugCheckParameter2, a3, a5, (_DWORD)v25, v32);
              if ( FileExtents < 0 )
              {
                if ( !(_QWORD)v43 )
                  goto LABEL_84;
                v30 = 0;
                v29 = (unsigned __int64 *)&v41;
              }
              else
              {
LABEL_73:
                if ( (a5 & 1) == 0 )
                  goto LABEL_84;
                if ( (a5 & 0x40) != 0 )
                  *(_DWORD *)(BugCheckParameter2 + 108) = 2;
                MiSetSubsectionBase((__int64 *)BugCheckParameter2, v27, HIDWORD(v33), (__int64)inserted);
                v29 = (unsigned __int64 *)(BugCheckParameter2 + 120);
                if ( (_QWORD)v43 )
                {
                  MiReplaceSystemProtoPtesNode((unsigned __int64 *)&v41, BugCheckParameter2 + 120);
LABEL_84:
                  if ( v44 != 1 || (*(_DWORD *)(v11 + 56) & 2) == 0 )
                    MiSubsectionProtosCreated(BugCheckParameter2, (__int64)v39, a4, 0);
                  if ( v25 )
                  {
                    v31 = v25;
                    goto LABEL_97;
                  }
                  return (unsigned int)FileExtents;
                }
                if ( (*(_DWORD *)(v11 + 56) & 0x20) != 0 )
                  goto LABEL_84;
                v30 = 1;
              }
              MiUpdateSystemProtoPtesTree(v29, v30);
              goto LABEL_84;
            }
            v28 = MiMergeCopyExtents((_QWORD *)BugCheckParameter2, (__int64)v17, v26, &v35);
            inserted = v35;
            FileExtents = v28;
            if ( v28 >= 0 )
              goto LABEL_53;
            if ( v28 == -1073741302 )
              FileExtents = 0;
LABEL_67:
            MiSubsectionProtosCreated(BugCheckParameter2, (__int64)v39, 0, 0);
LABEL_92:
            ExFreePoolWithTag(v17, 0);
            if ( inserted )
              MiDeleteFileExtentList(inserted);
            return (unsigned int)FileExtents;
          }
          FileExtents = -1073741823;
        }
      }
      else
      {
        FileExtents = -1073740761;
      }
      if ( (_DWORD)v33 )
        MiUnlinkSubsectionWaitBlock((__int64 *)BugCheckParameter2, (__int64)v39, 0);
      goto LABEL_92;
    }
    if ( (_DWORD)v33 )
      MiUnlinkSubsectionWaitBlock((__int64 *)BugCheckParameter2, (__int64)v39, 0);
    v22 = v17[1];
    v17[1] = v15;
    ExFreePoolWithTag(v17, 0);
    v15 = v22;
    v12 = v37;
  }
  LODWORD(v33) = MiChangingSubsectionProtos((_QWORD *)BugCheckParameter2, a5 | 8u, (__int64)v39);
  if ( (int)v33 >= 0 )
  {
    LODWORD(v33) = 1;
    goto LABEL_27;
  }
  MiDereferenceControlAreaFile(v11, (__int64)v34);
  ExFreePoolWithTag(v17, 0);
  return (unsigned int)v33;
}
