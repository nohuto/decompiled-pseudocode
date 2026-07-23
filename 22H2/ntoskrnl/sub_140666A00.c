/*
 * XREFs of sub_140666A00 @ 0x140666A00
 * Callers:
 *     WbGetHeapExecutedBlock @ 0x1406C6744 (WbGetHeapExecutedBlock.c)
 * Callees:
 *     MmUnlockPages @ 0x1402443E0 (MmUnlockPages.c)
 *     MmProbeAndLockPagesPrivate @ 0x1402F67E8 (MmProbeAndLockPagesPrivate.c)
 *     IoAllocateMdl @ 0x14035A110 (IoAllocateMdl.c)
 *     IoFreeMdl @ 0x14035AB60 (IoFreeMdl.c)
 *     sub_1403F8CD4 @ 0x1403F8CD4 (sub_1403F8CD4.c)
 *     ZwFlushInstructionCache @ 0x1403FB740 (ZwFlushInstructionCache.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     memset @ 0x140413800 (memset.c)
 *     sub_1406670B0 @ 0x1406670B0 (sub_1406670B0.c)
 *     sub_1406671C0 @ 0x1406671C0 (sub_1406671C0.c)
 *     WbAllocateUserMemory @ 0x1406672B4 (WbAllocateUserMemory.c)
 *     sub_1406677A4 @ 0x1406677A4 (sub_1406677A4.c)
 *     sub_1406C68AC @ 0x1406C68AC (sub_1406C68AC.c)
 *     WbAlloc @ 0x1406C69C4 (WbAlloc.c)
 *     ExSystemExceptionFilter @ 0x1407D4E30 (ExSystemExceptionFilter.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140666A00(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v5; // ebx
  __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rdx
  __int64 v9; // rcx
  const void *v10; // rax
  void *v11; // r14
  __int64 v12; // rax
  __int64 v13; // r8
  unsigned __int64 v14; // rax
  __int16 v15; // ax
  int v17; // [rsp+68h] [rbp-70h]
  struct _MDL *MemoryDescriptorList; // [rsp+70h] [rbp-68h]
  int v19; // [rsp+78h] [rbp-60h]
  int v20; // [rsp+7Ch] [rbp-5Ch]
  struct _MDL *Mdl; // [rsp+80h] [rbp-58h]
  struct _MDL *v22; // [rsp+88h] [rbp-50h]
  __int64 v23; // [rsp+90h] [rbp-48h] BYREF
  void *v24; // [rsp+98h] [rbp-40h] BYREF
  __int64 v25; // [rsp+A0h] [rbp-38h]

  v24 = 0LL;
  v23 = 0LL;
  MemoryDescriptorList = 0LL;
  Mdl = 0LL;
  v22 = 0LL;
  v17 = 0;
  v19 = 0;
  v20 = 0;
  v25 = (unsigned int)dword_140C53DC0;
  v5 = WbAlloc(0x58uLL);
  if ( v5 >= 0 )
  {
    memset(0LL, 0, 0x58uLL);
    MEMORY[0x10] &= ~1u;
    MEMORY[0x50] = 1LL;
    if ( *(_DWORD *)(a2 + 8) == 1 )
    {
      v5 = sub_1406677A4((void *)(a2 + 16));
      if ( v5 < 0 )
        goto LABEL_57;
      MemoryDescriptorList = IoAllocateMdl(*(PVOID *)(a2 + 328), 0xF8u, 0, 0, 0LL);
      if ( !MemoryDescriptorList )
      {
        v5 = -1073741801;
        goto LABEL_57;
      }
    }
    else
    {
      sub_1403F8CD4();
      if ( *(_DWORD *)(a2 + 8) )
      {
        v5 = -1073741811;
        goto LABEL_57;
      }
      v5 = sub_1406677A4((void *)(a2 + 16));
      if ( v5 < 0 )
        goto LABEL_57;
      MemoryDescriptorList = IoAllocateMdl(*(PVOID *)(a2 + 328), 0xF0u, 0, 0, 0LL);
      if ( !MemoryDescriptorList )
      {
        v5 = -1073741801;
        goto LABEL_57;
      }
    }
    MmProbeAndLockPagesPrivate((__int64)MemoryDescriptorList);
    v17 = 1;
    v5 = sub_1406670B0(*(PVOID *)(a2 + 328));
    if ( v5 >= 0 )
    {
      v5 = WbAllocateUserMemory(a1, *(unsigned int *)(a2 + 320), &v24, &v23);
      if ( v5 >= 0 )
      {
        v5 = WbAlloc(*(unsigned int *)(a2 + 320));
        if ( v5 >= 0 )
        {
          v6 = *(unsigned int *)(a2 + 284);
          if ( (_DWORD)v6 )
          {
            v7 = *(_QWORD *)(a2 + 272);
            if ( v7 + v6 > 0x7FFFFFFF0000LL || v7 + v6 < v7 )
            {
              MEMORY[0x7FFFFFFF0000] = 0;
              LODWORD(v6) = *(_DWORD *)(a2 + 284);
            }
          }
          memmove((void *)*(unsigned int *)(a2 + 288), *(const void **)(a2 + 272), (unsigned int)v6);
          if ( *(_DWORD *)(a2 + 8) == 1 )
          {
            if ( *(_DWORD *)(a2 + 284) < 4u )
            {
              v5 = -1073741811;
              goto LABEL_57;
            }
            *(_DWORD *)*(unsigned int *)(a2 + 288) = *(_DWORD *)(a2 + 292);
          }
          else
          {
            sub_1403F8CD4();
            if ( *(_DWORD *)(a2 + 8) )
            {
              v5 = -1073741811;
              goto LABEL_57;
            }
          }
          Mdl = IoAllocateMdl(*(PVOID *)(a2 + 272), *(_DWORD *)(a2 + 284), 0, 0, 0LL);
          if ( !Mdl )
          {
            v5 = -1073741801;
            goto LABEL_57;
          }
          MmProbeAndLockPagesPrivate((__int64)Mdl);
          v19 = 1;
          v5 = sub_1406671C0(
                 0,
                 *(_DWORD *)(a2 + 288),
                 *(_DWORD *)(a2 + 288),
                 *(_DWORD *)(a2 + 284),
                 a2 + 88,
                 *(_DWORD *)(a2 + 280),
                 a2 + 96);
          if ( v5 >= 0 )
          {
            v5 = sub_1406670B0(*(PVOID *)(a2 + 272));
            if ( v5 >= 0 )
            {
              v8 = *(_QWORD *)(a2 + 296);
              if ( !v8 )
                goto LABEL_43;
              v9 = *(unsigned int *)(a2 + 308);
              v10 = *(const void **)(a2 + 296);
              if ( (_DWORD)v9 && (v8 + v9 > 0x7FFFFFFF0000LL || v8 + v9 < v8) )
              {
                MEMORY[0x7FFFFFFF0000] = 0;
                LODWORD(v9) = *(_DWORD *)(a2 + 308);
                v10 = *(const void **)(a2 + 296);
              }
              memmove((void *)*(unsigned int *)(a2 + 312), v10, (unsigned int)v9);
              if ( *(_DWORD *)(a2 + 8) == 1 )
              {
                if ( *(_DWORD *)(a2 + 308) < 4u )
                {
                  v5 = -1073741811;
                  goto LABEL_57;
                }
                *(_DWORD *)*(unsigned int *)(a2 + 312) = *(_DWORD *)(a2 + 316);
              }
              else
              {
                sub_1403F8CD4();
                if ( *(_DWORD *)(a2 + 8) )
                {
                  v5 = -1073741811;
                  goto LABEL_57;
                }
              }
              v22 = IoAllocateMdl(*(PVOID *)(a2 + 296), *(_DWORD *)(a2 + 308), 0, 0, 0LL);
              if ( !v22 )
              {
                v5 = -1073741801;
                goto LABEL_57;
              }
              MmProbeAndLockPagesPrivate((__int64)v22);
              v20 = 1;
              v5 = sub_1406671C0(
                     0,
                     *(_DWORD *)(a2 + 312),
                     *(_DWORD *)(a2 + 312),
                     *(_DWORD *)(a2 + 308),
                     a2 + 88,
                     *(_DWORD *)(a2 + 304),
                     a2 + 96);
              if ( v5 >= 0 )
              {
                v5 = sub_1406670B0(*(PVOID *)(a2 + 296));
                if ( v5 >= 0 )
                {
LABEL_43:
                  v11 = v24;
                  memmove(v24, 0LL, *(unsigned int *)(a2 + 320));
                  MEMORY[0x40] = *(_QWORD *)a2;
                  MEMORY[0x28] = v11;
                  MEMORY[0x18] = v23 + *(unsigned int *)(a2 + 288);
                  v12 = *(unsigned int *)(a2 + 312);
                  if ( (_DWORD)v12 )
                    MEMORY[0x20] = v23 + v12;
                  else
                    MEMORY[0x20] = 0LL;
                  MEMORY[0x48] = *(_DWORD *)(a2 + 320);
                  MEMORY[0x30] = *(_QWORD *)(a2 + 272);
                  v13 = *(_QWORD *)(a2 + 272) - MEMORY[0x18];
                  MEMORY[0x38] = v13;
                  v14 = KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[10];
                  if ( v14 && ((v15 = *(_WORD *)(v14 + 8), v15 == 332) || v15 == 452) )
                    *MEMORY[0x28] = MEMORY[0x40];
                  else
                    *MEMORY[0x28] = v13;
                  *(_QWORD *)(MEMORY[0x28] + 8LL) = v25;
                  v5 = ZwFlushInstructionCache((HANDLE)0xFFFFFFFFFFFFFFFFLL, MEMORY[0x18], *(unsigned int *)(a2 + 284));
                  if ( v5 >= 0 )
                  {
                    if ( !*(_QWORD *)(a2 + 296)
                      || (v5 = ZwFlushInstructionCache(
                                 (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                                 MEMORY[0x20],
                                 *(unsigned int *)(a2 + 308)),
                          v5 >= 0) )
                    {
                      if ( a3 )
                        *a3 = 0LL;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_57:
  if ( MemoryDescriptorList )
  {
    if ( v17 )
      MmUnlockPages(MemoryDescriptorList);
    IoFreeMdl(MemoryDescriptorList);
  }
  if ( Mdl )
  {
    if ( v19 )
      MmUnlockPages(Mdl);
    IoFreeMdl(Mdl);
  }
  if ( v22 )
  {
    if ( v20 )
      MmUnlockPages(v22);
    IoFreeMdl(v22);
  }
  sub_1406C68AC(a1, 0LL);
  return (unsigned int)v5;
}
