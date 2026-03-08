/*
 * XREFs of RtlLengthCurrentClearRunBackwardEx @ 0x1405A659C
 * Callers:
 *     RtlCSparseBitmapFindBitSetCapped @ 0x1403096E0 (RtlCSparseBitmapFindBitSetCapped.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlLengthCurrentClearRunBackwardEx(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  _DWORD *v3; // rdi
  __int64 v5; // rdx
  unsigned int v7; // r11d
  unsigned __int64 v8; // r8
  _DWORD *v9; // r10
  char v10; // dl
  unsigned __int64 v12; // r8

  v3 = *(_DWORD **)(a1 + 8);
  v5 = a2 & 0x1F;
  v7 = 31 - v5;
  v8 = 0LL;
  v9 = &v3[a2 >> 5];
  LODWORD(a1) = *v9 & *((_DWORD *)qword_140016150 + v5);
  if ( (_DWORD)a1 )
  {
LABEL_6:
    v10 = -1;
    if ( _BitScanReverse64((unsigned __int64 *)&a1, (unsigned int)a1) )
      v10 = a1;
    v8 += (unsigned int)(31 - v10);
  }
  else
  {
    while ( 1 )
    {
      v8 += 32LL;
      if ( v8 >= a3 && v8 - v7 >= a3 )
        break;
      if ( v9 == v3 )
        break;
      LODWORD(a1) = *--v9;
      if ( *v9 )
        goto LABEL_6;
    }
  }
  v12 = v8 - v7;
  if ( v12 > a3 )
    return a3;
  return v12;
}
