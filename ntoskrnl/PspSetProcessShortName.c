/*
 * XREFs of PspSetProcessShortName @ 0x1407069F8
 * Callers:
 *     PspInitializeFullProcessImageName @ 0x140707B78 (PspInitializeFullProcessImageName.c)
 *     PspSetMinimalProcessName @ 0x140817F50 (PspSetMinimalProcessName.c)
 * Callees:
 *     <none>
 */

char __fastcall PspSetProcessShortName(__int64 a1, unsigned __int16 *a2)
{
  unsigned __int64 v2; // r9
  _BYTE *v3; // r8
  unsigned int v4; // eax
  _WORD *v5; // rcx
  _WORD *v6; // rdx
  _BYTE *v7; // rdx

  v2 = *((_QWORD *)a2 + 1);
  v3 = (_BYTE *)(a1 + 1448);
  v4 = 0;
  v5 = (_WORD *)(v2 + *a2);
  if ( v2 )
  {
    if ( (unsigned __int64)v5 > v2 )
    {
      while ( 1 )
      {
        v6 = v5--;
        if ( *v5 == 92 )
          break;
        ++v4;
        if ( (unsigned __int64)v5 <= v2 )
          goto LABEL_7;
      }
      v5 = v6;
LABEL_7:
      if ( v4 >= 0xF )
        v4 = 14;
    }
    v7 = &v3[v4];
    while ( v3 < v7 )
    {
      LOBYTE(v4) = *(_BYTE *)v5++;
      *v3++ = v4;
    }
  }
  *v3 = 0;
  return v4;
}
