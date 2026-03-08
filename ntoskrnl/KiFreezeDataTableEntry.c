/*
 * XREFs of KiFreezeDataTableEntry @ 0x14056A880
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int16 __fastcall KiFreezeDataTableEntry(__int64 a1, unsigned __int16 a2)
{
  unsigned __int16 v2; // r8
  unsigned __int16 result; // ax

  v2 = *(_WORD *)(a1 + 110);
  result = (v2 >> 7) & 3;
  if ( result < a2 )
  {
    result = 384;
    *(_WORD *)(a1 + 110) = v2 ^ (v2 ^ (a2 << 7)) & 0x180;
  }
  return result;
}
