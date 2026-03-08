/*
 * XREFs of IoSizeOfIrpEx @ 0x140554E00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int16 __fastcall IoSizeOfIrpEx(__int64 a1, char a2)
{
  if ( a1 && (a1 == -1 || (*(_DWORD *)(a1 + 48) & 0x8000000) != 0) )
    a2 += 2;
  return 72 * a2 + 208;
}
