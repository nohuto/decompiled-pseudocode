unsigned __int8 __fastcall ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner(
        ADAPTER_DISPLAY *this,
        const struct DXGDEVICE *a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( !*((_DWORD *)this + 24) )
    return 0;
  while ( !ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner(this, a2, v2) )
  {
    if ( ++v2 >= *((_DWORD *)this + 24) )
      return 0;
  }
  return 1;
}
