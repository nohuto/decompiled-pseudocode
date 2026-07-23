/*
 * XREFs of SepCopyAnonymousTokenAndSetSilo @ 0x14091C7A0
 * Callers:
 *     NtImpersonateAnonymousToken @ 0x1406C5380 (NtImpersonateAnonymousToken.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     ObFastDereferenceObject @ 0x14026A5B0 (ObFastDereferenceObject.c)
 *     PsGetServerSiloServiceSessionId @ 0x14027E130 (PsGetServerSiloServiceSessionId.c)
 *     SepGetAnonymousToken @ 0x1402A509C (SepGetAnonymousToken.c)
 *     PsGetCurrentProcess @ 0x140346350 (PsGetCurrentProcess.c)
 *     ObfReferenceObject @ 0x140355F80 (ObfReferenceObject.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     SepFinalizeTokenAcls @ 0x1405D00A0 (SepFinalizeTokenAcls.c)
 *     SeSetSessionIdToken @ 0x140619180 (SeSetSessionIdToken.c)
 *     SeCreateAccessState @ 0x1406566A0 (SeCreateAccessState.c)
 *     SeDeleteAccessState @ 0x1406CC080 (SeDeleteAccessState.c)
 *     ObInsertObjectEx @ 0x14071BE00 (ObInsertObjectEx.c)
 *     SepSetServerSiloToken @ 0x14091CDC4 (SepSetServerSiloToken.c)
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
