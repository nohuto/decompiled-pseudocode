__int64 __fastcall PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::GetDataType(
        __int64 a1,
        __int64 a2)
{
  unsigned int Count; // eax
  unsigned int v3; // r8d

  if ( (unsigned int)a2 >= *(_DWORD *)(a1 + 8) )
  {
    Count = CDynamicArray<PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::PropertyInfo,2003858261>::GetCount(
              a1,
              a2,
              (unsigned int)a2);
    KeBugCheckEx(0x164u, 0x1EuLL, 0xFFFFFFFF80070057uLL, v3, Count);
  }
  return *(unsigned int *)(*(_QWORD *)a1 + 8LL * (unsigned int)a2);
}
