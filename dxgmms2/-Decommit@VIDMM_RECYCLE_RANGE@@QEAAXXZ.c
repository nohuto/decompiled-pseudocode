/*
 * XREFs of ?Decommit@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1C00F5CFC
 * Callers:
 *     ?Commit@VIDMM_RECYCLE_MULTIRANGE@@QEAAJEPEAE@Z @ 0x1C009728C (-Commit@VIDMM_RECYCLE_MULTIRANGE@@QEAAJEPEAE@Z.c)
 *     ?Allocate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX22PEAEEE@Z @ 0x1C009CCE0 (-Allocate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX22PEAEEE@Z.c)
 * Callees:
 *     ?AddToDecommitDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00973C8 (-AddToDecommitDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z @ 0x1C0099CA0 (-Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z.c)
 *     ?RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C009AAD0 (-RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C009AD48 (-AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_RECYCLE_RANGE::Decommit(VIDMM_RECYCLE_RANGE *this)
{
  __int64 v1; // rdx
  int v3; // ecx
  VIDMM_RECYCLE_HEAP_MGR *v4; // rcx
  VIDMM_RECYCLE_HEAP_MGR *v5; // rbx
  int v6; // edx
  __int64 v7; // rcx

  v1 = *((int *)this + 16);
  v3 = *((_DWORD *)this + 16) - 1;
  if ( v3 )
  {
    if ( v3 != 2 )
    {
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 52LL, 1LL, v1, 0LL);
      return;
    }
    v4 = *(VIDMM_RECYCLE_HEAP_MGR **)(*((_QWORD *)this + 9) + 32LL);
    v5 = (VIDMM_RECYCLE_HEAP_MGR *)*((_QWORD *)v4 + 1);
    VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce(v4, this);
    VIDMM_RECYCLE_HEAP_MGR::AddToUnlockDebounce(v5, this);
    v6 = 4;
  }
  else
  {
    v7 = *(_QWORD *)(*((_QWORD *)this + 9) + 32LL);
    if ( (unsigned int)(*(_DWORD *)v7 - 3) <= 3 || (unsigned int)(*(_DWORD *)v7 - 9) <= 1 )
    {
      v6 = 0;
    }
    else
    {
      VIDMM_RECYCLE_HEAP_MGR::AddToDecommitDebounce(*(VIDMM_RECYCLE_HEAP_MGR **)(v7 + 8), this);
      v6 = 5;
    }
  }
  VIDMM_RECYCLE_RANGE::Transition((__int64)this, v6);
}
