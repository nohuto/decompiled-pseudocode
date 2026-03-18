/*
 * XREFs of ??$AddProperty@UD2DQuaternion@@@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DQuaternion@@PEAI@Z @ 0x1C000E9D0
 * Callers:
 *     ??$AddProperty@U_D3DCOLORVALUE@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEBU_D3DCOLORVALUE@@@Z @ 0x1C000EA84 (--$AddProperty@U_D3DCOLORVALUE@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetVa.c)
 *     ??$AddProperty@UD2DVector4@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEBUD2DVector4@@@Z @ 0x1C022B790 (--$AddProperty@UD2DVector4@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@.c)
 * Callees:
 *     ?Add@?$CDynamicArray@UPropertyInfo@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@$0HHHAHDFF@@@QEAAJAEBUPropertyInfo@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@@Z @ 0x1C0085540 (-Add@-$CDynamicArray@UPropertyInfo@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKe.c)
 *     ?Grow@?$CDynamicArray@E$0HHHAHDFF@@@IEAAJI@Z @ 0x1C008557C (-Grow@-$CDynamicArray@E$0HHHAHDFF@@@IEAAJI@Z.c)
 *     ?RemoveAt@?$CDynamicArray@UPropertyInfo@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@$0HHHAHDFF@@@QEAAXI@Z @ 0x1C00DD5DC (-RemoveAt@-$CDynamicArray@UPropertyInfo@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VProperty.c)
 */

__int64 __fastcall PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::AddProperty<D2DQuaternion>(
        __int64 a1,
        int a2,
        __int128 *a3,
        unsigned int *a4)
{
  __int64 v5; // rsi
  unsigned int v7; // edi
  __int64 result; // rax
  unsigned int v10; // r10d
  __int64 v11; // rax
  __int128 v12; // xmm0
  int v13; // [rsp+40h] [rbp+8h] BYREF
  int v14; // [rsp+44h] [rbp+Ch]

  *a4 = -1;
  v5 = *(unsigned int *)(a1 + 24);
  v7 = *(_DWORD *)(a1 + 8);
  if ( (v5 & 0xE0000000) != 0 )
    return 2147483659LL;
  v13 = a2;
  v14 = v5 & 0x1FFFFFFF;
  result = CDynamicArray<PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::PropertyInfo,2003858261>::Add(
             a1,
             &v13);
  if ( (int)result >= 0 )
  {
    if ( (int)CDynamicArray<unsigned char,2003858261>::Grow(a1 + 16, 16LL) >= 0 )
    {
      *(_DWORD *)(a1 + 24) += 16;
      v11 = *(_QWORD *)(a1 + 16);
      v12 = *a3;
      *a4 = v7;
      *(_OWORD *)(v5 + v11) = v12;
      return 0LL;
    }
    else
    {
      CDynamicArray<PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::PropertyInfo,2003858261>::RemoveAt(
        a1,
        v7);
      return v10;
    }
  }
  return result;
}
