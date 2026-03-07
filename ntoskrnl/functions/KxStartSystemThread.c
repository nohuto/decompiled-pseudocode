void __noreturn KxStartSystemThread()
{
  void *retaddr; // [rsp+0h] [rbp+0h]
  __int64 v1; // [rsp+8h] [rbp+8h]
  void (__fastcall *v2)(__int64, void *); // [rsp+10h] [rbp+10h]

  if ( (_BYTE)KeSmapEnabled )
    __asm { stac }
  __writecr8(KeGetCurrentThread()->WaitIrql);
  v2(v1, retaddr);
  KeBugCheck(0xEu);
}
