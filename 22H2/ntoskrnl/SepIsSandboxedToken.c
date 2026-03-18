/*
 * XREFs of SepIsSandboxedToken @ 0x1402979C4
 * Callers:
 *     SeQueryInformationToken @ 0x140719710 (SeQueryInformationToken.c)
 *     NtQueryInformationToken @ 0x140730A90 (NtQueryInformationToken.c)
 * Callees:
 *     <none>
 */

bool __fastcall SepIsSandboxedToken(_DWORD *a1, char a2)
{
  if ( !a2 )
    return 0;
  if ( a1[48] == 2 && (int)a1[49] < 2 )
    return 1;
  return (a1[50] & 0x2000) == 0;
}
