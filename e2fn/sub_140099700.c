char __fastcall sub_140099700(volatile signed __int64 *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // eax

  *(_DWORD *)a3 = 0;
  *(_WORD *)(a3 + 3) = 2;
  v3 = *(unsigned __int16 *)(a2 + 2);
  if ( (v3 & 2) != 0 )
  {
    _InterlockedIncrement64(a1 + 101);
  }
  else
  {
    *(_BYTE *)(a3 + 3) = (16 * byte_1400DA348[8 * ((v3 >> 3) & 1) + 4 * ((v3 >> 2) & 1)]) | 2;
    _InterlockedAdd64(a1 + 102, ((unsigned __int64)*(unsigned __int16 *)(a2 + 2) >> 2) & 1);
    _InterlockedAdd64(a1 + 103, ((unsigned __int64)*(unsigned __int16 *)(a2 + 2) >> 3) & 1);
    _InterlockedAdd64(a1 + 104, (((*(_WORD *)(a2 + 2) >> 1) | *(_WORD *)(a2 + 2)) & 4) == 0);
    _InterlockedAdd64(a1 + 105, (*(_BYTE *)(a2 + 2) & 0xC) == 12);
    *(_BYTE *)(a3 + 4) ^= (byte_1400DA358[8 * ((*(unsigned __int16 *)(a2 + 2) >> 5) & 1)
                                        + 4 * ((*(unsigned __int16 *)(a2 + 2) >> 4) & 1)] ^ *(_BYTE *)(a3 + 4)) & 0xF;
    _InterlockedAdd64(a1 + 106, ((unsigned __int64)*(unsigned __int16 *)(a2 + 2) >> 4) & 1);
    _InterlockedAdd64(a1 + 107, ((unsigned __int64)*(unsigned __int16 *)(a2 + 2) >> 5) & 1);
    _InterlockedAdd64(a1 + 108, (((*(_WORD *)(a2 + 2) >> 1) | *(_WORD *)(a2 + 2)) & 0x10) == 0);
    LOBYTE(v3) = *(_BYTE *)(a2 + 2) & 0x30;
    _InterlockedAdd64(a1 + 109, (_BYTE)v3 == 48);
  }
  return v3;
}
