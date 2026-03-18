/*
 * XREFs of SepCopyAnonymousTokenAndSetSilo @ 0x1409C9410
 * Callers:
 *     NtImpersonateAnonymousToken @ 0x1407F5620 (NtImpersonateAnonymousToken.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     SepDeleteAccessState @ 0x140232250 (SepDeleteAccessState.c)
 *     ObFastDereferenceObject @ 0x140297B60 (ObFastDereferenceObject.c)
 *     ObfReferenceObjectWithTag @ 0x1402B6890 (ObfReferenceObjectWithTag.c)
 *     PsGetServerSiloServiceSessionId @ 0x1402C0850 (PsGetServerSiloServiceSessionId.c)
 *     SepGetAnonymousToken @ 0x140370BA8 (SepGetAnonymousToken.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     memset @ 0x140435400 (memset.c)
 *     SeCreateAccessState @ 0x1406C2F10 (SeCreateAccessState.c)
 *     SepFinalizeTokenAcls @ 0x14071DE50 (SepFinalizeTokenAcls.c)
 *     ObInsertObjectEx @ 0x140735ED0 (ObInsertObjectEx.c)
 *     SeReleaseSubjectContext @ 0x140738340 (SeReleaseSubjectContext.c)
 *     SeSetSessionIdToken @ 0x1407F16F4 (SeSetSessionIdToken.c)
 *     SepSetServerSiloToken @ 0x1409C9AD0 (SepSetServerSiloToken.c)
 */

__int64 __fastcall SepCopyAnonymousTokenAndSetSilo(__int64 a1, PVOID *a2)
{
  int AnonymousToken; // edi
  _QWORD *v5; // rsi
  ULONG ServerSiloServiceSessionId; // eax
  PACCESS_TOKEN Token; // [rsp+40h] [rbp-C0h] BYREF
  struct _ACCESS_STATE AccessState; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v10[224]; // [rsp+F0h] [rbp-10h] BYREF

  Token = 0LL;
  AnonymousToken = SepGetAnonymousToken(0LL, &Token);
  if ( AnonymousToken < 0 )
    goto LABEL_7;
  memset(&AccessState, 0, sizeof(AccessState));
  memset(v10, 0, sizeof(v10));
  SeCreateAccessState(
    (int)&AccessState,
    (int)v10,
    0,
    ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)Token - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Token - 48) >> 8)]
  + 76);
  ObFastDereferenceObject(
    (signed __int64 *)&KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[5],
    (unsigned __int64)AccessState.SubjectSecurityContext.PrimaryToken,
    0x75536553u);
  ObfReferenceObjectWithTag(SeAnonymousLogonTokenNoEveryone, 0x75536553u);
  v5 = Token;
  AccessState.SubjectSecurityContext.PrimaryToken = SeAnonymousLogonTokenNoEveryone;
  AnonymousToken = ObInsertObjectEx((char *)Token, &AccessState, 0, 0, 0, 0LL, 0LL);
  SepDeleteAccessState((__int64)&AccessState);
  SeReleaseSubjectContext(&AccessState.SubjectSecurityContext);
  if ( AnonymousToken < 0 )
    goto LABEL_7;
  SepFinalizeTokenAcls(v5);
  *a2 = v5;
  ServerSiloServiceSessionId = PsGetServerSiloServiceSessionId(a1);
  if ( ServerSiloServiceSessionId != -1
    && (AnonymousToken = SeSetSessionIdToken(v5, ServerSiloServiceSessionId), AnonymousToken < 0)
    || (AnonymousToken = SepSetServerSiloToken(*a2, a1), AnonymousToken < 0) )
  {
    ObfDereferenceObject(*a2);
LABEL_7:
    *a2 = 0LL;
  }
  return (unsigned int)AnonymousToken;
}
