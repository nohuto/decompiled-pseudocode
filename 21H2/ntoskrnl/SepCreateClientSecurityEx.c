/*
 * XREFs of SepCreateClientSecurityEx @ 0x140652F80
 * Callers:
 *     SeCreateClientSecurityFromSubjectContextEx @ 0x1405972F0 (SeCreateClientSecurityFromSubjectContextEx.c)
 *     SeCreateClientSecurityFromSubjectContext @ 0x14061D680 (SeCreateClientSecurityFromSubjectContext.c)
 *     SeCreateClientSecurity @ 0x140652B90 (SeCreateClientSecurity.c)
 *     SeCreateClientSecurityEx @ 0x140652D80 (SeCreateClientSecurityEx.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     PsGetCurrentServerSilo @ 0x14027DF30 (PsGetCurrentServerSilo.c)
 *     SepGetAnonymousToken @ 0x1402A509C (SepGetAnonymousToken.c)
 *     PsIsCurrentThreadInServerSilo @ 0x14035BF80 (PsIsCurrentThreadInServerSilo.c)
 *     PsIsHostSilo @ 0x14035F7D0 (PsIsHostSilo.c)
 *     SeQueryServerSiloToken @ 0x14060EDA0 (SeQueryServerSiloToken.c)
 *     SeCopyClientToken @ 0x140656B24 (SeCopyClientToken.c)
 *     ObInsertObjectEx @ 0x14071BE00 (ObInsertObjectEx.c)
 *     PsReferencePrimaryToken @ 0x14071E0E0 (PsReferencePrimaryToken.c)
 *     SepCopyClientTokenAndSetSilo @ 0x14091C92C (SepCopyClientTokenAndSetSilo.c)
 *     SeGetTokenControlInformation @ 0x140922C44 (SeGetTokenControlInformation.c)
 */

__int64 __fastcall SepCreateClientSecurityEx(
        __int64 a1,
        __int64 a2,
        char a3,
        int a4,
        char a5,
        unsigned int a6,
        char a7,
        struct _KTHREAD *a8,
        unsigned __int8 a9,
        __int64 a10,
        __int64 a11)
{
  __int64 v11; // rdi
  PADAPTER_OBJECT v13; // rbp
  unsigned int v14; // eax
  __int64 v15; // rbx
  char v16; // al
  __int64 result; // rax
  bool v18; // al
  int v19; // r8d
  struct _KTHREAD *CurrentThread; // rcx
  struct _KPROCESS *Process; // rcx
  struct _DMA_ADAPTER *v22; // rax
  struct _DMA_ADAPTER *v23; // r14
  __int64 v24; // rcx
  int AnonymousToken; // ebp
  __int64 v26; // rcx
  _DMA_OPERATIONS *DmaOperations; // r14
  int v28; // r8d
  __int64 CurrentServerSilo; // rax
  struct _DMA_ADAPTER *v30; // [rsp+40h] [rbp-28h] BYREF
  __int64 v31[4]; // [rsp+48h] [rbp-20h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+78h] [rbp+10h] BYREF

  v11 = a2;
  LOBYTE(a2) = 0;
  v30 = 0LL;
  DmaAdapter = 0LL;
  v13 = (PADAPTER_OBJECT)a1;
  if ( *(_BYTE *)(v11 + 8) >= 2u )
    return 3221225485LL;
  v14 = *(_DWORD *)(v11 + 4);
  if ( v14 > 3 )
    return 3221225637LL;
  if ( a4 == 2 )
  {
    a1 = a6;
    if ( (int)v14 > (int)a6 )
    {
      if ( !a7 )
        return 3221225637LL;
      LOBYTE(a2) = 1;
    }
    if ( a6 > 1 && (!a3 || a6 == 3) )
    {
      v18 = a5 || *(_BYTE *)(v11 + 9);
      v15 = a11;
      *(_BYTE *)(a11 + 25) = v18;
      if ( !(_BYTE)a2 )
        goto LABEL_5;
LABEL_28:
      if ( ((__int64)v13[12].DmaOperations & 0x4000) != 0 )
      {
        v26 = (__int64)v13;
      }
      else
      {
        if ( a8 )
        {
          CurrentThread = KeGetCurrentThread();
          if ( a8 == CurrentThread )
            Process = CurrentThread->ApcState.Process;
          else
            Process = a8->Process;
          v22 = (struct _DMA_ADAPTER *)PsReferencePrimaryToken(Process);
          v23 = v22;
          if ( ((__int64)v22[12].DmaOperations & 0x4000) != 0 )
            v24 = (__int64)v22;
          else
            v24 = 0LL;
          AnonymousToken = SepGetAnonymousToken(v24, &DmaAdapter);
          HalPutDmaAdapter(v23);
LABEL_35:
          if ( AnonymousToken < 0 )
            return (unsigned int)AnonymousToken;
          v13 = DmaAdapter;
          result = ObInsertObjectEx(DmaAdapter, 0LL, 0, 0LL, 0LL);
          if ( (int)result >= 0 )
          {
            *(_QWORD *)v15 = 12LL;
            *(_BYTE *)(v15 + 8) = 0;
            v16 = *(_BYTE *)(v11 + 9);
            *(_BYTE *)(v15 + 24) = 0;
            goto LABEL_9;
          }
          return result;
        }
        v26 = 0LL;
      }
      AnonymousToken = SepGetAnonymousToken(v26, &DmaAdapter);
      goto LABEL_35;
    }
    if ( a7 )
    {
      v15 = a11;
      goto LABEL_28;
    }
    return 3221225637LL;
  }
  v15 = a11;
  *(_BYTE *)(a11 + 25) = *(_BYTE *)(v11 + 9);
LABEL_5:
  if ( *(_BYTE *)(v11 + 8) )
  {
    *(_BYTE *)(v15 + 24) = 1;
    if ( a3 )
      SeGetTokenControlInformation(v13, v15 + 28);
LABEL_8:
    *(_DWORD *)v15 = 12;
    *(_DWORD *)(v15 + 4) = *(_DWORD *)(v11 + 4);
    *(_BYTE *)(v15 + 8) = *(_BYTE *)(v11 + 8);
    v16 = *(_BYTE *)(v11 + 9);
LABEL_9:
    *(_QWORD *)(v15 + 16) = v13;
    *(_BYTE *)(v15 + 9) = v16;
    result = 0LL;
    *(_BYTE *)(v15 + 26) = a3;
    return result;
  }
  *(_BYTE *)(v15 + 24) = 0;
  if ( PsIsCurrentThreadInServerSilo(a1, a2) )
  {
    DmaOperations = v13[1].DmaOperations;
    v31[0] = 0LL;
    if ( (int)SeQueryServerSiloToken((__int64)v13, (__int64)v31) >= 0
      && PsIsHostSilo(v31[0])
      && DmaOperations == (_DMA_OPERATIONS *)999 )
    {
      CurrentServerSilo = PsGetCurrentServerSilo();
      result = SepCopyClientTokenAndSetSilo(v13, *(unsigned int *)(v11 + 4), CurrentServerSilo, &v30);
    }
    else
    {
      result = SeCopyClientToken((_DWORD)v13, *(_DWORD *)(v11 + 4), v28, 0, 0LL, (__int64)&v30);
    }
  }
  else
  {
    result = SeCopyClientToken((_DWORD)v13, *(_DWORD *)(v11 + 4), v19, a9, a10, (__int64)&v30);
  }
  v13 = v30;
  if ( (int)result >= 0 )
    goto LABEL_8;
  return result;
}
