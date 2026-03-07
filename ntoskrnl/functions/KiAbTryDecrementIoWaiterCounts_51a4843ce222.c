char __fastcall KiAbTryDecrementIoWaiterCounts(__int64 a1, __int64 a2)
{
  char result; // al

  if ( (*(_BYTE *)(a1 + 19) & 2) != 0 )
  {
    --*(_BYTE *)(a2 + 92);
    result = *(_BYTE *)(a1 + 19) & 0xFD;
    *(_BYTE *)(a1 + 19) = result;
  }
  if ( (*(_BYTE *)(a1 + 19) & 4) != 0 )
  {
    *(_DWORD *)(a2 + 92) ^= ((unsigned __int16)*(_DWORD *)(a2 + 92) ^ (unsigned __int16)(((unsigned __int16)(*(_DWORD *)(a2 + 92) >> 8)
                                                                                        - 1) << 8)) & 0x7F00;
    result = *(_BYTE *)(a1 + 19) & 0xFB;
    *(_BYTE *)(a1 + 19) = result;
  }
  return result;
}
