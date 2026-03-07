char __fastcall DirectComposition::CPropertySetMarshaler::EmitSetProperty<PropertySetMatrix3x2Value,D2D_MATRIX_3X2_F>(
        __int64 a1,
        struct DirectComposition::CBatch ***a2,
        unsigned int a3)
{
  char v6; // si
  char *v7; // rdi
  __int64 Property; // rax
  void *v10; // [rsp+48h] [rbp+10h] BYREF

  v6 = 1;
  if ( (unsigned __int64)(4096LL - *((_QWORD *)(*a2)[17] + 5)) < 0x34
    && !DirectComposition::CBatch::AllocateNewFragment(a2, (unsigned __int64 *)&v10) )
  {
    return 0;
  }
  v10 = 0LL;
  DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x34uLL, &v10);
  v7 = (char *)v10;
  *(_DWORD *)v10 = 52;
  *(_OWORD *)(v7 + 4) = 0LL;
  *(_QWORD *)(v7 + 20) = 0LL;
  *((_DWORD *)v7 + 1) = 309;
  *((_DWORD *)v7 + 2) = *(_DWORD *)(a1 + 32);
  *((_DWORD *)v7 + 3) = a3;
  *((_DWORD *)v7 + 4) = PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::GetLocalOffset(
                          a1 + 72,
                          a3);
  *((_DWORD *)v7 + 5) = PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::GetDataType(
                          a1 + 72,
                          a3);
  v7[24] = (unsigned int)PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::GetMarshalStatus(
                           a1 + 72,
                           a3) == 1;
  Property = PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::GetPropertyValue<D2DVector3>(
               a1 + 72,
               a3);
  *(_OWORD *)(v7 + 28) = *(_OWORD *)Property;
  *(_QWORD *)(v7 + 44) = *(_QWORD *)(Property + 16);
  PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::SetMarshalStatus(
    (__int64 *)(a1 + 72),
    a3,
    0LL);
  return v6;
}
