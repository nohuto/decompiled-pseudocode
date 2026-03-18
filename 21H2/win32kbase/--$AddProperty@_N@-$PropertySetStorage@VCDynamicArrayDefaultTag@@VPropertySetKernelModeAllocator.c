/*
 * XREFs of ??$AddProperty@_N@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEB_NPEAI@Z @ 0x1C022B820
 * Callers:
 *     ??$AddProperty@_N@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEB_N@Z @ 0x1C022B8D0 (--$AddProperty@_N@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEB_N@Z.c)
 * Callees:
 *     ?Add@?$CDynamicArray@UPropertyInfo@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@$0HHHAHDFF@@@QEAAJAEBUPropertyInfo@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@@Z @ 0x1C0085540 (-Add@-$CDynamicArray@UPropertyInfo@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKe.c)
 *     ?Grow@?$CDynamicArray@E$0HHHAHDFF@@@IEAAJI@Z @ 0x1C008557C (-Grow@-$CDynamicArray@E$0HHHAHDFF@@@IEAAJI@Z.c)
 *     ?RemoveAt@?$CDynamicArray@UPropertyInfo@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@$0HHHAHDFF@@@QEAAXI@Z @ 0x1C00DD5DC (-RemoveAt@-$CDynamicArray@UPropertyInfo@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VProperty.c)
 */

__int64 __fastcall PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::AddProperty<bool>(
        __int64 a1,
        int a2,
        char *a3,
        unsigned int *a4)
{
  __int64 v5; // rsi
  unsigned int v7; // edi
  __int64 result; // rax
  unsigned int v10; // r10d
  char v11; // al
  __int64 v12; // rcx
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  *a4 = -1;
  v5 = *(unsigned int *)(a1 + 24);
  v7 = *(_DWORD *)(a1 + 8);
  if ( (v5 & 0xE0000000) != 0 )
    return 2147483659LL;
  LODWORD(v13) = a2;
  HIDWORD(v13) = v5 & 0x1FFFFFFF;
  result = CDynamicArray<PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::PropertyInfo,2003858261>::Add(
             a1,
             &v13);
  if ( (int)result >= 0 )
  {
    if ( (int)CDynamicArray<unsigned char,2003858261>::Grow(a1 + 16, 1u) >= 0 )
    {
      ++*(_DWORD *)(a1 + 24);
      v11 = *a3;
      v12 = *(_QWORD *)(a1 + 16);
      *a4 = v7;
      *(_BYTE *)(v5 + v12) = v11;
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
