void __fastcall DXGPROCESS_ADAPTER_INFO_PASID_DATA::Deallocate(DXGPROCESS_ADAPTER_INFO_PASID_DATA *this)
{
  unsigned int v2; // ecx
  __int64 i; // rdi
  __int64 v4; // rdx
  DXGPROCESS_ADAPTER_INFO_PASID_DATA *v5; // rcx

  if ( (unsigned int)Feature_DxgkGpuVaIoMmu__private_IsEnabledDeviceUsage() && *((_QWORD *)this + 4) )
  {
    v2 = *((_DWORD *)this + 4);
    for ( i = 0LL; (unsigned int)i < v2; i = (unsigned int)(i + 1) )
    {
      if ( *(_QWORD *)(*((_QWORD *)this + 4) + 8 * i) )
      {
        if ( SmmUseIommuV3Interface() )
          ((void (*)(void))qword_1C013BCC8)();
        SysMmDestroyPasidDevice(*(struct _IOMMU_DMA_PASID_DEVICE **)(*((_QWORD *)this + 4) + 8 * i));
        *(_QWORD *)(*((_QWORD *)this + 4) + 8 * i) = 0LL;
      }
      v2 = *((_DWORD *)this + 4);
    }
    if ( *((_QWORD *)this + 5) )
    {
      if ( SmmUseIommuV3Interface() )
      {
        ((void (__fastcall *)(__int64))qword_1C013BC08)(v4);
        v2 = *((_DWORD *)this + 4);
      }
      *((_QWORD *)this + 5) = 0LL;
    }
    if ( v2 > 1 )
    {
      operator delete(*((void **)this + 4));
      *((_QWORD *)this + 4) = 0LL;
    }
  }
  v5 = (DXGPROCESS_ADAPTER_INFO_PASID_DATA *)*((_QWORD *)this + 3);
  if ( v5 )
  {
    if ( v5 != this )
    {
      operator delete(v5);
      *((_QWORD *)this + 3) = 0LL;
    }
  }
}
