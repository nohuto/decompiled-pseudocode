char __fastcall VidSchiGetVSyncSuspended(__int64 a1, unsigned int a2)
{
  if ( *(_BYTE *)(a1 + 2212) )
    return *(_BYTE *)(a2 + a1 + 2213);
  else
    return *(_BYTE *)(a1 + 2213);
}
