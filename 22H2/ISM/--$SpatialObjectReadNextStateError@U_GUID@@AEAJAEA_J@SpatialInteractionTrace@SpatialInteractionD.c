/*
 * XREFs of ??$SpatialObjectReadNextStateError@U_GUID@@AEAJAEA_J@SpatialInteractionTrace@SpatialInteractionDevices@@SAX$$QEAU_GUID@@AEAJAEA_J@Z @ 0x1800DB420
 * Callers:
 *     ?UpdateState@SpatialInteractionEyeGazeSourceObject@SpatialInteractions@Internal@Windows@@AEAAJ_J@Z @ 0x1800DD110 (-UpdateState@SpatialInteractionEyeGazeSourceObject@SpatialInteractions@Internal@Windows@@AEAAJ_J.c)
 *     ?ReadNextState@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@IEAA_NXZ @ 0x1800E1440 (-ReadNextState@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@IEAA_NXZ.c)
 * Callees:
 *     ?IsEnabled@SpatialInteractionTrace@SpatialInteractionDevices@@SA_NE_K@Z @ 0x1800C65E8 (-IsEnabled@SpatialInteractionTrace@SpatialInteractionDevices@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpatialInteractionTrace@SpatialInteractionDevices@@P6AXXZ@Z @ 0x1800C7254 (-get@-$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpa.c)
 *     ?SpatialObjectReadNextStateError_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXAEBU_GUID@@J_J@Z @ 0x1800DC9C8 (-SpatialObjectReadNextStateError_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXAEBU_G.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionTrace::SpatialObjectReadNextStateError<_GUID,long &,__int64 &>(
        struct _GUID *a1,
        int *a2,
        __int64 *a3)
{
  __int64 v6; // rcx
  SpatialInteractionDevices::SpatialInteractionTrace *v7; // rcx

  if ( SpatialInteractionDevices::SpatialInteractionTrace::IsEnabled((__int64)a1) )
  {
    wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTrace>::get(
      v6,
      _lambda_169e34f0547c812b04d058e5b6da2245_::_lambda_invoker_cdecl_);
    SpatialInteractionDevices::SpatialInteractionTrace::SpatialObjectReadNextStateError_(v7, a1, *a2, *a3);
  }
}
