/*
 * XREFs of RtlReleasePrivilege @ 0x140619EC0
 * Callers:
 *     PspAllocateProcess @ 0x1406AD918 (PspAllocateProcess.c)
 * Callees:
 *     ZwSetInformationThread @ 0x1403FA720 (ZwSetInformationThread.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwAdjustPrivilegesToken @ 0x1403FADA0 (ZwAdjustPrivilegesToken.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __cdecl RtlReleasePrivilege(PVOID StatePointer)
{
  int v2; // ecx
  void *v3; // rcx
  char *v4; // rcx

  v2 = *((_DWORD *)StatePointer + 8);
  if ( (v2 & 3) != 1 )
  {
    ZwAdjustPrivilegesToken(*(HANDLE *)StatePointer, 0, *((PTOKEN_PRIVILEGES *)StatePointer + 2), 0, 0LL, 0LL);
    v2 = *((_DWORD *)StatePointer + 8);
  }
  if ( (v2 & 1) != 0 )
  {
    ZwSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, (char *)StatePointer + 8, 8u);
    v3 = (void *)*((_QWORD *)StatePointer + 1);
    if ( v3 )
      ZwClose(v3);
  }
  v4 = (char *)*((_QWORD *)StatePointer + 2);
  if ( v4 != (char *)StatePointer + 36 )
    ExFreePoolWithTag(v4, 0);
  ZwClose(*(HANDLE *)StatePointer);
  ExFreePoolWithTag(StatePointer, 0);
}
