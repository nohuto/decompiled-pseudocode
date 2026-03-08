/*
 * XREFs of CategoryMaskFromEventRange @ 0x1C00399F4
 * Callers:
 *     _SetWinEventHook @ 0x1C003952C (_SetWinEventHook.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CategoryMaskFromEventRange(unsigned int a1, unsigned int a2)
{
  unsigned int v2; // r8d
  _DWORD *v3; // r9
  unsigned int v4; // r10d

  v2 = 0;
  v3 = &unk_1C035D184;
  v4 = 0;
  do
  {
    if ( *(v3 - 1) > a2 )
      break;
    if ( *((_DWORD *)&unk_1C035D180 + 2 * ++v4) - 1 >= a1 )
      v2 |= *v3;
    v3 += 2;
  }
  while ( v4 < 0xF );
  return v2;
}
