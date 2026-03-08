/*
 * XREFs of ??$GetPropertyValue@UD2DQuaternion@@@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAAPEAUD2DQuaternion@@I@Z @ 0x1C0263994
 * Callers:
 *     ??$EmitSetProperty@UPropertySetQuaternionValue@@UD2DQuaternion@@@CPropertySetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@1@I@Z @ 0x1C0263894 (--$EmitSetProperty@UPropertySetQuaternionValue@@UD2DQuaternion@@@CPropertySetMarshaler@DirectCom.c)
 *     ??$UpdateProperty@UD2DQuaternion@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEBUD2DQuaternion@@@Z @ 0x1C0263C50 (--$UpdateProperty@UD2DQuaternion@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySet.c)
 * Callees:
 *     ?GetLocalOffset@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAAII@Z @ 0x1C0062410 (-GetLocalOffset@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@.c)
 *     ?GetCount@?$CDynamicArray@UPropertyInfo@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@$0HHHAHDFF@@@QEBAIXZ @ 0x1C0263E18 (-GetCount@-$CDynamicArray@UPropertyInfo@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VProperty.c)
 */

__int64 __fastcall PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::GetPropertyValue<D2DQuaternion>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  unsigned int Count; // eax
  unsigned int v4; // edx

  if ( (unsigned int)a2 >= *(_DWORD *)(a1 + 8) )
  {
    Count = CDynamicArray<PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::PropertyInfo,2003858261>::GetCount(
              a1,
              a2,
              a3);
    KeBugCheckEx(0x164u, 0x1EuLL, 0xFFFFFFFF80070057uLL, v4, Count);
  }
  return *(_QWORD *)(a1 + 16)
       + (unsigned int)PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::GetLocalOffset(
                         a1,
                         a2);
}
