/*
 * XREFs of NtImpersonateAnonymousToken @ 0x1407390D0
 * Callers:
 *     <none>
 * Callees:
 *     SeTokenIsRestricted @ 0x140206B10 (SeTokenIsRestricted.c)
 *     ObReferenceObjectByPointer @ 0x140208C70 (ObReferenceObjectByPointer.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1402459D0 (PsIsCurrentThreadInServerSilo.c)
 *     ObFastDereferenceObject @ 0x140245F50 (ObFastDereferenceObject.c)
 *     PsGetCurrentServerSilo @ 0x140248480 (PsGetCurrentServerSilo.c)
 *     PsReferencePrimaryTokenWithTag @ 0x1402666A0 (PsReferencePrimaryTokenWithTag.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     SepGetAnonymousToken @ 0x1402B7BE0 (SepGetAnonymousToken.c)
 *     SeTokenIsWriteRestricted @ 0x1402B8710 (SeTokenIsWriteRestricted.c)
 *     PsImpersonateClient @ 0x1406DA310 (PsImpersonateClient.c)
 *     SepRegQueryDwordValue @ 0x1407393AC (SepRegQueryDwordValue.c)
 *     SepDuplicateToken @ 0x1407BCF00 (SepDuplicateToken.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 *     SeCaptureSubjectContext @ 0x1407C9AC0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1407C9D40 (SeReleaseSubjectContext.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x1409C63C0 (SepCopyAnonymousTokenAndSetSilo.c)
 */

NTSTATUS __stdcall NtImpersonateAnonymousToken(HANDLE ThreadHandle)
{
  KPROCESSOR_MODE PreviousMode; // r9
  NTSTATUS result; // eax
  __int64 v3; // rcx
  const signed __int32 *PrimaryToken; // rbx
  PACCESS_TOKEN ClientToken; // rdi
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  PVOID v9; // rsi
  int v10; // r8d
  NTSTATUS AnonymousToken; // ebx
  _KPROCESS *Process; // rdi
  void *v13; // rax
  void *v14; // rbx
  __int64 CurrentServerSilo; // rax
  PVOID v16; // [rsp+40h] [rbp-29h] BYREF
  PACCESS_TOKEN Token; // [rsp+48h] [rbp-21h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+50h] [rbp-19h] BYREF
  __int128 v19; // [rsp+70h] [rbp+7h] BYREF
  __int128 v20; // [rsp+80h] [rbp+17h]
  __int128 v21; // [rsp+90h] [rbp+27h]
  int v22; // [rsp+D8h] [rbp+6Fh] BYREF
  PVOID Object; // [rsp+E0h] [rbp+77h] BYREF
  PVOID v24; // [rsp+E8h] [rbp+7Fh] BYREF

  v16 = 0LL;
  *(_QWORD *)&v21 = 0LL;
  DWORD2(v21) = 0;
  v19 = 0LL;
  v20 = 0LL;
  v24 = 0LL;
  v22 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  Token = 0LL;
  Object = 0LL;
  result = ObReferenceObjectByHandle(ThreadHandle, 0x100u, (POBJECT_TYPE)PsThreadType, PreviousMode, &Object, 0LL);
  if ( result < 0 )
    return result;
  SeCaptureSubjectContext(&SubjectContext);
  PrimaryToken = (const signed __int32 *)SubjectContext.PrimaryToken;
  ClientToken = SubjectContext.PrimaryToken;
  if ( SubjectContext.ClientToken )
    ClientToken = SubjectContext.ClientToken;
  if ( ((int)SepRegQueryDwordValue(v3, L"AnonymousAppContainerImpersonationLevelCheck", &v22) < 0 || !v22)
    && *((_DWORD *)ClientToken + 48) != 1
    && _bittest(PrimaryToken + 50, 0xEu)
    && *((int *)ClientToken + 49) < 2 )
  {
    AnonymousToken = -1073741659;
    goto LABEL_16;
  }
  if ( _bittest((const signed __int32 *)ClientToken + 50, 0xEu) )
  {
    AnonymousToken = SepGetAnonymousToken((__int64)ClientToken, &Token);
    if ( AnonymousToken >= 0 )
    {
      AnonymousToken = PsImpersonateClient((PETHREAD)Object, Token, 1u, 0, SecurityImpersonation);
      ObfDereferenceObject(Token);
    }
    goto LABEL_16;
  }
  if ( (int)SepRegQueryDwordValue(v6, L"EveryoneIncludesAnonymous", &v22) < 0 || (v9 = SeAnonymousLogonToken, v22 != 1) )
    v9 = SeAnonymousLogonTokenNoEveryone;
  if ( PsIsCurrentThreadInServerSilo(v8, v7) )
  {
    CurrentServerSilo = PsGetCurrentServerSilo();
    AnonymousToken = SepCopyAnonymousTokenAndSetSilo(CurrentServerSilo, &v24);
    if ( AnonymousToken < 0 )
      goto LABEL_16;
    v9 = v24;
LABEL_12:
    AnonymousToken = ObReferenceObjectByPointer(
                       v9,
                       4u,
                       (POBJECT_TYPE)SeTokenObjectType,
                       KeGetCurrentThread()->PreviousMode);
    if ( AnonymousToken >= 0 )
    {
      ObfDereferenceObject(v9);
      Process = KeGetCurrentThread()->ApcState.Process;
      v13 = (void *)PsReferencePrimaryTokenWithTag((__int64)Process, 0x746C6644u);
      v14 = v13;
      if ( v13 )
      {
        if ( !SeTokenIsRestricted(v13) || SeTokenIsWriteRestricted(v14) )
        {
          ObFastDereferenceObject(
            (signed __int64 *)&Process[1].Affinity.StaticBitmap[5],
            (unsigned __int64)v14,
            0x746C6644u);
          AnonymousToken = PsImpersonateClient((PETHREAD)Object, v9, v24 == 0LL, 0, SecurityImpersonation);
        }
        else
        {
          ObfDereferenceObject(v14);
          AnonymousToken = -1073741790;
        }
      }
      else
      {
        AnonymousToken = -1073741823;
      }
    }
    goto LABEL_16;
  }
  if ( (*((_DWORD *)ClientToken + 50) & 0x380000) == 0 )
    goto LABEL_12;
  LODWORD(v19) = 48;
  LOBYTE(v10) = 1;
  *((_QWORD *)&v19 + 1) = 0LL;
  DWORD2(v20) = 0;
  *(_QWORD *)&v20 = 0LL;
  v21 = 0LL;
  AnonymousToken = SepDuplicateToken((_DWORD)v9, (unsigned int)&v19, v10, 2, 2, 0, 1, (__int64)&v16);
  if ( AnonymousToken >= 0 )
  {
    *((_DWORD *)v16 + 50) |= *((_DWORD *)ClientToken + 50) & 0x380000;
    v9 = v16;
    goto LABEL_12;
  }
LABEL_16:
  SeReleaseSubjectContext(&SubjectContext);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v24 )
    ObfDereferenceObject(v24);
  if ( v16 )
    ObfDereferenceObject(v16);
  return AnonymousToken;
}
