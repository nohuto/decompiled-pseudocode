/*
 * XREFs of RtlGuardCheckLongJumpTarget @ 0x14058F678
 * Callers:
 *     RtlGuardRestoreContext @ 0x140265248 (RtlGuardRestoreContext.c)
 * Callees:
 *     RtlPcToFileHeader @ 0x14023FC00 (RtlPcToFileHeader.c)
 *     RtlpControlFlowGuardEnforced @ 0x140265380 (RtlpControlFlowGuardEnforced.c)
 *     bsearch_s @ 0x1403D2700 (bsearch_s.c)
 *     RtlFailFast2 @ 0x140408D10 (RtlFailFast2.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x14075D09C (LdrImageDirectoryEntryToLoadConfig.c)
 */

NTSTATUS __cdecl RtlGuardCheckLongJumpTarget(PVOID PcValue, BOOL IsFastFail, PBOOL IsLongJumpTarget)
{
  __int64 Config; // rax
  rsize_t v5; // r8
  int Key; // [rsp+48h] [rbp+10h] BYREF
  PVOID BaseOfImage; // [rsp+50h] [rbp+18h] BYREF

  Key = 0;
  BaseOfImage = 0LL;
  if ( (unsigned int)RtlpControlFlowGuardEnforced() )
  {
    RtlPcToFileHeader(PcValue, &BaseOfImage);
    if ( !BaseOfImage
      || (Config = LdrImageDirectoryEntryToLoadConfig(BaseOfImage)) != 0
      && *(_DWORD *)Config >= 0xC0u
      && (*(_DWORD *)(Config + 144) & 0x10000) != 0
      && ((Key = (_DWORD)PcValue - (_DWORD)BaseOfImage, (v5 = *(_QWORD *)(Config + 184)) == 0)
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
  return 0;
}
