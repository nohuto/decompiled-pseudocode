_BOOL8 __fastcall sub_140095FDC(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned __int16 v3; // r10
  unsigned __int16 v4; // r9
  bool v5; // r8
  _BOOL8 result; // rax

  if ( *(_BYTE *)(a1 + 760) )
  {
    v3 = *(_WORD *)(*(_QWORD *)(a1 + 736) * a3 + *(_QWORD *)(a1 + 728)) & 7;
    v4 = (*(_WORD *)(*(_QWORD *)(a1 + 736) * a3 + *(_QWORD *)(a1 + 728)) >> 3) & 0xFFF;
    v5 = (v4 | v3) != 0;
    *(_BYTE *)(a2 + 21) = v5;
    *(_WORD *)(a2 + 22) = v4 * v5;
    result = v5;
    *(_WORD *)(a2 + 24) = v3 * v5;
    _InterlockedAdd64((volatile signed __int64 *)(a1 + 840), v5);
  }
  return result;
}
