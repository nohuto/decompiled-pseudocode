/*
 * XREFs of SepCreateClientSecurityEx @ 0x140727350
 * Callers:
 *     SeCreateClientSecurityFromSubjectContextEx @ 0x1405F5070 (SeCreateClientSecurityFromSubjectContextEx.c)
 *     SeCreateClientSecurityFromSubjectContext @ 0x1406DF7F0 (SeCreateClientSecurityFromSubjectContext.c)
 *     SeCreateClientSecurity @ 0x1407271D0 (SeCreateClientSecurity.c)
 *     SeCreateClientSecurityEx @ 0x1407275D0 (SeCreateClientSecurityEx.c)
 * Callees:
 *     SepGetAnonymousToken @ 0x14021F764 (SepGetAnonymousToken.c)
 *     PsIsHostSilo @ 0x1402A6DF0 (PsIsHostSilo.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1402DF580 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSilo @ 0x1402F61B0 (PsGetCurrentServerSilo.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140347920 (PsReferencePrimaryTokenWithTag.c)
 *     ObpPushStackInfo @ 0x1405C5EC8 (ObpPushStackInfo.c)
 *     SeQueryServerSiloToken @ 0x1406C1480 (SeQueryServerSiloToken.c)
 *     SeCopyClientToken @ 0x14072295C (SeCopyClientToken.c)
 *     ObInsertObjectEx @ 0x140729C30 (ObInsertObjectEx.c)
 *     SepCopyClientTokenAndSetSilo @ 0x1409C61B0 (SepCopyClientTokenAndSetSilo.c)
 *     SeGetTokenControlInformation @ 0x1409CC4D4 (SeGetTokenControlInformation.c)
 */

__int64 __fastcall SepCreateClientSecurityEx(
        _QWORD *a1,
        __int64 a2,
        char a3,
        int a4,
        char a5,
        unsigned int a6,
        char a7,
        __int64 a8,
        char a9,
        __int64 a10,
        __int64 a11)
{
  char v12; // cl
  bool v13; // cf
  unsigned int v16; // eax
  __int64 v17; // rbx
  char v18; // al
  __int64 result; // rax
  bool v20; // al
  __int64 v21; // r8
  int v22; // eax
  int v23; // r15d
  struct _KTHREAD *CurrentThread; // rcx
  __int64 Process; // rcx
  unsigned __int64 v26; // rax
  void *v27; // r14
  __int64 v28; // rcx
  int AnonymousToken; // edi
  __int64 v30; // rcx
  __int64 v31; // rdi
  __int64 v32; // r8
  __int64 CurrentServerSilo; // rax
  PVOID v34[5]; // [rsp+40h] [rbp-28h] BYREF
  PVOID Object; // [rsp+78h] [rbp+10h] BYREF

  v12 = 0;
  v34[0] = 0LL;
  v13 = *(_BYTE *)(a2 + 8) < 2u;
  Object = 0LL;
  if ( !v13 )
    return 3221225485LL;
  v16 = *(_DWORD *)(a2 + 4);
  if ( v16 > 3 )
    return 3221225637LL;
  if ( a4 != 2 )
  {
    v17 = a11;
    *(_BYTE *)(a11 + 25) = *(_BYTE *)(a2 + 9);
LABEL_5:
    if ( *(_BYTE *)(a2 + 8) )
    {
      *(_BYTE *)(v17 + 24) = 1;
      if ( a3 )
        SeGetTokenControlInformation(a1, v17 + 28);
    }
    else
    {
      *(_BYTE *)(v17 + 24) = 0;
      if ( PsIsCurrentThreadInServerSilo() )
      {
        v31 = a1[3];
        Object = 0LL;
        if ( (int)SeQueryServerSiloToken((__int64)a1, (__int64)&Object) >= 0
          && PsIsHostSilo((__int64)Object)
          && v31 == 999 )
        {
          CurrentServerSilo = PsGetCurrentServerSilo();
          v22 = SepCopyClientTokenAndSetSilo(a1, *(unsigned int *)(a2 + 4), CurrentServerSilo, v34);
        }
        else
        {
          v22 = SeCopyClientToken((int)a1, *(_DWORD *)(a2 + 4), v32, 0, 0LL, v34);
        }
      }
      else
      {
        v22 = SeCopyClientToken((int)a1, *(_DWORD *)(a2 + 4), v21, a9, a10, v34);
      }
      v23 = v22;
      a1 = v34[0];
      if ( ObpTraceFlags )
      {
        ObpPushStackInfo((__int64)v34[0] - 48, 0, 1u, 0x746C6644u);
        ObpPushStackInfo((__int64)(a1 - 6), 1, 1u, 0x63436553u);
      }
      if ( v23 < 0 )
        return (unsigned int)v23;
    }
    *(_DWORD *)v17 = 12;
    *(_DWORD *)(v17 + 4) = *(_DWORD *)(a2 + 4);
    *(_BYTE *)(v17 + 8) = *(_BYTE *)(a2 + 8);
    v18 = *(_BYTE *)(a2 + 9);
    goto LABEL_9;
  }
  if ( (int)v16 > (int)a6 )
  {
    if ( !a7 )
      return 3221225637LL;
    v12 = 1;
  }
  if ( a6 <= 1 || a3 && a6 != 3 )
  {
    if ( a7 )
    {
      v17 = a11;
      goto LABEL_30;
    }
    return 3221225637LL;
  }
  v20 = a5 || *(_BYTE *)(a2 + 9);
  v17 = a11;
  *(_BYTE *)(a11 + 25) = v20;
  if ( !v12 )
    goto LABEL_5;
LABEL_30:
  if ( (a1[25] & 0x4000) != 0 )
  {
    v30 = (__int64)a1;
LABEL_44:
    AnonymousToken = SepGetAnonymousToken(v30, &Object);
    goto LABEL_37;
  }
  if ( !a8 )
  {
    v30 = 0LL;
    goto LABEL_44;
  }
  CurrentThread = KeGetCurrentThread();
  if ( (struct _KTHREAD *)a8 == CurrentThread )
    Process = (__int64)CurrentThread->ApcState.Process;
  else
    Process = *(_QWORD *)(a8 + 544);
  v26 = PsReferencePrimaryTokenWithTag(Process, 0x746C6644u);
  v27 = (void *)v26;
  if ( (*(_DWORD *)(v26 + 200) & 0x4000) != 0 )
    v28 = v26;
  else
    v28 = 0LL;
  AnonymousToken = SepGetAnonymousToken(v28, &Object);
  ObfDereferenceObject(v27);
LABEL_37:
  if ( AnonymousToken < 0 )
    return (unsigned int)AnonymousToken;
  a1 = Object;
  result = ObInsertObjectEx(Object, 0LL, 0, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    if ( ObpTraceFlags )
    {
      ObpPushStackInfo((__int64)(a1 - 6), 0, 1u, 0x746C6644u);
      ObpPushStackInfo((__int64)(a1 - 6), 1, 1u, 0x63436553u);
    }
    *(_QWORD *)v17 = 12LL;
    *(_BYTE *)(v17 + 8) = 0;
    v18 = *(_BYTE *)(a2 + 9);
    *(_BYTE *)(v17 + 24) = 0;
LABEL_9:
    *(_QWORD *)(v17 + 16) = a1;
    *(_BYTE *)(v17 + 9) = v18;
    result = 0LL;
    *(_BYTE *)(v17 + 26) = a3;
  }
  return result;
}
