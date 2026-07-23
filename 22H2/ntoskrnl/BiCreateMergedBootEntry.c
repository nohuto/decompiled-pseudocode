/*
 * XREFs of BiCreateMergedBootEntry @ 0x140971504
 * Callers:
 *     BiUpdateEfiEntry @ 0x1409731BC (BiUpdateEfiEntry.c)
 * Callees:
 *     memmove @ 0x140413540 (memmove.c)
 *     memset @ 0x140413800 (memset.c)
 *     BiGetDeviceFromEfiPath @ 0x1409720A4 (BiGetDeviceFromEfiPath.c)
 *     BiGetFilePathFromEfiPath @ 0x140972228 (BiGetFilePathFromEfiPath.c)
 *     BiTranslateFilePath @ 0x140972D78 (BiTranslateFilePath.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall BiCreateMergedBootEntry(_DWORD *a1, _WORD *a2, _DWORD *a3, _WORD *a4, _QWORD *a5)
{
  __int64 v5; // r12
  _WORD *v6; // rax
  _WORD *v7; // rbx
  _DWORD *v9; // rdi
  _WORD *v10; // r15
  _FILE_PATH *v11; // r14
  int DeviceFromEfiPath; // ebx
  int FilePathFromEfiPath; // eax
  __int64 v15; // rax
  unsigned int v16; // ecx
  __int64 v17; // rax
  unsigned int v18; // eax
  unsigned int v19; // ebx
  _FILE_PATH *PoolWithTag; // rax
  void *v21; // rdx
  __int64 v22; // rbx
  size_t v23; // r8
  int v24; // eax
  unsigned int v25; // edx
  int v26; // r8d
  int v27; // r9d
  unsigned int v28; // r12d
  _DWORD *v29; // rax
  _DWORD *v30; // rax
  __int64 v31; // rcx
  size_t v32; // r8
  _DWORD *v33; // r12
  char v34; // [rsp+20h] [rbp-30h]
  unsigned int Size; // [rsp+24h] [rbp-2Ch]
  unsigned int Size_4; // [rsp+28h] [rbp-28h] BYREF
  size_t v37; // [rsp+30h] [rbp-20h]
  void *Src; // [rsp+38h] [rbp-18h]
  _DWORD *v39; // [rsp+40h] [rbp-10h] BYREF
  char v41; // [rsp+A0h] [rbp+50h]

  v5 = -1LL;
  Size_4 = 0;
  v6 = a4;
  v7 = a2;
  Src = 0LL;
  v37 = 0LL;
  v41 = 0;
  v9 = 0LL;
  v39 = 0LL;
  v10 = 0LL;
  v34 = 0;
  v11 = 0LL;
  if ( a3 )
  {
    if ( *a3 == 5 )
      return 3221225486LL;
    if ( *a3 != 2 )
      return 3221225485LL;
    Src = a3 + 5;
  }
  else
  {
    v9 = (_DWORD *)((char *)a1 + (unsigned int)a1[5]);
    if ( !a4 )
      goto LABEL_24;
    v37 = (size_t)a1 + (unsigned int)a1[5];
    DeviceFromEfiPath = BiGetDeviceFromEfiPath(v9 + 3);
    if ( DeviceFromEfiPath < 0 )
      goto LABEL_32;
    Src = (char *)Src + 20;
    v6 = a4;
  }
  if ( v6 )
  {
    v10 = v6;
    goto LABEL_14;
  }
  v9 = (_DWORD *)((char *)a1 + (unsigned int)a1[5]);
  v37 = (size_t)v9;
  FilePathFromEfiPath = BiGetFilePathFromEfiPath(v9 + 3, &v39, &Size_4);
  v10 = v39;
  DeviceFromEfiPath = FilePathFromEfiPath;
  if ( FilePathFromEfiPath >= 0 )
  {
    v34 = 1;
LABEL_14:
    v15 = -1LL;
    do
      ++v15;
    while ( *((_WORD *)Src + v15) );
    v16 = 2 * v15 + 2;
    v17 = -1LL;
    Size_4 = v16;
    do
      ++v17;
    while ( v10[v17] );
    Size = 2 * v17 + 2;
    v18 = v16 + Size;
    if ( v16 + Size < v16 )
      goto LABEL_31;
    v19 = v18 + 12;
    if ( v18 + 12 < v18 )
      goto LABEL_31;
    PoolWithTag = (_FILE_PATH *)ExAllocatePoolWithTag(PagedPool, v19, 0x4B444342u);
    v11 = PoolWithTag;
    if ( !PoolWithTag )
    {
LABEL_21:
      DeviceFromEfiPath = -1073741670;
      goto LABEL_32;
    }
    v21 = Src;
    PoolWithTag->Length = v19;
    v22 = Size_4;
    v23 = Size_4;
    PoolWithTag->Version = 1;
    PoolWithTag->Type = 3;
    memmove(PoolWithTag->FilePath, v21, v23);
    memmove(&v11->FilePath[v22], v10, Size);
    v24 = BiTranslateFilePath(v11, 4u);
    v9 = (_DWORD *)v37;
    DeviceFromEfiPath = v24;
    if ( v24 < 0 )
      goto LABEL_32;
    v7 = a2;
    v41 = 1;
LABEL_24:
    if ( !v7 )
      v7 = (_WORD *)((char *)a1 + (unsigned int)a1[4]);
    do
      ++v5;
    while ( v7[v5] );
    v25 = a1[6];
    v26 = 2 * v5 + 2;
    LODWORD(v37) = v26;
    if ( v25 + v26 >= v25 )
    {
      v27 = v9[1];
      if ( v27 + v25 + v26 + 36 >= v25 + v26 )
      {
        Size_4 = (v25 + 31) & 0xFFFFFFFC;
        Size = (v26 + Size_4 + 3) & 0xFFFFFFFC;
        v28 = v27 + Size;
        v29 = ExAllocatePoolWithTag(PagedPool, v27 + Size, 0x4B444342u);
        v39 = v29;
        if ( v29 )
        {
          memset(v29, 0, v28);
          v30 = v39;
          v31 = Size_4;
          v32 = (unsigned int)v37;
          v39[1] = v28;
          v33 = v39;
          *v30 = 1;
          v33[2] = a1[2];
          v33[3] = a1[3];
          v33[4] = v31;
          v33[5] = Size;
          v33[6] = a1[6];
          memmove((char *)v33 + v31, v7, v32);
          memmove((char *)v33 + Size, v9, (unsigned int)v9[1]);
          memmove(v33 + 7, a1 + 7, (unsigned int)a1[6]);
          DeviceFromEfiPath = 0;
          *a5 = v33;
          goto LABEL_32;
        }
        goto LABEL_21;
      }
    }
LABEL_31:
    DeviceFromEfiPath = -1073741675;
  }
LABEL_32:
  if ( v41 )
    ExFreePoolWithTag(v9, 0x4B444342u);
  if ( v34 )
    ExFreePoolWithTag(v10, 0x4B444342u);
  if ( v11 )
    ExFreePoolWithTag(v11, 0x4B444342u);
  return (unsigned int)DeviceFromEfiPath;
}
