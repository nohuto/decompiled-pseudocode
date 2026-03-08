/*
 * XREFs of IoUpdateBugCheckProgressEnvVariable @ 0x14054EC04
 * Callers:
 *     IoSaveBugCheckProgress @ 0x14054E5E0 (IoSaveBugCheckProgress.c)
 *     IoSetBugCheckProgressAndFlag @ 0x14054E990 (IoSetBugCheckProgressAndFlag.c)
 *     IoWriteCrashDump @ 0x14054EF00 (IoWriteCrashDump.c)
 *     IopDumpCallAddPagesCallbacks @ 0x140550198 (IopDumpCallAddPagesCallbacks.c)
 *     IopDumpCallRemovePagesCallbacks @ 0x1405502F0 (IopDumpCallRemovePagesCallbacks.c)
 *     IopFillTriageDumpDataBlocks @ 0x140550CB8 (IopFillTriageDumpDataBlocks.c)
 *     KeBugCheck2 @ 0x140565E90 (KeBugCheck2.c)
 *     KiUpdateBugcheckRecoveryProgress @ 0x1405793F8 (KiUpdateBugcheckRecoveryProgress.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     IopBugCheckProgressEfiVariableServicesAvailable @ 0x14054FEA4 (IopBugCheckProgressEfiVariableServicesAvailable.c)
 */

__int64 IoUpdateBugCheckProgressEnvVariable()
{
  __int64 result; // rax

  result = IopBugCheckProgressEfiVariableServicesAvailable();
  if ( (_BYTE)result )
  {
    BugCheckProgressEfiCalled = 1;
    result = ((__int64 (__fastcall *)(const wchar_t *, __int64 *, __int64, __int64, int))IopReportBugCheckProgress)(
               L"BugCheckProgress",
               BUGCHECK_EFI_GUID,
               CrashdmpDumpBlock + 1404,
               4LL,
               1);
    BugCheckProgressEfiCalled = 0;
  }
  return result;
}
