/*
 * XREFs of ??1?$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@@@UEAA@XZ @ 0x18001FD68
 * Callers:
 *     ??_GCLinkedShader@@UEAAPEAXI@Z @ 0x18001FD20 (--_GCLinkedShader@@UEAAPEAXI@Z.c)
 *     ??_G?$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@@@UEAAPEAXI@Z @ 0x1801F92D0 (--_G-$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C8C9C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?ReleaseResourcesNoAddRef@?$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@@@IEAAXXZ @ 0x1800DB67C (-ReleaseResourcesNoAddRef@-$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@@@IEAAXXZ.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@0AEAV?$allocator@V?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x1800DB6E4 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@.c)
 */

__int64 __fastcall CDeviceResourceTable<CD3DPixelShader,CLinkedShader>::~CDeviceResourceTable<CD3DPixelShader,CLinkedShader>(
        __int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdi

  *(_QWORD *)a1 = &CDeviceResourceTable<CD3DPixelShader,CLinkedShader>::`vftable';
  result = CDeviceResourceTable<CD3DPixelShader,CLinkedShader>::ReleaseResourcesNoAddRef((struct IDeviceResourceNotify *)a1);
  v3 = *(_QWORD *)(a1 + 16);
  if ( v3 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<CD3DPixelShader,wil::err_returncode_policy>>>(
      *(_QWORD *)(a1 + 16),
      *(_QWORD *)(a1 + 24));
    result = std::_Deallocate<16,0>(v3, (*(_QWORD *)(a1 + 32) - v3) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_QWORD *)(a1 + 32) = 0LL;
  }
  return result;
}
