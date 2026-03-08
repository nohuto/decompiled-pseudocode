/*
 * XREFs of ?InitPagingProcess@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C00C2214
 * Callers:
 *     ?VidMmInitializePagingProcess@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C00C1F94 (-VidMmInitializePagingProcess@VIDMM_GLOBAL@@QEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0002360 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetKmdProcessHandle@DXGPROCESS@@QEBAPEAXI@Z @ 0x1C0014FFC (-GetKmdProcessHandle@DXGPROCESS@@QEBAPEAXI@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 *     ??0VIDMM_DEVICE@@QEAA@PEAVVIDMM_GLOBAL@@PEAVDXGDEVICE@@@Z @ 0x1C00A7F58 (--0VIDMM_DEVICE@@QEAA@PEAVVIDMM_GLOBAL@@PEAVDXGDEVICE@@@Z.c)
 *     ?Init@VIDMM_DEVICE@@QEAAJ_NPEAVVIDMM_PROCESS@@@Z @ 0x1C00AA04C (-Init@VIDMM_DEVICE@@QEAAJ_NPEAVVIDMM_PROCESS@@@Z.c)
 *     ?OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C00ABCF0 (-OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ @ 0x1C00F20F8 (-DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ.c)
 */

__int64 __fastcall VIDMM_PAGING_PROCESS::InitPagingProcess(VIDMM_PAGING_PROCESS *this, struct VIDMM_GLOBAL *a2)
{
  VIDMM_PROCESS *v2; // rax
  VIDMM_DEVICE *v5; // rax
  void *KmdProcessHandle; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx

  v2 = g_pVidMmSystemProcess;
  *((_QWORD *)this + 2) = a2;
  *(_QWORD *)this = v2;
  v5 = (VIDMM_DEVICE *)operator new(320LL, 0x38306956u, 256LL);
  if ( v5 )
    v5 = VIDMM_DEVICE::VIDMM_DEVICE(v5, a2, 0LL);
  *((_QWORD *)this + 1) = v5;
  if ( v5 )
  {
    if ( (int)VIDMM_DEVICE::Init(v5, 1, 0LL) < 0 )
    {
      WdLogSingleEntry1(1LL, 7708LL);
    }
    else
    {
      if ( (*(_BYTE *)(*((_QWORD *)this + 2) + 40936LL) & 4) != 0 )
      {
        KmdProcessHandle = DXGPROCESS::GetKmdProcessHandle(
                             *(DXGPROCESS **)(*(_QWORD *)this + 32LL),
                             *(_DWORD *)(*((_QWORD *)a2 + 3) + 240LL));
        v7 = 0LL;
        for ( *((_QWORD *)this + 3) = KmdProcessHandle;
              (unsigned int)v7 < *((_DWORD *)a2 + 1754);
              v7 = (unsigned int)(v7 + 1) )
        {
          v8 = *((_QWORD *)this + v7 + 4);
          if ( v8 )
            *(_QWORD *)(v8 + 104) = *((_QWORD *)this + 1);
        }
      }
      if ( *((char *)a2 + 40936) < 0 )
        return 0LL;
      if ( (int)VIDMM_PROCESS::OpenAdapter((struct _KTHREAD **)g_pVidMmSystemProcess, a2) >= 0 )
      {
        *((_BYTE *)a2 + 40936) |= 0x80u;
        return 0LL;
      }
      WdLogSingleEntry1(1LL, 7729LL);
    }
    v11 = 0x40000LL;
  }
  else
  {
    _InterlockedIncrement(&dword_1C0076800);
    WdLogSingleEntry1(6LL, 7701LL);
    v11 = 262145LL;
  }
  DxgkLogInternalTriageEvent(v10, v11);
  VIDMM_PAGING_PROCESS::DestroyPagingProcess(this);
  return 3221225473LL;
}
