/*
 * XREFs of IoGetOplockFullFoExt @ 0x140301674
 * Callers:
 *     FsRtlpOplockCleanup @ 0x140300F14 (FsRtlpOplockCleanup.c)
 *     FsRtlpOplockDequeueRH @ 0x140301520 (FsRtlpOplockDequeueRH.c)
 * Callees:
 *     IopGetFileObjectExtension @ 0x14030169C (IopGetFileObjectExtension.c)
 */

__int64 __fastcall IoGetOplockFullFoExt(__int64 a1)
{
  if ( a1 )
    return IopGetFileObjectExtension(a1, 6LL);
  else
    return 0LL;
}
