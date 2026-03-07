LARGE_INTEGER PsGetProcessExitTime(void)
{
  return (LARGE_INTEGER)KeGetCurrentThread()->ApcState.Process[1].ExtendedFeatureDisableMask;
}
