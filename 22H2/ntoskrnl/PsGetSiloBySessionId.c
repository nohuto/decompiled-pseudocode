/*
 * XREFs of PsGetSiloBySessionId @ 0x140742388
 * Callers:
 *     SessionIsInteractive @ 0x14032D28C (SessionIsInteractive.c)
 *     SeQuerySessionIdTokenEx @ 0x1407422E0 (SeQuerySessionIdTokenEx.c)
 *     SeQueryServerSiloToken @ 0x1407DEF60 (SeQueryServerSiloToken.c)
 *     PsIsServiceSession @ 0x1407E8C4C (PsIsServiceSession.c)
 *     EtwWmitraceWorker @ 0x1409EBA9C (EtwWmitraceWorker.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     MmGetSessionById @ 0x1402C1E00 (MmGetSessionById.c)
 */

__int64 __fastcall PsGetSiloBySessionId(unsigned int a1, _QWORD *a2)
{
  _QWORD *SessionById; // rax
  __int64 v4; // rbx
  __int64 result; // rax

  SessionById = (_QWORD *)MmGetSessionById(a1);
  if ( !SessionById )
    return 3221226581LL;
  v4 = *(_QWORD *)(SessionById[171] + 784LL);
  ObfDereferenceObject(SessionById);
  result = 0LL;
  *a2 = v4;
  return result;
}
