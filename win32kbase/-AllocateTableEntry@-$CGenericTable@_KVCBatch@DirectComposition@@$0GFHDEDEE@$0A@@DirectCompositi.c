/*
 * XREFs of ?AllocateTableEntry@?$CGenericTable@_KVCBatch@DirectComposition@@$0GFHDEDEE@$0A@@DirectComposition@@CAPEAXPEAU_RTL_GENERIC_TABLE@@K@Z @ 0x1C00B9420
 * Callers:
 *     <none>
 * Callees:
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0062994 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 */

__int64 __fastcall DirectComposition::CGenericTable<unsigned __int64,DirectComposition::CBatch,1702052676,0>::AllocateTableEntry(
        struct _RTL_GENERIC_TABLE *Table,
        CLONG ByteSize)
{
  return NSInstrumentation::CLeakTrackingAllocator::Allocate(gpLeakTrackingAllocator, 260LL, ByteSize, 0x65734344u);
}
