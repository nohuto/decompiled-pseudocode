PROXYPORT *__fastcall PROXYPORT::PROXYPORT(PROXYPORT *this)
{
  int v2; // r15d
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  int v7; // r14d
  PACCESS_TOKEN v8; // rdi
  struct _KPROCESS *CurrentProcess; // rax
  NTSTATUS v10; // esi
  int v11; // eax
  int v12; // edi
  void *v13; // rcx
  PULONG ReturnLength; // [rsp+20h] [rbp-E0h]
  ULONG AllocationAttributes[2]; // [rsp+28h] [rbp-D8h]
  struct _REMOTE_PORT_VIEW *FileHandle; // [rsp+30h] [rbp-D0h]
  void *v18; // [rsp+40h] [rbp-C0h]
  unsigned int *v19; // [rsp+48h] [rbp-B8h]
  unsigned __int8 EffectiveOnly; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int8 CopyOnOpen[3]; // [rsp+51h] [rbp-AFh] BYREF
  PVOID TokenInformation; // [rsp+54h] [rbp-ACh] BYREF
  enum _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned int v24; // [rsp+60h] [rbp-A0h] BYREF
  struct _LUID AuthenticationId; // [rsp+68h] [rbp-98h] BYREF
  PVOID P; // [rsp+70h] [rbp-90h] BYREF
  struct _PORT_VIEW SectionHandle; // [rsp+78h] [rbp-88h] BYREF
  union _LARGE_INTEGER MaximumSize; // [rsp+A8h] [rbp-58h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+B0h] [rbp-50h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+C0h] [rbp-40h] BYREF
  struct _SECURITY_QUALITY_OF_SERVICE v31; // [rsp+F0h] [rbp-10h] BYREF
  wchar_t Dst[264]; // [rsp+100h] [rbp+0h] BYREF

  v24 = 0;
  *(_WORD *)(&v31.EffectiveOnly + 1) = 0;
  HIDWORD(TokenInformation) = 0;
  memset(&SectionHandle, 0, sizeof(SectionHandle));
  DestinationString = 0LL;
  memset_0(Dst, 0, 0x208uLL);
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  *(_QWORD *)this = 0LL;
  if ( ZwQueryInformationProcess(
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         ProcessSessionInformation,
         (char *)&TokenInformation + 4,
         4u,
         0LL) >= 0 )
  {
    v2 = HIDWORD(TokenInformation);
    v31.Length = 0;
    v31.ImpersonationLevel = SecurityImpersonation;
    *(_WORD *)&v31.ContextTrackingMode = 257;
    v3 = Win32AllocPoolZInit(56LL, 1953525831LL);
    *(_QWORD *)this = v3;
    if ( v3 )
    {
      *(_DWORD *)(v3 + 52) = 0;
      *(_QWORD *)(*(_QWORD *)this + 16LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)this + 24LL) = 0LL;
      *(_DWORD *)(*(_QWORD *)this + 48LL) = 0;
      **(_QWORD **)this = 0LL;
      *(_QWORD *)(*(_QWORD *)this + 32LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)this + 40LL) = 0LL;
      MaximumSize.QuadPart = 0x400000LL;
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 512;
      ObjectAttributes.ObjectName = 0LL;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwCreateSection(&SectionHandle.SectionHandle, 6u, &ObjectAttributes, &MaximumSize, 4u, 0x8000000u, 0LL) < 0 )
        goto LABEL_19;
      P = 0LL;
      AuthenticationId = 0LL;
      LODWORD(TokenInformation) = 0;
      if ( !(unsigned __int8)PsIsThreadImpersonating(KeGetCurrentThread())
        || (CopyOnOpen[0] = 0,
            EffectiveOnly = 0,
            ImpersonationLevel = SecurityAnonymous,
            v7 = 1,
            (v8 = PsReferenceImpersonationToken(KeGetCurrentThread(), CopyOnOpen, &EffectiveOnly, &ImpersonationLevel)) == 0LL) )
      {
        CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess(v5, v4, v6);
        v8 = PsReferencePrimaryToken(CurrentProcess);
        v7 = 0;
      }
      v10 = SeQueryAuthenticationIdToken(v8, &AuthenticationId);
      if ( v10 >= 0 )
      {
        v10 = SeQueryInformationToken(v8, TokenIntegrityLevel, &TokenInformation);
        if ( v10 >= 0 )
          v10 = SeQueryInformationToken(v8, TokenUser, &P);
      }
      if ( v7 )
        PsDereferenceImpersonationToken(v8);
      else
        PsDereferencePrimaryToken(v8);
      if ( v10 < 0 )
        goto LABEL_19;
      v11 = (int)TokenInformation;
      SectionHandle.Length = 48;
      SectionHandle.SectionOffset = 0;
      SectionHandle.ViewSize = 0x400000LL;
      if ( (unsigned int)TokenInformation < 0x2000 )
        v11 = 0x2000;
      LODWORD(TokenInformation) = v11;
      LODWORD(FileHandle) = AuthenticationId.HighPart;
      AllocationAttributes[0] = AuthenticationId.LowPart;
      LODWORD(ReturnLength) = v2;
      *(_OWORD *)&SectionHandle.ViewBase = 0LL;
      swprintf_s(
        Dst,
        0x104uLL,
        L"%s_%x_%x_%x_%x",
        L"\\RPC Control\\UmpdProxy",
        ReturnLength,
        *(_QWORD *)AllocationAttributes);
      RtlInitUnicodeString(&DestinationString, Dst);
      v12 = PROXYPORT::SecureConnectPort(
              *(PROXYPORT **)P,
              *(void ***)this,
              &DestinationString,
              &v31,
              &SectionHandle,
              *(void **)P,
              FileHandle,
              &v24,
              v18,
              v19);
      if ( v12 >= 0 )
      {
        *(_QWORD *)(*(_QWORD *)this + 8LL) = SectionHandle.SectionHandle;
        *(_QWORD *)(*(_QWORD *)this + 16LL) = SectionHandle.ViewBase;
        *(_QWORD *)(*(_QWORD *)this + 24LL) = SectionHandle.ViewSize;
        *(_QWORD *)(*(_QWORD *)this + 32LL) = SectionHandle.ViewRemoteBase;
        *(_QWORD *)(*(_QWORD *)this + 40LL) = *(_QWORD *)(*(_QWORD *)this + 16LL) - *(_QWORD *)(*(_QWORD *)this + 32LL);
        *(_DWORD *)(*(_QWORD *)this + 52LL) = 1;
      }
      ExFreePoolWithTag(P, 0);
      if ( v12 < 0 )
      {
LABEL_19:
        if ( SectionHandle.SectionHandle )
          ZwClose(SectionHandle.SectionHandle);
        v13 = **(void ***)this;
        if ( v13 )
          ObfDereferenceObject(v13);
        Win32FreePool(*(void **)this);
        *(_QWORD *)this = 0LL;
      }
    }
  }
  return this;
}
