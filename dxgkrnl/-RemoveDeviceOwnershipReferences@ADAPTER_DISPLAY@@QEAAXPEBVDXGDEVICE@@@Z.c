void __fastcall ADAPTER_DISPLAY::RemoveDeviceOwnershipReferences(ADAPTER_DISPLAY *this, const struct DXGDEVICE *a2)
{
  unsigned int i; // ebx

  for ( i = 0; i < *((_DWORD *)this + 24); ++i )
  {
    if ( ADAPTER_DISPLAY::IsVidPnSourceOwner((DXGADAPTER **)this, a2, i) )
    {
      ADAPTER_DISPLAY::RemoveVidPnOwnership(this, i);
    }
    else if ( ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner((DXGADAPTER **)this, a2, i) )
    {
      *(_QWORD *)(4000LL * i + *((_QWORD *)this + 16) + 744) = 0LL;
    }
  }
}
