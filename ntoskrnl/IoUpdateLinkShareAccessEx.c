/*
 * XREFs of IoUpdateLinkShareAccessEx @ 0x1406B2A00
 * Callers:
 *     IoUpdateShareAccess @ 0x1408729C0 (IoUpdateShareAccess.c)
 *     IoUpdateLinkShareAccess @ 0x140944720 (IoUpdateLinkShareAccess.c)
 * Callees:
 *     <none>
 */

char __fastcall IoUpdateLinkShareAccessEx(__int64 a1, _DWORD *a2, _DWORD *a3, char a4)
{
  _DWORD *v4; // rax
  bool v5; // zf

  v4 = *(_DWORD **)(a1 + 208);
  if ( !v4 || (v5 = (*v4 & 1) == 0, LOBYTE(v4) = 1, v5) )
    LOBYTE(v4) = 0;
  if ( (*(_BYTE *)(a1 + 74) || *(_BYTE *)(a1 + 75) || *(_BYTE *)(a1 + 76)) && !(_BYTE)v4 )
  {
    ++*a2;
    a2[1] += *(unsigned __int8 *)(a1 + 74);
    a2[2] += *(unsigned __int8 *)(a1 + 75);
    a2[4] += *(unsigned __int8 *)(a1 + 77);
    a2[5] += *(unsigned __int8 *)(a1 + 78);
    a2[3] += *(unsigned __int8 *)(a1 + 76);
    LODWORD(v4) = *(unsigned __int8 *)(a1 + 79);
    a2[6] += (_DWORD)v4;
    if ( a3 )
    {
      ++*a3;
      if ( a4 >= 0 )
        a3[1] += *(unsigned __int8 *)(a1 + 76);
      LODWORD(v4) = *(unsigned __int8 *)(a1 + 79);
      a3[2] += (_DWORD)v4;
    }
  }
  return (char)v4;
}
