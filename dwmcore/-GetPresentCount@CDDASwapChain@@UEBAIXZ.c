/*
 * XREFs of ?GetPresentCount@CDDASwapChain@@UEBAIXZ @ 0x18029FC10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDDASwapChain::GetPresentCount(CDDASwapChain *this)
{
  __int64 v1; // rcx
  unsigned int v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 3);
  v3 = 0;
  (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v1 + 120LL))(v1, &v3);
  return v3;
}
