/*
 * XREFs of IoGetOplockKeyContextEx @ 0x140301640
 * Callers:
 *     FsRtlpOplockStoreKeyForDeleteOperation @ 0x1402FE6F0 (FsRtlpOplockStoreKeyForDeleteOperation.c)
 *     FsRtlpOplockKeysEqual @ 0x140300C80 (FsRtlpOplockKeysEqual.c)
 *     FsRtlpAttachOplockKey @ 0x14030287C (FsRtlpAttachOplockKey.c)
 * Callees:
 *     IopGetFileObjectExtension @ 0x14030169C (IopGetFileObjectExtension.c)
 */

__int64 __fastcall IoGetOplockKeyContextEx(__int64 a1)
{
  __int64 result; // rax

  result = IopGetFileObjectExtension(a1, 6LL);
  if ( result )
    return result & -(__int64)((*(_BYTE *)(result + 2) & 3) != 0);
  return result;
}
