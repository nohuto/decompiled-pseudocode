/*
 * XREFs of ?FindById@?$IndexedSet@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@I@Z @ 0x1C0015A90
 * Callers:
 *     ??0DMMVIDPNTARGET@@IEAA@AEBV0@@Z @ 0x1C0008090 (--0DMMVIDPNTARGET@@IEAA@AEBV0@@Z.c)
 *     BmlGetNextBestTargetMode @ 0x1C016E26C (BmlGetNextBestTargetMode.c)
 *     ?VirtualRefreshRateSupport@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@IPEBU_D3DDDI_RATIONAL@@I@Z @ 0x1C03B1C30 (-VirtualRefreshRateSupport@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTAR.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IndexedSet<DMMVIDPNTARGETMODE>::FindById(__int64 a1, int a2)
{
  __int64 v2; // r8
  __int64 v3; // rax
  __int64 result; // rax
  __int64 v5; // rcx

  v2 = a1 + 24;
  v3 = *(_QWORD *)(a1 + 24);
  if ( v3 == a1 + 24 )
    return 0LL;
  result = v3 - 8;
  while ( result )
  {
    if ( *(_DWORD *)(result + 24) == a2 )
      break;
    v5 = *(_QWORD *)(result + 8);
    result = v5 - 8;
    if ( v5 == v2 )
      result = 0LL;
  }
  return result;
}
