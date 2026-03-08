/*
 * XREFs of VidSchIsContextFlushable @ 0x1C0107BE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall VidSchIsContextFlushable(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 796) )
    return 0;
  if ( *(_DWORD *)(a1 + 800) )
    return *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 32LL) + 816LL) == 0;
  return 1;
}
