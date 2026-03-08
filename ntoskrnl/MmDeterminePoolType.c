/*
 * XREFs of MmDeterminePoolType @ 0x14063F644
 * Callers:
 *     VfPtAddStackInfoIfNotExist @ 0x140ADB5A0 (VfPtAddStackInfoIfNotExist.c)
 *     VfMiscMmBuildMdlForNonPagedPool_Entry @ 0x140ADD200 (VfMiscMmBuildMdlForNonPagedPool_Entry.c)
 *     ExFreePoolSanityChecks @ 0x140AE4DFC (ExFreePoolSanityChecks.c)
 * Callees:
 *     MiDeterminePoolType @ 0x14020DEF0 (MiDeterminePoolType.c)
 */

__int64 __fastcall MmDeterminePoolType(unsigned __int64 a1)
{
  unsigned int v1; // r8d
  __int64 result; // rax

  v1 = MiDeterminePoolType(a1);
  result = 0LL;
  if ( v1 != 32 )
    return v1;
  return result;
}
