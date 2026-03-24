/*
 * XREFs of IoConfigureCrashDump @ 0x1403BFA60
 * Callers:
 *     NtSetSystemInformation @ 0x140707C50 (NtSetSystemInformation.c)
 *     PoShutdownBugCheck @ 0x1408E7610 (PoShutdownBugCheck.c)
 *     PoBroadcastSystemState @ 0x140992AC4 (PoBroadcastSystemState.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x1402CBB00 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402CC2B0 (ExAcquireResourceExclusiveLite.c)
 *     RtlInitUnicodeString @ 0x140345530 (RtlInitUnicodeString.c)
 *     IopRemoveDumpCapsuleSupport @ 0x1403BFB40 (IopRemoveDumpCapsuleSupport.c)
 *     IopReadDumpRegistry @ 0x1403BFBD0 (IopReadDumpRegistry.c)
 *     IopDisableCrashDump @ 0x1403BFCB0 (IopDisableCrashDump.c)
 *     IopInitDumpCapsuleSupport @ 0x1403CDC5C (IopInitDumpCapsuleSupport.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     RtlGetHostNtSystemRoot @ 0x1406A6800 (RtlGetHostNtSystemRoot.c)
 *     IopInitializeCrashDump @ 0x1407B7FA8 (IopInitializeCrashDump.c)
 *     MmGetPageFileForCrashDump @ 0x1408D0A34 (MmGetPageFileForCrashDump.c)
 */

__int64 __fastcall IoConfigureCrashDump(__int64 a1, char a2)
{
  int v2; // ebx
  struct _KTHREAD *CurrentThread; // rdi
  int v4; // ebx
  void *PageFileForCrashDump; // rsi
  __int64 HostNtSystemRoot; // rax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-78h] BYREF
  UNICODE_STRING v9; // [rsp+30h] [rbp-68h]
  WCHAR SourceString[16]; // [rsp+40h] [rbp-58h] BYREF
  __int128 v11; // [rsp+60h] [rbp-38h]
  __int128 v12; // [rsp+70h] [rbp-28h]

  v2 = a1;
  DestinationString = 0LL;
  wcscpy(SourceString, L"C:\\pagefile.sys");
  v11 = 0LL;
  v12 = 0LL;
  if ( !a2 )
    IopReadDumpRegistry(a1, 0LL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( v2 )
  {
    if ( v2 != 1 )
    {
      v4 = -1073741808;
      goto LABEL_7;
    }
    if ( ForceDumpDisabled )
    {
      v4 = -1073741637;
      goto LABEL_7;
    }
    PageFileForCrashDump = (void *)MmGetPageFileForCrashDump();
    if ( !PageFileForCrashDump )
    {
      v4 = -1073741772;
      goto LABEL_7;
    }
    ExAcquireResourceExclusiveLite(&IopCrashDumpLock, 1u);
    v4 = IopDisableCrashDump();
    if ( v4 >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, SourceString);
      HostNtSystemRoot = RtlGetHostNtSystemRoot();
      v9 = DestinationString;
      *DestinationString.Buffer = **(_WORD **)(HostNtSystemRoot + 8);
      if ( (unsigned __int8)IopInitializeCrashDump(PageFileForCrashDump) )
      {
        IopRemoveDumpCapsuleSupport();
        v4 = 0;
      }
      else
      {
        if ( CapsuleDumpAllowed )
          IopInitDumpCapsuleSupport();
        v4 = -1073741823;
      }
    }
  }
  else
  {
    if ( !ExAcquireResourceExclusiveLite(&IopCrashDumpLock, 1u) )
    {
      v4 = -1073741823;
      goto LABEL_7;
    }
    v4 = IopDisableCrashDump();
    IopRemoveDumpCapsuleSupport();
  }
  ExReleaseResourceLite(&IopCrashDumpLock);
LABEL_7:
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return (unsigned int)v4;
}
