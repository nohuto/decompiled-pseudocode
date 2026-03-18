/*
 * XREFs of ??$AddProperty@_N@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEB_N@Z @ 0x1C022B8D0
 * Callers:
 *     ?SetBufferProperty@CPropertySetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C00107A0 (-SetBufferProperty@CPropertySetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX.c)
 * Callees:
 *     ?SetMarshalStatus@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAAXIW4MarshalStatus@@@Z @ 0x1C0010C48 (-SetMarshalStatus@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator.c)
 *     ?GetLocalOffset@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAAII@Z @ 0x1C0011E98 (-GetLocalOffset@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@.c)
 *     ??$AddProperty@_N@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEB_NPEAI@Z @ 0x1C022B820 (--$AddProperty@_N@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator.c)
 *     ??$RemoveLastProperty@_N@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAAXXZ @ 0x1C022BD6C (--$RemoveLastProperty@_N@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAl.c)
 */

__int64 __fastcall DirectComposition::CPropertySetMarshaler::AddProperty<bool>(__int64 a1, __int64 a2, char *a3)
{
  __int64 *v3; // rdi
  int v5; // edx
  unsigned int v6; // ebx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // esi
  unsigned int v11; // [rsp+30h] [rbp+8h] BYREF

  v3 = (__int64 *)(a1 + 80);
  v5 = *(_DWORD *)(a2 + 8);
  v6 = 0;
  v11 = 0;
  if ( (int)PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::AddProperty<bool>(
              a1 + 80,
              v5,
              a3,
              &v11) >= 0 )
  {
    v9 = v11;
    if ( __PAIR64__(
           PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::GetLocalOffset(
             (__int64)v3,
             v11,
             v7,
             v8),
           v9) == *(_QWORD *)a2 )
    {
      PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::SetMarshalStatus(v3, v9, 1LL);
    }
    else
    {
      v6 = -1073741811;
      PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::RemoveLastProperty<bool>(v3);
    }
  }
  else
  {
    return (unsigned int)-1073741684;
  }
  return v6;
}
