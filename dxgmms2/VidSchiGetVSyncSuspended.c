/*
 * XREFs of VidSchiGetVSyncSuspended @ 0x1C000F7C0
 * Callers:
 *     VidSchiControlVSync @ 0x1C00A5D30 (VidSchiControlVSync.c)
 *     VidSchIsVSyncEnabled @ 0x1C00A5F00 (VidSchIsVSyncEnabled.c)
 * Callees:
 *     <none>
 */

char __fastcall VidSchiGetVSyncSuspended(__int64 a1, unsigned int a2)
{
  if ( *(_BYTE *)(a1 + 2212) )
    return *(_BYTE *)(a2 + a1 + 2213);
  else
    return *(_BYTE *)(a1 + 2213);
}
