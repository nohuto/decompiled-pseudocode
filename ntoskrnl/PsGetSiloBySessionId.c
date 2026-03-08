/*
 * XREFs of PsGetSiloBySessionId @ 0x1406CDDA8
 * Callers:
 *     SessionIsInteractive @ 0x1402B92A4 (SessionIsInteractive.c)
 *     SeQuerySessionIdTokenEx @ 0x1406CDD00 (SeQuerySessionIdTokenEx.c)
 *     SeQueryServerSiloToken @ 0x14078FCB0 (SeQueryServerSiloToken.c)
 *     PsIsServiceSession @ 0x140799A4C (PsIsServiceSession.c)
 *     EtwWmitraceWorker @ 0x1409E8BFC (EtwWmitraceWorker.c)
 * Callees:
 *     MmGetSessionById @ 0x14022A4F0 (MmGetSessionById.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 */

__int64 __fastcall PsGetSiloBySessionId(__int64 a1, _QWORD *a2)
{
  _QWORD *SessionById; // rax
  __int64 v4; // rbx
  __int64 result; // rax

  SessionById = (_QWORD *)MmGetSessionById(a1, (__int64)a2);
  if ( !SessionById )
    return 3221226581LL;
  v4 = *(_QWORD *)(SessionById[171] + 784LL);
  ObfDereferenceObject(SessionById);
  result = 0LL;
  *a2 = v4;
  return result;
}
