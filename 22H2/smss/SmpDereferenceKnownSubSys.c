/*
 * XREFs of SmpDereferenceKnownSubSys @ 0x140003A94
 * Callers:
 *     wmain @ 0x140001850 (wmain.c)
 *     SmpStartCsr @ 0x140002100 (SmpStartCsr.c)
 *     SmpExecPgm @ 0x1400023D0 (SmpExecPgm.c)
 *     SmpSetCoreProcessIds @ 0x14000261C (SmpSetCoreProcessIds.c)
 *     SmpSbCreateSession @ 0x14000274C (SmpSbCreateSession.c)
 *     SmpFinalizeClientContext @ 0x140002F30 (SmpFinalizeClientContext.c)
 *     SmpHandleConnectionRequest @ 0x140003030 (SmpHandleConnectionRequest.c)
 *     SmpWaitForSubSysStartup @ 0x140003928 (SmpWaitForSubSysStartup.c)
 *     SmpTerminateCSR @ 0x1400058C4 (SmpTerminateCSR.c)
 *     SmpLoadSubSystem @ 0x1400172BC (SmpLoadSubSystem.c)
 *     SmpDeleteSubSys @ 0x1400183D8 (SmpDeleteSubSys.c)
 * Callees:
 *     SmpTerminate @ 0x1400181F8 (SmpTerminate.c)
 *     SmpDisposeSubSysSynch @ 0x140018464 (SmpDisposeSubSysSynch.c)
 */

void __fastcall SmpDereferenceKnownSubSys(_BYTE *BaseAddress)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  __int64 v5; // rax
  _QWORD *v6; // rbx
  unsigned __int64 Parameters[2]; // [rsp+20h] [rbp-28h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  if ( BaseAddress && _InterlockedExchangeAdd((volatile signed __int32 *)BaseAddress, 0xFFFFFFFF) == 1 )
  {
    if ( (BaseAddress[8] & 4) != 0
      && *((_DWORD *)BaseAddress + 6) == 2
      && *((_DWORD *)BaseAddress + 16) == *(_DWORD *)SmpCoreProcessIds )
    {
      RtlInitUnicodeString(&DestinationString, L"Core Windows subsystem terminated");
      Parameters[1] = -1073741823LL;
      Parameters[0] = (unsigned __int64)&DestinationString;
      SmpTerminate(Parameters, 1u, 2u);
      __debugbreak();
    }
    v2 = (void *)*((_QWORD *)BaseAddress + 2);
    if ( v2 )
      SmpDisposeSubSysSynch(v2);
    v3 = (void *)*((_QWORD *)BaseAddress + 5);
    if ( v3 )
      NtClose(v3);
    if ( (BaseAddress[8] & 8) != 0 )
    {
      v5 = SmpOverflowSubSysList;
      v6 = BaseAddress + 72;
      if ( *(__int64 **)(SmpOverflowSubSysList + 8) != &SmpOverflowSubSysList )
        __fastfail(3u);
      *v6 = SmpOverflowSubSysList;
      v6[1] = &SmpOverflowSubSysList;
      *(_QWORD *)(v5 + 8) = v6;
      SmpOverflowSubSysList = (__int64)v6;
    }
    else
    {
      v4 = (void *)*((_QWORD *)BaseAddress + 4);
      if ( v4 )
        NtClose(v4);
      RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, BaseAddress);
    }
  }
}
