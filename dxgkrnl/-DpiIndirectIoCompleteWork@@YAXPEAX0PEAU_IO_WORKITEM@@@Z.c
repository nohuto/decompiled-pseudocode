/*
 * XREFs of ?DpiIndirectIoCompleteWork@@YAXPEAX0PEAU_IO_WORKITEM@@@Z @ 0x1C039F9C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 */

void __fastcall DpiIndirectIoCompleteWork(PVOID IoObject, PVOID *Context, PIO_WORKITEM IoWorkItem)
{
  PVOID v3; // rcx
  size_t v6; // r8
  void (__fastcall *v7)(PVOID, PVOID *); // rax

  v3 = Context[5];
  if ( v3 )
  {
    v6 = (size_t)Context[2];
    if ( v6 )
      memmove(v3, Context + 7, v6);
  }
  v7 = (void (__fastcall *)(PVOID, PVOID *))Context[3];
  if ( v7 )
    v7(Context[4], Context + 1);
  ObDereferenceObjectDeferDelete(*Context);
  if ( IoWorkItem )
    IoFreeWorkItem(IoWorkItem);
  ExFreePoolWithTag(Context, 0);
}
