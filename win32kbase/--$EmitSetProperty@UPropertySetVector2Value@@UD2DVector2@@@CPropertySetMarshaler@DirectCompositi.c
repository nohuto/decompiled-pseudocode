char __fastcall DirectComposition::CPropertySetMarshaler::EmitSetProperty<PropertySetVector2Value,D2DVector2>(
        __int64 a1,
        struct DirectComposition::CBatch **a2,
        unsigned int a3)
{
  char v6; // si
  char *v7; // rdi
  void *v9; // [rsp+48h] [rbp+10h] BYREF

  v6 = 1;
  if ( (unsigned __int64)(4096LL - *(_QWORD *)(*((_QWORD *)*a2 + 17) + 40LL)) < 0x24
    && !DirectComposition::CBatch::AllocateNewFragment(a2, (unsigned __int64 *)&v9) )
  {
    return 0;
  }
  v9 = 0LL;
  DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x24uLL, &v9);
  v7 = (char *)v9;
  *(_DWORD *)v9 = 36;
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
  *(_QWORD *)(v7 + 28) = *(_QWORD *)PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::GetPropertyValue<D2DVector3>(
                                      a1 + 72,
                                      a3);
  PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::SetMarshalStatus(a1 + 72, a3, 0LL);
  return v6;
}
