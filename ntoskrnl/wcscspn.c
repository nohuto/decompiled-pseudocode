/*
 * XREFs of wcscspn @ 0x1403D5E10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

size_t __cdecl wcscspn(const wchar_t *Str, const wchar_t *Control)
{
  const wchar_t *v3; // rax
  wchar_t v4; // r10
  const wchar_t *v5; // r9
  wchar_t v6; // dx

  v3 = Str;
  if ( *Str )
  {
    v4 = *Control;
    while ( 1 )
    {
      v5 = Control;
      if ( v4 )
        break;
LABEL_7:
      if ( !*++v3 )
        return v3 - Str;
    }
    v6 = v4;
    while ( v6 != *v3 )
    {
      v6 = *++v5;
      if ( !*v5 )
        goto LABEL_7;
    }
  }
  return v3 - Str;
}
