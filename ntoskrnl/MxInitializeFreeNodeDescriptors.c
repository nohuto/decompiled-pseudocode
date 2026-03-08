/*
 * XREFs of MxInitializeFreeNodeDescriptors @ 0x140B37B68
 * Callers:
 *     MiFindLargestLoaderDescriptor @ 0x140B37A44 (MiFindLargestLoaderDescriptor.c)
 * Callees:
 *     MiSearchNumaNodeTable @ 0x140319DD0 (MiSearchNumaNodeTable.c)
 *     MiRestrictRangeToNode @ 0x140370AB4 (MiRestrictRangeToNode.c)
 *     MxPageAlwaysHot @ 0x140B3864C (MxPageAlwaysHot.c)
 *     MiInitializeBootMemoryDescriptor @ 0x140B38670 (MiInitializeBootMemoryDescriptor.c)
 */

__int64 *__fastcall MxInitializeFreeNodeDescriptors(__int64 a1, __int64 a2)
{
  __int64 *result; // rax
  ULONG_PTR v3; // rbp
  ULONG_PTR i; // rbx
  ULONG_PTR v7; // rdi
  __int64 v8; // rdx
  __int64 *v9; // rsi
  __int64 v10; // r14
  __int64 v11; // rcx
  __int64 v12; // rdx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = (__int64 *)&retaddr;
  v3 = *(_QWORD *)(a1 + 40);
  for ( i = *(_QWORD *)(a1 + 32); v3; v3 -= v7 )
  {
    v7 = MiRestrictRangeToNode(i, v3);
    v8 = *((unsigned int *)MiSearchNumaNodeTable(i) + 2);
    v9 = &MxBootFreeDescriptor[5 * v8];
    v10 = 8 * v8;
    if ( v7 >= v9[1] || (result = (__int64 *)(*(_QWORD *)(v10 + a2) + 0x4000LL), v7 >= (unsigned __int64)result) )
    {
      if ( (unsigned int)MxPageAlwaysHot(v7 + i - 1)
        || (v11 = v9[1]) == 0
        || !(unsigned int)MxPageAlwaysHot(*v9 - 1 + v11)
        || (result = (__int64 *)(v9[1] + *v9), (unsigned __int64)result < *(_QWORD *)(v10 + a2) + 0x4000LL) )
      {
        result = (__int64 *)MiInitializeBootMemoryDescriptor(v9, a1, i, v7);
      }
    }
    i += v7;
  }
  if ( KeNumberNodes )
  {
    result = qword_140D82100;
    v12 = (unsigned __int16)KeNumberNodes;
    do
    {
      if ( *result )
        *(_DWORD *)(*result + 24) |= 0x40000000u;
      result += 5;
      --v12;
    }
    while ( v12 );
  }
  return result;
}
