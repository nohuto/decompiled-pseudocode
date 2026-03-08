/*
 * XREFs of ?InitPhysicalHeap@VIDMM_GLOBAL@@CAXXZ @ 0x1C00BE6E8
 * Callers:
 *     ?InitGlobals@VIDMM_GLOBAL@@SAJXZ @ 0x1C00BDE54 (-InitGlobals@VIDMM_GLOBAL@@SAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0002360 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 *     ??0VIDMM_LINEAR_POOL@@QEAA@XZ @ 0x1C00BAC98 (--0VIDMM_LINEAR_POOL@@QEAA@XZ.c)
 *     ?Init@VIDMM_LINEAR_POOL@@QEAAJ_KEP6AXPEAX@ZP6AH1@Z@Z @ 0x1C00BAD44 (-Init@VIDMM_LINEAR_POOL@@QEAAJ_KEP6AXPEAX@ZP6AH1@Z@Z.c)
 *     ?DeInitPhysicalHeap@VIDMM_GLOBAL@@CAXXZ @ 0x1C00E13F4 (-DeInitPhysicalHeap@VIDMM_GLOBAL@@CAXXZ.c)
 */

void VIDMM_GLOBAL::InitPhysicalHeap(void)
{
  __int64 v0; // rcx
  VIDMM_LINEAR_POOL *v1; // rax
  VIDMM_LINEAR_POOL *v2; // rax
  int v3; // eax

  VIDMM_GLOBAL::m_PhysicalBlockSize = NumberOfBytes;
  VIDMM_GLOBAL::m_PhysicalBlockLowestAddress = LowestAcceptableAddress;
  VIDMM_GLOBAL::m_PhysicalBlockHighestAddress = HighestAcceptableAddress;
  VIDMM_GLOBAL::m_PhysicalBlock = 0LL;
  VIDMM_GLOBAL::m_pPhysicalPool = 0LL;
  if ( NumberOfBytes )
  {
    VIDMM_GLOBAL::m_PhysicalBlock = MmAllocateContiguousMemorySpecifyCache(
                                      NumberOfBytes,
                                      LowestAcceptableAddress,
                                      HighestAcceptableAddress,
                                      0LL,
                                      MmCached);
    if ( !VIDMM_GLOBAL::m_PhysicalBlock )
    {
      WdLogSingleEntry1(6LL, 31941LL);
      goto LABEL_11;
    }
    v1 = (VIDMM_LINEAR_POOL *)operator new(320LL, 0x37316956u, 64LL);
    if ( v1 )
    {
      v2 = VIDMM_LINEAR_POOL::VIDMM_LINEAR_POOL(v1);
      VIDMM_GLOBAL::m_pPhysicalPool = v2;
      if ( v2 )
      {
        v3 = VIDMM_LINEAR_POOL::Init(v2, VIDMM_GLOBAL::m_PhysicalBlockSize, 0, 0LL, 0LL);
        if ( v3 >= 0 )
          return;
        _InterlockedIncrement(&dword_1C00767A4);
        WdLogSingleEntry1(6LL, v3);
LABEL_11:
        DxgkLogInternalTriageEvent(v0, 262145LL);
        VIDMM_GLOBAL::DeInitPhysicalHeap();
        return;
      }
    }
    else
    {
      VIDMM_GLOBAL::m_pPhysicalPool = 0LL;
    }
    _InterlockedIncrement(&dword_1C00767A0);
    WdLogSingleEntry1(6LL, 31949LL);
    goto LABEL_11;
  }
}
