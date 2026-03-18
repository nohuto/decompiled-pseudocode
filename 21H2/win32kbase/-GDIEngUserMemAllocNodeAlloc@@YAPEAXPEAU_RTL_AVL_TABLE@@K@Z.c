/*
 * XREFs of ?GDIEngUserMemAllocNodeAlloc@@YAPEAXPEAU_RTL_AVL_TABLE@@K@Z @ 0x1C00ADB00
 * Callers:
 *     <none>
 * Callees:
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C002FC74 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 */

PVOID __fastcall GDIEngUserMemAllocNodeAlloc(struct _RTL_AVL_TABLE *Table, CLONG ByteSize)
{
  PVOID result; // rax

  result = 0LL;
  if ( ByteSize )
    return (PVOID)NSInstrumentation::CLeakTrackingAllocator::Allocate(
                    (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
                    260LL,
                    ByteSize,
                    1634555207);
  return result;
}
