/*
 * XREFs of ??$RemoveLastProperty@M@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAAXXZ @ 0x1C02639E8
 * Callers:
 *     ??$AddProperty@M@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEBM@Z @ 0x1C00621A4 (--$AddProperty@M@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEBM@Z.c)
 * Callees:
 *     ?GetCount@?$CDynamicArray@UPropertyInfo@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@$0HHHAHDFF@@@QEBAIXZ @ 0x1C0263E18 (-GetCount@-$CDynamicArray@UPropertyInfo@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VProperty.c)
 */

__int64 __fastcall PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::RemoveLastProperty<float>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  int v3; // eax
  __int64 result; // rax
  unsigned int Count; // eax

  v3 = *(_DWORD *)(a1 + 8);
  if ( !v3 || (a2 = *(unsigned int *)(a1 + 24), (unsigned int)a2 < 4) )
  {
    Count = CDynamicArray<PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::PropertyInfo,2003858261>::GetCount(
              a1,
              a2,
              a3);
    KeBugCheckEx(0x164u, 0x1EuLL, 0xFFFFFFFF8000FFFFuLL, 0LL, Count);
  }
  *(_DWORD *)(a1 + 8) = v3 - 1;
  result = (unsigned int)(a2 - 4);
  *(_DWORD *)(a1 + 24) = result;
  return result;
}
