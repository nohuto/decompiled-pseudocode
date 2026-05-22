/*
 * XREFs of ??$ParsingInitialized@AEAJAEAKAEAKAEAPEB_WAEAGAEAGAEA_NAEA_NAEAGAEAGAEAG_NAEAEAEAIAEAKAEAUPoseData@SpatialInteractionDevices@@AEAU12@@SpatialInteractionTrace@SpatialInteractionDevices@@SAXAEAJAEAK1AEAPEB_WAEAG3AEA_N4333$$QEA_NAEAEAEAI1AEAUPoseData@1@8@Z @ 0x1801688C0
 * Callers:
 *     _lambda_b6eb6e6574f6e884ecb744657c22bdda_::operator() @ 0x18016A454 (_lambda_b6eb6e6574f6e884ecb744657c22bdda_--operator().c)
 * Callees:
 *     ?IsEnabled@SpatialInteractionTrace@SpatialInteractionDevices@@SA_NE_K@Z @ 0x1800C65E8 (-IsEnabled@SpatialInteractionTrace@SpatialInteractionDevices@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpatialInteractionTrace@SpatialInteractionDevices@@P6AXXZ@Z @ 0x1800C7254 (-get@-$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpa.c)
 *     ?ParsingInitialized_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXJKKPEB_WGG_N1GGG1EIKAEBUPoseData@2@2@Z @ 0x18016E0E8 (-ParsingInitialized_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXJKKPEB_WGG_N1GGG1EI.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionTrace::ParsingInitialized<long &,unsigned long &,unsigned long &,wchar_t const * &,unsigned short &,unsigned short &,bool &,bool &,unsigned short &,unsigned short &,unsigned short &,bool,unsigned char &,unsigned int &,unsigned long &,SpatialInteractionDevices::PoseData &,SpatialInteractionDevices::PoseData &>(
        int *a1,
        unsigned int *a2,
        unsigned int *a3,
        const wchar_t **a4,
        unsigned __int16 *a5,
        unsigned __int16 *a6,
        bool *a7,
        bool *a8,
        unsigned __int16 *a9,
        unsigned __int16 *a10,
        unsigned __int16 *a11,
        bool *a12,
        char *a13,
        unsigned int *a14,
        unsigned int *a15,
        struct SpatialInteractionDevices::PoseData *a16,
        struct SpatialInteractionDevices::PoseData *a17)
{
  __int64 v21; // rcx

  if ( SpatialInteractionDevices::SpatialInteractionTrace::IsEnabled((__int64)a1) )
  {
    wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTrace>::get(
      v21,
      _lambda_169e34f0547c812b04d058e5b6da2245_::_lambda_invoker_cdecl_);
    SpatialInteractionDevices::SpatialInteractionTrace::ParsingInitialized_(
      (SpatialInteractionDevices::SpatialInteractionTrace *)*a5,
      *a1,
      *a2,
      *a3,
      *a4,
      *a5,
      *a6,
      *a7,
      *a8,
      *a9,
      *a10,
      *a11,
      *a12,
      *a13,
      *a14,
      *a15,
      a16,
      a17);
  }
}
