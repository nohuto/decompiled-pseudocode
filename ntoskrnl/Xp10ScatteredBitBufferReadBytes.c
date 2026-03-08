/*
 * XREFs of Xp10ScatteredBitBufferReadBytes @ 0x1409C5104
 * Callers:
 *     Xp10ReadAndValidateCrc @ 0x1409C4EC0 (Xp10ReadAndValidateCrc.c)
 * Callees:
 *     Xp10ScatteredReadBytes @ 0x1409C5568 (Xp10ScatteredReadBytes.c)
 */

__int64 __fastcall Xp10ScatteredBitBufferReadBytes(__int64 a1, _BYTE *a2, unsigned int a3)
{
  unsigned int v5; // ebx
  __int64 v6; // rcx

  v5 = a3;
  if ( *(_DWORD *)(a1 + 16) >= 8u )
  {
    v6 = a1 - (_QWORD)a2;
    do
    {
      if ( !v5 )
        break;
      --v5;
      *a2 = a2[v6 + 8];
      ++a2;
      *(_DWORD *)(a1 + 16) -= 8;
    }
    while ( *(_DWORD *)(a1 + 16) >= 8u );
  }
  *(_QWORD *)(a1 + 8) >>= 8 * ((unsigned __int8)a3 - (unsigned __int8)v5);
  if ( v5 )
    v5 -= Xp10ScatteredReadBytes(a1 + 24, a2, v5);
  return a3 - v5;
}
