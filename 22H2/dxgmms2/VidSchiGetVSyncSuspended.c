/*
 * XREFs of VidSchiGetVSyncSuspended @ 0x1C00133A0
 * Callers:
 *     VidSchiControlVSync @ 0x1C00AE7D0 (VidSchiControlVSync.c)
 *     VidSchIsVSyncEnabled @ 0x1C00AE9A0 (VidSchIsVSyncEnabled.c)
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
