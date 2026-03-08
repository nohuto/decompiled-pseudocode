/*
 * XREFs of ?OnResetEvent@CGlobalMit@@CAJPEAXK0@Z @ 0x1801019F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CGlobalMit::OnResetEvent(void *a1, __int64 a2, void *a3)
{
  (*(void (__fastcall **)(struct IMessageSession *, __int64, void *))(*(_QWORD *)CMit::s_pMessageSession + 240LL))(
    CMit::s_pMessageSession,
    a2,
    a3);
  return 0LL;
}
