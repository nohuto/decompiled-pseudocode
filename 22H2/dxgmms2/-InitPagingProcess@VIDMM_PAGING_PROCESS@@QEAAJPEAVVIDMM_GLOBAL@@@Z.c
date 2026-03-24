/*
 * XREFs of ?InitPagingProcess@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C0096D08
 * Callers:
 *     ?VidMmInitializePagingProcess@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C009663C (-VidMmInitializePagingProcess@VIDMM_GLOBAL@@QEAAJXZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001FC0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?Init@VIDMM_DEVICE@@QEAAJ_NPEAVVIDMM_PROCESS@@@Z @ 0x1C0081728 (-Init@VIDMM_DEVICE@@QEAAJ_NPEAVVIDMM_PROCESS@@@Z.c)
 *     ?OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C00827A4 (-OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 *     ??0VIDMM_DEVICE@@QEAA@PEAVVIDMM_GLOBAL@@PEAVDXGDEVICE@@@Z @ 0x1C0083764 (--0VIDMM_DEVICE@@QEAA@PEAVVIDMM_GLOBAL@@PEAVDXGDEVICE@@@Z.c)
 *     ?DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ @ 0x1C00BB664 (-DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ.c)
 */

__int64 __fastcall VIDMM_PAGING_PROCESS::InitPagingProcess(VIDMM_PAGING_PROCESS *this, struct VIDMM_GLOBAL *a2)
{
  VIDMM_PROCESS *v2; // rax
  VIDMM_DEVICE *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdx

  v2 = g_pVidMmSystemProcess;
  *((_QWORD *)this + 2) = a2;
  *(_QWORD *)this = v2;
  v5 = (VIDMM_DEVICE *)operator new[](0x138uLL, 0x38306956u, PagedPool);
  if ( v5 )
    v5 = VIDMM_DEVICE::VIDMM_DEVICE(v5, a2, 0LL);
  *((_QWORD *)this + 1) = v5;
  if ( v5 )
  {
    LOBYTE(v6) = 1;
    if ( (int)VIDMM_DEVICE::Init(v5, v6, 0LL) < 0 )
    {
      v16 = WdLogNewEntry5_WdAssertion(v9, v8, v10);
      *(_QWORD *)(v16 + 24) = 7350LL;
    }
    else
    {
      if ( (*(_BYTE *)(*((_QWORD *)this + 2) + 40936LL) & 2) != 0 )
      {
        v17 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 32LL) + 48LL)
                        + 8LL * *(unsigned int *)(*((_QWORD *)a2 + 3) + 232LL));
        if ( v17 )
          v17 = *(_QWORD *)(v17 + 16);
        v18 = 0LL;
        for ( *((_QWORD *)this + 3) = v17; (unsigned int)v18 < *((_DWORD *)a2 + 1750); v18 = (unsigned int)(v18 + 1) )
        {
          v19 = *((_QWORD *)this + v18 + 4);
          if ( v19 )
            *(_QWORD *)(v19 + 104) = *((_QWORD *)this + 1);
        }
      }
      if ( (*((_BYTE *)a2 + 40936) & 0x20) != 0 )
        return 0LL;
      if ( (int)VIDMM_PROCESS::OpenAdapter((struct _KTHREAD **)g_pVidMmSystemProcess, a2) >= 0 )
      {
        *((_BYTE *)a2 + 40936) |= 0x20u;
        return 0LL;
      }
      v16 = WdLogNewEntry5_WdAssertion(v12, v11, v13);
      *(_QWORD *)(v16 + 24) = 7371LL;
    }
    WdLogEvent5_WdAssertion(v16);
  }
  else
  {
    _InterlockedIncrement(&dword_1C00506E0);
    v15 = WdLogNewEntry5_WdLowResource(v7);
    *(_QWORD *)(v15 + 24) = 7343LL;
    WdLogEvent5_WdLowResource(v15);
  }
  VIDMM_PAGING_PROCESS::DestroyPagingProcess(this);
  return 3221225473LL;
}
