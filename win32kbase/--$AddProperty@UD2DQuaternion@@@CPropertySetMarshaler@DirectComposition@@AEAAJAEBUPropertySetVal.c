/*
 * XREFs of ??$AddProperty@UD2DQuaternion@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEBUD2DQuaternion@@@Z @ 0x1C0263804
 * Callers:
 *     ?SetBufferProperty@CPropertySetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0061F10 (-SetBufferProperty@CPropertySetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX.c)
 * Callees:
 *     ?GetLocalOffset@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAAII@Z @ 0x1C0062410 (-GetLocalOffset@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@.c)
 *     ?SetMarshalStatus@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAAXIW4MarshalStatus@@@Z @ 0x1C006274C (-SetMarshalStatus@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator.c)
 *     ??$AddProperty@UD2DQuaternion@@@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DQuaternion@@PEAI@Z @ 0x1C0263750 (--$AddProperty@UD2DQuaternion@@@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKerne.c)
 *     ??$RemoveLastProperty@UD2DVector4@@@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAAXXZ @ 0x1C0263A98 (--$RemoveLastProperty@UD2DVector4@@@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetK.c)
 */

__int64 __fastcall DirectComposition::CPropertySetMarshaler::AddProperty<D2DQuaternion>(
        __int64 a1,
        _DWORD *a2,
        __int128 *a3)
{
  __int64 *v3; // rdi
  int v5; // edx
  unsigned int v6; // ebx
  unsigned int v7; // esi
  int LocalOffset; // eax
  unsigned int v10; // [rsp+30h] [rbp+8h] BYREF

  v3 = (__int64 *)(a1 + 72);
  v5 = a2[2];
  v6 = 0;
  v10 = 0;
  if ( (int)PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::AddProperty<D2DQuaternion>(
              a1 + 72,
              v5,
              a3,
              &v10) >= 0 )
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
  else
  {
    return (unsigned int)-1073741684;
  }
  return v6;
}
