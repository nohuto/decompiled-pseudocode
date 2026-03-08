/*
 * XREFs of ?FreeTableEntry@?$CGenericTable@UMaterialPropertyId@MaterialProperty@@U2@$0HEHCEDEE@$0A@@DirectComposition@@CAXPEAU_RTL_GENERIC_TABLE@@PEAX@Z @ 0x1C00B1480
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall DirectComposition::CGenericTable<MaterialProperty::MaterialPropertyId,MaterialProperty,1953645380,0>::FreeTableEntry(
        struct _RTL_GENERIC_TABLE *Table,
        char *Buffer)
{
  if ( Buffer )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, Buffer);
}
