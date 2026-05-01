/*
 * XREFs of ?SHRegValueExists@@YAHPEAUHKEY__@@PEBGPEAK@Z @ 0x1800A990C
 * Callers:
 *     _lambda_050fa47c6e91e469e941dbfe29c54c93_::operator() @ 0x1800A19E4 (_lambda_050fa47c6e91e469e941dbfe29c54c93_--operator().c)
 *     ?AuditWebSearchExtensions@SearchAppExperienceManager@@CAXXZ @ 0x1800A2248 (-AuditWebSearchExtensions@SearchAppExperienceManager@@CAXXZ.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall SHRegValueExists(HKEY a1, const unsigned __int16 *a2, unsigned int *a3)
{
  return RegQueryValueExW(a1, a2, 0LL, 0LL, 0LL, 0LL) == 0;
}
