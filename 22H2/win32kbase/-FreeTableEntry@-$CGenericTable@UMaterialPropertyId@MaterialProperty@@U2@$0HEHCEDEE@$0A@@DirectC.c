/*
 * XREFs of ?FreeTableEntry@?$CGenericTable@UMaterialPropertyId@MaterialProperty@@U2@$0HEHCEDEE@$0A@@DirectComposition@@CAXPEAU_RTL_GENERIC_TABLE@@PEAX@Z @ 0x1C009FDF0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C002C230 (Win32FreePool.c)
 */

void __fastcall DirectComposition::CGenericTable<MaterialProperty::MaterialPropertyId,MaterialProperty,1953645380,0>::FreeTableEntry(
        struct _RTL_GENERIC_TABLE *Table,
        __int64 Buffer)
{
  Win32FreePool(Buffer);
}
