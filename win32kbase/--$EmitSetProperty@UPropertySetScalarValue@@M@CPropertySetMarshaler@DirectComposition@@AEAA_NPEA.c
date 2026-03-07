char __fastcall DirectComposition::CPropertySetMarshaler::EmitSetProperty<PropertySetScalarValue,float>(
        __int64 a1,
        struct DirectComposition::CBatch ***a2,
        unsigned int a3)
{
  char *v3; // rdi
  char v7; // bp
  struct DirectComposition::CBatch **v8; // rcx
  struct DirectComposition::CBatch *v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  char *v12; // r9
  void *v14; // [rsp+48h] [rbp+10h] BYREF

  v3 = 0LL;
  v7 = 1;
  if ( (unsigned __int64)(4096LL - *((_QWORD *)(*a2)[17] + 5)) < 0x20
    && !DirectComposition::CBatch::AllocateNewFragment(a2, (unsigned __int64 *)&v14) )
  {
    return 0;
  }
  v8 = *a2;
  v14 = 0LL;
  v9 = v8[17];
  v10 = *((_QWORD *)v9 + 5);
  if ( (unsigned __int64)(4096 - v10) >= 0x20
    && (v11 = *((_QWORD *)v9 + 7), *((_QWORD *)v9 + 5) = v10 + 32, (v12 = (char *)(v10 + v11)) != 0LL) )
  {
    v8[19] = (struct DirectComposition::CBatch *)((char *)v8[19] + 32);
    v3 = v12;
  }
  else if ( DirectComposition::CBatch::AllocateNewFragment(a2, 0LL) )
  {
    if ( !DirectComposition::CBatch::GetPayloadWritePointer(*a2, 0x20uLL, &v14) )
      KeBugCheck(0xC000000D);
    v3 = (char *)v14;
  }
  *(_DWORD *)v3 = 32;
  *(_OWORD *)(v3 + 4) = 0LL;
  *(_QWORD *)(v3 + 20) = 0LL;
  *((_DWORD *)v3 + 1) = 309;
  *((_DWORD *)v3 + 2) = *(_DWORD *)(a1 + 32);
  *((_DWORD *)v3 + 3) = a3;
  *((_DWORD *)v3 + 4) = PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::GetLocalOffset(
                          a1 + 72,
                          a3);
  *((_DWORD *)v3 + 5) = PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::GetDataType(
                          a1 + 72,
                          a3);
  v3[24] = (unsigned int)PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::GetMarshalStatus(
                           a1 + 72,
                           a3) == 1;
  *((_DWORD *)v3 + 7) = *(_DWORD *)PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::GetPropertyValue<D2DVector3>(
                                     a1 + 72,
                                     a3);
  PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::SetMarshalStatus(a1 + 72, a3, 0LL);
  return v7;
}
