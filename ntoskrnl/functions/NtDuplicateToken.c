NTSTATUS __stdcall NtDuplicateToken(
        HANDLE ExistingTokenHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        BOOLEAN EffectiveOnly,
        TOKEN_TYPE TokenType,
        PHANDLE NewTokenHandle)
{
  BOOLEAN v6; // r13
  unsigned __int8 PreviousMode; // bl
  NTSTATUS result; // eax
  _DWORD *v12; // r15
  struct _KTHREAD *CurrentThread; // rdi
  __int64 Process; // rsi
  _QWORD *v15; // r13
  _QWORD *v16; // rax
  _QWORD *v17; // rdi
  char v18; // si
  _KPROCESS *v19; // rdx
  signed __int64 v20; // rax
  PVOID v21; // r8
  signed __int64 v22; // rtt
  int v23; // ecx
  NTSTATUS inserted; // ebx
  _QWORD *v25; // rdi
  __int64 v26; // rcx
  void *v27; // rcx
  struct _KTHREAD *v28; // rax
  PERESOURCE *v29; // rdi
  signed __int64 *v30; // rdi
  PVOID TokenInformation; // [rsp+40h] [rbp-D8h] BYREF
  PVOID v32; // [rsp+48h] [rbp-D0h]
  PVOID v33[2]; // [rsp+50h] [rbp-C8h]
  __int64 v34; // [rsp+60h] [rbp-B8h]
  PVOID v35; // [rsp+68h] [rbp-B0h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+70h] [rbp-A8h] BYREF
  PVOID Token; // [rsp+78h] [rbp-A0h] BYREF
  __int64 v38; // [rsp+80h] [rbp-98h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+88h] [rbp-90h]
  __int64 v40; // [rsp+90h] [rbp-88h] BYREF
  int v41; // [rsp+98h] [rbp-80h]
  struct _KTHREAD *v42; // [rsp+A0h] [rbp-78h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+A8h] [rbp-70h] BYREF
  __int128 v44; // [rsp+C8h] [rbp-50h]
  __int128 v45; // [rsp+D8h] [rbp-40h]

  v6 = EffectiveOnly;
  v40 = 0LL;
  v41 = 0;
  WORD1(TokenInformation) = 0;
  v38 = 0LL;
  HandleInformation = 0LL;
  *(_OWORD *)v33 = 0LL;
  BYTE1(TokenInformation) = 0;
  SubjectContext.ClientToken = 0LL;
  *(_QWORD *)&SubjectContext.ImpersonationLevel = 0LL;
  SubjectContext.ProcessAuditId = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( (unsigned int)(TokenType - 1) > 1 )
      return -1073741811;
    v26 = (__int64)NewTokenHandle;
    if ( (unsigned __int64)NewTokenHandle >= 0x7FFFFFFF0000LL )
      v26 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v26 = *(_QWORD *)v26;
  }
  result = SeCaptureSecurityQos(ObjectAttributes, PreviousMode, (char *)&TokenInformation + 2, &v40);
  if ( result >= 0 )
  {
    result = SeCaptureObjectAttributeSecurityDescriptorPresent(
               (__int64)ObjectAttributes,
               PreviousMode,
               (_BYTE *)&TokenInformation + 3);
    if ( result >= 0 )
    {
      Token = 0LL;
      result = ObReferenceObjectByHandle(
                 ExistingTokenHandle,
                 2u,
                 (POBJECT_TYPE)SeTokenObjectType,
                 PreviousMode,
                 &Token,
                 &HandleInformation);
      v12 = Token;
      if ( result >= 0 )
      {
        if ( DesiredAccess )
        {
          CurrentThread = KeGetCurrentThread();
          Process = (__int64)CurrentThread->ApcState.Process;
          v34 = *(_QWORD *)(Process + 1088);
          if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
          {
            v42 = KeGetCurrentThread();
            --v42->KernelApcDisable;
            BugCheckParameter2 = (ULONG_PTR)&CurrentThread[1].WaitBlockList;
            ExAcquirePushLockSharedEx((ULONG_PTR)&CurrentThread[1].WaitBlockList, 0LL);
            if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
            {
              v15 = (_QWORD *)(*(_QWORD *)((char *)&CurrentThread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
              ObfReferenceObjectWithTag(v15, 0x75536553u);
              LODWORD(v33[0]) = *((_DWORD *)&CurrentThread[1].0 + 1) & 3;
            }
            else
            {
              v15 = 0LL;
            }
            v30 = (signed __int64 *)BugCheckParameter2;
            if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
              ExfReleasePushLockShared(v30);
            KeAbPostRelease((ULONG_PTR)v30);
            KeLeaveCriticalRegionThread((__int64)v42);
          }
          else
          {
            v15 = 0LL;
          }
          v32 = v15;
          v16 = (_QWORD *)PsReferencePrimaryTokenWithTag(Process, 0x75536553u);
          v17 = v16;
          v33[1] = v16;
          if ( HIDWORD(NlsMbOemCodePageTag) )
          {
            if ( v16 )
            {
              _InterlockedIncrement((volatile signed __int32 *)(v16[143] + 284LL));
              v17 = v33[1];
              if ( v33[1] == (PVOID)SepTokenLeakToken )
                __debugbreak();
              v15 = v32;
            }
            if ( v15 )
            {
              _InterlockedIncrement((volatile signed __int32 *)(v15[143] + 284LL));
              v15 = v32;
              if ( v32 == (PVOID)SepTokenLeakToken )
                __debugbreak();
              v17 = v33[1];
            }
          }
          SubjectContext.PrimaryToken = v17;
          v44 = 0LL;
          v45 = 0LL;
          v18 = 0;
          LOBYTE(TokenInformation) = 0;
          if ( PreviousMode )
          {
            v27 = v17;
            if ( v15 )
              v27 = v15;
            if ( SeQueryInformationToken(v27, MaxTokenInfoClass, &TokenInformation) >= 0 && !(_BYTE)TokenInformation )
              v18 = 1;
            if ( v18 != 1 && (unsigned __int8)RtlIsSandboxedToken(&SubjectContext) )
            {
              v28 = KeGetCurrentThread();
              --v28->KernelApcDisable;
              v29 = (PERESOURCE *)v33[1];
              ExAcquireResourceSharedLite(*((PERESOURCE *)v33[1] + 6), 1u);
              SepNewTokenAsRestrictedAsProcessToken(v12, v29, (_BYTE *)&TokenInformation + 1);
              ExReleaseResourceLite(v29[6]);
              KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
              v17 = v33[1];
              v15 = v32;
            }
          }
          if ( HIDWORD(NlsMbOemCodePageTag) )
          {
            if ( v17 )
            {
              _InterlockedDecrement((volatile signed __int32 *)(v17[143] + 284LL));
              if ( v33[1] == (PVOID)SepTokenLeakToken )
                __debugbreak();
              v15 = v32;
            }
            if ( v15 )
            {
              _InterlockedDecrement((volatile signed __int32 *)(v15[143] + 284LL));
              if ( v32 == (PVOID)SepTokenLeakToken )
                __debugbreak();
            }
          }
          v19 = KeGetCurrentThread()->ApcState.Process;
          _m_prefetchw(&v19[1].Affinity.StaticBitmap[5]);
          v20 = v19[1].Affinity.StaticBitmap[5];
          v21 = v33[1];
          if ( ((unsigned __int64)v33[1] ^ v20) >= 0xF )
          {
LABEL_57:
            ObfDereferenceObjectWithTag(v21, 0x75536553u);
          }
          else
          {
            while ( 1 )
            {
              v22 = v20;
              v20 = _InterlockedCompareExchange64(
                      (volatile signed __int64 *)&v19[1].Affinity.StaticBitmap[5],
                      v20 + 1,
                      v20);
              if ( v22 == v20 )
                break;
              v21 = v33[1];
              if ( ((unsigned __int64)v33[1] ^ v20) >= 0xF )
                goto LABEL_57;
            }
            if ( ObpTraceFlags )
              ObpPushStackInfo((__int64)v33[1] - 48, 0, 1u, 0x75536553u);
          }
          if ( v32 )
            ObfDereferenceObjectWithTag(v32, 0x75536553u);
          v6 = EffectiveOnly;
        }
        if ( BYTE2(TokenInformation) )
          v23 = HIDWORD(v40);
        else
          v23 = v12[49];
        if ( v12[48] == 2
          && (TokenType == TokenImpersonation && v23 > v12[49] || TokenType == TokenPrimary && (int)v12[49] < 2) )
        {
          ObfDereferenceObject(v12);
          return -1073741659;
        }
        else
        {
          v35 = 0LL;
          inserted = SepDuplicateToken(
                       (_DWORD)v12,
                       (_DWORD)ObjectAttributes,
                       v6,
                       TokenType,
                       v23,
                       PreviousMode,
                       0,
                       (__int64)&v35);
          if ( inserted >= 0 )
          {
            inserted = ObInsertObjectEx(v35, 0LL, 0, 0LL, (__int64)&v38);
            if ( inserted >= 0 )
            {
              if ( !BYTE3(TokenInformation) )
              {
                v25 = v35;
                if ( (int)SepAppendAceToTokenObjectAcl((__int64)v35, 8, SeAliasAdminsSid) >= 0 )
                  SepSetProcessTrustLabelAceForToken(v25);
              }
              ObfDereferenceObject(v35);
            }
          }
          ObfDereferenceObject(v12);
          if ( inserted >= 0 )
            *NewTokenHandle = (HANDLE)v38;
          return inserted;
        }
      }
    }
  }
  return result;
}
