__int64 __fastcall PfSnCheckActionsNeeded(unsigned __int8 *a1, int a2, __int64 a3, int *a4, int *a5)
{
  int v7; // edi
  int v8; // esi
  unsigned int v9; // ebx
  unsigned int DefaultPagePriority; // eax
  unsigned int v11; // r13d
  unsigned int v12; // r15d
  unsigned int v13; // r8d
  unsigned __int8 *v14; // r9
  __int64 v15; // r14
  __int64 v16; // r10
  __int64 v17; // rax
  unsigned __int64 v18; // r12
  unsigned int v19; // r8d
  unsigned __int64 v20; // r13
  unsigned int v21; // r8d
  unsigned __int64 v22; // r15
  struct _KTHREAD *CurrentThread; // rax
  __int64 v24; // rax
  _DWORD *v25; // rcx
  int v26; // edx
  unsigned int v28; // edx
  unsigned int v29; // eax
  bool v30; // cf
  int v31; // eax
  __int64 v32; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v33; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v34; // [rsp+40h] [rbp-C0h]
  unsigned __int8 *v35; // [rsp+48h] [rbp-B8h]
  int *v36; // [rsp+50h] [rbp-B0h]
  int *v37; // [rsp+58h] [rbp-A8h]
  _OWORD v38[11]; // [rsp+60h] [rbp-A0h] BYREF

  v35 = a1;
  v37 = a5;
  v36 = a4;
  memset(v38, 0, sizeof(v38));
  v32 = 0LL;
  v33 = 0;
  v7 = 3;
  v8 = 23;
  v9 = 3;
  if ( (dword_140C64C00 & 8) != 0 )
  {
    v8 = 22;
    v7 = 22;
    goto LABEL_14;
  }
  PsGetPagePriorityThread(a3);
  DefaultPagePriority = MmGetDefaultPagePriority();
  v11 = DefaultPagePriority;
  v12 = DefaultPagePriority - 1;
  if ( v13 <= DefaultPagePriority - 1 || DefaultPagePriority <= v12 )
  {
    v7 = 2;
    v8 = 2;
    goto LABEL_14;
  }
  if ( (dword_140C6A390 & 0x10) != 0 && !a2 )
  {
    v9 = 1;
    v8 = 14;
  }
  v14 = v35;
  v15 = 314159LL;
  v16 = 8LL;
  do
  {
    v17 = *v14;
    v14 += 8;
    v15 = *(v14 - 1)
        + 37
        * (*(v14 - 2)
         + 37
         * (*(v14 - 3)
          + 37 * (*(v14 - 4) + 37 * (*(v14 - 5) + 37 * (*(v14 - 6) + 37 * (*(v14 - 7) + 37 * (v17 + 37 * v15)))))));
    --v16;
  }
  while ( v16 );
  v34 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  MmQueryMemoryListInformation(0xFFFFFFFFFFFFFFFFuLL, v38, 0xB0u, (__int64)v14, &v32);
  v18 = (unsigned __int64)(PfpGetPageListCount((__int64)&v38[6] + 8, 0, 7u) << 12) >> 18;
  v20 = (unsigned __int64)(PfpGetPageListCount((__int64)&v38[6] + 8, v11, v19) << 12) >> 18;
  v22 = (unsigned __int64)(PfpGetPageListCount((__int64)&v38[6] + 8, v12, v21) << 12) >> 18;
  LODWORD(v32) = MmQueryTransitionPagesMadeColdCount(&v33);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&stru_140C6A320, 1u);
  v24 = PfSnPrefetchCacheEntryGet(&unk_140C6A2F8, v35, v15, (char *)&v32 + 4);
  v25 = (_DWORD *)v24;
  if ( !v24 )
  {
    v8 = 3;
    goto LABEL_13;
  }
  if ( HIDWORD(v32) )
  {
    v7 = 13;
    if ( v9 >= 2 )
      v8 = 13;
  }
  else
  {
    v28 = v34 - *(_DWORD *)(v24 + 112);
    v29 = *(_DWORD *)(v24 + 116);
    v30 = v28 < v29;
    if ( v28 < v29 )
    {
      v9 &= ~1u;
      v30 = v28 < v29;
    }
    v7 = v30 + 4;
    if ( v9 >= 2 )
    {
      v8 = 4;
      if ( (dword_140C64C00 & 2) == 0 )
      {
        if ( v28 >= 0x1B7740 )
        {
          if ( v28 >= 0x36EE80 )
            v31 = v18 - v25[26];
          else
            v31 = v22 - v25[25];
        }
        else
        {
          v31 = v20 - v25[24];
        }
        v26 = v32;
        if ( !v31 && (!v33 || (unsigned int)(v32 - v25[27]) < 0x100) )
        {
          v9 &= ~2u;
          v8 = 7;
        }
        goto LABEL_12;
      }
    }
  }
  v26 = v32;
LABEL_12:
  v25[28] = v34;
  v25[24] = v20;
  v25[25] = v22;
  v25[26] = v18;
  v25[27] = v26;
LABEL_13:
  ExReleaseResourceLite(&stru_140C6A320);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
LABEL_14:
  *v36 = v7;
  *v37 = v8;
  return v9;
}
