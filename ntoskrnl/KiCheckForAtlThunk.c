/*
 * XREFs of KiCheckForAtlThunk @ 0x14057CCD4
 * Callers:
 *     KiPreprocessFault @ 0x140362554 (KiPreprocessFault.c)
 * Callees:
 *     KiEmulateAtlThunk @ 0x14057E514 (KiEmulateAtlThunk.c)
 */

__int64 __fastcall KiCheckForAtlThunk(__int64 a1)
{
  __int64 v2; // rcx

  if ( *(_BYTE *)(a1 + 58) )
  {
    v2 = *(_QWORD *)(a1 + 32);
    if ( (*(_BYTE *)(v2 + 32) & 8) != 0
      && *(_QWORD *)(v2 + 40) == *(_QWORD *)a1
      && (unsigned int)KiEmulateAtlThunk(
                         (unsigned int)*(_QWORD *)(a1 + 24) + 248,
                         (unsigned int)*(_QWORD *)(a1 + 24) + 152,
                         (unsigned int)*(_QWORD *)(a1 + 24) + 120,
                         (unsigned int)*(_QWORD *)(a1 + 24) + 128,
                         *(_QWORD *)(a1 + 24) + 136LL) )
    {
      *(_BYTE *)(a1 + 96) = 1;
    }
  }
  return 0LL;
}
