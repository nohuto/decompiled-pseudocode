/*
 * XREFs of ?GetPresentCount@CLegacyRemotingSwapChain@@UEBAIXZ @ 0x18010A820
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CLegacyRemotingSwapChain::GetPresentCount(CLegacyRemotingSwapChain *this)
{
  int v1; // eax
  unsigned int v2; // ecx
  unsigned int v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 14) + 32LL))(
         *((_QWORD *)this + 14),
         &v4);
  v2 = 0;
  if ( v1 >= 0 )
    return v4;
  return v2;
}
