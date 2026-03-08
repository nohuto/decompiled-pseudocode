/*
 * XREFs of ?GetPresentCount@CCompSwapChain@@UEBAIXZ @ 0x18029AE50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompSwapChain::GetPresentCount(CCompSwapChain *this)
{
  __int64 v1; // rcx
  unsigned int v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 10);
  v3 = 0;
  (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v1 + 136LL))(v1, &v3);
  return v3;
}
