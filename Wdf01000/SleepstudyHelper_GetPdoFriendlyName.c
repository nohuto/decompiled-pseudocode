int __fastcall SleepstudyHelper_GetPdoFriendlyName(
        _DEVICE_OBJECT *Pdo,
        _UNICODE_STRING *FriendlyName,
        __int64 a3,
        unsigned __int64 *a4)
{
  int result; // eax

  if ( !SleepstudyHelperRoutineBlock.GetPdoFriendlyName
    || (result = SleepstudyHelperRoutineBlock.GetPdoFriendlyName(Pdo, FriendlyName), result == -1073741637) )
  {
    if ( FriendlyName )
      return RtlUnicodeStringCopy(FriendlyName, &SleepstudyHelperUnsupportedFriendlyName, a3, a4);
    else
      return -1073741811;
  }
  return result;
}
