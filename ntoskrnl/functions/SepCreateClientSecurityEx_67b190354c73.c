__int64 __fastcall SepCreateClientSecurityEx(
        __int64 a1,
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
  __int64 v11; // rsi
  _DWORD *v13; // r14
  unsigned int v14; // eax
  __int64 v15; // rbx
  char v16; // al
  __int64 result; // rax
  bool v18; // al
  __int64 v19; // r8
  struct _KTHREAD *CurrentThread; // rcx
  __int64 Process; // rcx
  ULONG_PTR v22; // rax
  void *v23; // r14
  __int64 v24; // rcx
  int AnonymousToken; // edi
  __int64 v26; // rcx
  __int64 v27; // rdi
  __int64 v28; // r8
  __int64 CurrentServerSilo; // rax
  PVOID v30[5]; // [rsp+40h] [rbp-28h] BYREF
  PVOID Object; // [rsp+78h] [rbp+10h] BYREF

  v11 = a2;
  LOBYTE(a2) = 0;
  v30[0] = 0LL;
  Object = 0LL;
  v13 = (_DWORD *)a1;
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
LABEL_29:
      if ( (v13[50] & 0x4000) != 0 )
      {
        v26 = (__int64)v13;
      }
      else
      {
        if ( a8 )
        {
          CurrentThread = KeGetCurrentThread();
          if ( (struct _KTHREAD *)a8 == CurrentThread )
            Process = (__int64)CurrentThread->ApcState.Process;
          else
            Process = *(_QWORD *)(a8 + 544);
          v22 = PsReferencePrimaryTokenWithTag(Process, 0x746C6644u);
          v23 = (void *)v22;
          if ( (*(_DWORD *)(v22 + 200) & 0x4000) != 0 )
            v24 = v22;
          else
            v24 = 0LL;
          AnonymousToken = SepGetAnonymousToken(v24, &Object);
          ObfDereferenceObject(v23);
LABEL_36:
          if ( AnonymousToken < 0 )
            return (unsigned int)AnonymousToken;
          v13 = Object;
          result = ObInsertObjectEx(Object, 0LL, 0, 0LL, 0LL);
          if ( (int)result >= 0 )
          {
            if ( ObpTraceFlags )
            {
              ObpPushStackInfo((__int64)(v13 - 12), 0, 1u, 0x746C6644u);
              ObpPushStackInfo((__int64)(v13 - 12), 1, 1u, 0x63436553u);
            }
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
      AnonymousToken = SepGetAnonymousToken(v26, &Object);
      goto LABEL_36;
    }
    if ( a7 )
    {
      v15 = a11;
      goto LABEL_29;
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
    v27 = *((_QWORD *)v13 + 3);
    Object = 0LL;
    if ( (int)SeQueryServerSiloToken(v13, &Object) >= 0 && PsIsHostSilo((__int64)Object) && v27 == 999 )
    {
      CurrentServerSilo = PsGetCurrentServerSilo();
      result = SepCopyClientTokenAndSetSilo(v13, *(unsigned int *)(v11 + 4), CurrentServerSilo, v30);
    }
    else
    {
      result = SeCopyClientToken((int)v13, *(_DWORD *)(v11 + 4), v28, 0, 0LL, v30);
    }
  }
  else
  {
    result = SeCopyClientToken((int)v13, *(_DWORD *)(v11 + 4), v19, a9, a10, v30);
  }
  if ( (int)result >= 0 )
  {
    v13 = v30[0];
    if ( ObpTraceFlags )
    {
      ObpPushStackInfo((__int64)v30[0] - 48, 0, 1u, 0x746C6644u);
      ObpPushStackInfo((__int64)(v13 - 12), 1, 1u, 0x63436553u);
    }
    goto LABEL_8;
  }
  return result;
}
