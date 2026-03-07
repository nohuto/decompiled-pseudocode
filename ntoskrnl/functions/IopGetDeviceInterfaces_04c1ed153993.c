__int64 __fastcall IopGetDeviceInterfaces(int *a1, const UNICODE_STRING *a2, int a3, char a4, wchar_t **a5, _DWORD *a6)
{
  _DWORD *v6; // r12
  PCUNICODE_STRING v7; // r13
  PVOID v8; // r14
  bool v9; // si
  WCHAR *v10; // r15
  wchar_t *v11; // rdi
  int MatchingFilteredDeviceInterfaceList; // ebx
  struct _KTHREAD *CurrentThread; // rax
  int v14; // r8d
  int v15; // r9d
  int v16; // eax
  int ObjectProperty; // eax
  int v18; // r9d
  PVOID v19; // r14
  PACCESS_TOKEN ClientToken; // rax
  unsigned int v21; // eax
  unsigned int v22; // r12d
  wchar_t *v23; // rax
  unsigned int v24; // r15d
  size_t v25; // rcx
  wchar_t *v26; // r15
  __int64 v27; // rcx
  wchar_t *Pool2; // rax
  __int64 *v30; // rsi
  __int64 v31; // rax
  __int64 v32; // rax
  int v33; // ebx
  int v34; // ecx
  unsigned int cchDest; // [rsp+60h] [rbp-A0h] BYREF
  char cchDest_4; // [rsp+64h] [rbp-9Ch] BYREF
  char cchDest_5; // [rsp+65h] [rbp-9Bh] BYREF
  char cchDest_6; // [rsp+66h] [rbp-9Ah]
  PCUNICODE_STRING String1; // [rsp+68h] [rbp-98h]
  __int64 v40; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v41; // [rsp+78h] [rbp-88h]
  _DWORD v42[3]; // [rsp+7Ch] [rbp-84h] BYREF
  PVOID P; // [rsp+88h] [rbp-78h] BYREF
  __int64 v44; // [rsp+90h] [rbp-70h]
  int v45; // [rsp+98h] [rbp-68h]
  HANDLE v46; // [rsp+A0h] [rbp-60h] BYREF
  size_t pcchRemaining; // [rsp+A8h] [rbp-58h] BYREF
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+B0h] [rbp-50h] BYREF
  HANDLE Handle; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v50; // [rsp+C0h] [rbp-40h] BYREF
  wchar_t **v51; // [rsp+C8h] [rbp-38h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v53; // [rsp+F0h] [rbp-10h]
  UNICODE_STRING DestinationString; // [rsp+F8h] [rbp-8h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT v55; // [rsp+108h] [rbp+8h] BYREF
  wchar_t v56[40]; // [rsp+130h] [rbp+30h] BYREF

  v6 = a6;
  v7 = a2;
  String1 = a2;
  v45 = a3;
  v53 = 0LL;
  v8 = 0LL;
  *a5 = 0LL;
  cchDest_6 = a4;
  v9 = 0;
  v51 = a5;
  v10 = 0LL;
  v44 = (__int64)a6;
  v11 = 0LL;
  P = 0LL;
  memset(v42, 0, sizeof(v42));
  v50 = 0LL;
  cchDest_4 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  Handle = 0LL;
  v46 = 0LL;
  cchDest = 0;
  v40 = 0LL;
  ppszDestEnd = 0LL;
  pcchRemaining = 0LL;
  v41 = 0;
  DestinationString = 0LL;
  MatchingFilteredDeviceInterfaceList = PnpStringFromGuid(a1, v56);
  if ( MatchingFilteredDeviceInterfaceList < 0 )
    goto LABEL_85;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
  v16 = CmOpenInterfaceClassRegKey(PiPnpRtlCtx, (unsigned int)v56, v14, v15, 983103, 0, (__int64)&Handle, 0LL);
  MatchingFilteredDeviceInterfaceList = v16;
  if ( v16 == -1073741772 || v16 == -1073741766 )
  {
    cchDest = 1;
    Pool2 = (wchar_t *)ExAllocatePool2(256LL, 2LL, 538996816LL);
    v11 = Pool2;
    if ( Pool2 )
    {
      *Pool2 = 0;
      MatchingFilteredDeviceInterfaceList = 0;
    }
    else
    {
      MatchingFilteredDeviceInterfaceList = -1073741670;
    }
    goto LABEL_26;
  }
  if ( v16 < 0 )
    goto LABEL_26;
  ObjectProperty = PnpGetObjectProperty(
                     0x47706E50u,
                     (__int64)Handle,
                     0LL,
                     (__int64)&DEVPKEY_DeviceInterfaceClass_DefaultInterface,
                     (__int64)&v40,
                     (__int64)&P,
                     (__int64)v42,
                     0);
  MatchingFilteredDeviceInterfaceList = ObjectProperty;
  if ( ObjectProperty < 0 )
  {
    if ( ObjectProperty != -1073741275 && ObjectProperty != -1073741772 && ObjectProperty != -1073741766 )
      goto LABEL_47;
    v19 = P;
    goto LABEL_8;
  }
  v9 = 0;
  if ( (_DWORD)v40 != 18 )
  {
    MatchingFilteredDeviceInterfaceList = -1073741823;
    goto LABEL_25;
  }
  v19 = P;
  if ( (int)CmOpenDeviceInterfaceRegKey(PiPnpRtlCtx, (_DWORD)P, 48, v18, 131097, 0, (__int64)&v46, 0LL) < 0 )
    goto LABEL_69;
  if ( !String1 )
    goto LABEL_89;
  HIDWORD(v40) = 400;
  v32 = ExAllocatePool2(256LL, 400LL, 538996816LL);
  *(_QWORD *)&v42[1] = v32;
  v10 = (WCHAR *)v32;
  if ( !v32 )
  {
    MatchingFilteredDeviceInterfaceList = -1073741670;
LABEL_25:
    v7 = String1;
    goto LABEL_26;
  }
  if ( (int)PnpGetObjectProperty(
              PiPnpRtlCtx,
              (_DWORD)v19,
              3,
              (_DWORD)v46,
              0LL,
              (__int64)&DEVPKEY_Device_InstanceId,
              (__int64)&v40,
              v32,
              HIDWORD(v40),
              (__int64)&v40 + 4,
              0) >= 0
    && (_DWORD)v40 == 18
    && RtlInitUnicodeStringEx(&DestinationString, v10) >= 0
    && RtlEqualUnicodeString(String1, &DestinationString, 1u) )
  {
LABEL_89:
    if ( (v45 & 1) != 0
      || (HIDWORD(v40) = 1,
          (int)PnpGetObjectProperty(
                 PiPnpRtlCtx,
                 (_DWORD)v19,
                 3,
                 (_DWORD)v46,
                 0LL,
                 (__int64)&DEVPKEY_DeviceInterface_Enabled,
                 (__int64)&v40,
                 (__int64)&cchDest_4,
                 1,
                 (__int64)&v40 + 4,
                 0) >= 0)
      && v40 == 0x100000011LL
      && cchDest_4 == -1 )
    {
      cchDest_5 = 0;
      memset(&v55, 0, sizeof(v55));
      SeCaptureSubjectContext(&v55);
      v33 = PiPnpRtlApplyMandatoryFilters(PiPnpRtlCtx, (int)v19, 3, (int)v46, (ULONG)&v55, (__int64)&cchDest_5);
      SeReleaseSubjectContext(&v55);
      if ( v33 >= 0 )
        v9 = cchDest_5 != 0;
    }
  }
  ZwClose(v46);
  if ( !v9 )
  {
LABEL_69:
    ExFreePoolWithTag(v19, 0);
    v19 = 0LL;
    v42[0] = 0;
    P = 0LL;
  }
LABEL_8:
  if ( String1 )
  {
    MatchingFilteredDeviceInterfaceList = PnpUnicodeStringToWstr(&v50, 0LL, String1);
    if ( MatchingFilteredDeviceInterfaceList < 0 )
      goto LABEL_47;
  }
  ClientToken = SubjectContext.ClientToken;
  if ( v9 )
    ClientToken = v19;
  SubjectContext.ClientToken = ClientToken;
  SeCaptureSubjectContext((PSECURITY_SUBJECT_CONTEXT)&SubjectContext.ImpersonationLevel);
  v21 = 4096;
  cchDest = 4096;
  if ( v9 )
  {
    v34 = v42[0] >> 1;
    if ( v42[0] >> 1 >= 0x1000u )
    {
      v21 = v34 + 1;
      cchDest = v34 + 1;
    }
  }
  MatchingFilteredDeviceInterfaceList = -1073741789;
  v22 = 0;
  while ( 1 )
  {
    if ( v22 >= 5 )
      goto LABEL_20;
    if ( v11 )
    {
      ExFreePoolWithTag(v11, 0);
      v21 = cchDest;
    }
    v23 = (wchar_t *)ExAllocatePool2(256LL, 2LL * v21, 538996816LL);
    v11 = v23;
    if ( !v23 )
    {
      MatchingFilteredDeviceInterfaceList = -1073741670;
LABEL_20:
      v24 = v41;
      goto LABEL_21;
    }
    v24 = cchDest;
    v41 = cchDest;
    v25 = cchDest;
    if ( v9 )
      break;
    v26 = v23;
LABEL_19:
    pcchRemaining = v25;
    ppszDestEnd = v26;
    MatchingFilteredDeviceInterfaceList = CmGetMatchingFilteredDeviceInterfaceList(
                                            *(__int64 *)&PiPnpRtlCtx,
                                            (__int64)v56,
                                            v50,
                                            (v45 & 1) == 0,
                                            (__int64)IopDeviceInterfaceFilterCallback,
                                            (__int64)&SubjectContext,
                                            (__int64)v26,
                                            v25,
                                            (__int64)&cchDest,
                                            0);
    ++v22;
    v21 = v26 - v11 + cchDest;
    cchDest = v21;
    if ( MatchingFilteredDeviceInterfaceList != -1073741789 )
      goto LABEL_20;
  }
  MatchingFilteredDeviceInterfaceList = RtlStringCchCopyExW(
                                          v23,
                                          cchDest,
                                          (NTSTRSAFE_PCWSTR)v19,
                                          &ppszDestEnd,
                                          &pcchRemaining,
                                          0x800u);
  if ( MatchingFilteredDeviceInterfaceList < 0 )
    goto LABEL_21;
  if ( pcchRemaining )
  {
    v25 = pcchRemaining - 1;
    v26 = ppszDestEnd + 1;
    goto LABEL_19;
  }
  MatchingFilteredDeviceInterfaceList = -1073741823;
LABEL_21:
  SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)&SubjectContext.ImpersonationLevel);
  if ( MatchingFilteredDeviceInterfaceList < 0 )
    goto LABEL_24;
  if ( cchDest )
    goto LABEL_23;
  cchDest = 1;
  if ( !v24 )
  {
    ExFreePoolWithTag(v11, 0);
    v11 = (wchar_t *)ExAllocatePool2(256LL, 2LL * cchDest, 538996816LL);
    if ( !v11 )
    {
      MatchingFilteredDeviceInterfaceList = -1073741670;
      goto LABEL_24;
    }
  }
  *v11 = 0;
LABEL_23:
  if ( cchDest_6 )
  {
LABEL_24:
    v10 = *(WCHAR **)&v42[1];
    v6 = (_DWORD *)v44;
    goto LABEL_25;
  }
  v30 = (__int64 *)v11;
  if ( *v11 )
  {
    do
    {
      MatchingFilteredDeviceInterfaceList = CmSetDeviceInterfacePathFormat(v27, v30, 1);
      if ( MatchingFilteredDeviceInterfaceList < 0 )
        break;
      v31 = -1LL;
      do
        ++v31;
      while ( *((_WORD *)v30 + v31) );
      v30 = (__int64 *)((char *)v30 + 2 * v31 + 2);
    }
    while ( *(_WORD *)v30 );
  }
  v10 = *(WCHAR **)&v42[1];
  v6 = (_DWORD *)v44;
LABEL_47:
  v7 = String1;
LABEL_26:
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( MatchingFilteredDeviceInterfaceList >= 0 )
  {
    *v51 = v11;
    if ( v6 )
      *v6 = 2 * cchDest;
    v8 = P;
    v11 = 0LL;
    goto LABEL_30;
  }
  v8 = P;
LABEL_85:
  *v51 = 0LL;
  if ( v6 )
    *v6 = 0;
LABEL_30:
  if ( Handle )
    ZwClose(Handle);
  PnpUnicodeStringToWstrFree(v50, v7);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  return (unsigned int)MatchingFilteredDeviceInterfaceList;
}
