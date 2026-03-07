__int64 __fastcall PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::SetMarshalStatus(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  unsigned int Count; // eax
  ULONG_PTR v4; // r9
  __int64 v5; // rcx
  __int64 result; // rax

  if ( (unsigned int)a2 >= *((_DWORD *)a1 + 2) )
  {
    Count = CDynamicArray<PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::PropertyInfo,2003858261>::GetCount(
              a1,
              a2,
              a3);
    KeBugCheckEx(0x164u, 0x1EuLL, 0xFFFFFFFF80070057uLL, v4, Count);
  }
  v5 = *a1;
  result = ((_DWORD)a3 << 29) | *(_DWORD *)(v5 + 8LL * (unsigned int)a2 + 4) & 0x1FFFFFFFu;
  *(_DWORD *)(v5 + 8LL * (unsigned int)a2 + 4) = result;
  return result;
}
