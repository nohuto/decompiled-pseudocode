/*
 * XREFs of RtlReleasePrivilege @ 0x14069DF2C
 * Callers:
 *     PspAllocateProcess @ 0x140703F08 (PspAllocateProcess.c)
 * Callees:
 *     ZwSetInformationThread @ 0x1403F9BC0 (ZwSetInformationThread.c)
 *     ZwClose @ 0x1403F9C00 (ZwClose.c)
 *     ZwAdjustPrivilegesToken @ 0x1403FA240 (ZwAdjustPrivilegesToken.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall RtlReleasePrivilege(_DWORD *P)
{
  int v2; // ecx
  void *v3; // rcx
  _DWORD *v4; // rcx

  v2 = P[8];
  if ( (v2 & 3) != 1 )
  {
    ZwAdjustPrivilegesToken(*(_QWORD *)P, 0LL);
    v2 = P[8];
  }
  if ( (v2 & 1) != 0 )
  {
    ZwSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, P + 2, 8u);
    v3 = (void *)*((_QWORD *)P + 1);
    if ( v3 )
      ZwClose(v3);
  }
  v4 = (_DWORD *)*((_QWORD *)P + 2);
  if ( v4 != P + 9 )
    ExFreePoolWithTag(v4, 0);
  ZwClose(*(HANDLE *)P);
  ExFreePoolWithTag(P, 0);
}
