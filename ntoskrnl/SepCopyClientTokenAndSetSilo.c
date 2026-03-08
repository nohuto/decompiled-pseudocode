/*
 * XREFs of SepCopyClientTokenAndSetSilo @ 0x1409C6570
 * Callers:
 *     SepCreateClientSecurityEx @ 0x1406D5F10 (SepCreateClientSecurityEx.c)
 *     SepUpdateSiloInClientSecurity @ 0x1409CC168 (SepUpdateSiloInClientSecurity.c)
 * Callees:
 *     PsGetServerSiloServiceSessionId @ 0x1402456C0 (PsGetServerSiloServiceSessionId.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     SeCopyClientToken @ 0x1406D1D40 (SeCopyClientToken.c)
 *     SeSetSessionIdToken @ 0x140743440 (SeSetSessionIdToken.c)
 *     SepSetServerSiloToken @ 0x1409C6A80 (SepSetServerSiloToken.c)
 */

__int64 __fastcall SepCopyClientTokenAndSetSilo(int a1, int a2, __int64 a3, PVOID *a4)
{
  __int64 result; // rax
  ULONG ServerSiloServiceSessionId; // eax
  NTSTATUS v8; // ebx

  result = SeCopyClientToken(a1, a2, a3, 0, 0LL, a4);
  if ( (int)result >= 0 )
  {
    ServerSiloServiceSessionId = PsGetServerSiloServiceSessionId(a3);
    if ( ServerSiloServiceSessionId != -1 && (v8 = SeSetSessionIdToken(*a4, ServerSiloServiceSessionId), v8 < 0)
      || (v8 = SepSetServerSiloToken(*a4, a3), v8 < 0) )
    {
      ObfDereferenceObject(*a4);
      *a4 = 0LL;
    }
    return (unsigned int)v8;
  }
  return result;
}
