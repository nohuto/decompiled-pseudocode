NTSTATUS __fastcall NtCreateLowBoxToken(
        HANDLE *a1,
        void *a2,
        __int64 a3,
        int a4,
        void *a5,
        unsigned int a6,
        void *Src,
        unsigned int a8,
        unsigned __int64 a9)
{
  int v9; // r14d
  KPROCESSOR_MODE PreviousMode; // r15
  __int64 v13; // rcx
  __int64 v14; // rcx
  unsigned __int64 v15; // rcx
  NTSTATUS result; // eax
  _BYTE *v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  int AppContainerSidType; // ebx
  unsigned int v22; // ebx
  _QWORD *v23; // rsi
  unsigned int v24; // r14d
  void *v25; // r12
  char v26; // si
  struct _KTHREAD *CurrentThread; // rax
  __int64 TokenIntegrity; // rax
  void *v29; // rcx
  int v30; // eax
  signed __int32 v31[8]; // [rsp+0h] [rbp-E8h] BYREF
  PVOID *Object; // [rsp+20h] [rbp-C8h]
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-C0h]
  __int64 v34; // [rsp+30h] [rbp-B8h]
  char v35; // [rsp+50h] [rbp-98h]
  char v36; // [rsp+51h] [rbp-97h]
  PVOID v37; // [rsp+58h] [rbp-90h] BYREF
  __int64 v38; // [rsp+60h] [rbp-88h] BYREF
  PSID Sid; // [rsp+68h] [rbp-80h] BYREF
  __int64 v40; // [rsp+70h] [rbp-78h] BYREF
  int v41; // [rsp+78h] [rbp-70h]
  PVOID Token; // [rsp+80h] [rbp-68h] BYREF
  __int64 v43; // [rsp+88h] [rbp-60h] BYREF
  PVOID P; // [rsp+90h] [rbp-58h] BYREF
  HANDLE Handle; // [rsp+98h] [rbp-50h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v46; // [rsp+A0h] [rbp-48h] BYREF
  __int128 v47; // [rsp+A8h] [rbp-40h] BYREF
  __int64 v48; // [rsp+B8h] [rbp-30h]

  v9 = a4;
  v40 = 0LL;
  v43 = 0x100000000LL;
  P = 0LL;
  Sid = 0LL;
  v46 = 0LL;
  Handle = 0LL;
  v37 = 0LL;
  v36 = 0;
  v35 = 0;
  v41 = 0;
  LOBYTE(v38) = 0;
  v47 = 0LL;
  v48 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v13 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v13 = (__int64)a1;
    *(_QWORD *)v13 = *(_QWORD *)v13;
    v14 = 8LL * a8;
    if ( v14 )
    {
      if ( (a9 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      v15 = a9 + v14;
      if ( v15 > 0x7FFFFFFF0000LL || v15 < a9 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  if ( !a5 )
    return -1073741811;
  if ( !a8 )
  {
    if ( !a9 )
      goto LABEL_13;
    return -1073741776;
  }
  if ( !a9 )
    return -1073741776;
LABEL_13:
  Token = 0LL;
  result = ObReferenceObjectByHandle(a2, 2u, (POBJECT_TYPE)SeTokenObjectType, PreviousMode, &Token, &v46);
  if ( result < 0 )
    return result;
  result = SeCaptureSid(a5, (int)Object, 1, (__int64)&Sid);
  if ( result < 0 )
    return result;
  v17 = Sid;
  result = SepCheckCreateLowBox(Sid);
  AppContainerSidType = result;
  if ( result < 0 )
    return result;
  if ( *((_DWORD *)Token + 48) != 1 && *((int *)Token + 49) < 2 )
  {
    ObfDereferenceObject(Token);
    return -1073741659;
  }
  if ( Src )
    AppContainerSidType = SeCaptureSidAndAttributesArray(
                            Src,
                            0,
                            (int)HandleInformation,
                            v34,
                            (__int64)&v40,
                            (__int64)&v43);
  if ( AppContainerSidType < 0 )
    goto LABEL_73;
  AppContainerSidType = SepCaptureHandles(a8, a9, (__int64 *)&P);
  if ( AppContainerSidType < 0 )
    goto LABEL_73;
  if ( !(unsigned __int8)RtlIsPackageSid(v17) )
    goto LABEL_72;
  if ( ((v17[1] - 8) & 0xFB) != 0 )
  {
    AppContainerSidType = -1073700350;
    goto LABEL_73;
  }
  v22 = 0;
  if ( a6 )
  {
    v23 = (_QWORD *)v40;
    while ( (unsigned __int8)RtlIsCapabilitySid(*v23) )
    {
      v24 = 0;
      if ( v22 )
      {
        v25 = (void *)*v23;
        while ( !RtlEqualSid(v25, *(PSID *)(v40 + 16LL * v24)) )
        {
          if ( ++v24 >= v22 )
            goto LABEL_30;
        }
        AppContainerSidType = -1073741811;
        goto LABEL_73;
      }
LABEL_30:
      ++v22;
      v23 += 2;
      if ( v22 >= a6 )
      {
        v9 = a4;
        goto LABEL_32;
      }
    }
LABEL_72:
    AppContainerSidType = -1073741811;
    goto LABEL_73;
  }
LABEL_32:
  AppContainerSidType = RtlGetAppContainerSidType(v17);
  if ( AppContainerSidType < 0 )
  {
LABEL_73:
    v26 = v35;
    goto LABEL_54;
  }
  if ( v41 == 1 )
  {
    AppContainerSidType = SepCheckCapabilities(Token, (__int64)&v38);
    if ( !(_BYTE)v38 )
    {
      AppContainerSidType = -1073741790;
      goto LABEL_73;
    }
  }
  if ( AppContainerSidType < 0 )
    goto LABEL_73;
  AppContainerSidType = SepDuplicateToken((_DWORD)Token, v9, 0, 1, 0, PreviousMode, 0, (__int64)&v37);
  if ( AppContainerSidType < 0 )
    goto LABEL_73;
  v26 = 1;
  AppContainerSidType = SeSetMandatoryPolicyToken(v37, (char *)&v43 + 4);
  if ( AppContainerSidType < 0 )
    goto LABEL_54;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(*((PERESOURCE *)v37 + 6), 1u);
  _InterlockedOr(v31, 0);
  v36 = 1;
  TokenIntegrity = SepLocateTokenIntegrity((__int64)v37);
  if ( TokenIntegrity )
  {
    v29 = *(void **)TokenIntegrity;
    v30 = *(unsigned __int8 *)(*(_QWORD *)TokenIntegrity + 1LL);
    if ( (_BYTE)v30 )
      *RtlSubAuthoritySid(v29, v30 - 1) = 4096;
    *((_QWORD *)v37 + 9) &= 0x200800000uLL;
    *((_QWORD *)v37 + 10) &= 0x200800000uLL;
    *((_QWORD *)v37 + 8) &= 0x200800000uLL;
    *((_DWORD *)v37 + 50) &= ~0x2000u;
    *((_DWORD *)v37 + 50) |= 0x4000u;
  }
  else
  {
    AppContainerSidType = -1073740730;
  }
  v17 = Sid;
  if ( AppContainerSidType < 0 )
    goto LABEL_54;
  AppContainerSidType = SepSetTokenCapabilities(v37, Sid, v40, a6);
  if ( AppContainerSidType < 0 )
    goto LABEL_54;
  AppContainerSidType = SepSetTokenLowboxNumber(v37, v17);
  if ( AppContainerSidType < 0 )
    goto LABEL_54;
  *((_QWORD *)&v47 + 1) = v17;
  AppContainerSidType = SepSetTokenCachedHandles(v37, &v47, a8, P, Object, HandleInformation, v34);
  if ( AppContainerSidType < 0 )
    goto LABEL_54;
  AppContainerSidType = SepSetTokenPackage(v37, v17);
  if ( AppContainerSidType < 0 )
    goto LABEL_54;
  AppContainerSidType = SepAppendAceToTokenDefaultDacl((__int64)v37, v17);
  if ( AppContainerSidType < 0 )
    goto LABEL_54;
  if ( SepSidInTokenSidHash((_DWORD *)v37 + 202, 0LL, (unsigned __int8 *)SePermissiveLearningModeCapabilitySid, 0, 1, 0) )
  {
    _InterlockedIncrement(&SepLearningModeTokenCount);
    *((_DWORD *)v37 + 50) |= 0x3000000u;
  }
  else
  {
    *((_DWORD *)v37 + 50) &= 0xFCFFFFFF;
    if ( SepSidInTokenSidHash((_DWORD *)v37 + 202, 0LL, (unsigned __int8 *)SeLearningModeLoggingCapabilitySid, 0, 1, 0) )
    {
      _InterlockedIncrement(&SepLearningModeTokenCount);
      *((_DWORD *)v37 + 50) |= 0x1000000u;
    }
  }
  *((_QWORD *)v37 + 7) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
  _InterlockedOr(v31, 0);
  ExReleaseResourceLite(*((PERESOURCE *)v37 + 6));
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  v36 = 0;
  AppContainerSidType = ObInsertObjectEx(v37, 0LL, 0, 0LL, (__int64)&Handle);
  v17 = Sid;
  if ( AppContainerSidType < 0 )
    goto LABEL_53;
  AppContainerSidType = SepAppendAceToTokenObjectAcl(v37, 983551LL, Sid);
  if ( AppContainerSidType >= 0 )
  {
    SepFinalizeTokenAcls(v37);
    ObfDereferenceObject(v37);
LABEL_53:
    v26 = 0;
  }
LABEL_54:
  if ( v36 )
  {
    if ( AppContainerSidType >= 0 )
      *((_QWORD *)v37 + 7) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
    _InterlockedOr(v31, 0);
    ExReleaseResourceLite(*((PERESOURCE *)v37 + 6));
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v17 = Sid;
  }
  if ( AppContainerSidType < 0 )
  {
    if ( v26 )
      ObfDereferenceObject(v37);
    if ( Handle )
      ObCloseHandle(Handle, PreviousMode);
  }
  if ( v40 )
  {
    LOBYTE(v18) = PreviousMode;
    SeReleaseLuidAndAttributesArray(v40, v18);
  }
  if ( v17 )
  {
    LOBYTE(v19) = 1;
    LOBYTE(v18) = PreviousMode;
    SeReleaseSid(v17, v18, v19, v20);
  }
  ObfDereferenceObject(Token);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( AppContainerSidType >= 0 )
    *a1 = Handle;
  return AppContainerSidType;
}
