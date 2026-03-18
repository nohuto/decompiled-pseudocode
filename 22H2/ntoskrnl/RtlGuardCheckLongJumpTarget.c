/*
 * XREFs of RtlGuardCheckLongJumpTarget @ 0x1405B1F78
 * Callers:
 *     RtlGuardRestoreContext @ 0x14033FD9C (RtlGuardRestoreContext.c)
 * Callees:
 *     RtlpControlFlowGuardEnforced @ 0x14033FE10 (RtlpControlFlowGuardEnforced.c)
 *     RtlPcToFileHeader @ 0x1403C39E0 (RtlPcToFileHeader.c)
 *     bsearch_s @ 0x1403D98B0 (bsearch_s.c)
 *     RtlFailFast2 @ 0x140429B30 (RtlFailFast2.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x1407D4B48 (LdrImageDirectoryEntryToLoadConfig.c)
 */

__int64 __fastcall RtlGuardCheckLongJumpTarget(unsigned __int64 a1)
{
  __int64 Config; // rax
  rsize_t v3; // r8
  int Key; // [rsp+48h] [rbp+10h] BYREF
  __int64 v6; // [rsp+50h] [rbp+18h] BYREF

  Key = 0;
  v6 = 0LL;
  if ( (unsigned int)RtlpControlFlowGuardEnforced() )
  {
    RtlPcToFileHeader(a1, &v6);
    if ( !v6
      || (Config = LdrImageDirectoryEntryToLoadConfig(v6)) != 0
      && *(_DWORD *)Config >= 0xC0u
      && (*(_DWORD *)(Config + 144) & 0x10000) != 0
      && ((Key = a1 - v6, (v3 = *(_QWORD *)(Config + 184)) == 0)
       || !bsearch_s(
             &Key,
             *(const void **)(Config + 176),
             v3,
             (unsigned int)((*(_DWORD *)(Config + 144) >> 28) + 4),
             (int (__cdecl *)(void *, const void *, const void *))RtlpTargetCompare,
             0LL)) )
    {
      RtlFailFast2(0x26u);
    }
  }
  return 0LL;
}
