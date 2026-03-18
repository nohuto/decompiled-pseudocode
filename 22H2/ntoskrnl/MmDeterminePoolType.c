/*
 * XREFs of MmDeterminePoolType @ 0x140641AA4
 * Callers:
 *     VfPtAddStackInfoIfNotExist @ 0x140ADF5A0 (VfPtAddStackInfoIfNotExist.c)
 *     VfMiscMmBuildMdlForNonPagedPool_Entry @ 0x140AE1200 (VfMiscMmBuildMdlForNonPagedPool_Entry.c)
 *     ExFreePoolSanityChecks @ 0x140AE8DFC (ExFreePoolSanityChecks.c)
 * Callees:
 *     MiDeterminePoolType @ 0x1402123E0 (MiDeterminePoolType.c)
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
