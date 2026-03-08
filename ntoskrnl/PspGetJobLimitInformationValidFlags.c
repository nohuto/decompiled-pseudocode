/*
 * XREFs of PspGetJobLimitInformationValidFlags @ 0x1406F8924
 * Callers:
 *     NtQueryInformationJobObject @ 0x1406F9480 (NtQueryInformationJobObject.c)
 *     NtSetInformationJobObject @ 0x1406FC3C0 (NtSetInformationJobObject.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspGetJobLimitInformationValidFlags(int a1, int a2)
{
  __int64 result; // rax

  if ( a1 == 2 )
    return 255LL;
  result = 6324223LL;
  if ( a2 == 144 )
    return 0x7FFFLL;
  return result;
}
