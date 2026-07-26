/*
 * XREFs of ?ndisFilterCancelSendNetBufferListsInternal@@YAXPEAX@Z @ 0x1C0069180
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0040820 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ndisFilterCancelSendNetBufferListsInternal(_QWORD *Parameter)
{
  (*(void (__fastcall **)(_QWORD, _QWORD))(Parameter[1] + 560LL))(*(_QWORD *)(Parameter[1] + 568LL), Parameter[3]);
}
