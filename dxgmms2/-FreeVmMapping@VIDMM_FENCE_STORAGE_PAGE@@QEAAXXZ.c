/*
 * XREFs of ?FreeVmMapping@VIDMM_FENCE_STORAGE_PAGE@@QEAAXXZ @ 0x1C00B3170
 * Callers:
 *     ?FreeStorage@VIDMM_FENCE_STORAGE_PAGE@@AEAAXXZ @ 0x1C00B30D8 (-FreeStorage@VIDMM_FENCE_STORAGE_PAGE@@AEAAXXZ.c)
 *     ?FreeVmProcessFencePageInGlobalStorage@VIDMM_PROCESS@@QEAAXXZ @ 0x1C00F0E10 (-FreeVmProcessFencePageInGlobalStorage@VIDMM_PROCESS@@QEAAXXZ.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00017E8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001938 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001998 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 *     ?UnmapHostAddressesFromGuest@VIDMM_PROCESS@@QEAAXPEAX_K1E@Z @ 0x1C00EFA38 (-UnmapHostAddressesFromGuest@VIDMM_PROCESS@@QEAAXPEAX_K1E@Z.c)
 */

void __fastcall VIDMM_FENCE_STORAGE_PAGE::FreeVmMapping(VIDMM_FENCE_STORAGE_PAGE *this)
{
  __int64 v2; // rcx
  _QWORD *v3; // rdi
  __int64 v4; // rcx
  _QWORD *v5; // rax
  _BYTE v6[8]; // [rsp+50h] [rbp-28h] BYREF
  DXGPUSHLOCK *v7; // [rsp+58h] [rbp-20h]
  int v8; // [rsp+60h] [rbp-18h]

  if ( *((_QWORD *)this + 19) )
  {
    if ( !*((_QWORD *)this + 4) )
    {
      WdLogSingleEntry1(1LL, 1530LL);
      DxgkLogInternalTriageEvent(v2, 262146LL);
    }
    VIDMM_PROCESS::UnmapHostAddressesFromGuest(
      *((VIDMM_PROCESS **)this + 4),
      *((void **)this + 19),
      *((_QWORD *)this + 18),
      0x1000uLL,
      0);
    if ( *((_BYTE *)this + 160) )
    {
      DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v6, (struct _KTHREAD **)(*((_QWORD *)this + 4) + 64LL), 0);
      DXGPUSHLOCK::AcquireExclusive(v7);
      v3 = (_QWORD *)((char *)this + 16);
      v8 = 2;
      v4 = *((_QWORD *)this + 2);
      if ( *(VIDMM_FENCE_STORAGE_PAGE **)(v4 + 8) != (VIDMM_FENCE_STORAGE_PAGE *)((char *)this + 16)
        || (v5 = (_QWORD *)*((_QWORD *)this + 3), (_QWORD *)*v5 != v3) )
      {
        __fastfail(3u);
      }
      *v5 = v4;
      *(_QWORD *)(v4 + 8) = v5;
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v6);
      *v3 = 0LL;
      *((_QWORD *)this + 3) = 0LL;
    }
    *((_QWORD *)this + 4) = 0LL;
    *((_QWORD *)this + 19) = 0LL;
    *((_QWORD *)this + 18) = 0LL;
  }
}
