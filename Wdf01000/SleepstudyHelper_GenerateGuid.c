int __fastcall SleepstudyHelper_GenerateGuid(
        _SleepstudyHelper_Namespace ComponentNamespace,
        unsigned __int64 ComponentUid,
        _GUID *pGuid)
{
  int result; // eax

  if ( !SleepstudyHelperRoutineBlock.GenerateGuid
    || (result = SleepstudyHelperRoutineBlock.GenerateGuid(ComponentNamespace, ComponentUid, pGuid),
        result == -1073741637) )
  {
    result = 0;
    *pGuid = GUID_SLEEPSTUDY_LIBRARY_UNSUPPORTED;
  }
  return result;
}
