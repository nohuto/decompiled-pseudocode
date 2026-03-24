/*
 * XREFs of ?ReleaseResourcesNoAddRef@?$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@IEAAXXZ @ 0x18016FE08
 * Callers:
 *     ??1?$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@UEAA@XZ @ 0x18016B548 (--1-$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@UEAA@XZ.c)
 *     ?NotifyInvalidResource@?$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@UEAAXPEBVIDeviceResource@@@Z @ 0x18016F960 (-NotifyInvalidResource@-$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@UEAAXPEBVIDeviceR.c)
 * Callees:
 *     ?RemoveResourceNotifier@CD2DResource@@UEAAXPEBVIDeviceResourceNotify@@@Z @ 0x180048078 (-RemoveResourceNotifier@CD2DResource@@UEAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VCHolographicExclusiveMode@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VCHolographicExclusiveMode@@Uerr_returncode_policy@wil@@@wil@@0AEAV?$allocator@V?$com_ptr_t@VCHolographicExclusiveMode@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x180168DE8 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VCHolographicExclusiveMode@@Uerr_returncode_policy@w.c)
 */

__int64 __fastcall CDeviceResourceTable<CD2DGenericInk,CGenericInk>::ReleaseResourcesNoAddRef(
        struct IDeviceResourceNotify *a1)
{
  CRenderTargetBitmap **v1; // rdi
  CRenderTargetBitmap **v3; // rsi
  __int64 result; // rax

  v1 = (CRenderTargetBitmap **)*((_QWORD *)a1 + 3);
  v3 = (CRenderTargetBitmap **)*((_QWORD *)a1 + 2);
  if ( v3 != v1 )
  {
    do
      CD2DResource::RemoveResourceNotifier((CRenderTargetBitmap *)((char *)*v3++ + 104), a1);
    while ( v3 != v1 );
    v1 = (CRenderTargetBitmap **)*((_QWORD *)a1 + 3);
  }
  std::_Destroy_range<std::allocator<wil::com_ptr_t<CHolographicExclusiveMode,wil::err_returncode_policy>>>(
    *((CRenderTargetBitmap ***)a1 + 2),
    v1);
  result = *((_QWORD *)a1 + 2);
  *((_QWORD *)a1 + 3) = result;
  return result;
}
