__int64 __fastcall CAnimationControllerGeneratedT<CAnimationController,CPropertyChangeResource>::SetProgress(
        float *a1,
        float a2)
{
  if ( a2 != a1[20] )
  {
    a1[20] = fminf(1.0, fmaxf(a2, 0.0));
    CAnimationController::OnProgressChanged((CAnimationController *)a1);
  }
  return 0LL;
}
