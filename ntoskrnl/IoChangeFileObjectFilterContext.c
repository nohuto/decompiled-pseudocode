/*
 * XREFs of IoChangeFileObjectFilterContext @ 0x14023AD2C
 * Callers:
 *     FsRtlInsertPerFileObjectContext @ 0x14023A9B0 (FsRtlInsertPerFileObjectContext.c)
 *     FsRtlPTeardownPerFileObjectContexts @ 0x1406B1CE4 (FsRtlPTeardownPerFileObjectContexts.c)
 * Callees:
 *     IopGetFileObjectExtension @ 0x14023EB8C (IopGetFileObjectExtension.c)
 */

__int64 __fastcall IoChangeFileObjectFilterContext(__int64 a1)
{
  signed __int64 v1; // r10
  char v2; // r11
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0LL;
  if ( !*(_QWORD *)(a1 + 208) )
    return 3221225485LL;
  IopGetFileObjectExtension(a1, 3LL, &v4);
  if ( !v2 )
    return v1 != _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 32), 0LL, v1) ? 0xC0000021 : 0;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 32), v1, 0LL) )
    return 3221225505LL;
  return 0LL;
}
