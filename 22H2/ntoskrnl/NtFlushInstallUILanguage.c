/*
 * XREFs of NtFlushInstallUILanguage @ 0x1407CF9B0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x1402CBB00 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402CC2B0 (ExAcquireResourceExclusiveLite.c)
 *     MigrateOOBELanguageToInstallationLanguage @ 0x1405B9AE0 (MigrateOOBELanguageToInstallationLanguage.c)
 *     SeSinglePrivilegeCheck @ 0x140627A60 (SeSinglePrivilegeCheck.c)
 *     MUIInitializeResourceLock @ 0x1407CFA8C (MUIInitializeResourceLock.c)
 */

NTSTATUS __cdecl NtFlushInstallUILanguage(LANGID InstallUILanguage, ULONG SetComittedFlag)
{
  NTSTATUS v3; // ebx
  int v4; // edi
  KPROCESSOR_MODE PreviousMode; // dl
  NTSTATUS result; // eax
  struct _KTHREAD *CurrentThread; // rax

  v3 = 0;
  v4 = InstallUILanguage;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !PreviousMode )
    return -1073741823;
  if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
    return -1073741790;
  if ( PsUILanguageComitted )
  {
    if ( v4 == (unsigned __int16)PsInstallUILanguageId )
      return 0;
    return -1073741823;
  }
  if ( MUIRefreshCachedUILock
    || (result = MUIInitializeResourceLock(&MUIRefreshCachedUILock), (result & 0xC0000000) != 0xC0000000) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(MUIRefreshCachedUILock, 1u);
    if ( SetComittedFlag )
      PsUILanguageComitted = 1;
    if ( (_WORD)v4 != PsInstallUILanguageId )
    {
      PsInstallUILanguageId = v4;
      PsMachineUILanguageId = v4;
      v3 = MigrateOOBELanguageToInstallationLanguage();
    }
    ExReleaseResourceLite(MUIRefreshCachedUILock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return v3;
  }
  return result;
}
