/*
 * XREFs of IoGetOplockKeyContextEx @ 0x1402D7E90
 * Callers:
 *     FsRtlpOplockStoreKeyForDeleteOperation @ 0x1402D5100 (FsRtlpOplockStoreKeyForDeleteOperation.c)
 *     FsRtlpOplockKeysEqual @ 0x1402D6290 (FsRtlpOplockKeysEqual.c)
 *     FsRtlpAttachOplockKey @ 0x1402DA25C (FsRtlpAttachOplockKey.c)
 * Callees:
 *     IopGetFileObjectExtension @ 0x1402D6F90 (IopGetFileObjectExtension.c)
 */

__int64 __fastcall IoGetOplockKeyContextEx(__int64 a1)
{
  __int64 result; // rax

  result = IopGetFileObjectExtension(a1, 6, 0LL);
  if ( !result || (*(_BYTE *)(result + 2) & 3) == 0 )
    return 0LL;
  return result;
}
