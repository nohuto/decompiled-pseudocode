/*
 * XREFs of ?InitGlobalStorage@VIDMM_PROCESS_FENCE_STORAGE@@SAJXZ @ 0x1C00BE18C
 * Callers:
 *     ?InitGlobals@VIDMM_GLOBAL@@SAJXZ @ 0x1C00BDE54 (-InitGlobals@VIDMM_GLOBAL@@SAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0002360 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 *     ??0VIDMM_PROCESS_FENCE_STORAGE@@QEAA@PEAVVIDMM_PROCESS@@@Z @ 0x1C0094D28 (--0VIDMM_PROCESS_FENCE_STORAGE@@QEAA@PEAVVIDMM_PROCESS@@@Z.c)
 */

__int64 VIDMM_PROCESS_FENCE_STORAGE::InitGlobalStorage(void)
{
  VIDMM_PROCESS_FENCE_STORAGE *v0; // rax
  __int64 v2; // rcx

  v0 = (VIDMM_PROCESS_FENCE_STORAGE *)operator new(72LL, 0x34346956u, 64LL);
  if ( v0 )
  {
    VIDMM_PROCESS_FENCE_STORAGE::_GlobalFenceStorage = VIDMM_PROCESS_FENCE_STORAGE::VIDMM_PROCESS_FENCE_STORAGE(v0, 0LL);
    if ( VIDMM_PROCESS_FENCE_STORAGE::_GlobalFenceStorage )
      return 0LL;
  }
  else
  {
    VIDMM_PROCESS_FENCE_STORAGE::_GlobalFenceStorage = 0LL;
  }
  _InterlockedIncrement(&dword_1C0076808);
  WdLogSingleEntry1(6LL, 438LL);
  DxgkLogInternalTriageEvent(v2, 262145LL);
  return 3221225495LL;
}
