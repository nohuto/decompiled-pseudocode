/*
 * XREFs of FxStubDriverUnload @ 0x1C0040EE0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxStubDriverUnloadCommon@@YAXXZ @ 0x1C0040DE0 (-FxStubDriverUnloadCommon@@YAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044B40 (_guard_dispatch_icall_nop.c)
 */

void FxStubDriverUnload()
{
  if ( qword_1C006CC48 && qword_1C006CC48 != FxStubDriverUnload )
    qword_1C006CC48();
  FxStubDriverUnloadCommon();
}
