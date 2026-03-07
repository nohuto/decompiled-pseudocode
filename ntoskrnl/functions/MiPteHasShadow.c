_BOOL8 MiPteHasShadow()
{
  return (MiFlags & 0x600000) != 0 && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1;
}
