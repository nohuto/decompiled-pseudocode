/*
 * XREFs of SmSanitizeString @ 0x1405C831C
 * Callers:
 *     SmKmVolumeQueryUniqueId @ 0x1409D79A8 (SmKmVolumeQueryUniqueId.c)
 * Callees:
 *     isprint @ 0x1403D4530 (isprint.c)
 */

int __fastcall SmSanitizeString(_WORD *a1, unsigned int a2)
{
  _UNKNOWN **v2; // rax
  _WORD *v3; // rdi
  unsigned __int64 v4; // rbp
  unsigned int v5; // ebx
  __int16 v6; // bx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  v2 = &retaddr;
  v3 = a1;
  v4 = (unsigned __int64)&a1[((unsigned __int64)a2 >> 1) - 1];
  if ( (unsigned __int64)a1 < v4 )
  {
    while ( 1 )
    {
      v5 = (unsigned __int16)*v3;
      if ( (_WORD)v5 )
        break;
      LOWORD(v5) = 126;
LABEL_11:
      *v3++ = v5;
      if ( (unsigned __int64)v3 >= v4 )
        goto LABEL_12;
    }
    if ( (unsigned __int16)v5 > 0xFFu )
    {
      LODWORD(v2) = 87 * (v5 / 0x57);
      v6 = *v3 % 0x57u;
    }
    else
    {
      LODWORD(v2) = isprint((unsigned __int16)*v3);
      if ( (_DWORD)v2 )
        goto LABEL_9;
      LODWORD(v2) = 87 * (v5 / 0x57);
      v6 = v5 % 0x57;
    }
    LOWORD(v5) = v6 + 36;
LABEL_9:
    if ( (_WORD)v5 == 92 )
      LOWORD(v5) = 95;
    goto LABEL_11;
  }
LABEL_12:
  *v3 = 0;
  return (int)v2;
}
