/*
 * XREFs of SepCopyAnonymousTokenAndSetSilo @ 0x14091C640
 * Callers:
 *     NtImpersonateAnonymousToken @ 0x140716D30 (NtImpersonateAnonymousToken.c)
 * Callees:
 *     PsGetServerSiloServiceSessionId @ 0x140264460 (PsGetServerSiloServiceSessionId.c)
 *     ObFastDereferenceObject @ 0x14027C610 (ObFastDereferenceObject.c)
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     PsGetCurrentProcess @ 0x14033B600 (PsGetCurrentProcess.c)
 *     ObfReferenceObject @ 0x14034B230 (ObfReferenceObject.c)
 *     SepGetAnonymousToken @ 0x14036016C (SepGetAnonymousToken.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     memset @ 0x140414200 (memset.c)
 *     SepFinalizeTokenAcls @ 0x1405D00A0 (SepFinalizeTokenAcls.c)
 *     SeDeleteAccessState @ 0x1405DC900 (SeDeleteAccessState.c)
 *     SeCreateAccessState @ 0x140661880 (SeCreateAccessState.c)
 *     SeSetSessionIdToken @ 0x1406BA010 (SeSetSessionIdToken.c)
 *     ObInsertObjectEx @ 0x140704A20 (ObInsertObjectEx.c)
 *     SepSetServerSiloToken @ 0x14091CC64 (SepSetServerSiloToken.c)
 */

__int64 __fastcall SepCopyAnonymousTokenAndSetSilo(__int64 a1, PADAPTER_OBJECT *a2)
{
  int AnonymousToken; // ebx
  char *v5; // rsi
  _KPROCESS *CurrentProcess; // rax
  ULONG ServerSiloServiceSessionId; // eax
  PACCESS_TOKEN Token; // [rsp+40h] [rbp-1B8h] BYREF
  struct _ACCESS_STATE AccessState; // [rsp+50h] [rbp-1A8h] BYREF
  _BYTE v11[224]; // [rsp+F0h] [rbp-108h] BYREF

  Token = 0LL;
  AnonymousToken = SepGetAnonymousToken(0LL, (PADAPTER_OBJECT *)&Token);
  if ( AnonymousToken < 0 )
    goto LABEL_8;
  memset(&AccessState, 0, sizeof(AccessState));
  memset(v11, 0, sizeof(v11));
  v5 = (char *)Token;
  SeCreateAccessState(
    (int)&AccessState,
    (int)v11,
    0,
    ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)Token - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Token - 48) >> 8)]
  + 76);
  CurrentProcess = PsGetCurrentProcess();
  ObFastDereferenceObject(
    (signed __int64 *)&CurrentProcess[1].Affinity.Bitmap[5],
    (struct _DMA_ADAPTER *)AccessState.SubjectSecurityContext.PrimaryToken);
  ObfReferenceObject(SeAnonymousLogonTokenNoEveryone);
  AccessState.SubjectSecurityContext.PrimaryToken = SeAnonymousLogonTokenNoEveryone;
  AnonymousToken = ObInsertObjectEx(v5, &AccessState, 0, 0, 0, 0LL, 0LL);
  SeDeleteAccessState((struct _SECURITY_SUBJECT_CONTEXT *)&AccessState);
  if ( AnonymousToken < 0 )
    goto LABEL_8;
  SepFinalizeTokenAcls(v5);
  *a2 = (PADAPTER_OBJECT)v5;
  ServerSiloServiceSessionId = PsGetServerSiloServiceSessionId(a1);
  if ( ServerSiloServiceSessionId != -1 )
    AnonymousToken = SeSetSessionIdToken(v5, ServerSiloServiceSessionId);
  if ( AnonymousToken < 0 || (AnonymousToken = SepSetServerSiloToken(*a2, a1), AnonymousToken < 0) )
  {
    HalPutDmaAdapter(*a2);
LABEL_8:
    *a2 = 0LL;
  }
  return (unsigned int)AnonymousToken;
}
