/*
 * XREFs of NtdllRunOnceInitMuiCrits @ 0x1403B1180
 * Callers:
 *     <none>
 * Callees:
 *     KiInitializeMutant @ 0x1402D981C (KiInitializeMutant.c)
 */

__int64 __fastcall NtdllRunOnceInitMuiCrits(PRTL_RUN_ONCE RunOnce, __int64 *Parameter, PVOID *Context)
{
  KiInitializeMutant(*Parameter, 0, 1, 0);
  return 1LL;
}
