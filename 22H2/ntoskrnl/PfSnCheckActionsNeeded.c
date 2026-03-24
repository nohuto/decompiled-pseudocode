/*
 * XREFs of PfSnCheckActionsNeeded @ 0x140630F78
 * Callers:
 *     PfSnBeginScenario @ 0x140630458 (PfSnBeginScenario.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     PsGetPagePriorityThread @ 0x140242140 (PsGetPagePriorityThread.c)
 *     MmGetDefaultPagePriority @ 0x14026E790 (MmGetDefaultPagePriority.c)
 *     MmQueryMemoryListInformation @ 0x14026EA10 (MmQueryMemoryListInformation.c)
 *     ExReleaseResourceLite @ 0x1402CBB00 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402CC2B0 (ExAcquireResourceExclusiveLite.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     memset @ 0x140413800 (memset.c)
 *     PfSnPrefetchCacheEntryGet @ 0x1406320EC (PfSnPrefetchCacheEntryGet.c)
 *     PfpGetPageListCount @ 0x1406340C8 (PfpGetPageListCount.c)
 */

__int64 __fastcall PfSnCheckActionsNeeded(unsigned __int8 *a1, int a2, __int64 a3, int *a4, int *a5)
{
  int v8; // edi
  unsigned int v9; // ebx
  int v10; // esi
  unsigned int DefaultPagePriority; // eax
  unsigned int v12; // edx
  unsigned int v13; // r15d
  unsigned int v14; // r14d
  unsigned __int8 *v15; // r9
  __int64 v16; // rbp
  __int64 v17; // r10
  __int64 v18; // rax
  unsigned __int64 v19; // r13
  unsigned __int64 v20; // r12
  __int64 v21; // r8
  unsigned __int64 v22; // r15
  __int64 v23; // r8
  __int64 PageListCount; // r14
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v26; // r14
  __int64 v27; // rax
  _DWORD *v28; // rcx
  unsigned int v29; // r8d
  unsigned int v30; // eax
  unsigned int v31; // edx
  int v32; // eax
  int v34; // [rsp+30h] [rbp-118h] BYREF
  _DWORD v35[3]; // [rsp+34h] [rbp-114h] BYREF
  int *v36; // [rsp+40h] [rbp-108h]
  int *v37; // [rsp+48h] [rbp-100h]
  _OWORD v38[11]; // [rsp+50h] [rbp-F8h] BYREF

  *(_QWORD *)&v35[1] = a1;
  v37 = a5;
  v36 = a4;
  memset(v38, 0, sizeof(v38));
  v35[0] = 0;
  v8 = 3;
  v34 = 0;
  v9 = 3;
  v10 = 23;
  if ( (dword_140C502B0 & 8) != 0 )
  {
    v10 = 22;
    v8 = 22;
  }
  else
  {
    PsGetPagePriorityThread(a3);
    DefaultPagePriority = MmGetDefaultPagePriority();
    v13 = DefaultPagePriority;
    v14 = DefaultPagePriority - 1;
    if ( v12 > DefaultPagePriority - 1 )
      v12 = DefaultPagePriority;
    if ( v12 <= v14 )
    {
      v8 = 2;
      v10 = 2;
    }
    else
    {
      if ( (dword_140C50550 & 0x10) != 0 && !a2 )
      {
        v9 = 1;
        v10 = 14;
      }
      v15 = a1;
      v16 = 314159LL;
      v17 = 8LL;
      do
      {
        v18 = *v15;
        v15 += 8;
        v16 = *(v15 - 1)
            + 37
            * (*(v15 - 2)
             + 37
             * (*(v15 - 3)
              + 37 * (*(v15 - 4) + 37 * (*(v15 - 5) + 37 * (*(v15 - 6) + 37 * (*(v15 - 7) + 37 * (v18 + 37 * v16)))))));
        --v17;
      }
      while ( v17 );
      v19 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      MmQueryMemoryListInformation((ULONG_PTR **)0xFFFFFFFFFFFFFFFFLL, v38, 0xB0u, (__int64)v15, v35);
      v20 = (unsigned __int64)(PfpGetPageListCount((char *)&v38[6] + 8, 0LL, 7LL) << 12) >> 18;
      v22 = (unsigned __int64)(PfpGetPageListCount((char *)&v38[6] + 8, v13, v21) << 12) >> 18;
      PageListCount = PfpGetPageListCount((char *)&v38[6] + 8, v14, v23);
      CurrentThread = KeGetCurrentThread();
      v26 = (unsigned __int64)(PageListCount << 12) >> 18;
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceExclusiveLite(&stru_140C504E0, 1u);
      v27 = PfSnPrefetchCacheEntryGet(&unk_140C504B8, *(_QWORD *)&v35[1], v16, &v34);
      v28 = (_DWORD *)v27;
      if ( v27 )
      {
        if ( v34 )
        {
          v8 = 13;
          if ( v9 >= 2 )
            v10 = 13;
        }
        else
        {
          v29 = v19 - *(_DWORD *)(v27 + 108);
          v30 = *(_DWORD *)(v27 + 112);
          v31 = v9 & 0xFFFFFFFE;
          v8 = (v29 < v30) + 4;
          if ( v29 >= v30 )
            v31 = v9;
          v9 = v31;
          if ( v31 >= 2 )
          {
            v10 = 4;
            if ( (dword_140C502B0 & 2) == 0 )
            {
              if ( v29 >= 0x1B7740 )
              {
                if ( v29 >= 0x36EE80 )
                  v32 = v20 - v28[26];
                else
                  v32 = v26 - v28[25];
              }
              else
              {
                v32 = v22 - v28[24];
              }
              if ( !v32 )
              {
                v9 = v31 & 0xFFFFFFFD;
                v10 = 7;
              }
            }
          }
        }
        v28[27] = v19;
        v28[24] = v22;
        v28[25] = v26;
        v28[26] = v20;
      }
      else
      {
        v10 = 3;
      }
      ExReleaseResourceLite(&stru_140C504E0);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    }
  }
  *v36 = v8;
  *v37 = v10;
  return v9;
}
