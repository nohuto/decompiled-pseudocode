/*
 * XREFs of PsIsServiceSession @ 0x1406E9070
 * Callers:
 *     PopGetSettingNotificationName @ 0x140751120 (PopGetSettingNotificationName.c)
 * Callees:
 *     PsGetServerSiloServiceSessionId @ 0x1402DF7B0 (PsGetServerSiloServiceSessionId.c)
 *     PsGetSiloBySessionId @ 0x14077D624 (PsGetSiloBySessionId.c)
 */

bool __fastcall PsIsServiceSession(__int64 a1)
{
  int v1; // ebx
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0LL;
  v1 = a1;
  if ( !(_DWORD)a1 )
    return 1;
  if ( (int)PsGetSiloBySessionId(a1, &v3) < 0 )
    return 0;
  return (unsigned int)PsGetServerSiloServiceSessionId(v3) == v1;
}
