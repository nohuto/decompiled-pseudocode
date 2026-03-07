__int64 __fastcall AcpiArblibUnpackRequirement(
        PIO_RESOURCE_DESCRIPTOR Descriptor,
        PULONGLONG MinimumAddress,
        PULONGLONG MaximumAddress,
        ULONGLONG *a4,
        PULONGLONG Alignment)
{
  unsigned __int8 Type; // cl

  Type = Descriptor->Type;
  if ( ((Type - 1) & 0xF9) != 0 || Type == 5 )
  {
    if ( Type != 6 )
      return 3221225508LL;
    *MinimumAddress = Descriptor->u.Port.Alignment;
    *MaximumAddress = Descriptor->u.Port.MinimumAddress.LowPart;
    *a4 = Descriptor->u.Port.Length;
    *Alignment = 1LL;
  }
  else
  {
    *a4 = RtlIoDecodeMemIoResource(Descriptor, Alignment, MinimumAddress, MaximumAddress);
    if ( !*Alignment )
      *Alignment = 1LL;
  }
  if ( Descriptor->Type == 3 && (Descriptor->Flags & 0x10) != 0 && Descriptor->u.Port.MaximumAddress.QuadPart > 0xFFFFFF )
    *MaximumAddress = 0xFFFFFFLL;
  return 0LL;
}
