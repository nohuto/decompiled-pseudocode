__int64 __fastcall DirectComposition::CPropertySetMarshaler::UpdateProperty<D2DQuaternion>(
        __int64 a1,
        unsigned int *a2,
        _OWORD *a3)
{
  unsigned int v4; // esi
  __int64 v5; // rdx
  __int64 *v7; // rdi
  __int64 v8; // r8
  _OWORD *Property; // rax
  __int64 v10; // rdx

  v4 = 0;
  v5 = *a2;
  if ( (unsigned int)v5 < *(_DWORD *)(a1 + 80)
    && (v7 = (__int64 *)(a1 + 72),
        a2[1] == (unsigned int)PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::GetLocalOffset(
                                 a1 + 72,
                                 v5))
    && a2[2] == (unsigned int)PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::GetDataType(
                                (__int64)v7,
                                *a2) )
  {
    Property = (_OWORD *)PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::GetPropertyValue<D2DQuaternion>(
                           (__int64)v7,
                           *a2,
                           v8);
    v10 = *a2;
    *Property = *a3;
    if ( (unsigned int)PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::GetMarshalStatus(
                         (__int64)v7,
                         v10) != 1 )
      PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::SetMarshalStatus(v7, *a2, 2LL);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
