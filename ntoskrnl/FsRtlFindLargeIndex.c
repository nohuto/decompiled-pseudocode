/*
 * XREFs of FsRtlFindLargeIndex @ 0x1402D0B8C
 * Callers:
 *     FsRtlTruncateBaseMcb @ 0x1402D0170 (FsRtlTruncateBaseMcb.c)
 *     FsRtlRemoveBaseMcbEntry @ 0x1402D0270 (FsRtlRemoveBaseMcbEntry.c)
 *     FsRtlAddBaseMcbEntryEx @ 0x1402D06D0 (FsRtlAddBaseMcbEntryEx.c)
 *     FsRtlSplitBaseMcb @ 0x14053A920 (FsRtlSplitBaseMcb.c)
 * Callees:
 *     <none>
 */

char __fastcall FsRtlFindLargeIndex(__int64 a1, unsigned int a2, int *a3)
{
  int v3; // edi
  int v4; // r11d
  int v5; // r9d
  int v7; // eax

  v3 = *(_DWORD *)(a1 + 4);
  v4 = 0;
  v5 = v3 - 1;
  if ( v3 - 1 < 0 )
  {
LABEL_2:
    *a3 = v3;
    return 0;
  }
  while ( 1 )
  {
    v7 = (v5 + v4) / 2;
    if ( v7 && a2 < *(_DWORD *)(*(_QWORD *)(a1 + 16) + 8LL * v7 - 8) )
    {
      v5 = v7 - 1;
      goto LABEL_7;
    }
    if ( a2 <= *(_DWORD *)(*(_QWORD *)(a1 + 16) + 8LL * v7) - 1 )
      break;
    v4 = v7 + 1;
LABEL_7:
    if ( v4 > v5 )
      goto LABEL_2;
  }
  *a3 = v7;
  return 1;
}
