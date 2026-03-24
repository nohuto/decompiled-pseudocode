/*
 * XREFs of ??0CManipulation@@IEAA@PEAVCComposition@@@Z @ 0x1801D3BFC
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800A2488 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x180094E70 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     memset_0 @ 0x1800E7F5C (memset_0.c)
 *     ??0ManipulationData@@QEAA@XZ @ 0x1801D3CDC (--0ManipulationData@@QEAA@XZ.c)
 */

CManipulation *__fastcall CManipulation::CManipulation(CManipulation *this, struct CComposition *a2)
{
  CManipulation *result; // rax

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CManipulation::`vftable'{for `CNotificationResource'};
  *((_QWORD *)this + 8) = &CManipulation::`vftable'{for `IManipulationResource'};
  ManipulationData::ManipulationData((CManipulation *)((char *)this + 72));
  ManipulationData::ManipulationData((CManipulation *)((char *)this + 256));
  `vector constructor iterator'(
    (char *)this + 452,
    8LL,
    3LL,
    (void (__fastcall *)(char *))CManipulation::ScrollingConfiguration::ScrollingConfiguration);
  `vector constructor iterator'(
    (char *)this + 480,
    8LL,
    5LL,
    (void (__fastcall *)(char *))wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>);
  *((_QWORD *)this + 65) = 0LL;
  *((_OWORD *)this + 33) = 0LL;
  *((_OWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 70) = 0LL;
  memset_0((char *)this + 568, 0, 0x88uLL);
  *((_DWORD *)this + 176) = 0;
  result = this;
  *((_QWORD *)this + 89) = 0LL;
  return result;
}
