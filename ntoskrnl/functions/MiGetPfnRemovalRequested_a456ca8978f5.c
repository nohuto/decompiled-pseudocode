bool __fastcall MiGetPfnRemovalRequested(__int64 a1)
{
  return (*(_BYTE *)(a1 + 35) & 0x40) != 0;
}
