char HalpInterruptDeferredErrorService()
{
  HalpCmciHandler();
  return 1;
}
