/*
 * XREFs of SepDeReferenceLogonSessionDirect @ 0x140348824
 * Callers:
 *     SepLinkLogonSessions @ 0x14032C264 (SepLinkLogonSessions.c)
 *     NtQueryInformationToken @ 0x1406D0BB0 (NtQueryInformationToken.c)
 *     SepStopReferencingLogonSession @ 0x1406F0290 (SepStopReferencingLogonSession.c)
 *     SeShutdownServerSilo @ 0x14091C214 (SeShutdownServerSilo.c)
 *     SeSetSessionIdTokenWithLinked @ 0x14091C990 (SeSetSessionIdTokenWithLinked.c)
 *     SepSetServerSiloToken @ 0x14091CCB4 (SepSetServerSiloToken.c)
 *     SeGetLinkedToken @ 0x1409228E0 (SeGetLinkedToken.c)
 * Callees:
 *     SepDeReferenceLogonSession @ 0x1406F7CC4 (SepDeReferenceLogonSession.c)
 */

signed __int64 __fastcall SepDeReferenceLogonSessionDirect(_QWORD *a1)
{
  signed __int64 result; // rax
  signed __int64 i; // rdx
  signed __int64 v3; // rtt
  __int64 v4; // rdx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  _m_prefetchw(a1 + 3);
  result = a1[3];
  for ( i = result - 1; i > 0; i = result - 1 )
  {
    v3 = result;
    result = _InterlockedCompareExchange64(a1 + 3, i, result);
    if ( v3 == result )
      return result;
  }
  if ( i )
    __fastfail(0xEu);
  v4 = a1[20];
  v5 = a1[1];
  return SepDeReferenceLogonSession(&v5, v4);
}
