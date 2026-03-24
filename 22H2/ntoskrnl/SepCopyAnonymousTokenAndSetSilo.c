/*
 * XREFs of SepCopyAnonymousTokenAndSetSilo @ 0x14091C690
 * Callers:
 *     NtImpersonateAnonymousToken @ 0x14070DED0 (NtImpersonateAnonymousToken.c)
 * Callees:
 *     PsGetCurrentProcess @ 0x1402BBC90 (PsGetCurrentProcess.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x1402CB940 (ObfReferenceObject.c)
 *     PsGetServerSiloServiceSessionId @ 0x14032D5C0 (PsGetServerSiloServiceSessionId.c)
 *     ObFastDereferenceObject @ 0x140345620 (ObFastDereferenceObject.c)
 *     SepGetAnonymousToken @ 0x14035F51C (SepGetAnonymousToken.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     memset @ 0x140413800 (memset.c)
 *     SepFinalizeTokenAcls @ 0x1405D00A0 (SepFinalizeTokenAcls.c)
 *     SeDeleteAccessState @ 0x1405DC900 (SeDeleteAccessState.c)
 *     ObInsertObjectEx @ 0x1406520B0 (ObInsertObjectEx.c)
 *     SeSetSessionIdToken @ 0x14069D5A0 (SeSetSessionIdToken.c)
 *     SeCreateAccessState @ 0x1406DA670 (SeCreateAccessState.c)
 *     SepSetServerSiloToken @ 0x14091CCB4 (SepSetServerSiloToken.c)
 */

__int64 __fastcall SepCopyAnonymousTokenAndSetSilo(__int64 a1, PADAPTER_OBJECT *a2)
{
  int AnonymousToken; // ebx
  struct _DMA_ADAPTER *v5; // rsi
  _KPROCESS *CurrentProcess; // rax
  ULONG ServerSiloServiceSessionId; // eax
  PACCESS_TOKEN Token; // [rsp+40h] [rbp-1B8h] BYREF
  struct _ACCESS_STATE v10; // [rsp+50h] [rbp-1A8h] BYREF
  _BYTE v11[224]; // [rsp+F0h] [rbp-108h] BYREF

  Token = 0LL;
  AnonymousToken = SepGetAnonymousToken(0LL, (PADAPTER_OBJECT *)&Token);
  if ( AnonymousToken < 0 )
    goto LABEL_8;
  memset(&v10, 0, sizeof(v10));
  memset(v11, 0, sizeof(v11));
  v5 = (struct _DMA_ADAPTER *)Token;
  SeCreateAccessState(
    (int)&v10,
    (int)v11,
    0,
    ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)Token - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Token - 48) >> 8)]
  + 76);
  CurrentProcess = PsGetCurrentProcess();
  ObFastDereferenceObject(
    (signed __int64 *)&CurrentProcess[1].Affinity.Bitmap[5],
    (struct _DMA_ADAPTER *)v10.SubjectSecurityContext.PrimaryToken);
  ObfReferenceObject(SeAnonymousLogonTokenNoEveryone);
  v10.SubjectSecurityContext.PrimaryToken = SeAnonymousLogonTokenNoEveryone;
  AnonymousToken = ObInsertObjectEx(v5, &v10, 0, 0, 0, 0LL, 0LL);
  SeDeleteAccessState((struct _SECURITY_SUBJECT_CONTEXT *)&v10);
  if ( AnonymousToken < 0 )
    goto LABEL_8;
  SepFinalizeTokenAcls(v5);
  *a2 = v5;
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
