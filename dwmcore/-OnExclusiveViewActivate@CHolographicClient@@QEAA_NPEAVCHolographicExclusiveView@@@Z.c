/*
 * XREFs of ?OnExclusiveViewActivate@CHolographicClient@@QEAA_NPEAVCHolographicExclusiveView@@@Z @ 0x1802A9934
 * Callers:
 *     ?ActivateView@CHolographicExclusiveView@@QEAA_NPEAVCHolographicClient@@@Z @ 0x1802A4DB4 (-ActivateView@CHolographicExclusiveView@@QEAA_NPEAVCHolographicClient@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CHolographicClient::OnExclusiveViewActivate(
        CHolographicClient *this,
        struct CHolographicExclusiveView *a2)
{
  __int64 *v2; // rcx
  __int64 v3; // rax

  v2 = (__int64 *)*((_QWORD *)this + 3);
  v3 = *v2;
  if ( a2 )
    return (*(__int64 (__fastcall **)(__int64 *, _QWORD, char *, _QWORD, _DWORD))(v3 + 120))(
             v2,
             *((unsigned int *)a2 + 38),
             (char *)a2 + 160,
             *((unsigned int *)a2 + 19),
             *((_DWORD *)a2 + 18));
  else
    return (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD, _DWORD))(v3 + 120))(v2, 0LL, 0LL, 0LL, 0);
}
