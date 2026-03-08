/*
 * XREFs of MiCheckWriteInProgressFault @ 0x140201D38
 * Callers:
 *     MiResolveTransitionFault @ 0x140271760 (MiResolveTransitionFault.c)
 *     MiStandbyPageContentsIntact @ 0x14034B200 (MiStandbyPageContentsIntact.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiCheckWriteInProgressFault(__int64 a1)
{
  if ( (MiFlags & 0x20000) != 0 )
    return ((*(_DWORD *)(a1 + 16) >> 5) & 2) != 0 && ((*(_DWORD *)(a1 + 16) >> 5) & 0x1F) == 0 ? 0xC0000017 : 0;
  else
    return 0LL;
}
