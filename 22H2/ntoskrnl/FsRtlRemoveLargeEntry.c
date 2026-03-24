/*
 * XREFs of FsRtlRemoveLargeEntry @ 0x1402F6028
 * Callers:
 *     FsRtlRemoveBaseMcbEntry @ 0x1402F5540 (FsRtlRemoveBaseMcbEntry.c)
 *     FsRtlAddBaseMcbEntryEx @ 0x1402F5910 (FsRtlAddBaseMcbEntryEx.c)
 * Callees:
 *     memmove @ 0x140413540 (memmove.c)
 */

__int64 __fastcall FsRtlRemoveLargeEntry(__int64 a1, unsigned int a2, int a3)
{
  unsigned int v5; // eax
  __int64 v6; // rcx
  __int64 result; // rax

  v5 = *(_DWORD *)(a1 + 4);
  v6 = a2 + a3;
  if ( (unsigned int)v6 < v5 )
  {
    memmove(
      (void *)(*(_QWORD *)(a1 + 16) + 8LL * a2),
      (const void *)(*(_QWORD *)(a1 + 16) + 8 * v6),
      8LL * (v5 - a2 - a3));
    v5 = *(_DWORD *)(a1 + 4);
  }
  result = v5 - a3;
  *(_DWORD *)(a1 + 4) = result;
  return result;
}
