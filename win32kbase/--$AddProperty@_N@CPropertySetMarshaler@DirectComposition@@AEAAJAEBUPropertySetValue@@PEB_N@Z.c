__int64 __fastcall DirectComposition::CPropertySetMarshaler::AddProperty<bool>(__int64 a1, _DWORD *a2, _BYTE *a3)
{
  __int64 v3; // rbx
  unsigned int v4; // edi
  __int64 v5; // r14
  unsigned int v7; // esi
  int LocalOffset; // eax
  int v11; // [rsp+50h] [rbp+8h] BYREF
  int v12; // [rsp+54h] [rbp+Ch]

  v3 = a1 + 72;
  v4 = 0;
  v5 = *(unsigned int *)(a1 + 96);
  v7 = *(_DWORD *)(a1 + 80);
  if ( (v5 & 0xE0000000) != 0 )
    return (unsigned int)-1073741684;
  v11 = a2[2];
  v12 = v5 & 0x1FFFFFFF;
  if ( (int)CDynamicArray<PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::PropertyInfo,2003858261>::Add(
              a1 + 72,
              &v11) < 0 )
    return (unsigned int)-1073741684;
  if ( (int)CDynamicArray<unsigned char,2003858261>::Grow(v3 + 16, 1u) < 0 )
  {
    CDynamicArray<PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::PropertyInfo,2003858261>::RemoveAt(
      v3,
      v7);
    return (unsigned int)-1073741684;
  }
  ++*(_DWORD *)(v3 + 24);
  *(_BYTE *)(v5 + *(_QWORD *)(v3 + 16)) = *a3;
  LocalOffset = PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::GetLocalOffset(v3, v7);
  if ( v7 == *a2 && LocalOffset == a2[1] )
  {
    PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::SetMarshalStatus((__int64 *)v3, v7, 1LL);
  }
  else
  {
    v4 = -1073741811;
    PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::RemoveLastProperty<bool>(v3);
  }
  return v4;
}
