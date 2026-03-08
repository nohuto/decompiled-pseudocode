/*
 * XREFs of FxStubDriverUnload @ 0x1C0040FF0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxStubDriverUnloadCommon@@YAXXZ @ 0x1C0040EF0 (-FxStubDriverUnloadCommon@@YAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

void FxStubDriverUnload()
{
  if ( qword_1C006DC28 && qword_1C006DC28 != FxStubDriverUnload )
    qword_1C006DC28();
  FxStubDriverUnloadCommon();
}
