/*
 * XREFs of ?Deallocate@DXGPROCESS_ADAPTER_INFO_PASID_DATA@@QEAAXXZ @ 0x1C01DC380
 * Callers:
 *     ?DestroyAdapterInfo@DXGPROCESS@@QEAAXPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@@Z @ 0x1C0188A74 (-DestroyAdapterInfo@DXGPROCESS@@QEAAXPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@@Z.c)
 *     ?Initialize@DXGPROCESS_RENDER_ADAPTER_INFO@@QEAAJPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z @ 0x1C01B6E2C (-Initialize@DXGPROCESS_RENDER_ADAPTER_INFO@@QEAAJPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     ?SmmUseIommuV3Interface@@YA_NXZ @ 0x1C00205BC (-SmmUseIommuV3Interface@@YA_NXZ.c)
 *     Feature_DxgkGpuVaIoMmu__private_IsEnabledDeviceUsage @ 0x1C0024530 (Feature_DxgkGpuVaIoMmu__private_IsEnabledDeviceUsage.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?SysMmDestroyPasidDevice@@YAJPEAU_IOMMU_DMA_PASID_DEVICE@@@Z @ 0x1C03D1EE0 (-SysMmDestroyPasidDevice@@YAJPEAU_IOMMU_DMA_PASID_DEVICE@@@Z.c)
 */

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
