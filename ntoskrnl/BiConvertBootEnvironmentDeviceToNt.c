/*
 * XREFs of BiConvertBootEnvironmentDeviceToNt @ 0x140830F7C
 * Callers:
 *     BiConvertRegistryDataToElement @ 0x14082F010 (BiConvertRegistryDataToElement.c)
 *     BiVerifyBootPartition @ 0x140830EA8 (BiVerifyBootPartition.c)
 *     BiConvertBootEnvironmentDeviceToNt @ 0x140830F7C (BiConvertBootEnvironmentDeviceToNt.c)
 * Callees:
 *     strcpy_s @ 0x1403D9D10 (strcpy_s.c)
 *     wcscpy_s @ 0x1403DA210 (wcscpy_s.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     BiGetNtPartitionPath @ 0x140830938 (BiGetNtPartitionPath.c)
 *     BiVerifyBootPartition @ 0x140830EA8 (BiVerifyBootPartition.c)
 *     BiConvertBootEnvironmentDeviceToNt @ 0x140830F7C (BiConvertBootEnvironmentDeviceToNt.c)
 *     BiConvertBootEnvironmentDeviceToUnknown @ 0x140A5A3D0 (BiConvertBootEnvironmentDeviceToUnknown.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiConvertBootEnvironmentDeviceToNt(
        unsigned int *Src,
        int a2,
        char a3,
        wchar_t **a4,
        unsigned int *a5)
{
  int v6; // ecx
  wchar_t *v7; // rbx
  _WORD *v8; // r13
  unsigned int v9; // r15d
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // edi
  __int64 v14; // r14
  int NtPartitionPath; // eax
  __int64 v16; // r14
  unsigned int v17; // edi
  wchar_t *v18; // rax
  size_t v19; // r8
  char *v20; // rcx
  PVOID v21; // rdx
  int v23; // ecx
  int v24; // ecx
  int v25; // ecx
  int v26; // ecx
  __int64 v27; // rax
  __int64 v28; // rax
  wchar_t *v29; // rax
  unsigned int v30; // eax
  __int64 v31; // r14
  __int64 v32; // r15
  unsigned int v33; // r12d
  __int64 v34; // rdi
  int v35; // eax
  __int64 v36; // rax
  unsigned int v37; // r12d
  void *v38; // rax
  wchar_t *v39; // rax
  wchar_t *v40; // r8
  unsigned int v41; // r14d
  wchar_t *v42; // rax
  int v43; // eax
  int v44; // eax
  unsigned int v45; // ecx
  bool v46; // zf
  unsigned __int64 v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // rax
  unsigned int *v50; // r14
  __int64 v51; // r14
  unsigned int v52; // r14d
  unsigned int v53; // edi
  unsigned int v54; // r12d
  wchar_t *Pool2; // rax
  size_t Size; // [rsp+30h] [rbp-38h] BYREF
  wchar_t *v57; // [rsp+38h] [rbp-30h] BYREF
  PVOID P; // [rsp+40h] [rbp-28h]
  void *Srca; // [rsp+48h] [rbp-20h] BYREF
  wchar_t *v60; // [rsp+50h] [rbp-18h]
  char v61; // [rsp+B0h] [rbp+48h]

  v6 = *Src;
  v7 = 0LL;
  v60 = 0LL;
  Size = 0LL;
  v8 = 0LL;
  LODWORD(v57) = 0;
  v9 = 0;
  Srca = 0LL;
  P = 0LL;
  v61 = 0;
  if ( !v6 )
  {
    v45 = Src[4];
    if ( v45 != 3 && v45 != 5 )
      goto LABEL_76;
    v46 = v45 == 3;
    v47 = Src[2];
    v48 = 52LL;
    if ( !v46 )
      v48 = 32LL;
    v49 = 9LL;
    if ( !v46 )
      v49 = 4LL;
    v50 = &Src[v49 + 4];
    if ( v47 >= v48 + 12 && v50[2] <= (int)v47 - (int)v48 )
    {
      v13 = BiConvertBootEnvironmentDeviceToNt(v50, (__int64)&Size);
      if ( v13 < 0 )
      {
LABEL_73:
        if ( v13 == -1073741670 )
          goto LABEL_77;
        goto LABEL_74;
      }
      if ( *(_DWORD *)P == 3 )
        goto LABEL_76;
      v8 = (_WORD *)((char *)v50 + v50[2]);
      v51 = -1LL;
      do
        ++v51;
      while ( v8[v51] );
      v52 = 2 * v51 + 2;
      if ( v52 + 32 >= 0x20 && v52 + 32 + (unsigned int)Size >= v52 + 32 )
      {
        v53 = (v52 + 31) & 0xFFFFFFF8;
        v54 = Size + v53;
        v9 = Size + v53;
        Pool2 = (wchar_t *)ExAllocatePool2(258LL, (unsigned int)Size + v53, 1262764866LL);
        v7 = Pool2;
        if ( Pool2 )
        {
          memset(Pool2, 0, v54);
          memmove(v7 + 12, v8, v52);
          *((_DWORD *)v7 + 5) = v53;
          memmove((char *)v7 + v53, P, (unsigned int)Size);
          *(_DWORD *)v7 = 4 - (Src[4] != 3);
          v13 = 0;
          goto LABEL_14;
        }
        goto LABEL_20;
      }
    }
LABEL_74:
    if ( v7 )
      ExFreePoolWithTag(v7, 0x4B444342u);
    goto LABEL_76;
  }
  v10 = v6 - 2;
  if ( !v10 )
  {
LABEL_5:
    v13 = BiVerifyBootPartition((int *)Src, 0LL, 0LL, 0LL, 0LL, (unsigned int *)&v57);
    if ( v13 < 0 )
      goto LABEL_73;
    v14 = (unsigned int)v57;
    if ( (a3 & 0x20) != 0 && (_DWORD)v57 )
    {
      v13 = -1073741823;
      goto LABEL_63;
    }
    NtPartitionPath = BiGetNtPartitionPath((int)Src, &Srca);
    v8 = Srca;
    v13 = NtPartitionPath;
    if ( NtPartitionPath < 0 )
    {
LABEL_63:
      if ( !(_DWORD)v14 )
        goto LABEL_72;
      v13 = BiConvertBootEnvironmentDeviceToNt((char *)Src + v14, (__int64)&Size);
      if ( v13 < 0 )
        goto LABEL_73;
      v41 = Size + 34;
      v9 = Size + 34;
      HIDWORD(Size) = Size + 34;
      v42 = (wchar_t *)ExAllocatePool2(258LL, (unsigned int)(Size + 34), 1262764866LL);
      v60 = v42;
      v7 = v42;
      if ( v42 )
      {
        memset(v42, 0, v41);
        *(_DWORD *)v7 = 8;
        *((_DWORD *)v7 + 5) = 0;
        v43 = 301989890;
        if ( a2 )
        {
          if ( a2 == 553648129 )
          {
            v43 = 570425346;
          }
          else if ( a2 == 285212739 )
          {
            v43 = 301989956;
          }
        }
        *((_DWORD *)v7 + 7) = v43;
        *((_DWORD *)v7 + 6) = 34;
        memmove(v7 + 17, P, (unsigned int)Size);
LABEL_72:
        if ( v13 < 0 )
          goto LABEL_73;
LABEL_14:
        *a4 = v7;
        *a5 = v9;
        goto LABEL_15;
      }
LABEL_20:
      v13 = -1073741670;
      goto LABEL_15;
    }
    v61 = 1;
    v16 = -1LL;
    do
      ++v16;
    while ( *((_WORD *)Srca + v16) );
    v17 = 2 * v16 + 22;
    v9 = v17;
    v18 = (wchar_t *)ExAllocatePool2(258LL, v17, 1262764866LL);
    v7 = v18;
    if ( !v18 )
      goto LABEL_20;
    memset(v18, 0, v17);
    v19 = (unsigned int)(2 * v16 + 2);
    v20 = (char *)(v7 + 10);
    v21 = v8;
    *(_DWORD *)v7 = 2;
    goto LABEL_12;
  }
  v11 = v10 - 3;
  if ( !v11 )
  {
    v9 = 20;
    v7 = (wchar_t *)ExAllocatePool2(258LL, 20LL, 1262764866LL);
    if ( !v7 )
      goto LABEL_20;
    *(_OWORD *)v7 = 0LL;
    *((_DWORD *)v7 + 4) = 0;
    *(_DWORD *)v7 = 1;
    goto LABEL_13;
  }
  v12 = v11 - 1;
  if ( !v12 )
    goto LABEL_5;
  v23 = v12 - 1;
  if ( !v23 )
  {
    v9 = 36;
    v7 = (wchar_t *)ExAllocatePool2(258LL, 36LL, 1262764866LL);
    if ( !v7 )
      goto LABEL_20;
    *(_OWORD *)v7 = 0LL;
    *((_OWORD *)v7 + 1) = 0LL;
    *((_DWORD *)v7 + 8) = 0;
    *(_DWORD *)v7 = 7;
    *(_OWORD *)(v7 + 10) = *((_OWORD *)Src + 2);
    goto LABEL_13;
  }
  v24 = v23 - 1;
  if ( !v24 )
  {
    v30 = 34;
    v31 = -1LL;
    HIDWORD(Size) = 34;
    v46 = Src[4] == 1;
    v9 = 34;
    v57 = (wchar_t *)(Src + 7);
    if ( v46 )
    {
      v32 = -1LL;
      do
        ++v32;
      while ( *((_WORD *)Src + v32 + 14) );
      v9 = 2 * v32 + 34;
      HIDWORD(Size) = v9;
      v30 = v9;
      v33 = v9;
    }
    else
    {
      v33 = 34;
    }
    v34 = Src[6];
    if ( (_DWORD)v34 )
    {
      if ( (a3 & 0x20) != 0 )
        goto LABEL_46;
      v35 = BiGetNtPartitionPath((int)Src, &Srca);
      v8 = Srca;
      if ( v35 >= 0 )
      {
        v61 = 1;
        v36 = -1LL;
        do
          ++v36;
        while ( *((_WORD *)Srca + v36) );
        v37 = 2 * v36 + 2;
        LODWORD(Size) = 2 * v36 + 22;
        v38 = (void *)ExAllocatePool2(258LL, (unsigned int)Size, 1262764866LL);
        P = v38;
        if ( !v38 )
        {
          v13 = -1073741670;
LABEL_18:
          ExFreePoolWithTag(v8, 0x4B444342u);
          return (unsigned int)v13;
        }
        memset(v38, 0, (unsigned int)Size);
        *(_DWORD *)P = 2;
        memmove((char *)P + 20, v8, v37);
      }
      if ( !P )
      {
LABEL_46:
        if ( Src[2] - (unsigned int)v34 < 0x4C )
          goto LABEL_76;
        v13 = BiConvertBootEnvironmentDeviceToNt((char *)Src + v34 + 40, (__int64)&Size);
        if ( v13 < 0 )
          goto LABEL_73;
      }
      LODWORD(v34) = v9;
      v9 += Size;
      v30 = v9;
      v33 = v9;
    }
    v39 = (wchar_t *)ExAllocatePool2(258LL, v30, 1262764866LL);
    v7 = v39;
    if ( !v39 )
      goto LABEL_20;
    memset(v39, 0, v33);
    *(_DWORD *)v7 = 8;
    if ( Src[4] )
    {
      v40 = v57;
      *((_DWORD *)v7 + 5) = 1;
      do
        ++v31;
      while ( v40[v31] );
      wcscpy_s(v7 + 16, v31 + 1, v40);
    }
    else
    {
      *((_DWORD *)v7 + 5) = 0;
      *((_DWORD *)v7 + 7) = Src[5];
    }
    if ( P )
    {
      *((_DWORD *)v7 + 6) = v34;
      v19 = (unsigned int)Size;
      v21 = P;
      v20 = (char *)v7 + (unsigned int)v34;
LABEL_12:
      memmove(v20, v21, v19);
    }
LABEL_13:
    v13 = 0;
    goto LABEL_14;
  }
  v25 = v24 - 1;
  if ( !v25 )
  {
    v9 = Src[4] + 21;
    v29 = (wchar_t *)ExAllocatePool2(258LL, v9, 1262764866LL);
    v7 = v29;
    if ( !v29 )
      goto LABEL_20;
    memset(v29, 0, v9);
    *(_DWORD *)v7 = 9;
    strcpy_s((char *)v7 + 20, Src[4], (const char *)Src + 20);
    goto LABEL_13;
  }
  v26 = v25 - 1;
  if ( !v26 )
  {
    v9 = 40;
    v28 = ExAllocatePool2(258LL, 40LL, 1262764866LL);
    v7 = (wchar_t *)v28;
    if ( !v28 )
      goto LABEL_20;
    *(_OWORD *)v28 = 0LL;
    *(_OWORD *)(v28 + 16) = 0LL;
    *(_QWORD *)(v28 + 32) = 0LL;
    *(_DWORD *)v28 = 10;
    *(_OWORD *)(v28 + 20) = *((_OWORD *)Src + 1);
    *(_DWORD *)(v28 + 36) = Src[8];
    goto LABEL_13;
  }
  if ( v26 == 1 )
  {
    v9 = 40;
    v27 = ExAllocatePool2(258LL, 40LL, 1262764866LL);
    v7 = (wchar_t *)v27;
    if ( !v27 )
      goto LABEL_20;
    *(_OWORD *)v27 = 0LL;
    *(_OWORD *)(v27 + 16) = 0LL;
    *(_QWORD *)(v27 + 32) = 0LL;
    *(_DWORD *)v27 = 11;
    *(_DWORD *)(v27 + 20) = Src[4];
    *(_OWORD *)(v27 + 24) = *((_OWORD *)Src + 2);
    goto LABEL_13;
  }
LABEL_76:
  v44 = BiConvertBootEnvironmentDeviceToUnknown(Src);
  v9 = HIDWORD(Size);
  v13 = v44;
  v7 = v60;
LABEL_77:
  if ( v13 >= 0 )
    goto LABEL_14;
LABEL_15:
  if ( P )
    ExFreePoolWithTag(P, 0x4B444342u);
  if ( v61 )
    goto LABEL_18;
  return (unsigned int)v13;
}
