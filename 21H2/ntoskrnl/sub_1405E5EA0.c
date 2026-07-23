/*
 * XREFs of sub_1405E5EA0 @ 0x1405E5EA0
 * Callers:
 *     WbGetHeapExecutedBlock @ 0x1406427A4 (WbGetHeapExecutedBlock.c)
 * Callees:
 *     MmProbeAndLockPagesPrivate @ 0x14021BA28 (MmProbeAndLockPagesPrivate.c)
 *     IoAllocateMdl @ 0x140299F00 (IoAllocateMdl.c)
 *     IoFreeMdl @ 0x14029A950 (IoFreeMdl.c)
 *     MmUnlockPages @ 0x1402E92C0 (MmUnlockPages.c)
 *     sub_1403F9834 @ 0x1403F9834 (sub_1403F9834.c)
 *     ZwFlushInstructionCache @ 0x1403FC2A0 (ZwFlushInstructionCache.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     sub_1405E6550 @ 0x1405E6550 (sub_1405E6550.c)
 *     sub_1405E6660 @ 0x1405E6660 (sub_1405E6660.c)
 *     WbAllocateUserMemory @ 0x1405E6754 (WbAllocateUserMemory.c)
 *     sub_1405E6C44 @ 0x1405E6C44 (sub_1405E6C44.c)
 *     sub_14064290C @ 0x14064290C (sub_14064290C.c)
 *     WbAlloc @ 0x140642A24 (WbAlloc.c)
 *     ExSystemExceptionFilter @ 0x1407D5080 (ExSystemExceptionFilter.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1405E5EA0(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  __int64 v9; // rdx
  unsigned __int64 v10; // rdx
  __int64 v11; // rcx
  const void *v12; // rax
  __int64 v13; // rdx
  void *v14; // r14
  __int64 v15; // rax
  __int64 v16; // r8
  unsigned __int64 v17; // rax
  __int16 v18; // ax
  int v20; // [rsp+68h] [rbp-70h]
  struct _MDL *MemoryDescriptorList; // [rsp+70h] [rbp-68h]
  int v22; // [rsp+78h] [rbp-60h]
  int v23; // [rsp+7Ch] [rbp-5Ch]
  struct _MDL *Mdl; // [rsp+80h] [rbp-58h]
  struct _MDL *v25; // [rsp+88h] [rbp-50h]
  __int64 v26; // [rsp+90h] [rbp-48h] BYREF
  void *v27; // [rsp+98h] [rbp-40h] BYREF
  __int64 v28; // [rsp+A0h] [rbp-38h]

  v27 = 0LL;
  v26 = 0LL;
  MemoryDescriptorList = 0LL;
  Mdl = 0LL;
  v25 = 0LL;
  v20 = 0;
  v22 = 0;
  v23 = 0;
  v28 = (unsigned int)dword_140C53E00;
  v5 = WbAlloc(0x58uLL);
  if ( v5 >= 0 )
  {
    memset(0LL, 0, 0x58uLL);
    MEMORY[0x10] &= ~1u;
    MEMORY[0x50] = 1LL;
    if ( *(_DWORD *)(a2 + 8) == 1 )
    {
      v5 = sub_1405E6C44((void *)(a2 + 16));
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
      sub_1403F9834();
      if ( *(_DWORD *)(a2 + 8) )
      {
        v5 = -1073741811;
        goto LABEL_57;
      }
      v5 = sub_1405E6C44((void *)(a2 + 16));
      if ( v5 < 0 )
        goto LABEL_57;
      MemoryDescriptorList = IoAllocateMdl(*(PVOID *)(a2 + 328), 0xF0u, 0, 0, 0LL);
      if ( !MemoryDescriptorList )
      {
        v5 = -1073741801;
        goto LABEL_57;
      }
    }
    MmProbeAndLockPagesPrivate((__int64)MemoryDescriptorList, v6);
    v20 = 1;
    v5 = sub_1405E6550(*(PVOID *)(a2 + 328));
    if ( v5 >= 0 )
    {
      v5 = WbAllocateUserMemory(a1, *(unsigned int *)(a2 + 320), &v27, &v26);
      if ( v5 >= 0 )
      {
        v5 = WbAlloc(*(unsigned int *)(a2 + 320));
        if ( v5 >= 0 )
        {
          v7 = *(unsigned int *)(a2 + 284);
          if ( (_DWORD)v7 )
          {
            v8 = *(_QWORD *)(a2 + 272);
            if ( v8 + v7 > 0x7FFFFFFF0000LL || v8 + v7 < v8 )
            {
              MEMORY[0x7FFFFFFF0000] = 0;
              LODWORD(v7) = *(_DWORD *)(a2 + 284);
            }
          }
          memmove((void *)*(unsigned int *)(a2 + 288), *(const void **)(a2 + 272), (unsigned int)v7);
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
            sub_1403F9834();
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
          MmProbeAndLockPagesPrivate((__int64)Mdl, v9);
          v22 = 1;
          v5 = sub_1405E6660(
                 0,
                 *(_DWORD *)(a2 + 288),
                 *(_DWORD *)(a2 + 288),
                 *(_DWORD *)(a2 + 284),
                 a2 + 88,
                 *(_DWORD *)(a2 + 280),
                 a2 + 96);
          if ( v5 >= 0 )
          {
            v5 = sub_1405E6550(*(PVOID *)(a2 + 272));
            if ( v5 >= 0 )
            {
              v10 = *(_QWORD *)(a2 + 296);
              if ( !v10 )
                goto LABEL_43;
              v11 = *(unsigned int *)(a2 + 308);
              v12 = *(const void **)(a2 + 296);
              if ( (_DWORD)v11 && (v10 + v11 > 0x7FFFFFFF0000LL || v10 + v11 < v10) )
              {
                MEMORY[0x7FFFFFFF0000] = 0;
                LODWORD(v11) = *(_DWORD *)(a2 + 308);
                v12 = *(const void **)(a2 + 296);
              }
              memmove((void *)*(unsigned int *)(a2 + 312), v12, (unsigned int)v11);
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
                sub_1403F9834();
                if ( *(_DWORD *)(a2 + 8) )
                {
                  v5 = -1073741811;
                  goto LABEL_57;
                }
              }
              v25 = IoAllocateMdl(*(PVOID *)(a2 + 296), *(_DWORD *)(a2 + 308), 0, 0, 0LL);
              if ( !v25 )
              {
                v5 = -1073741801;
                goto LABEL_57;
              }
              MmProbeAndLockPagesPrivate((__int64)v25, v13);
              v23 = 1;
              v5 = sub_1405E6660(
                     0,
                     *(_DWORD *)(a2 + 312),
                     *(_DWORD *)(a2 + 312),
                     *(_DWORD *)(a2 + 308),
                     a2 + 88,
                     *(_DWORD *)(a2 + 304),
                     a2 + 96);
              if ( v5 >= 0 )
              {
                v5 = sub_1405E6550(*(PVOID *)(a2 + 296));
                if ( v5 >= 0 )
                {
LABEL_43:
                  v14 = v27;
                  memmove(v27, 0LL, *(unsigned int *)(a2 + 320));
                  MEMORY[0x40] = *(_QWORD *)a2;
                  MEMORY[0x28] = v14;
                  MEMORY[0x18] = v26 + *(unsigned int *)(a2 + 288);
                  v15 = *(unsigned int *)(a2 + 312);
                  if ( (_DWORD)v15 )
                    MEMORY[0x20] = v26 + v15;
                  else
                    MEMORY[0x20] = 0LL;
                  MEMORY[0x48] = *(_DWORD *)(a2 + 320);
                  MEMORY[0x30] = *(_QWORD *)(a2 + 272);
                  v16 = *(_QWORD *)(a2 + 272) - MEMORY[0x18];
                  MEMORY[0x38] = v16;
                  v17 = KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[10];
                  if ( v17 && ((v18 = *(_WORD *)(v17 + 8), v18 == 332) || v18 == 452) )
                    *MEMORY[0x28] = MEMORY[0x40];
                  else
                    *MEMORY[0x28] = v16;
                  *(_QWORD *)(MEMORY[0x28] + 8LL) = v28;
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
    if ( v20 )
      MmUnlockPages(MemoryDescriptorList);
    IoFreeMdl(MemoryDescriptorList);
  }
  if ( Mdl )
  {
    if ( v22 )
      MmUnlockPages(Mdl);
    IoFreeMdl(Mdl);
  }
  if ( v25 )
  {
    if ( v23 )
      MmUnlockPages(v25);
    IoFreeMdl(v25);
  }
  sub_14064290C(a1, 0LL);
  return (unsigned int)v5;
}
