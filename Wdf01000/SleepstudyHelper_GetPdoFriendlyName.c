/*
 * XREFs of SleepstudyHelper_GetPdoFriendlyName @ 0x1C00B20BC
 * Callers:
 *     ?SleepStudyRegisterBlockingComponents@FxPkgPnp@@QEAAJXZ @ 0x1C0079560 (-SleepStudyRegisterBlockingComponents@FxPkgPnp@@QEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     RtlUnicodeStringCopy @ 0x1C004DF40 (RtlUnicodeStringCopy.c)
 */

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
