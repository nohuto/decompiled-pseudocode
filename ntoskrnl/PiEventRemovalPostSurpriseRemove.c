/*
 * XREFs of PiEventRemovalPostSurpriseRemove @ 0x14087E710
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x1408625F0 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     PnpUnlinkDeviceRemovalRelations @ 0x140862FDC (PnpUnlinkDeviceRemovalRelations.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x14087E79C (PnpQueuePendingSurpriseRemoval.c)
 */

__int64 __fastcall PiEventRemovalPostSurpriseRemove(__int64 a1, unsigned int a2, __int64 *a3)
{
  __int64 v3; // rax
  _QWORD *v7; // rbx

  v3 = *(_QWORD *)(a1 + 152);
  if ( v3 )
    v7 = *(_QWORD **)(*(_QWORD *)(v3 + 312) + 40LL);
  else
    v7 = 0LL;
  PnpUnlinkDeviceRemovalRelations(a1, *a3);
  if ( !v7[2] )
  {
    ++*(_DWORD *)(v7[81] + 656LL);
    v7[81] |= 1uLL;
  }
  return PnpQueuePendingSurpriseRemoval(v7[4], a3, *(unsigned int *)(a1 + 16), a2);
}
