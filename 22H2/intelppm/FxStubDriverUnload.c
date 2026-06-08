/*
 * XREFs of FxStubDriverUnload @ 0x1C0007EA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00047F0 (_guard_dispatch_icall_nop.c)
 *     ?FxStubDriverUnloadCommon@@YAXXZ @ 0x1C0007E5C (-FxStubDriverUnloadCommon@@YAXXZ.c)
 */

void __fastcall FxStubDriverUnload(struct _WDF_BIND_INFO *a1)
{
  if ( qword_1C001CC38 && qword_1C001CC38 != FxStubDriverUnload )
    qword_1C001CC38();
  FxStubDriverUnloadCommon(a1);
}
