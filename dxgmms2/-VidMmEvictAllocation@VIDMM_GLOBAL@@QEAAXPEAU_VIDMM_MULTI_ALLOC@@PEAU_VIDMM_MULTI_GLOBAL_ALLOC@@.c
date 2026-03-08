/*
 * XREFs of ?VidMmEvictAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@PEAU_D3DKMT_EVICTION_CRITERIA@@@Z @ 0x1C00EA018
 * Callers:
 *     ?VidMmEvictAllocation@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@PEAU_D3DKMT_EVICTION_CRITERIA@@@Z @ 0x1C002CB40 (-VidMmEvictAllocation@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDMM_MULTI_GLOBAL_ALLO.c)
 * Callees:
 *     ?WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z @ 0x1C008DA50 (-WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z.c)
 *     ?Evict@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAPEAU_VIDMM_MULTI_ALLOC@@IKPEA_K@Z @ 0x1C00B261C (-Evict@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAPEAU_VIDMM_MULTI_ALLOC@@IKPEA_K@Z.c)
 *     ?VidMmiAllocationMeetsCriteria@@YA_NPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_D3DKMT_EVICTION_CRITERIA@@@Z @ 0x1C00EBAA0 (-VidMmiAllocationMeetsCriteria@@YA_NPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_D3DKMT_EVICTION_CRITERIA@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::VidMmEvictAllocation(
        VIDMM_GLOBAL *this,
        struct _VIDMM_MULTI_ALLOC *a2,
        struct _VIDMM_MULTI_GLOBAL_ALLOC *a3,
        struct _D3DKMT_EVICTION_CRITERIA *a4)
{
  struct _VIDMM_GLOBAL_ALLOC *v7; // rdi
  struct VIDMM_DEVICE *v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  char *v11; // r14
  char *v12; // rbx
  int *v13; // rdi
  int *v14; // r13
  struct VIDMM_DEVICE *v15; // rdx
  __int64 v16; // rcx
  unsigned __int64 v18; // [rsp+78h] [rbp+48h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v19; // [rsp+80h] [rbp+50h] BYREF

  if ( a2 )
  {
    v7 = **(struct _VIDMM_GLOBAL_ALLOC ***)a2;
    if ( VidMmiAllocationMeetsCriteria(v7, a4) && *((int *)a2 + 38) > 0 )
    {
      v8 = (struct VIDMM_DEVICE *)*((_QWORD *)a2 + 1);
      v18 = 0LL;
      v19 = a2;
      VIDMM_GLOBAL::Evict(this, v8, &v19, 1u, 0, &v18);
      v9 = *(_QWORD *)(*((_QWORD *)a2 + 1) + 88LL) + 176LL * (*((_DWORD *)v7 + 17) & 0x3F);
      v19 = *(struct _VIDSCH_SYNC_OBJECT **)(v9 + 88);
      v18 = *(_QWORD *)(v9 + 96);
      VIDMM_GLOBAL::WaitForFences(this, &v19, &v18, 1u, 0LL);
    }
  }
  else if ( a3 )
  {
    if ( VidMmiAllocationMeetsCriteria(a3, a4) )
    {
      v11 = (char *)(v10 + 272);
      v12 = *(char **)(v10 + 272);
      if ( v12 != (char *)(v10 + 272) )
      {
        do
        {
          v13 = (int *)*((_QWORD *)v12 - 2);
          if ( v13 != (int *)(v12 - 16) )
          {
            do
            {
              v14 = v13 - 10;
              if ( v13[28] > 0 )
              {
                v15 = (struct VIDMM_DEVICE *)*((_QWORD *)v14 + 1);
                v18 = 0LL;
                v19 = (struct _VIDSCH_SYNC_OBJECT *)(v13 - 10);
                VIDMM_GLOBAL::Evict(this, v15, &v19, 1u, 0, &v18);
                v16 = *(_QWORD *)(*((_QWORD *)v14 + 1) + 88LL) + 176LL * (*((_DWORD *)a3 + 17) & 0x3F);
                v19 = *(struct _VIDSCH_SYNC_OBJECT **)(v16 + 88);
                v18 = *(_QWORD *)(v16 + 96);
                VIDMM_GLOBAL::WaitForFences(this, &v19, &v18, 1u, 0LL);
              }
              v13 = *(int **)v13;
            }
            while ( v13 != (int *)(v12 - 16) );
            v11 = (char *)a3 + 272;
          }
          v12 = *(char **)v12;
        }
        while ( v12 != v11 );
      }
    }
  }
  else
  {
    WdLogSingleEntry0(3LL);
  }
}
