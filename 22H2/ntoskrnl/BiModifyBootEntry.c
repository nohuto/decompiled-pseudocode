/*
 * XREFs of BiModifyBootEntry @ 0x140A5EC3C
 * Callers:
 *     BiUpdateBcdObject @ 0x140806888 (BiUpdateBcdObject.c)
 *     BiUpdateEfiEntry @ 0x140A5EF5C (BiUpdateEfiEntry.c)
 * Callees:
 *     ZwModifyBootEntry @ 0x14041CA40 (ZwModifyBootEntry.c)
 *     BiLogMessage @ 0x140807BA0 (BiLogMessage.c)
 *     BiAcquirePrivilege @ 0x140808628 (BiAcquirePrivilege.c)
 *     BiReleasePrivilege @ 0x1408086B4 (BiReleasePrivilege.c)
 */

__int64 __fastcall BiModifyBootEntry(__int64 a1)
{
  __int64 v2; // rdx
  int v3; // ebx
  int v4; // eax
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0LL;
  v3 = BiAcquirePrivilege(0x16u, (__int64)&v6);
  if ( v3 >= 0 )
  {
    v4 = ZwModifyBootEntry(a1, v2);
    v3 = v4;
    if ( v4 < 0 )
      BiLogMessage(4LL, L"Failed to modify boot entry 0x%x. Status: %x", *(unsigned int *)(a1 + 8), (unsigned int)v4);
    BiReleasePrivilege((unsigned int *)&v6);
  }
  return (unsigned int)v3;
}
