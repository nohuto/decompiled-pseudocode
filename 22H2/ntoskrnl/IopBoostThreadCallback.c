/*
 * XREFs of IopBoostThreadCallback @ 0x1403616C0
 * Callers:
 *     <none>
 * Callees:
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1402A8BC0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 */

void __fastcall IopBoostThreadCallback(__int64 a1, PVOID *a2)
{
  (*(void (__fastcall **)(_QWORD, PVOID, PVOID, _QWORD))(a1 + 24))(
    *(_QWORD *)(a1 + 32),
    *a2,
    a2[1],
    *((unsigned int *)a2 + 4));
  ObDereferenceObjectDeferDeleteWithTag(*a2, 0x746C6644u);
  ObDereferenceObjectDeferDeleteWithTag(a2[1], 0x746C6644u);
}
