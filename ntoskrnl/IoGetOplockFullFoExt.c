/*
 * XREFs of IoGetOplockFullFoExt @ 0x14023EB64
 * Callers:
 *     FsRtlpOplockCleanup @ 0x14023E404 (FsRtlpOplockCleanup.c)
 *     FsRtlpOplockDequeueRH @ 0x14023EA10 (FsRtlpOplockDequeueRH.c)
 * Callees:
 *     IopGetFileObjectExtension @ 0x14023EB8C (IopGetFileObjectExtension.c)
 */

__int64 __fastcall IoGetOplockFullFoExt(__int64 a1)
{
  if ( a1 )
    return IopGetFileObjectExtension(a1, 6LL, 0LL);
  else
    return 0LL;
}
