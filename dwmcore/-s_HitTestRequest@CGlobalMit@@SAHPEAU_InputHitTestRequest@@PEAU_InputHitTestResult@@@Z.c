/*
 * XREFs of ?s_HitTestRequest@CGlobalMit@@SAHPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@@Z @ 0x1800F3570
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

_BOOL8 __fastcall CGlobalMit::s_HitTestRequest(struct _InputHitTestRequest *a1, struct _InputHitTestResult *a2)
{
  return (*(int (__fastcall **)(struct ISystemInputHost *, struct _InputHitTestRequest *, struct _InputHitTestResult *))(*(_QWORD *)CMit::s_pSystemInputHost + 24LL))(
           CMit::s_pSystemInputHost,
           a1,
           a2) >= 0;
}
