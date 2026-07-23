/*
 * XREFs of RtlReleasePrivilege @ 0x180081470
 * Callers:
 *     LdrpMinimalMapModule @ 0x180014C38 (LdrpMinimalMapModule.c)
 *     GetProcessIptTrace @ 0x180117D84 (GetProcessIptTrace.c)
 *     GetProcessIptTraceSize @ 0x180117EE0 (GetProcessIptTraceSize.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     NtSetInformationThread @ 0x18009D680 (NtSetInformationThread.c)
 *     NtClose @ 0x18009D6C0 (NtClose.c)
 *     NtAdjustPrivilegesToken @ 0x18009DD00 (NtAdjustPrivilegesToken.c)
 */

void __cdecl RtlReleasePrivilege(PVOID StatePointer)
{
  int v2; // ecx
  char *v3; // r8
  void *v4; // rcx

  v2 = *((_DWORD *)StatePointer + 8);
  if ( (v2 & 3) != 1 )
  {
    NtAdjustPrivilegesToken(*(HANDLE *)StatePointer, 0, *((PTOKEN_PRIVILEGES *)StatePointer + 2), 0, 0LL, 0LL);
    v2 = *((_DWORD *)StatePointer + 8);
  }
  if ( (v2 & 1) != 0 )
  {
    NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, (char *)StatePointer + 8, 8u);
    v4 = (void *)*((_QWORD *)StatePointer + 1);
    if ( v4 )
      NtClose(v4);
  }
  v3 = (char *)*((_QWORD *)StatePointer + 2);
  if ( v3 != (char *)StatePointer + 36 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v3);
  NtClose(*(HANDLE *)StatePointer);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, StatePointer);
}
