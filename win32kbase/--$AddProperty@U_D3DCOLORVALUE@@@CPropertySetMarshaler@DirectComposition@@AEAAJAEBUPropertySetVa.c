__int64 __fastcall DirectComposition::CPropertySetMarshaler::AddProperty<_D3DCOLORVALUE>(
        __int64 a1,
        _DWORD *a2,
        __int64 a3)
{
  __int64 *v3; // rdi
  __int64 v5; // rdx
  unsigned int v6; // ebx
  unsigned int v7; // esi
  int LocalOffset; // eax
  unsigned int v10; // [rsp+30h] [rbp+8h] BYREF

  v3 = (__int64 *)(a1 + 72);
  v5 = (unsigned int)a2[2];
  v6 = 0;
  v10 = 0;
  if ( (int)PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::AddProperty<_D3DCOLORVALUE>(
              a1 + 72,
              v5,
              a3,
              &v10) < 0 )
  {
    return (unsigned int)-1073741684;
  }
  else
  {
    v7 = v10;
    LocalOffset = PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::GetLocalOffset(
                    (__int64)v3,
                    v10);
    if ( v7 == *a2 && LocalOffset == a2[1] )
    {
      PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::SetMarshalStatus(v3, v7, 1LL);
    }
    else
    {
      v6 = -1073741811;
      PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::RemoveLastProperty<D2DVector4>(v3);
    }
  }
  return v6;
}
