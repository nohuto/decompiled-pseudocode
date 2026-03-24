/*
 * XREFs of MmDeterminePoolType @ 0x14032BD2C
 * Callers:
 *     VerifierMmBuildMdlForNonPagedPool @ 0x1409E6630 (VerifierMmBuildMdlForNonPagedPool.c)
 *     ExFreePoolSanityChecks @ 0x1409ECF60 (ExFreePoolSanityChecks.c)
 * Callees:
 *     MiDeterminePoolType @ 0x14027B41C (MiDeterminePoolType.c)
 */

__int64 __fastcall MmDeterminePoolType(__int64 a1)
{
  unsigned int v1; // ecx
  __int64 result; // rax

  v1 = MiDeterminePoolType(a1);
  result = 0LL;
  if ( v1 != 32 )
    return v1;
  return result;
}
