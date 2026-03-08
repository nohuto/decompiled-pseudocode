/*
 * XREFs of LocalGetSDDLDeliminator @ 0x140750C60
 * Callers:
 *     LocalGetAclForString @ 0x14074F18C (LocalGetAclForString.c)
 * Callees:
 *     wcschr @ 0x1403D5D90 (wcschr.c)
 *     FContainCallBackAce @ 0x140750D80 (FContainCallBackAce.c)
 */

__int64 __fastcall LocalGetSDDLDeliminator(wchar_t *Str, _QWORD *a2)
{
  BOOL v3; // ebp
  unsigned int v4; // ebx
  unsigned int v5; // esi
  const wchar_t *v6; // rdi
  unsigned int v8; // eax

  v3 = 0;
  *a2 = 0LL;
  v4 = 0;
  v5 = 0;
  v6 = Str;
  if ( !(unsigned int)FContainCallBackAce(Str) )
  {
    *a2 = wcschr(v6, 0x3Au);
    return v5;
  }
  if ( !*v6 )
    return v5;
  while ( !*a2 && !v5 )
  {
    switch ( *v6 )
    {
      case '"':
        if ( v4 <= 1 )
        {
LABEL_21:
          v5 = 1336;
          break;
        }
        v3 = !v3;
        break;
      case '(':
        v8 = v4 + 1;
        if ( v3 )
          v8 = v4;
        v4 = v8;
        break;
      case ')':
        if ( !v3 )
        {
          if ( !v4 )
            goto LABEL_21;
          --v4;
        }
        break;
      default:
        if ( *v6 == 58 && !v4 )
          *a2 = v6;
        break;
    }
    if ( !*++v6 )
      break;
  }
  if ( v3 || v4 )
    return 1336;
  return v5;
}
