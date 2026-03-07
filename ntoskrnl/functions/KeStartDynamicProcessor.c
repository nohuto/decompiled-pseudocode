__int64 __fastcall KeStartDynamicProcessor(__int64 a1, int a2, unsigned __int16 a3, _DWORD *a4)
{
  __int64 v7; // rcx
  unsigned int v8; // r9d
  int started; // ebx

  if ( KeGetCurrentThread()->ApcState.Process != PsInitialSystemProcess || !KeDynamicPartitioningSupported )
    return 3221225473LL;
  ExAcquireFastMutexUnsafe(&KiDynamicProcessorLock);
  if ( (unsigned int)KeNumberProcessors_0 >= KeMaximumProcessors )
  {
    started = -1073741223;
  }
  else
  {
    v8 = KeNumberProcessors_0;
    *a4 = KeNumberProcessors_0;
    started = KiStartDynamicProcessor(v7, a2, a3, v8);
  }
  ExReleaseFastMutexUnsafe(&KiDynamicProcessorLock);
  if ( started >= 0 )
  {
    PnpInitializeProcessor();
    PsUpdateActiveProcessAffinity();
  }
  return (unsigned int)started;
}
