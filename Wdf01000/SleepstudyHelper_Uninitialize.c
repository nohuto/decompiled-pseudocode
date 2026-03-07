void __fastcall SleepstudyHelper_Uninitialize(SS_LIBRARY__ *InitializeHandle)
{
  if ( SleepstudyHelperRoutineBlock.Uninitialize )
    SleepstudyHelperRoutineBlock.Uninitialize(InitializeHandle);
}
