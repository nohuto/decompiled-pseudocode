/*
 * XREFs of SepIsSandboxedToken @ 0x1402E9EFC
 * Callers:
 *     NtQueryInformationToken @ 0x1406D6780 (NtQueryInformationToken.c)
 *     SeQueryInformationToken @ 0x1407B9760 (SeQueryInformationToken.c)
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
