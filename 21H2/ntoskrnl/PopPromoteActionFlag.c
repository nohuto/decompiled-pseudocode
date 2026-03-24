/*
 * XREFs of PopPromoteActionFlag @ 0x1407755AC
 * Callers:
 *     PopExecutePowerAction @ 0x1407751C8 (PopExecutePowerAction.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopPromoteActionFlag(_BYTE *a1, char a2, int a3, char a4, unsigned int a5)
{
  __int64 result; // rax
  int v6; // r8d

  result = a5;
  v6 = a5 & a3;
  if ( a4 )
  {
    if ( v6 && (dword_140C2344C & a5) == 0 )
    {
      dword_140C2344C |= a5;
LABEL_8:
      *a1 |= a2;
    }
  }
  else if ( !v6 && (dword_140C2344C & a5) != 0 )
  {
    result = ~a5;
    dword_140C2344C &= result;
    goto LABEL_8;
  }
  return result;
}
