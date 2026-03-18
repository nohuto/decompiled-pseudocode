/*
 * XREFs of ??0PROXYPORT@@QEAA@_K@Z @ 0x1C012B728
 * Callers:
 *     ?bInit@UMPDOBJ@@QEAAHXZ @ 0x1C012A4FC (-bInit@UMPDOBJ@@QEAAHXZ.c)
 * Callees:
 *     ?SecureConnectPort@PROXYPORT@@QEAAJPEAPEAXPEAU_UNICODE_STRING@@PEAU_SECURITY_QUALITY_OF_SERVICE@@PEAU_PORT_VIEW@@PEAXPEAU_REMOTE_PORT_VIEW@@PEAK46@Z @ 0x1C012BB18 (-SecureConnectPort@PROXYPORT@@QEAAJPEAPEAXPEAU_UNICODE_STRING@@PEAU_SECURITY_QUALITY_OF_SERVICE@.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

PROXYPORT *__fastcall PROXYPORT::PROXYPORT(PROXYPORT *this)
{
  int v2; // r15d
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // r14d
  PACCESS_TOKEN v7; // rdi
  struct _KPROCESS *CurrentProcess; // rax
  NTSTATUS v9; // esi
  int v10; // eax
  int v11; // edi
  void **v12; // rcx
  PULONG ReturnLength; // [rsp+20h] [rbp-E0h]
  ULONG AllocationAttributes[2]; // [rsp+28h] [rbp-D8h]
  struct _REMOTE_PORT_VIEW *FileHandle; // [rsp+30h] [rbp-D0h]
  void *v17; // [rsp+40h] [rbp-C0h]
  unsigned int *v18; // [rsp+48h] [rbp-B8h]
  unsigned __int8 EffectiveOnly; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int8 CopyOnOpen[3]; // [rsp+51h] [rbp-AFh] BYREF
  PVOID TokenInformation; // [rsp+54h] [rbp-ACh] BYREF
  enum _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned int v23; // [rsp+60h] [rbp-A0h] BYREF
  struct _LUID AuthenticationId; // [rsp+68h] [rbp-98h] BYREF
  PVOID P; // [rsp+70h] [rbp-90h] BYREF
  struct _PORT_VIEW SectionHandle; // [rsp+78h] [rbp-88h] BYREF
  union _LARGE_INTEGER MaximumSize; // [rsp+A8h] [rbp-58h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+B0h] [rbp-50h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+C0h] [rbp-40h] BYREF
  struct _SECURITY_QUALITY_OF_SERVICE v30; // [rsp+F0h] [rbp-10h] BYREF
  wchar_t Dst[264]; // [rsp+100h] [rbp+0h] BYREF

  v23 = 0;
  *(_WORD *)(&v30.EffectiveOnly + 1) = 0;
  HIDWORD(TokenInformation) = 0;
  memset(&SectionHandle, 0, sizeof(SectionHandle));
  DestinationString = 0LL;
  memset(Dst, 0, 0x208uLL);
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
    v30.Length = 0;
    v30.ImpersonationLevel = SecurityImpersonation;
    *(_WORD *)&v30.ContextTrackingMode = 257;
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
            v6 = 1,
            (v7 = PsReferenceImpersonationToken(KeGetCurrentThread(), CopyOnOpen, &EffectiveOnly, &ImpersonationLevel)) == 0LL) )
      {
        CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess(v5, v4);
        v7 = PsReferencePrimaryToken(CurrentProcess);
        v6 = 0;
      }
      v9 = SeQueryAuthenticationIdToken(v7, &AuthenticationId);
      if ( v9 >= 0 )
      {
        v9 = SeQueryInformationToken(v7, TokenIntegrityLevel, &TokenInformation);
        if ( v9 >= 0 )
          v9 = SeQueryInformationToken(v7, TokenUser, &P);
      }
      if ( v6 )
        PsDereferenceImpersonationToken(v7);
      else
        PsDereferencePrimaryToken(v7);
      if ( v9 < 0 )
        goto LABEL_19;
      v10 = (int)TokenInformation;
      SectionHandle.Length = 48;
      SectionHandle.SectionOffset = 0;
      SectionHandle.ViewSize = 0x400000LL;
      if ( (unsigned int)TokenInformation < 0x2000 )
        v10 = 0x2000;
      LODWORD(TokenInformation) = v10;
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
      v11 = PROXYPORT::SecureConnectPort(
              *(PROXYPORT **)P,
              *(void ***)this,
              &DestinationString,
              &v30,
              &SectionHandle,
              *(void **)P,
              FileHandle,
              &v23,
              v17,
              v18);
      if ( v11 >= 0 )
      {
        *(_QWORD *)(*(_QWORD *)this + 8LL) = SectionHandle.SectionHandle;
        *(_QWORD *)(*(_QWORD *)this + 16LL) = SectionHandle.ViewBase;
        *(_QWORD *)(*(_QWORD *)this + 24LL) = SectionHandle.ViewSize;
        *(_QWORD *)(*(_QWORD *)this + 32LL) = SectionHandle.ViewRemoteBase;
        *(_QWORD *)(*(_QWORD *)this + 40LL) = *(_QWORD *)(*(_QWORD *)this + 16LL) - *(_QWORD *)(*(_QWORD *)this + 32LL);
        *(_DWORD *)(*(_QWORD *)this + 52LL) = 1;
      }
      ExFreePoolWithTag(P, 0);
      if ( v11 < 0 )
      {
LABEL_19:
        if ( SectionHandle.SectionHandle )
          ZwClose(SectionHandle.SectionHandle);
        v12 = *(void ***)this;
        if ( **(_QWORD **)this )
        {
          ObfDereferenceObject(**(PVOID **)this);
          v12 = *(void ***)this;
        }
        Win32FreePool(v12);
        *(_QWORD *)this = 0LL;
      }
    }
  }
  return this;
}
