char __fastcall KeGetActualProcessorEfficiencyClass(__int64 a1)
{
  if ( KeHeteroSystem )
    return *(_BYTE *)(a1 + 34056);
  else
    return *(_BYTE *)(a1 + 34059);
}
