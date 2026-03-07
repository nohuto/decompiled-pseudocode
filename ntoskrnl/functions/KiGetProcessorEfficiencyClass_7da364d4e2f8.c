bool __fastcall KiGetProcessorEfficiencyClass(__int64 a1)
{
  char v1; // al

  if ( KeHeteroSystem )
    v1 = *(_BYTE *)(a1 + 34056);
  else
    v1 = *(_BYTE *)(a1 + 34059);
  return v1 != 0;
}
