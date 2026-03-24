/*
 * XREFs of ?OnResetEvent@CMit@@KAJPEAXK0@Z @ 0x1800DE630
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMit::OnResetEvent(void *a1, __int64 a2, void *a3)
{
  (*(void (__fastcall **)(struct IMessageSession *, __int64, void *))(*(_QWORD *)CMit::s_pMessageSession + 224LL))(
    CMit::s_pMessageSession,
    a2,
    a3);
  return 0LL;
}
