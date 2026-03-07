__int64 __fastcall NtdllRunOnceInitMuiCrits(PRTL_RUN_ONCE RunOnce, __int64 *Parameter, PVOID *Context)
{
  KiInitializeMutant(*Parameter, 0, 1, 0);
  return 1LL;
}
