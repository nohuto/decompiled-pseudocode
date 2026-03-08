/*
 * XREFs of ?GetPresentStats@CTargetStats@@QEBAXPEAVIOverlaySwapChain@@PEAUtagCOMPOSITION_STATS@@@Z @ 0x1801E4498
 * Callers:
 *     ?GetStats@CDDisplayRenderTarget@@UEAA_NPEAUtagCOMPOSITION_TARGET_STATS@@@Z @ 0x1801E511C (-GetStats@CDDisplayRenderTarget@@UEAA_NPEAUtagCOMPOSITION_TARGET_STATS@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CTargetStats::GetPresentStats(
        CTargetStats *this,
        struct IOverlaySwapChain *a2,
        struct tagCOMPOSITION_STATS *a3)
{
  unsigned __int64 v6; // rbp
  unsigned int v7; // ecx
  unsigned __int64 v8; // rax

  *(_DWORD *)a3 = *(_DWORD *)this;
  *((_DWORD *)a3 + 1) = *((_DWORD *)this + 1) + *((_DWORD *)this + 2);
  v6 = (*(__int64 (__fastcall **)(struct IOverlaySwapChain *))(*(_QWORD *)a2 + 72LL))(a2);
  *((_QWORD *)a3 + 2) = *((_QWORD *)this + 2) + v6 * *((unsigned int *)this + 1);
  v7 = (*(__int64 (__fastcall **)(struct IOverlaySwapChain *))(*(_QWORD *)a2 + 96LL))(a2);
  if ( *((_QWORD *)this + 3) )
    v8 = (*((_QWORD *)a3 + 2) + (v6 >> 1) - *((_QWORD *)this + 3)) / v6;
  else
    LODWORD(v8) = *((_DWORD *)this + 1);
  *((_DWORD *)a3 + 2) = *((_DWORD *)this + 3) + (unsigned int)v8 / v7;
}
