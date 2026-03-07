char __fastcall KiUnshadowProcessorAllocation(__int64 a1, __int64 a2)
{
  char result; // al

  if ( KiKvaShadow )
  {
    MmDeleteShadowMapping(*(_QWORD *)(a2 + 88) - 12208LL, 0x5000uLL);
    return MmDeleteShadowMapping(a1 + 40576, 0x1000uLL);
  }
  return result;
}
