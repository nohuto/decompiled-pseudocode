/*
 * XREFs of PsIsServiceSession @ 0x1407E8C4C
 * Callers:
 *     PopGetSettingNotificationName @ 0x140783590 (PopGetSettingNotificationName.c)
 * Callees:
 *     PsGetServerSiloServiceSessionId @ 0x1402C0850 (PsGetServerSiloServiceSessionId.c)
 *     PsGetSiloBySessionId @ 0x140742388 (PsGetSiloBySessionId.c)
 */

bool __fastcall PsIsServiceSession(unsigned int a1)
{
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0LL;
  if ( !a1 )
    return 1;
  if ( (int)PsGetSiloBySessionId(a1, &v3) < 0 )
    return 0;
  return (unsigned int)PsGetServerSiloServiceSessionId(v3) == a1;
}
