/*
 * XREFs of SmSanitizeString @ 0x14059D3E0
 * Callers:
 *     SmKmVolumeQueryUniqueId @ 0x14092D1FC (SmKmVolumeQueryUniqueId.c)
 * Callees:
 *     isprint @ 0x1403D28A0 (isprint.c)
 */

void __fastcall SmSanitizeString(char *a1, unsigned int a2)
{
  char *v2; // rdi
  unsigned __int64 v3; // r14
  char *v4; // rdx
  unsigned __int64 v5; // rbp
  unsigned int v6; // ebx
  __int16 v7; // bx

  v2 = a1;
  v3 = 0LL;
  v4 = &a1[2 * ((unsigned __int64)a2 >> 1) - 2];
  v5 = (unsigned __int64)(v4 - a1 + 1) >> 1;
  if ( a1 > v4 )
    v5 = 0LL;
  if ( v5 )
  {
    while ( 1 )
    {
      v6 = *(unsigned __int16 *)v2;
      if ( (_WORD)v6 )
        break;
      LOWORD(v6) = 126;
LABEL_13:
      *(_WORD *)v2 = v6;
      ++v3;
      v2 += 2;
      if ( v3 >= v5 )
        goto LABEL_14;
    }
    if ( (unsigned __int16)v6 > 0xFFu )
    {
      v7 = *(_WORD *)v2 % 0x57u;
    }
    else
    {
      if ( isprint(*(unsigned __int16 *)v2) )
        goto LABEL_11;
      v7 = v6 % 0x57;
    }
    LOWORD(v6) = v7 + 36;
LABEL_11:
    if ( (_WORD)v6 == 92 )
      LOWORD(v6) = 95;
    goto LABEL_13;
  }
LABEL_14:
  *(_WORD *)v2 = 0;
}
