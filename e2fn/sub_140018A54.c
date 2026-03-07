__int16 __fastcall sub_140018A54(__int64 a1, __int64 a2, _WORD *a3)
{
  unsigned __int16 v3; // cx
  __int16 result; // ax

  if ( (*(_BYTE *)(a2 + 2) & 1) != 0 )
  {
    v3 = *(_WORD *)(a2 + 14);
    a3[1] |= 0x800u;
    result = v3 & 0xFFF;
    a3[3] = v3 >> 13;
    a3[2] = v3 & 0xFFF;
  }
  return result;
}
