__int64 __fastcall CAnimationControllerGeneratedT<CAnimationController,CPropertyChangeResource>::SetPlaybackRate(
        float *a1,
        float a2)
{
  if ( a2 != a1[21] )
  {
    a1[21] = a2;
    CAnimationController::OnPlaybackRateChanged((CAnimationController *)a1);
  }
  return 0LL;
}
