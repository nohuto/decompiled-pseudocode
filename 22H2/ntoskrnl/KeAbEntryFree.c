/*
 * XREFs of KeAbEntryFree @ 0x1402C91B0
 * Callers:
 *     KeAbPostReleaseEx @ 0x1402E3DB0 (KeAbPostReleaseEx.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x1402E5430 (KiAbEntryRemoveFromTree.c)
 */

__int64 __fastcall KeAbEntryFree(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 result; // rax

  *(_BYTE *)(a1 + 32) |= 2u;
  if ( *(__int64 *)(a1 + 32) < 0 )
    KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)a1);
  *a3 = 0;
  result = *(_DWORD *)(a1 + 88) & 0x1FFFF;
  *a3 = result;
  *(_DWORD *)(a1 + 88) &= 0xFFFE0000;
  *(_BYTE *)(a1 + 25) &= ~1u;
  *(_QWORD *)(a1 + 32) = 0LL;
  return result;
}
