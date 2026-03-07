__int64 __fastcall CDynamicArray<PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::PropertyInfo,2003858261>::RemoveAt(
        __int64 a1,
        unsigned int a2)
{
  unsigned int v2; // r9d
  __int64 result; // rax
  __int64 v5; // rcx

  v2 = a2;
  result = (unsigned int)(*(_DWORD *)(a1 + 8) - 1);
  *(_DWORD *)(a1 + 8) = result;
  if ( a2 < (unsigned int)result )
  {
    do
    {
      v5 = v2++;
      result = *(_QWORD *)(*(_QWORD *)a1 + 8LL * v2);
      *(_QWORD *)(*(_QWORD *)a1 + 8 * v5) = result;
    }
    while ( v2 < *(_DWORD *)(a1 + 8) );
  }
  return result;
}
