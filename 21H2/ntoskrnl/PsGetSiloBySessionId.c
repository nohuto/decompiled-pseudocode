/*
 * XREFs of PsGetSiloBySessionId @ 0x14077D624
 * Callers:
 *     SessionIsInteractive @ 0x14036B8CC (SessionIsInteractive.c)
 *     SeQueryServerSiloToken @ 0x1406C1480 (SeQueryServerSiloToken.c)
 *     PsIsServiceSession @ 0x1406E9070 (PsIsServiceSession.c)
 *     SeQuerySessionIdTokenEx @ 0x14077D580 (SeQuerySessionIdTokenEx.c)
 *     EtwWmitraceWorker @ 0x1409E8E6C (EtwWmitraceWorker.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     MmGetSessionById @ 0x1402DF880 (MmGetSessionById.c)
 */

__int64 __fastcall PsGetSiloBySessionId(unsigned int a1, _QWORD *a2)
{
  _QWORD *SessionById; // rax
  __int64 v4; // rbx
  __int64 result; // rax

  SessionById = (_QWORD *)MmGetSessionById(a1);
  if ( !SessionById )
    return 3221226581LL;
  v4 = *(_QWORD *)(SessionById[171] + 880LL);
  ObfDereferenceObject(SessionById);
  result = 0LL;
  *a2 = v4;
  return result;
}
