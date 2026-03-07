bool __fastcall KiShouldScanSharedReadyQueue(__int64 a1)
{
  bool result; // al

  result = 0;
  if ( *(_DWORD *)(a1 + 34896) )
    return 1;
  if ( (*(_BYTE *)(a1 + 35) & 8) != 0 )
    return *(_QWORD *)(a1 + 34880) != 0LL;
  return result;
}
