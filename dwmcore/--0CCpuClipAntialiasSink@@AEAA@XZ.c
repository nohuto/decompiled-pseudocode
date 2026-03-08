/*
 * XREFs of ??0CCpuClipAntialiasSink@@AEAA@XZ @ 0x1800B1230
 * Callers:
 *     ?Create@CCpuClipAntialiasSink@@SAJGPEBV?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@PEBVCShape@@AEBVCMILMatrix@@PEAPEAV1@@Z @ 0x1800B1130 (-Create@CCpuClipAntialiasSink@@SAJGPEBV-$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialia.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x18003A2A4 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180085FF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0DA@@std@@YA_K_K@Z @ 0x1800B1E44 (--$_Get_size_of_n@$0DA@@std@@YA_K_K@Z.c)
 */

CCpuClipAntialiasSink *__fastcall CCpuClipAntialiasSink::CCpuClipAntialiasSink(CCpuClipAntialiasSink *this)
{
  SIZE_T size_of; // rax
  __int64 v3; // rax
  CCpuClipAntialiasSink *result; // rax

  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &CCpuClipAntialiasSink::`vftable';
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  size_of = std::_Get_size_of_n<48>(1LL);
  v3 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *(_QWORD *)v3 = v3;
  *(_QWORD *)(v3 + 8) = v3;
  *(_QWORD *)(v3 + 16) = v3;
  *(_WORD *)(v3 + 24) = 257;
  *((_QWORD *)this + 2) = v3;
  *((_QWORD *)this + 4) = 0LL;
  `vector constructor iterator'(
    (char *)this + 40,
    8LL,
    2LL,
    (void (__fastcall *)(char *))wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>);
  result = this;
  *((_BYTE *)this + 56) = 0;
  return result;
}
