/*
 * XREFs of ?FreeTableData@?$CGenericTableMap@W4IMMERSIVE_COLOR_TYPE@@UColorData@ColorCache@@@@CAXPEAU_RTL_GENERIC_TABLE@@PEAX@Z @ 0x180042870
 * Callers:
 *     wistd::__function::__func__lambda_8cfddf842dd701e76edd4d414fa3e64b__void___cdecl(int_const_&)_::_scalar_deleting_destructor_ @ 0x1800575E0 (wistd--__function--__func__lambda_8cfddf842dd701e76edd4d414fa3e64b__void___cdecl(in_ea_1800575E0.c)
 *     ??_GUnifiedTargetRect@CStoryboard@@QEAAPEAXI@Z @ 0x180057CC4 (--_GUnifiedTargetRect@CStoryboard@@QEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CGenericTableMap<enum IMMERSIVE_COLOR_TYPE,ColorCache::ColorData>::FreeTableData(
        struct _RTL_GENERIC_TABLE *Table,
        PVOID Buffer)
{
  (*(void (__fastcall **)(WPF::HeapBase *, PVOID))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap, Buffer);
}
