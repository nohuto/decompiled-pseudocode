__int64 __fastcall SleepstudyHelper_Initialize(SS_LIBRARY__ **InitializeHandle, void *Tag)
{
  NTSTATUS v4; // eax
  unsigned int v5; // r8d

  v4 = RtlRunOnceExecuteOnce(
         &SleepstudyHelperInitializeRunOnce,
         (PRTL_RUN_ONCE_INIT_FN)SleepstudyHelperInitializeOnce,
         0LL,
         0LL);
  v5 = 0;
  if ( v4 >= 0 && SleepstudyHelperRoutineBlock.Initialize )
    return (unsigned int)SleepstudyHelperRoutineBlock.Initialize(InitializeHandle, Tag);
  else
    *InitializeHandle = (SS_LIBRARY__ *)&SleepstudyHelperUnsupportedHandle;
  return v5;
}
