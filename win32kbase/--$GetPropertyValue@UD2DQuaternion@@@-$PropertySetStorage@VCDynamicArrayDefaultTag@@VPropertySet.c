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
