/*
 * XREFs of IoConfigureCrashDump @ 0x14054D564
 * Callers:
 *     NtSetSystemInformation @ 0x1407E1F30 (NtSetSystemInformation.c)
 *     IopCrashDumpPolicyChangeWnfCallback @ 0x140940B30 (IopCrashDumpPolicyChangeWnfCallback.c)
 *     PoShutdownBugCheck @ 0x1409865B0 (PoShutdownBugCheck.c)
 *     PoBroadcastSystemState @ 0x140AA38F8 (PoBroadcastSystemState.c)
 *     IopInitCrashDumpDuringSysInit @ 0x140B6E3C0 (IopInitCrashDumpDuringSysInit.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140258DC0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     IopReadDumpRegistry @ 0x140392204 (IopReadDumpRegistry.c)
 *     IopRemoveDumpCapsuleSupport @ 0x140392E74 (IopRemoveDumpCapsuleSupport.c)
 *     IopInitDumpCapsuleSupport @ 0x1403AE334 (IopInitDumpCapsuleSupport.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     IopDisableCrashDump @ 0x14055013C (IopDisableCrashDump.c)
 *     IopDumpTraceCrashDumpReconfiguration @ 0x140550548 (IopDumpTraceCrashDumpReconfiguration.c)
 *     RtlPrefixUnicodeString @ 0x1406D5A70 (RtlPrefixUnicodeString.c)
 *     RtlGetHostNtSystemRoot @ 0x14079C490 (RtlGetHostNtSystemRoot.c)
 *     IopInitializeCrashDump @ 0x140834B28 (IopInitializeCrashDump.c)
 *     MmGetPageFileForCrashDump @ 0x140A30138 (MmGetPageFileForCrashDump.c)
 */

__int64 __fastcall IoConfigureCrashDump(__int64 a1, char a2)
{
  int v2; // ebx
  struct _KTHREAD *CurrentThread; // rdi
  int v4; // ebx
  __int64 PageFileForCrashDump; // rsi
  __int64 HostNtSystemRoot; // rax
  UNICODE_STRING String2; // [rsp+20h] [rbp-50h] BYREF
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  WCHAR SourceString[16]; // [rsp+40h] [rbp-30h] BYREF

  DestinationString = 0LL;
  v2 = a1;
  String2 = 0LL;
  wcscpy(SourceString, L"C:\\pagefile.sys");
  if ( !a2 )
    IopReadDumpRegistry(a1, 0LL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( v2 )
  {
    if ( v2 == 1 )
    {
      if ( ForceDumpDisabled || !AllowCrashDump )
      {
        v4 = -1073741637;
      }
      else
      {
        PageFileForCrashDump = MmGetPageFileForCrashDump(&String2);
        if ( PageFileForCrashDump && RtlPrefixUnicodeString(&stru_14000A450, &String2, 1u) )
        {
          DestinationString.Buffer = String2.Buffer + 4;
          DestinationString.Length = String2.Length - 8;
          DestinationString.MaximumLength = String2.MaximumLength - 8;
        }
        else
        {
          RtlInitUnicodeString(&DestinationString, SourceString);
          HostNtSystemRoot = RtlGetHostNtSystemRoot();
          if ( *(_WORD *)HostNtSystemRoot )
            *DestinationString.Buffer = **(_WORD **)(HostNtSystemRoot + 8);
        }
        ExAcquireResourceExclusiveLite(&IopCrashDumpLock, 1u);
        v4 = IopDisableCrashDump();
        if ( v4 >= 0 )
        {
          String2 = DestinationString;
          if ( (unsigned __int8)IopInitializeCrashDump(PageFileForCrashDump, &String2) )
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
        ExReleaseResourceLite(&IopCrashDumpLock);
      }
      IopDumpTraceCrashDumpReconfiguration((unsigned int)v4);
    }
    else
    {
      v4 = -1073741808;
    }
  }
  else if ( ExAcquireResourceExclusiveLite(&IopCrashDumpLock, 1u) )
  {
    v4 = IopDisableCrashDump();
    IopRemoveDumpCapsuleSupport();
    ExReleaseResourceLite(&IopCrashDumpLock);
  }
  else
  {
    v4 = -1073741823;
  }
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return (unsigned int)v4;
}
