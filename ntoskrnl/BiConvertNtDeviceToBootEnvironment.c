/*
 * XREFs of BiConvertNtDeviceToBootEnvironment @ 0x14082FCE4
 * Callers:
 *     BiConvertElementToRegistryData @ 0x14082F9BC (BiConvertElementToRegistryData.c)
 *     BiConvertNtDeviceToBootEnvironment @ 0x14082FCE4 (BiConvertNtDeviceToBootEnvironment.c)
 *     BiCreatePartitionDevice @ 0x14082FDBC (BiCreatePartitionDevice.c)
 *     BiConvertNtFilePathToBootEnvironment @ 0x140A5A474 (BiConvertNtFilePathToBootEnvironment.c)
 * Callees:
 *     strcpy_s @ 0x1403D9D10 (strcpy_s.c)
 *     wcscpy_s @ 0x1403DA210 (wcscpy_s.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     BiConvertNtDeviceToBootEnvironment @ 0x14082FCE4 (BiConvertNtDeviceToBootEnvironment.c)
 *     BiCreatePartitionDevice @ 0x14082FDBC (BiCreatePartitionDevice.c)
 *     BiGetPartitionVhdFilePath @ 0x140830098 (BiGetPartitionVhdFilePath.c)
 *     BiIsVolumePartitionInformationRetained @ 0x1408304AC (BiIsVolumePartitionInformationRetained.c)
 *     BiConvertNtFilePathToBootEnvironment @ 0x140A5A474 (BiConvertNtFilePathToBootEnvironment.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 BiConvertNtDeviceToBootEnvironment(__int64 a1, unsigned int a2, unsigned int a3, ...)
{
  unsigned int v3; // eax
  _QWORD *v4; // r12
  char *v6; // rdi
  unsigned int v7; // eax
  unsigned int v8; // eax
  int PartitionDevice; // ebx
  __int64 result; // rax
  unsigned int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // eax
  char *v14; // rax
  __int64 v15; // rax
  unsigned int *v16; // rbx
  unsigned int v17; // esi
  char *v18; // rax
  void *v19; // rcx
  __int64 v20; // rax
  unsigned int v21; // esi
  char *v22; // rax
  char *v23; // rax
  char *v24; // rax
  unsigned int v25; // eax
  unsigned int v26; // eax
  unsigned int v27; // eax
  __int64 v28; // rax
  __int64 v29; // rax
  char *v30; // rax
  __int64 v31; // rbx
  char *v32; // rax
  __int64 v33; // rax
  unsigned int v34; // r15d
  unsigned int v35; // r14d
  unsigned int v36; // ebx
  __int64 v37; // r14
  __int64 v38; // rdx
  unsigned int v39; // eax
  int v40; // ecx
  void *PartitionVhdFilePath; // rax
  __int64 v42; // rbx
  __int64 v43; // rax
  char *Pool2; // rax
  char *v45; // r9
  int v46; // eax
  unsigned int v47; // ebx
  __int64 v48; // rdx
  PVOID P; // [rsp+30h] [rbp-10h] BYREF
  char *v50; // [rsp+38h] [rbp-8h]
  void *Src; // [rsp+98h] [rbp+58h] BYREF
  va_list Srca; // [rsp+98h] [rbp+58h]
  va_list va1; // [rsp+A0h] [rbp+60h] BYREF

  va_start(va1, a3);
  va_start(Srca, a3);
  Src = va_arg(va1, void *);
  v3 = *(_DWORD *)a1;
  v4 = Src;
  P = 0LL;
  v50 = 0LL;
  v6 = 0LL;
  if ( v3 > 7 )
  {
    v25 = v3 - 8;
    if ( !v25 )
    {
      if ( a2 < 0x22 || (v33 = *(unsigned int *)(a1 + 24), a2 <= (unsigned int)v33) )
      {
        PartitionDevice = -1073741811;
        goto LABEL_9;
      }
      v34 = 30;
      v35 = 0;
      if ( (_DWORD)v33 )
      {
        v36 = a2 - v33;
        v37 = a1 + v33;
        if ( *(_DWORD *)(a1 + v33) != 3 || v36 < 0x2E )
          goto LABEL_12;
        v38 = *(unsigned int *)(v37 + 20);
        v39 = v36 - v38;
        v40 = *(_DWORD *)(v38 + v37);
        if ( v40 == 2 )
        {
          if ( v39 < 0x16 )
            goto LABEL_12;
          PartitionVhdFilePath = (void *)BiGetPartitionVhdFilePath((PCWSTR)(v38 + v37 + 20));
          if ( PartitionVhdFilePath )
          {
            ExFreePoolWithTag(PartitionVhdFilePath, 0x4B444342u);
LABEL_13:
            PartitionDevice = -1073741637;
            goto LABEL_9;
          }
        }
        else if ( v40 != 6 && (v40 != 8 || v39 < 0x22) && (v40 != 1 || v39 < 0x14) )
        {
          goto LABEL_12;
        }
        PartitionDevice = BiConvertNtDeviceToBootEnvironment(v37, v36, 0LL, &P);
        if ( PartitionDevice < 0 )
          goto LABEL_9;
        v35 = 40;
        v34 = *((_DWORD *)P + 2) + 70;
      }
      v42 = -1LL;
      if ( *(_DWORD *)(a1 + 20) == 1 )
      {
        v43 = -1LL;
        do
          ++v43;
        while ( *(_WORD *)(a1 + 2 * v43 + 32) );
        v34 += 2 * v43;
      }
      Pool2 = (char *)ExAllocatePool2(258LL, v34, 1262764866LL);
      v6 = Pool2;
      if ( Pool2 )
      {
        memset(Pool2, 0, v34);
        *(_DWORD *)v6 = 8;
        *((_DWORD *)v6 + 2) = v34;
        if ( *(_DWORD *)(a1 + 20) )
        {
          *((_DWORD *)v6 + 4) = 1;
          v48 = -1LL;
          do
            ++v48;
          while ( *(_WORD *)(a1 + 2 * v48 + 32) );
          wcscpy_s((wchar_t *)v6 + 14, v48 + 1, (const wchar_t *)(a1 + 32));
          do
            ++v42;
          while ( *(_WORD *)(a1 + 2 * v42 + 32) );
          v47 = 2 * v42 + 30;
        }
        else
        {
          *((_DWORD *)v6 + 4) = 0;
          v47 = 30;
          *((_DWORD *)v6 + 5) = *(_DWORD *)(a1 + 28);
        }
        if ( P )
        {
          v45 = &v6[v47];
          *(_DWORD *)v45 = 0;
          v46 = *((_DWORD *)P + 2);
          *((_DWORD *)v45 + 4) = 6;
          *((_DWORD *)v45 + 2) = v35 + v46;
          memmove(&v45[v35], P, *((unsigned int *)P + 2));
          *((_DWORD *)v6 + 6) = v47;
        }
        PartitionDevice = 0;
      }
      else
      {
        PartitionDevice = -1073741670;
      }
      v4 = Src;
      goto LABEL_9;
    }
    v26 = v25 - 1;
    if ( v26 )
    {
      v27 = v26 - 1;
      if ( v27 )
      {
        if ( v27 != 1 || a2 < 0x28 )
          goto LABEL_12;
        v28 = ExAllocatePool2(258LL, 48LL, 1262764866LL);
        v6 = (char *)v28;
        if ( v28 )
        {
          *(_OWORD *)v28 = 0LL;
          *(_OWORD *)(v28 + 16) = 0LL;
          *(_OWORD *)(v28 + 32) = 0LL;
          *(_DWORD *)v28 = 11;
          *(_DWORD *)(v28 + 8) = 48;
          *(_DWORD *)(v28 + 4) = 1;
          *(_DWORD *)(v28 + 16) = *(_DWORD *)(a1 + 20);
          *(_OWORD *)(v28 + 32) = *(_OWORD *)(a1 + 24);
          goto LABEL_8;
        }
      }
      else
      {
        if ( a2 < 0x28 )
          goto LABEL_12;
        v29 = *(_QWORD *)(a1 + 20) - CompositeDeviceSignature;
        if ( !v29 )
          v29 = *(_QWORD *)(a1 + 28) - 0x526C65784171869ELL;
        if ( v29 )
          goto LABEL_12;
        v30 = (char *)ExAllocatePool2(258LL, 72LL, 1262764866LL);
        v6 = v30;
        if ( v30 )
        {
          memset(v30, 0, 0x48uLL);
          *(_DWORD *)v6 = 10;
          *((_DWORD *)v6 + 2) = 72;
          *((_DWORD *)v6 + 1) = 1;
          *((_OWORD *)v6 + 1) = *(_OWORD *)(a1 + 20);
          *((_DWORD *)v6 + 8) = *(_DWORD *)(a1 + 36);
          goto LABEL_8;
        }
      }
      goto LABEL_33;
    }
    if ( a2 < 0x15 )
      goto LABEL_12;
    v31 = -1LL;
    do
      ++v31;
    while ( *(_BYTE *)(a1 + v31 + 20) );
    v32 = (char *)ExAllocatePool2(258LL, (unsigned int)(v31 + 21), 1262764866LL);
    v6 = v32;
    if ( v32 )
    {
      memset(v32, 0, (unsigned int)(v31 + 21));
      *(_QWORD *)v6 = 9LL;
      *((_DWORD *)v6 + 2) = v31 + 21;
      *((_DWORD *)v6 + 4) = v31 + 1;
      strcpy_s(v6 + 20, (unsigned int)(v31 + 1), (const char *)(a1 + 20));
      PartitionDevice = 0;
    }
    else
    {
      PartitionDevice = -1073741670;
    }
  }
  else
  {
    if ( v3 == 7 )
    {
      if ( a2 < 0x24 )
        goto LABEL_12;
      v24 = (char *)ExAllocatePool2(258LL, 72LL, 1262764866LL);
      v6 = v24;
      if ( v24 )
      {
        memset(v24, 0, 0x48uLL);
        *(_DWORD *)v6 = 7;
        *((_DWORD *)v6 + 2) = 72;
        *((_OWORD *)v6 + 1) = VmbFsInterfaceTypeGuid;
        *((_OWORD *)v6 + 2) = *(_OWORD *)(a1 + 20);
        goto LABEL_8;
      }
      goto LABEL_33;
    }
    v7 = v3 - 1;
    if ( !v7 )
    {
      if ( a2 < 0x14 )
        goto LABEL_12;
      v23 = (char *)ExAllocatePool2(258LL, 72LL, 1262764866LL);
      v6 = v23;
      if ( v23 )
      {
        memset(v23, 0, 0x48uLL);
        *(_DWORD *)v6 = 5;
        *((_DWORD *)v6 + 2) = 72;
        goto LABEL_8;
      }
      goto LABEL_33;
    }
    v8 = v7 - 1;
    if ( !v8 )
    {
      if ( a2 >= 0x16 )
      {
        if ( (unsigned __int8)BiIsVolumePartitionInformationRetained((PCWSTR)(a1 + 20)) )
        {
          v6 = v50;
          PartitionDevice = BiCreatePartitionDevice((PCWSTR)(a1 + 20));
          if ( PartitionDevice < 0 )
            goto LABEL_9;
          goto LABEL_8;
        }
        goto LABEL_13;
      }
LABEL_12:
      PartitionDevice = -1073741811;
      goto LABEL_11;
    }
    v11 = v8 - 1;
    if ( v11 )
    {
      v12 = v11 - 1;
      if ( v12 )
      {
        if ( v12 != 1 )
          goto LABEL_12;
        if ( a2 < 0x20 )
          goto LABEL_12;
        v13 = *(_DWORD *)(a1 + 28);
        if ( v13 > 0x100000 )
          goto LABEL_12;
        v14 = (char *)ExAllocatePool2(258LL, v13, 1262764866LL);
        v6 = v14;
        if ( v14 )
        {
          memmove(v14, (const void *)(a1 + 20), *(unsigned int *)(a1 + 28));
LABEL_8:
          PartitionDevice = 0;
          goto LABEL_9;
        }
        goto LABEL_33;
      }
      if ( a2 < 0x2E )
        goto LABEL_12;
      v15 = *(unsigned int *)(a1 + 20);
      if ( !(_DWORD)v15 )
        goto LABEL_12;
      Src = 0LL;
      PartitionDevice = BiConvertNtFilePathToBootEnvironment(
                          v15 + a1,
                          a2 - (unsigned int)v15,
                          a1 + 24,
                          a3,
                          (void **)Srca);
      if ( PartitionDevice >= 0 )
      {
        v16 = (unsigned int *)Src;
        v17 = *((_DWORD *)Src + 1) + 40;
        v18 = (char *)ExAllocatePool2(258LL, v17, 1262764866LL);
        v6 = v18;
        if ( v18 )
        {
          memset(v18, 0, v17);
          *(_DWORD *)v6 = 0;
          v19 = v6 + 40;
          *((_DWORD *)v6 + 1) = 1;
          *((_DWORD *)v6 + 2) = v17;
          *((_DWORD *)v6 + 4) = 3;
LABEL_26:
          memmove(v19, v16, v16[1]);
          ExFreePoolWithTag(v16, 0x4B444342u);
          goto LABEL_8;
        }
LABEL_32:
        ExFreePoolWithTag(v16, 0x4B444342u);
LABEL_33:
        PartitionDevice = -1073741670;
      }
    }
    else
    {
      if ( a2 < 0x2E )
        goto LABEL_12;
      v20 = *(unsigned int *)(a1 + 20);
      if ( !(_DWORD)v20 )
        goto LABEL_12;
      Src = 0LL;
      PartitionDevice = BiConvertNtFilePathToBootEnvironment(
                          v20 + a1,
                          a2 - (unsigned int)v20,
                          a1 + 24,
                          a3,
                          (void **)Srca);
      if ( PartitionDevice >= 0 )
      {
        v16 = (unsigned int *)Src;
        v21 = *((_DWORD *)Src + 1) + 20;
        v22 = (char *)ExAllocatePool2(258LL, v21, 1262764866LL);
        v6 = v22;
        if ( v22 )
        {
          memset(v22, 0, v21);
          *(_DWORD *)v6 = 0;
          v19 = v6 + 20;
          *((_DWORD *)v6 + 2) = v21;
          *((_DWORD *)v6 + 4) = 5;
          goto LABEL_26;
        }
        goto LABEL_32;
      }
    }
  }
LABEL_9:
  if ( P )
    ExFreePoolWithTag(P, 0x4B444342u);
LABEL_11:
  result = (unsigned int)PartitionDevice;
  *v4 = v6;
  return result;
}
