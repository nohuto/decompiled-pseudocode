__int64 __fastcall MiVadMapsLargeImage(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 48) & 0x70) == 0x20 )
    return HIBYTE(*(_DWORD *)(a1 + 64)) & 1;
  else
    return 0LL;
}
