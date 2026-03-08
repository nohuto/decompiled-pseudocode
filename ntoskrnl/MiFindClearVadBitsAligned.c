/*
 * XREFs of MiFindClearVadBitsAligned @ 0x14076D150
 * Callers:
 *     MiFindEmptyAddressRange @ 0x1407D6F10 (MiFindEmptyAddressRange.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiFindClearVadBitsAligned(
        unsigned __int64 *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  unsigned __int64 v4; // r11
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // r10
  unsigned __int64 v9; // r11
  _DWORD *v10; // rcx
  unsigned __int64 i; // rax

  v4 = *a1;
  v6 = a2 >> 16;
  if ( a3 >= *a1 )
    return -1LL;
  v7 = v6;
  v8 = v4 - a3;
  if ( a4 > v6 && a4 < v4 )
    v7 = ~(v6 - 1) & (v6 + a4 - 1);
  if ( v7 > v8 )
    return -1LL;
  v9 = a1[1];
  while ( 1 )
  {
    v10 = (_DWORD *)(v9 + 4 * (v7 >> 5));
    for ( i = 0LL; i < a3; i += 32LL )
    {
      if ( *v10 )
        break;
      ++v10;
    }
    if ( i == a3 )
      break;
    v7 = v6 + (~(v6 - 1) & (i + v7));
    if ( v7 > v8 )
      return -1LL;
  }
  return v7;
}
