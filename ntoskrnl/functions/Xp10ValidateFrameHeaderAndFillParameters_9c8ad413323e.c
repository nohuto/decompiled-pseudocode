__int64 __fastcall Xp10ValidateFrameHeaderAndFillParameters(__int64 a1, _QWORD *a2)
{
  __int16 v4; // cx
  __int16 v5; // ax
  __int64 result; // rax
  __int16 v7; // dx
  __int16 v8; // cx

  *a2 = 0LL;
  if ( *(_DWORD *)a1 != -1069947632 )
    return 3221226050LL;
  if ( (*(_WORD *)(a1 + 4) & 7) != 0 )
  {
    switch ( *(_WORD *)(a1 + 4) & 7 )
    {
      case 1:
        v4 = 13;
        break;
      case 2:
        v4 = 14;
        break;
      case 3:
        v4 = 16;
        break;
      case 4:
        v4 = 18;
        break;
      case 5:
        v4 = 20;
        break;
      case 6:
        v4 = 22;
        break;
      case 7:
        v4 = 24;
        break;
      default:
        return 3221226050LL;
    }
  }
  else
  {
    v4 = 12;
  }
  *(_WORD *)a2 = v4;
  if ( ((*(unsigned __int16 *)(a1 + 4) >> 3) & 1) != 0 )
  {
    if ( ((*(unsigned __int16 *)(a1 + 4) >> 3) & 1) != 1 )
      return 3221226050LL;
    v5 = 128;
  }
  else
  {
    v5 = 96;
  }
  *(_WORD *)a2 = v4 | v5;
  if ( ((*(unsigned __int16 *)(a1 + 4) >> 4) & 3) != 0 )
  {
    if ( ((*(unsigned __int16 *)(a1 + 4) >> 4) & 3) == 1 || ((*(unsigned __int16 *)(a1 + 4) >> 4) & 3u) - 2 <= 1 )
      return 3221225474LL;
    return 3221226050LL;
  }
  v7 = *(_WORD *)(a1 + 4) & 0xFFCF;
  *(_WORD *)(a1 + 4) = v7;
  *(_WORD *)a2 ^= (*(_WORD *)a2 ^ (4 * v7)) & 0x3F00;
  *(_WORD *)a2 ^= (*(_WORD *)(a1 + 4) ^ *(_WORD *)a2) & 0x4000;
  v8 = *(_WORD *)(a1 + 4);
  if ( (v8 & 0x3000) != 0 )
    return 3221226050LL;
  result = 3221226050LL;
  if ( v8 >= 0 )
    return 0LL;
  return result;
}
