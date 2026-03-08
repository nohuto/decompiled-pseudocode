/*
 * XREFs of BiAddBootEntry @ 0x140A5AAD4
 * Callers:
 *     BiCreateEfiEntry @ 0x140A5B13C (BiCreateEfiEntry.c)
 * Callees:
 *     ZwAddBootEntry @ 0x140413050 (ZwAddBootEntry.c)
 *     BiLogMessage @ 0x14082ECFC (BiLogMessage.c)
 *     BiAcquirePrivilege @ 0x14082F784 (BiAcquirePrivilege.c)
 *     BiReleasePrivilege @ 0x14082F810 (BiReleasePrivilege.c)
 */

__int64 __fastcall BiAddBootEntry(__int64 a1, __int64 a2)
{
  int v4; // ebx
  int v5; // eax
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = 0LL;
  v4 = BiAcquirePrivilege(0x16u, (__int64)&v7);
  if ( v4 >= 0 )
  {
    v5 = ZwAddBootEntry(a1, a2);
    v4 = v5;
    if ( v5 < 0 )
      BiLogMessage(4LL, L"Failed to add boot entry. Status: %x", (unsigned int)v5);
    BiReleasePrivilege((unsigned int *)&v7);
  }
  return (unsigned int)v4;
}
