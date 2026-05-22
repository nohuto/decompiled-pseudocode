/*
 * XREFs of ?GetInstance@MPCHeadUpdateListener@@SAPEAV1@XZ @ 0x18008D794
 * Callers:
 *     ??0SpectrumListener@@QEAA@PEAVMPCRawInputProvider@@@Z @ 0x18008B648 (--0SpectrumListener@@QEAA@PEAVMPCRawInputProvider@@@Z.c)
 *     ?Unregister@SpectrumListener@@QEAAXXZ @ 0x18008BDEC (-Unregister@SpectrumListener@@QEAAXXZ.c)
 *     ?OnHeadEventOccurred@MPCHeadUpdateListener@@SAXUMPCMatrix4x4@@PEAUIUnknown@@@Z @ 0x18008D9B0 (-OnHeadEventOccurred@MPCHeadUpdateListener@@SAXUMPCMatrix4x4@@PEAUIUnknown@@@Z.c)
 *     ?SetOwner@SpatialRimDeviceCollectionHeadEventHandler@@QEAAJPEAVSpatialRimDeviceCollection@@PEAUIMessageSession@@@Z @ 0x180095B10 (-SetOwner@SpatialRimDeviceCollectionHeadEventHandler@@QEAAJPEAVSpatialRimDeviceCollection@@PEAUI.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003DE74 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     std::call_once__lambda_64a1b3f60083f412cbdb681d3efb1364___ @ 0x18008D264 (std--call_once__lambda_64a1b3f60083f412cbdb681d3efb1364___.c)
 */

struct MPCHeadUpdateListener *__fastcall MPCHeadUpdateListener::GetInstance(__int64 a1)
{
  const char *v1; // r9
  struct MPCHeadUpdateListener *result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  std::call_once__lambda_64a1b3f60083f412cbdb681d3efb1364___(a1, (__int64)&v4);
  result = MPCHeadUpdateListener::s_instance;
  if ( !MPCHeadUpdateListener::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      38LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcheadupdatelistener.cpp",
      v1);
    __debugbreak();
  }
  return result;
}
