/*
 * XREFs of FxStubDriverUnload @ 0x1C0052990
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 *     ?FxStubDriverUnloadCommon@@YAXXZ @ 0x1C0052950 (-FxStubDriverUnloadCommon@@YAXXZ.c)
 */

void __fastcall FxStubDriverUnload(struct _WDF_BIND_INFO *a1)
{
  if ( qword_1C0064A48 && qword_1C0064A48 != FxStubDriverUnload )
    qword_1C0064A48();
  FxStubDriverUnloadCommon(a1);
}
