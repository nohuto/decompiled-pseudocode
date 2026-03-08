/*
 * XREFs of DpiMiracastIoCompleteWork @ 0x1C039AFC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 */

void __fastcall DpiMiracastIoCompleteWork(PVOID IoObject, PVOID *Context, PIO_WORKITEM IoWorkItem)
{
  PVOID v3; // rcx
  size_t v6; // r8
  void (__fastcall *v7)(PVOID, PVOID *); // rax

  v3 = Context[6];
  if ( v3 )
  {
    v6 = (size_t)Context[3];
    if ( v6 )
      memmove(v3, Context + 8, v6);
  }
  v7 = (void (__fastcall *)(PVOID, PVOID *))Context[4];
  if ( v7 )
    v7(Context[5], Context + 2);
  ObDereferenceObjectDeferDelete(*Context);
  if ( IoWorkItem )
    IoFreeWorkItem(IoWorkItem);
  ExFreePoolWithTag(Context, 0);
}
