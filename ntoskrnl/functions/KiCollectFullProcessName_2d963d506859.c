void __fastcall KiCollectFullProcessName(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 2172) & 0x1000) == 0 && MmIsAddressValidEx(*(_QWORD *)(a1 + 1472)) )
    IoAddTriageDumpDataBlock(*(_QWORD *)(*(_QWORD *)(a1 + 1472) + 8LL), (PVOID)**(unsigned __int16 **)(a1 + 1472));
}
