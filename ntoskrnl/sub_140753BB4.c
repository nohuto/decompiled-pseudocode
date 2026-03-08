/*
 * XREFs of sub_140753BB4 @ 0x140753BB4
 * Callers:
 *     WbGetHeapExecutedBlock @ 0x1406AFAAC (WbGetHeapExecutedBlock.c)
 * Callees:
 *     IoAllocateMdl @ 0x14020CAD0 (IoAllocateMdl.c)
 *     MmProbeAndLockPagesPrivate @ 0x140242D40 (MmProbeAndLockPagesPrivate.c)
 *     MmUnlockPages @ 0x14027C0C0 (MmUnlockPages.c)
 *     IoFreeMdl @ 0x1403147E0 (IoFreeMdl.c)
 *     ZwFlushInstructionCache @ 0x1404140F0 (ZwFlushInstructionCache.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     WbAlloc @ 0x1406AF510 (WbAlloc.c)
 *     sub_1406AFC38 @ 0x1406AFC38 (sub_1406AFC38.c)
 *     sub_14075424C @ 0x14075424C (sub_14075424C.c)
 *     sub_14075435C @ 0x14075435C (sub_14075435C.c)
 *     sub_140754450 @ 0x140754450 (sub_140754450.c)
 *     WbAllocateUserMemory @ 0x140754868 (WbAllocateUserMemory.c)
 *     ExSystemExceptionFilter @ 0x140861790 (ExSystemExceptionFilter.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140753BB4(__int64 a1, __int64 a2, void **a3)
{
  int v4; // ebx
  _DWORD *v5; // rbx
  char v6; // r14
  int v7; // eax
  __int64 v8; // rax
  unsigned __int64 v9; // rcx
  int v10; // eax
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  int v13; // eax
  void *v14; // r15
  _QWORD *v15; // rbx
  _QWORD *v16; // r10
  _QWORD *v17; // rdx
  __int64 *v18; // r9
  __int64 v19; // rax
  _QWORD *v20; // rbx
  __int64 v21; // rcx
  _KPROCESS *Process; // r8
  __int16 v23; // ax
  void *v25; // [rsp+58h] [rbp-90h] BYREF
  void *Src; // [rsp+60h] [rbp-88h] BYREF
  int v27; // [rsp+68h] [rbp-80h]
  PMDL MemoryDescriptorList; // [rsp+70h] [rbp-78h]
  int v29; // [rsp+78h] [rbp-70h]
  int v30; // [rsp+7Ch] [rbp-6Ch]
  PMDL Mdl; // [rsp+80h] [rbp-68h]
  PMDL v32; // [rsp+88h] [rbp-60h]
  __int64 v33; // [rsp+90h] [rbp-58h] BYREF
  void *v34; // [rsp+98h] [rbp-50h] BYREF
  __int64 v35; // [rsp+A0h] [rbp-48h]

  v25 = 0LL;
  v34 = 0LL;
  v33 = 0LL;
  Src = 0LL;
  MemoryDescriptorList = 0LL;
  Mdl = 0LL;
  v32 = 0LL;
  v27 = 0;
  v29 = 0;
  v30 = 0;
  v35 = (unsigned int)dword_140C706F0;
  v4 = WbAlloc(0x58u, &v25);
  if ( v4 >= 0 )
  {
    v5 = v25;
    memset(v25, 0, 0x58uLL);
    v5[4] &= ~1u;
    v6 = 1;
    *((_QWORD *)v5 + 10) = 1LL;
    v7 = *(_DWORD *)(a2 + 8);
    if ( v7 == 1 )
    {
      v4 = sub_140754450((void *)(a2 + 16));
      if ( v4 < 0 )
        goto LABEL_59;
      MemoryDescriptorList = IoAllocateMdl(*(PVOID *)(a2 + 328), 0xF8u, 0, 0, 0LL);
      if ( !MemoryDescriptorList )
      {
        v4 = -1073741801;
        goto LABEL_59;
      }
    }
    else
    {
      if ( v7 )
      {
        v4 = -1073741811;
        goto LABEL_59;
      }
      v4 = sub_140754450((void *)(a2 + 16));
      if ( v4 < 0 )
        goto LABEL_59;
      MemoryDescriptorList = IoAllocateMdl(*(PVOID *)(a2 + 328), 0xF0u, 0, 0, 0LL);
      if ( !MemoryDescriptorList )
      {
        v4 = -1073741801;
        goto LABEL_59;
      }
    }
    MmProbeAndLockPagesPrivate(MemoryDescriptorList);
    v27 = 1;
    v4 = sub_14075424C(*(PVOID *)(a2 + 328));
    if ( v4 >= 0 )
    {
      v4 = WbAllocateUserMemory(a1, *(unsigned int *)(a2 + 320), &v34, &v33);
      if ( v4 >= 0 )
      {
        v4 = WbAlloc(*(_DWORD *)(a2 + 320), &Src);
        if ( v4 >= 0 )
        {
          v8 = *(unsigned int *)(a2 + 284);
          if ( (_DWORD)v8 )
          {
            v9 = *(_QWORD *)(a2 + 272);
            if ( v9 + v8 > 0x7FFFFFFF0000LL || v9 + v8 < v9 )
              MEMORY[0x7FFFFFFF0000] = 0;
          }
          memmove((char *)Src + *(unsigned int *)(a2 + 288), *(const void **)(a2 + 272), *(unsigned int *)(a2 + 284));
          v10 = *(_DWORD *)(a2 + 8);
          if ( v10 == 1 )
          {
            if ( *(_DWORD *)(a2 + 284) < 4u )
            {
              v4 = -1073741811;
              goto LABEL_59;
            }
            *(_DWORD *)((char *)Src + *(unsigned int *)(a2 + 288)) = *(_DWORD *)(a2 + 292);
          }
          else if ( v10 )
          {
            v4 = -1073741811;
            goto LABEL_59;
          }
          Mdl = IoAllocateMdl(*(PVOID *)(a2 + 272), *(_DWORD *)(a2 + 284), 0, 0, 0LL);
          if ( !Mdl )
          {
            v4 = -1073741801;
            goto LABEL_59;
          }
          MmProbeAndLockPagesPrivate(Mdl);
          v29 = 1;
          v4 = sub_14075435C(
                 0,
                 (int)Src + *(_DWORD *)(a2 + 288),
                 (int)Src + *(_DWORD *)(a2 + 288),
                 *(_DWORD *)(a2 + 284),
                 a2 + 88,
                 *(_DWORD *)(a2 + 280),
                 a2 + 96);
          if ( v4 >= 0 )
          {
            v4 = sub_14075424C(*(PVOID *)(a2 + 272));
            if ( v4 >= 0 )
            {
              v11 = *(_QWORD *)(a2 + 296);
              if ( !v11 )
                goto LABEL_43;
              v12 = *(unsigned int *)(a2 + 308);
              if ( (_DWORD)v12 && (v11 + v12 > 0x7FFFFFFF0000LL || v11 + v12 < v11) )
                MEMORY[0x7FFFFFFF0000] = 0;
              memmove(
                (char *)Src + *(unsigned int *)(a2 + 312),
                *(const void **)(a2 + 296),
                *(unsigned int *)(a2 + 308));
              v13 = *(_DWORD *)(a2 + 8);
              if ( v13 == 1 )
              {
                if ( *(_DWORD *)(a2 + 308) < 4u )
                {
                  v4 = -1073741811;
                  goto LABEL_59;
                }
                *(_DWORD *)((char *)Src + *(unsigned int *)(a2 + 312)) = *(_DWORD *)(a2 + 316);
              }
              else if ( v13 )
              {
                v4 = -1073741811;
                goto LABEL_59;
              }
              v32 = IoAllocateMdl(*(PVOID *)(a2 + 296), *(_DWORD *)(a2 + 308), 0, 0, 0LL);
              if ( !v32 )
              {
                v4 = -1073741801;
                goto LABEL_59;
              }
              MmProbeAndLockPagesPrivate(v32);
              v30 = 1;
              v4 = sub_14075435C(
                     0,
                     (int)Src + *(_DWORD *)(a2 + 312),
                     (int)Src + *(_DWORD *)(a2 + 312),
                     *(_DWORD *)(a2 + 308),
                     a2 + 88,
                     *(_DWORD *)(a2 + 304),
                     a2 + 96);
              if ( v4 >= 0 )
              {
                v4 = sub_14075424C(*(PVOID *)(a2 + 296));
                if ( v4 >= 0 )
                {
LABEL_43:
                  v14 = v34;
                  memmove(v34, Src, *(unsigned int *)(a2 + 320));
                  v15 = v25;
                  v16 = (char *)v25 + 64;
                  *((_QWORD *)v25 + 8) = *(_QWORD *)a2;
                  v17 = v15 + 5;
                  v15[5] = v14;
                  v18 = v15 + 3;
                  v15[3] = v33 + *(unsigned int *)(a2 + 288);
                  v19 = *(unsigned int *)(a2 + 312);
                  if ( (_DWORD)v19 )
                    v15[4] = v33 + v19;
                  else
                    *((_QWORD *)v25 + 4) = 0LL;
                  v20 = v25;
                  *((_DWORD *)v25 + 18) = *(_DWORD *)(a2 + 320);
                  v20[6] = *(_QWORD *)(a2 + 272);
                  v21 = *(_QWORD *)(a2 + 272) - *v18;
                  v20[7] = v21;
                  Process = KeGetCurrentThread()->ApcState.Process;
                  if ( !Process[1].Affinity.StaticBitmap[30] )
                    goto LABEL_52;
                  v23 = WORD2(Process[2].Affinity.StaticBitmap[20]);
                  if ( v23 != 332 && v23 != 452 )
                    v6 = 0;
                  if ( v6 )
                    *(_QWORD *)*v17 = *v16;
                  else
LABEL_52:
                    *(_QWORD *)*v17 = v21;
                  *(_QWORD *)(*v17 + 8LL) = v35;
                  v4 = ZwFlushInstructionCache(-1LL, *v18);
                  if ( v4 >= 0 )
                  {
                    if ( !*(_QWORD *)(a2 + 296) || (v4 = ZwFlushInstructionCache(-1LL, *((_QWORD *)v25 + 4)), v4 >= 0) )
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
LABEL_59:
  if ( MemoryDescriptorList )
  {
    if ( v27 )
      MmUnlockPages(MemoryDescriptorList);
    IoFreeMdl(MemoryDescriptorList);
  }
  if ( Mdl )
  {
    if ( v29 )
      MmUnlockPages(Mdl);
    IoFreeMdl(Mdl);
  }
  if ( v32 )
  {
    if ( v30 )
      MmUnlockPages(v32);
    IoFreeMdl(v32);
  }
  sub_1406AFC38(a1, (__int64)v25);
  if ( Src )
    ExFreePoolWithTag(Src, 0);
  return (unsigned int)v4;
}
