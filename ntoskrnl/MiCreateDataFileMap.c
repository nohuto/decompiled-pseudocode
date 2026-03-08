/*
 * XREFs of MiCreateDataFileMap @ 0x1406A6C30
 * Callers:
 *     MiCreateNewSection @ 0x1406A6414 (MiCreateNewSection.c)
 * Callees:
 *     MiInsertSubsectionNode @ 0x140214E00 (MiInsertSubsectionNode.c)
 *     MiAllocatePool @ 0x140289CF0 (MiAllocatePool.c)
 *     FsRtlSetFileSize @ 0x14079BDF4 (FsRtlSetFileSize.c)
 *     FsRtlGetFileSize @ 0x1407F4020 (FsRtlGetFileSize.c)
 *     MiComputeIdealFirstSubsection @ 0x140A30A78 (MiComputeIdealFirstSubsection.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall MiCreateDataFileMap(
        PFILE_OBJECT FileObject,
        _WORD *a2,
        _QWORD *a3,
        LARGE_INTEGER a4,
        char a5,
        int a6,
        int a7,
        int a8)
{
  __int64 v8; // rsi
  LARGE_INTEGER v11; // r13
  unsigned __int64 v12; // r12
  _QWORD *Pool; // r14
  _QWORD *v14; // rdi
  __int64 v15; // rcx
  int v16; // ebx
  unsigned int v17; // ebp
  unsigned __int64 v18; // r15
  _DWORD *v19; // rdx
  unsigned int v20; // r8d
  __int16 v21; // cx
  __int16 v22; // bp
  char v23; // cl
  __int64 v24; // rdx
  __int16 v25; // ax
  __int16 v26; // bp
  __int64 *v27; // rbx
  __int64 v28; // r8
  __int16 v29; // ax
  bool v30; // zf
  int v31; // eax
  NTSTATUS result; // eax
  _QWORD *v33; // rcx
  _QWORD *v34; // rbx
  int v35; // [rsp+20h] [rbp-48h]
  LARGE_INTEGER FileSize; // [rsp+28h] [rbp-40h] BYREF
  unsigned int v39; // [rsp+A8h] [rbp+40h]

  v8 = 0LL;
  FileSize.QuadPart = 0LL;
  v35 = a8 & 1;
  if ( (a8 & 1) != 0 )
  {
    v11 = a4;
    goto LABEL_3;
  }
  result = FsRtlGetFileSize(FileObject, &FileSize);
  if ( result == -1073741638 )
    return -1073741792;
  if ( result >= 0 )
  {
    v11 = FileSize;
    if ( !FileSize.QuadPart && !a4.QuadPart )
      return -1073741538;
    if ( a4.QuadPart > (unsigned __int64)FileSize.QuadPart )
    {
      if ( (a5 & 0x44) == 0 )
        return -1073741760;
      FileSize = a4;
      v11 = a4;
      result = FsRtlSetFileSize(FileObject);
      if ( result < 0 )
        return result;
    }
LABEL_3:
    if ( v11.QuadPart <= 0x3FFFFFFFFFF000uLL )
    {
      v12 = (unsigned __int64)(v11.QuadPart + 4095) >> 12;
      Pool = MiAllocatePool(256, 0x30uLL, 0x6D536D4Du);
      if ( Pool )
      {
        v14 = MiAllocatePool(64, 0x130uLL, 0x61436D4Du);
        if ( v14 )
        {
          v15 = 0LL;
          v16 = a8 & 0x10000;
          if ( (a8 & 0x10000) != 0 )
          {
            if ( v12 > 0x200 )
              v15 = 8 * MiComputeIdealFirstSubsection(FileObject);
            v17 = 0x200000;
            if ( v15 )
              goto LABEL_9;
          }
          else
          {
            v17 = 0x100000;
          }
          LODWORD(v15) = v17;
LABEL_9:
          v18 = 8 * v12;
          FileSize.QuadPart = 0LL;
          v19 = 0LL;
          while ( 1 )
          {
            v20 = v18;
            if ( v18 >= (unsigned int)v15 )
              v20 = v15;
            v39 = v20;
            if ( v19 )
            {
              v19 = MiAllocatePool(64, 0x98uLL, 0x63536D4Du);
              if ( !v19 )
              {
                ExFreePoolWithTag(Pool, 0);
                v33 = (_QWORD *)v14[18];
                if ( v33 )
                {
                  do
                  {
                    v34 = (_QWORD *)v33[2];
                    ExFreePoolWithTag(v33, 0);
                    v33 = v34;
                  }
                  while ( v34 );
                }
                ExFreePoolWithTag(v14, 0);
                return -1073741670;
              }
              v20 = v39;
              *(_QWORD *)(FileSize.QuadPart + 16) = v19;
            }
            else
            {
              v19 = v14 + 16;
            }
            FileSize.QuadPart = (LONGLONG)v19;
            v19[11] = v20 >> 3;
            v18 -= v20;
            if ( !v18 )
            {
              *a3 = Pool;
              *Pool = 0LL;
              Pool[1] = 0LL;
              Pool[2] = 0LL;
              Pool[3] = 0LL;
              Pool[4] = 0LL;
              Pool[5] = 0LL;
              v14[2] = v14 + 1;
              v14[1] = v14 + 1;
              *v14 = Pool;
              v14[14] = 1LL;
              v14[3] = 1LL;
              v21 = (*((_WORD *)v14 + 30) ^ *a2) & 0x3FF;
              v14[13] = 0LL;
              *((_WORD *)v14 + 30) ^= v21;
              if ( v35 )
                *((_DWORD *)v14 + 14) |= 0x8000u;
              else
                v14[6] = 1LL;
              *((_DWORD *)v14 + 14) |= 2u;
              v22 = 6;
              *((_DWORD *)v14 + 14) = (*((_DWORD *)v14 + 14) | 0x80) ^ ((*((_DWORD *)v14 + 14) | 0x80) ^ (a7 << 20)) & 0x7F00000;
              if ( v16 )
              {
                *((_BYTE *)v14 + 62) = *((_BYTE *)v14 + 62) & 0xF3 | 4;
              }
              else if ( (a6 & 0x10000000) != 0 )
              {
                *((_WORD *)Pool + 6) |= 0x8000u;
                v22 = 14;
              }
              else if ( (a6 & 0x40000000) != 0 )
              {
                v22 = 30;
                *((_WORD *)Pool + 6) |= 0x4000u;
              }
              v23 = *((_BYTE *)Pool + 14);
              v24 = (__int64)(v14 + 16);
              *Pool = v14;
              Pool[3] = v11.QuadPart;
              v25 = (*((_WORD *)Pool + 6) ^ WORD2(v12)) & 0x3FF;
              *((_DWORD *)Pool + 2) = v12;
              *((_WORD *)Pool + 6) ^= v25;
              *((_BYTE *)Pool + 14) = (2 * v22) | v23 & 0xC1;
              v26 = 2 * v22;
              do
              {
                v27 = (__int64 *)(v24 + 16);
                v28 = *(unsigned int *)(v24 + 44);
                v29 = *(_WORD *)(v24 + 32) & 1;
                *(_QWORD *)v24 = v14;
                *(_DWORD *)(v24 + 36) = v8;
                v30 = *(_QWORD *)(v24 + 16) == 0LL;
                *(_WORD *)(v24 + 32) = v26 | v29 & 0xFFC1 | (WORD2(v8) << 6);
                if ( v30 )
                {
                  *(_WORD *)(v24 + 34) = (16 * LOWORD(v11.LowPart)) | *(_WORD *)(v24 + 34) & 0xF;
                  *(_DWORD *)(v24 + 52) ^= (*(_DWORD *)(v24 + 52) ^ (v28 + v8 - v12)) & 0x3FFFFFFF;
                  v31 = ((unsigned __int64)v11.QuadPart >> 12) - v8;
                }
                else
                {
                  v31 = v28;
                }
                *(_DWORD *)(v24 + 40) = v31;
                v8 += v28;
                *(_QWORD *)(v24 + 88) = v24 + 80;
                *(_QWORD *)(v24 + 80) = v24 + 80;
                MiInsertSubsectionNode((__int64)v14, v24, 0LL);
                v24 = *v27;
              }
              while ( *v27 );
              return 0;
            }
            LODWORD(v15) = v17;
            if ( v20 >= v17 )
              LODWORD(v15) = v20;
          }
        }
        ExFreePoolWithTag(Pool, 0);
      }
      return -1073741670;
    }
    return -1073741760;
  }
  return result;
}
