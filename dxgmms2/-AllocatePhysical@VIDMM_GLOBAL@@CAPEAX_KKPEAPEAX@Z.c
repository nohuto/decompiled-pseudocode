/*
 * XREFs of ?AllocatePhysical@VIDMM_GLOBAL@@CAPEAX_KKPEAPEAX@Z @ 0x1C00E062C
 * Callers:
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@U_DXGK_ALLOCATIONINFOFLAGS2@@PEAVDXGADAPTERALLOCATION@@PEAX6KE6PEAVVIDMM_PAGE_TABLE_BASE@@PEAPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C009F370 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_D.c)
 * Callees:
 *     ?Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z @ 0x1C00AFB74 (-Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z.c)
 */

char *__fastcall VIDMM_GLOBAL::AllocatePhysical(__int64 a1, unsigned int a2, void **a3)
{
  union _LARGE_INTEGER v4; // [rsp+88h] [rbp+20h] BYREF

  if ( VIDMM_GLOBAL::m_PhysicalBlock
    && VIDMM_GLOBAL::m_pPhysicalPool
    && (v4.QuadPart = 0LL,
        (int)VIDMM_LINEAR_POOL::Allocate(
               (VIDMM_LINEAR_POOL *)VIDMM_GLOBAL::m_pPhysicalPool,
               a1,
               a2,
               0LL,
               0LL,
               0LL,
               1,
               0,
               0LL,
               &v4,
               a3) >= 0) )
  {
    return (char *)VIDMM_GLOBAL::m_PhysicalBlock + v4.QuadPart;
  }
  else
  {
    return 0LL;
  }
}
