/*
 * XREFs of ??$UpdateProperty@UD2DVector4@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEBUD2DVector4@@@Z @ 0x1C000BA30
 * Callers:
 *     ?SetBufferProperty@CPropertySetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0061F10 (-SetBufferProperty@CPropertySetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX.c)
 * Callees:
 *     ??$GetPropertyValue@UD2DVector3@@@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAAPEAUD2DVector3@@I@Z @ 0x1C00623BC (--$GetPropertyValue@UD2DVector3@@@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKer.c)
 *     ?GetLocalOffset@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAAII@Z @ 0x1C0062410 (-GetLocalOffset@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@.c)
 *     ?GetMarshalStatus@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAA?AW4MarshalStatus@@I@Z @ 0x1C00626B0 (-GetMarshalStatus@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator.c)
 *     ?GetDataType@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAA?AW4DCOMPOSITION_EXPRESSION_TYPE@@I@Z @ 0x1C0062700 (-GetDataType@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@Q.c)
 *     ?SetMarshalStatus@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAAXIW4MarshalStatus@@@Z @ 0x1C006274C (-SetMarshalStatus@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator.c)
 */

__int64 __fastcall DirectComposition::CPropertySetMarshaler::UpdateProperty<D2DVector4>(
        __int64 a1,
        unsigned int *a2,
        _OWORD *a3)
{
  unsigned int v4; // esi
  __int64 v5; // rdx
  __int64 v7; // rdi
  _OWORD *Property; // rax
  __int64 v9; // rdx

  v4 = 0;
  v5 = *a2;
  if ( (unsigned int)v5 < *(_DWORD *)(a1 + 80)
    && (v7 = a1 + 72,
        a2[1] == (unsigned int)PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::GetLocalOffset(
                                 a1 + 72,
                                 v5))
    && a2[2] == (unsigned int)PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::GetDataType(
                                v7,
                                *a2) )
  {
    Property = (_OWORD *)PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::GetPropertyValue<D2DVector3>(
                           v7,
                           *a2);
    v9 = *a2;
    *Property = *a3;
    if ( (unsigned int)PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::GetMarshalStatus(
                         v7,
                         v9) != 1 )
      PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::SetMarshalStatus(v7, *a2, 2LL);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
