__int64 ZwWorkerFactoryWorkerReady()
{
  _disable();
  __readeflags();
  return KiServiceInternal();
}
