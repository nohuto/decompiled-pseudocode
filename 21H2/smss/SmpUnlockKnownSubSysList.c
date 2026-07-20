/*
 * XREFs of SmpUnlockKnownSubSysList @ 0x1400035C8
 * Callers:
 *     wmain @ 0x140001850 (wmain.c)
 *     SmpReadySubSys @ 0x1400028EC (SmpReadySubSys.c)
 *     SmpHandleConnectionRequest @ 0x140003030 (SmpHandleConnectionRequest.c)
 *     SmpSearchKnownSubSysDatabase @ 0x1400034FC (SmpSearchKnownSubSysDatabase.c)
 *     SmpWaitForSingleSubSys @ 0x140003B40 (SmpWaitForSingleSubSys.c)
 *     SmpTerminateCSR @ 0x1400058C4 (SmpTerminateCSR.c)
 *     SmpLoadSubSystem @ 0x1400172BC (SmpLoadSubSystem.c)
 *     SmpDeleteSubSys @ 0x1400183D8 (SmpDeleteSubSys.c)
 *     SmpWaitForStatusChange @ 0x140018608 (SmpWaitForStatusChange.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmpUnlockKnownSubSysList(__int64 a1)
{
  bool v1; // zf
  __int64 v2; // rcx

  v1 = *(_DWORD *)a1 == 1;
  v2 = *(_QWORD *)(a1 + 8) + 16LL;
  if ( v1 )
    return RtlReleaseSRWLockShared(v2);
  else
    return RtlReleaseSRWLockExclusive(v2);
}
