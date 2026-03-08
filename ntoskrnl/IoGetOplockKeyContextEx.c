/*
 * XREFs of IoGetOplockKeyContextEx @ 0x14023EB30
 * Callers:
 *     FsRtlpOplockStoreKeyForDeleteOperation @ 0x14023BBE0 (FsRtlpOplockStoreKeyForDeleteOperation.c)
 *     FsRtlpOplockKeysEqual @ 0x14023E170 (FsRtlpOplockKeysEqual.c)
 *     FsRtlpAttachOplockKey @ 0x14023FE88 (FsRtlpAttachOplockKey.c)
 * Callees:
 *     IopGetFileObjectExtension @ 0x14023EB8C (IopGetFileObjectExtension.c)
 */

__int64 __fastcall IoGetOplockKeyContextEx(__int64 a1)
{
  __int64 result; // rax

  result = IopGetFileObjectExtension(a1, 6LL, 0LL);
  if ( result )
    return result & -(__int64)((*(_BYTE *)(result + 2) & 3) != 0);
  return result;
}
