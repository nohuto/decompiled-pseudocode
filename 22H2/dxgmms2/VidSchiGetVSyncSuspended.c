/*
 * XREFs of VidSchiGetVSyncSuspended @ 0x1C0002F54
 * Callers:
 *     VidSchiControlVSync @ 0x1C0079384 (VidSchiControlVSync.c)
 *     VidSchIsVSyncEnabled @ 0x1C0079F70 (VidSchIsVSyncEnabled.c)
 * Callees:
 *     <none>
 */

char __fastcall VidSchiGetVSyncSuspended(__int64 a1, unsigned int a2)
{
  if ( *(_BYTE *)(a1 + 2132) )
    return *(_BYTE *)(a2 + a1 + 2133);
  else
    return *(_BYTE *)(a1 + 2133);
}
