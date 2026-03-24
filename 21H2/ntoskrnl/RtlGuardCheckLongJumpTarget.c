/*
 * XREFs of RtlGuardCheckLongJumpTarget @ 0x14058F448
 * Callers:
 *     RtlGuardRestoreContext @ 0x1402772A8 (RtlGuardRestoreContext.c)
 * Callees:
 *     RtlpControlFlowGuardEnforced @ 0x1402773E0 (RtlpControlFlowGuardEnforced.c)
 *     RtlPcToFileHeader @ 0x1402C1760 (RtlPcToFileHeader.c)
 *     bsearch_s @ 0x1403D2590 (bsearch_s.c)
 *     RtlFailFast2 @ 0x140408B30 (RtlFailFast2.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x14075CEDC (LdrImageDirectoryEntryToLoadConfig.c)
 */

__int64 __fastcall RtlGuardCheckLongJumpTarget(unsigned __int64 a1)
{
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 Config; // rax
  rsize_t v5; // r8
  int Key; // [rsp+48h] [rbp+10h] BYREF
  __int64 v8; // [rsp+50h] [rbp+18h] BYREF

  Key = 0;
  v8 = 0LL;
  if ( (unsigned int)RtlpControlFlowGuardEnforced() )
  {
    RtlPcToFileHeader(a1, &v8, v2, v3);
    if ( !v8
      || (Config = LdrImageDirectoryEntryToLoadConfig(v8)) != 0
      && *(_DWORD *)Config >= 0xC0u
      && (*(_DWORD *)(Config + 144) & 0x10000) != 0
      && ((Key = a1 - v8, (v5 = *(_QWORD *)(Config + 184)) == 0)
       || !bsearch_s(
             &Key,
             *(const void **)(Config + 176),
             v5,
             (unsigned int)((*(_DWORD *)(Config + 144) >> 28) + 4),
             (int (__cdecl *)(void *, const void *, const void *))RtlpTargetCompare,
             0LL)) )
    {
      RtlFailFast2(0x26u);
    }
  }
  return 0LL;
}
