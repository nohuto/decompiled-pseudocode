char __fastcall VidSchIsDeviceBusy(__int64 a1)
{
  char v1; // dl

  v1 = 0;
  if ( *(_DWORD *)(a1 + 1584) || *(_DWORD *)(a1 + 1572) )
    return 1;
  return v1;
}
