/*
 * XREFs of ??$AddProperty@UD2DVector4@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEBUD2DVector4@@@Z @ 0x1C022B790
 * Callers:
 *     ?SetBufferProperty@CPropertySetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C00107A0 (-SetBufferProperty@CPropertySetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX.c)
 * Callees:
 *     ??$AddProperty@UD2DQuaternion@@@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DQuaternion@@PEAI@Z @ 0x1C000E9D0 (--$AddProperty@UD2DQuaternion@@@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKerne.c)
 *     ?SetMarshalStatus@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAAXIW4MarshalStatus@@@Z @ 0x1C0010C48 (-SetMarshalStatus@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator.c)
 *     ?GetLocalOffset@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAAII@Z @ 0x1C0011E98 (-GetLocalOffset@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@.c)
 *     ??$RemoveLastProperty@UD2DVector4@@@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAAXXZ @ 0x1C022BC0C (--$RemoveLastProperty@UD2DVector4@@@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetK.c)
 */

__int64 __fastcall DirectComposition::CPropertySetMarshaler::AddProperty<D2DVector4>(
        __int64 a1,
        _DWORD *a2,
        __int128 *a3)
{
  __int64 *v3; // rdi
  int v5; // edx
  unsigned int v6; // ebx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // esi
  int LocalOffset; // eax
  unsigned int v12; // [rsp+30h] [rbp+8h] BYREF

  v3 = (__int64 *)(a1 + 80);
  v5 = a2[2];
  v6 = 0;
  v12 = 0;
  if ( (int)PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::AddProperty<D2DQuaternion>(
              a1 + 80,
              v5,
              a3,
              &v12) >= 0 )
  {
    v9 = v12;
    LocalOffset = PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::GetLocalOffset(
                    (__int64)v3,
                    v12,
                    v7,
                    v8);
    if ( v9 == *a2 && LocalOffset == a2[1] )
    {
      PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::SetMarshalStatus(v3, v9, 1LL);
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
