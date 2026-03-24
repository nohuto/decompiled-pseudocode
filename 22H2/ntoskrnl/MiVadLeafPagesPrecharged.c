/*
 * XREFs of MiVadLeafPagesPrecharged @ 0x14021B9A0
 * Callers:
 *     MiCommitPageTablesForVad @ 0x1405F91A0 (MiCommitPageTablesForVad.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiVadLeafPagesPrecharged(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 48);
  if ( (v1 & 0x100000) != 0 )
  {
    if ( (v1 & 0x400000) != 0 || (v1 & 0xC0000u) >= 0x80000 )
      return 1LL;
  }
  else if ( (*(_DWORD *)(a1 + 64) & 0x1000000) != 0 )
  {
    return 1LL;
  }
  return (*(_BYTE *)(a1 + 48) & 0x70) == 0x30;
}
