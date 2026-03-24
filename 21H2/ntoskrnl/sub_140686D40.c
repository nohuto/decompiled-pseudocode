/*
 * XREFs of sub_140686D40 @ 0x140686D40
 * Callers:
 *     WbGetHeapExecutedBlock @ 0x14064D984 (WbGetHeapExecutedBlock.c)
 * Callees:
 *     MmUnlockPages @ 0x140244A70 (MmUnlockPages.c)
 *     MmProbeAndLockPagesPrivate @ 0x14029E4C8 (MmProbeAndLockPagesPrivate.c)
 *     IoAllocateMdl @ 0x1402E8BB0 (IoAllocateMdl.c)
 *     IoFreeMdl @ 0x1402E9600 (IoFreeMdl.c)
 *     sub_1403F9654 @ 0x1403F9654 (sub_1403F9654.c)
 *     ZwFlushInstructionCache @ 0x1403FC0C0 (ZwFlushInstructionCache.c)
 *     memmove @ 0x140413F40 (memmove.c)
 *     memset @ 0x140414200 (memset.c)
 *     sub_14064DAEC @ 0x14064DAEC (sub_14064DAEC.c)
 *     WbAlloc @ 0x14064DC04 (WbAlloc.c)
 *     sub_1406873F0 @ 0x1406873F0 (sub_1406873F0.c)
 *     sub_140687500 @ 0x140687500 (sub_140687500.c)
 *     WbAllocateUserMemory @ 0x1406875F4 (WbAllocateUserMemory.c)
 *     sub_140687AE4 @ 0x140687AE4 (sub_140687AE4.c)
 *     ExSystemExceptionFilter @ 0x1407D4F10 (ExSystemExceptionFilter.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140686D40(__int64 a1, __int64 a2, void **a3)
{
  int v5; // ebx
  _DWORD *v6; // rbx
  __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rdx
  __int64 v10; // rcx
  const void *v11; // rax
  void *v12; // r14
  __int64 *v13; // rbx
  _QWORD *v14; // r10
  _QWORD *v15; // rdx
  __int64 *v16; // r9
  __int64 v17; // rax
  __int64 *v18; // r14
  _QWORD *v19; // rbx
  __int64 v20; // r8
  unsigned __int64 v21; // rax
  __int16 v22; // ax
  void *Src; // [rsp+58h] [rbp-80h] BYREF
  void *v25; // [rsp+60h] [rbp-78h] BYREF
  int v26; // [rsp+68h] [rbp-70h]
  PMDL MemoryDescriptorList; // [rsp+70h] [rbp-68h]
  int v28; // [rsp+78h] [rbp-60h]
  int v29; // [rsp+7Ch] [rbp-5Ch]
  PMDL Mdl; // [rsp+80h] [rbp-58h]
  PMDL v31; // [rsp+88h] [rbp-50h]
  __int64 v32; // [rsp+90h] [rbp-48h] BYREF
  void *v33; // [rsp+98h] [rbp-40h] BYREF
  __int64 v34; // [rsp+A0h] [rbp-38h]

  v25 = 0LL;
  v33 = 0LL;
  v32 = 0LL;
  Src = 0LL;
  MemoryDescriptorList = 0LL;
  Mdl = 0LL;
  v31 = 0LL;
  v26 = 0;
  v28 = 0;
  v29 = 0;
  v34 = (unsigned int)dword_140C53DC0;
  v5 = WbAlloc(0x58uLL, &v25);
  if ( v5 >= 0 )
  {
    v6 = v25;
    memset(v25, 0, 0x58uLL);
    v6[4] &= ~1u;
    *((_QWORD *)v6 + 10) = 1LL;
    if ( *(_DWORD *)(a2 + 8) == 1 )
    {
      v5 = sub_140687AE4((void *)(a2 + 16));
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
      sub_1403F9654();
      if ( *(_DWORD *)(a2 + 8) )
      {
        v5 = -1073741811;
        goto LABEL_57;
      }
      v5 = sub_140687AE4((void *)(a2 + 16));
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
    v26 = 1;
    v5 = sub_1406873F0(*(PVOID *)(a2 + 328));
    if ( v5 >= 0 )
    {
      v5 = WbAllocateUserMemory(a1, *(unsigned int *)(a2 + 320), &v33, &v32);
      if ( v5 >= 0 )
      {
        v5 = WbAlloc(*(unsigned int *)(a2 + 320), &Src);
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
          memmove((char *)Src + *(unsigned int *)(a2 + 288), *(const void **)(a2 + 272), (unsigned int)v7);
          if ( *(_DWORD *)(a2 + 8) == 1 )
          {
            if ( *(_DWORD *)(a2 + 284) < 4u )
            {
              v5 = -1073741811;
              goto LABEL_57;
            }
            *(_DWORD *)((char *)Src + *(unsigned int *)(a2 + 288)) = *(_DWORD *)(a2 + 292);
          }
          else
          {
            sub_1403F9654();
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
          v28 = 1;
          v5 = sub_140687500(
                 0,
                 (int)Src + *(_DWORD *)(a2 + 288),
                 (int)Src + *(_DWORD *)(a2 + 288),
                 *(_DWORD *)(a2 + 284),
                 a2 + 88,
                 *(_DWORD *)(a2 + 280),
                 a2 + 96);
          if ( v5 >= 0 )
          {
            v5 = sub_1406873F0(*(PVOID *)(a2 + 272));
            if ( v5 >= 0 )
            {
              v9 = *(_QWORD *)(a2 + 296);
              if ( !v9 )
                goto LABEL_43;
              v10 = *(unsigned int *)(a2 + 308);
              v11 = *(const void **)(a2 + 296);
              if ( (_DWORD)v10 && (v9 + v10 > 0x7FFFFFFF0000LL || v9 + v10 < v9) )
              {
                MEMORY[0x7FFFFFFF0000] = 0;
                LODWORD(v10) = *(_DWORD *)(a2 + 308);
                v11 = *(const void **)(a2 + 296);
              }
              memmove((char *)Src + *(unsigned int *)(a2 + 312), v11, (unsigned int)v10);
              if ( *(_DWORD *)(a2 + 8) == 1 )
              {
                if ( *(_DWORD *)(a2 + 308) < 4u )
                {
                  v5 = -1073741811;
                  goto LABEL_57;
                }
                *(_DWORD *)((char *)Src + *(unsigned int *)(a2 + 312)) = *(_DWORD *)(a2 + 316);
              }
              else
              {
                sub_1403F9654();
                if ( *(_DWORD *)(a2 + 8) )
                {
                  v5 = -1073741811;
                  goto LABEL_57;
                }
              }
              v31 = IoAllocateMdl(*(PVOID *)(a2 + 296), *(_DWORD *)(a2 + 308), 0, 0, 0LL);
              if ( !v31 )
              {
                v5 = -1073741801;
                goto LABEL_57;
              }
              MmProbeAndLockPagesPrivate((__int64)v31);
              v29 = 1;
              v5 = sub_140687500(
                     0,
                     (int)Src + *(_DWORD *)(a2 + 312),
                     (int)Src + *(_DWORD *)(a2 + 312),
                     *(_DWORD *)(a2 + 308),
                     a2 + 88,
                     *(_DWORD *)(a2 + 304),
                     a2 + 96);
              if ( v5 >= 0 )
              {
                v5 = sub_1406873F0(*(PVOID *)(a2 + 296));
                if ( v5 >= 0 )
                {
LABEL_43:
                  v12 = v33;
                  memmove(v33, Src, *(unsigned int *)(a2 + 320));
                  v13 = (__int64 *)v25;
                  v14 = (char *)v25 + 64;
                  *((_QWORD *)v25 + 8) = *(_QWORD *)a2;
                  v15 = v13 + 5;
                  v13[5] = (__int64)v12;
                  v16 = v13 + 3;
                  v13[3] = v32 + *(unsigned int *)(a2 + 288);
                  v17 = *(unsigned int *)(a2 + 312);
                  if ( (_DWORD)v17 )
                  {
                    v18 = v13 + 4;
                    v13[4] = v32 + v17;
                  }
                  else
                  {
                    v18 = (__int64 *)((char *)v25 + 32);
                    *((_QWORD *)v25 + 4) = 0LL;
                  }
                  v19 = v25;
                  *((_DWORD *)v25 + 18) = *(_DWORD *)(a2 + 320);
                  v19[6] = *(_QWORD *)(a2 + 272);
                  v20 = *(_QWORD *)(a2 + 272) - *v16;
                  v19[7] = v20;
                  v21 = KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[10];
                  if ( v21 && ((v22 = *(_WORD *)(v21 + 8), v22 == 332) || v22 == 452) )
                    *(_QWORD *)*v15 = *v14;
                  else
                    *(_QWORD *)*v15 = v20;
                  *(_QWORD *)(*v15 + 8LL) = v34;
                  v5 = ZwFlushInstructionCache(-1LL, *v16);
                  if ( v5 >= 0 )
                  {
                    if ( !*(_QWORD *)(a2 + 296) || (v5 = ZwFlushInstructionCache(-1LL, *v18), v5 >= 0) )
                    {
                      if ( a3 )
                      {
                        *a3 = v25;
                        v25 = 0LL;
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
  }
LABEL_57:
  if ( MemoryDescriptorList )
  {
    if ( v26 )
      MmUnlockPages(MemoryDescriptorList);
    IoFreeMdl(MemoryDescriptorList);
  }
  if ( Mdl )
  {
    if ( v28 )
      MmUnlockPages(Mdl);
    IoFreeMdl(Mdl);
  }
  if ( v31 )
  {
    if ( v29 )
      MmUnlockPages(v31);
    IoFreeMdl(v31);
  }
  sub_14064DAEC(a1, (__int64)v25);
  if ( Src )
    ExFreePoolWithTag(Src, 0x42524157u);
  return (unsigned int)v5;
}
