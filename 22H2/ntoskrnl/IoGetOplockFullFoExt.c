/*
 * XREFs of IoGetOplockFullFoExt @ 0x1402D6F68
 * Callers:
 *     FsRtlpOplockDequeueRH @ 0x1402D7250 (FsRtlpOplockDequeueRH.c)
 *     FsRtlpOplockCleanup @ 0x140304D20 (FsRtlpOplockCleanup.c)
 * Callees:
 *     IopGetFileObjectExtension @ 0x1402D6F90 (IopGetFileObjectExtension.c)
 */

__int64 __fastcall IoGetOplockFullFoExt(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( a1 )
    return IopGetFileObjectExtension(a1, 6LL, 0LL, a4);
  else
    return 0LL;
}
