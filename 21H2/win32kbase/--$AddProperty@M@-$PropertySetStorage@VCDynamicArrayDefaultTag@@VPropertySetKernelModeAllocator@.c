/*
 * XREFs of ??$AddProperty@M@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEBMPEAI@Z @ 0x1C0011EEC
 * Callers:
 *     ??$AddProperty@M@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEBM@Z @ 0x1C00109A4 (--$AddProperty@M@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEBM@Z.c)
 * Callees:
 *     ?Add@?$CDynamicArray@UPropertyInfo@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@$0HHHAHDFF@@@QEAAJAEBUPropertyInfo@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@@Z @ 0x1C0085540 (-Add@-$CDynamicArray@UPropertyInfo@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKe.c)
 *     ?Grow@?$CDynamicArray@E$0HHHAHDFF@@@IEAAJI@Z @ 0x1C008557C (-Grow@-$CDynamicArray@E$0HHHAHDFF@@@IEAAJI@Z.c)
 *     ?RemoveAt@?$CDynamicArray@UPropertyInfo@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@$0HHHAHDFF@@@QEAAXI@Z @ 0x1C00DD5DC (-RemoveAt@-$CDynamicArray@UPropertyInfo@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VProperty.c)
 */

__int64 __fastcall PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::AddProperty<float>(
        __int64 a1,
        int a2,
        int *a3,
        unsigned int *a4)
{
  __int64 v5; // rsi
  unsigned int v7; // edi
  __int64 result; // rax
  unsigned int v10; // r10d
  int v11; // eax
  __int64 v12; // rcx
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
    if ( (int)CDynamicArray<unsigned char,2003858261>::Grow(a1 + 16, 4LL) >= 0 )
    {
      *(_DWORD *)(a1 + 24) += 4;
      v11 = *a3;
      v12 = *(_QWORD *)(a1 + 16);
      *a4 = v7;
      *(_DWORD *)(v5 + v12) = v11;
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
