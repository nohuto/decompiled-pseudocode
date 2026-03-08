/*
 * XREFs of ?GDIEngUserMemAllocNodeAlloc@@YAPEAXPEAU_RTL_AVL_TABLE@@K@Z @ 0x1C01967A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0062994 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 */

PVOID __fastcall GDIEngUserMemAllocNodeAlloc(struct _RTL_AVL_TABLE *Table, CLONG ByteSize)
{
  PVOID result; // rax

  result = 0LL;
  if ( ByteSize )
    return (PVOID)NSInstrumentation::CLeakTrackingAllocator::Allocate(
                    gpLeakTrackingAllocator,
                    260LL,
                    ByteSize,
                    0x616D5547u);
  return result;
}
