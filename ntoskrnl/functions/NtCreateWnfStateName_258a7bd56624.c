__int64 __fastcall NtCreateWnfStateName(
        __int64 *a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned int a6,
        struct _EX_RUNDOWN_REF *a7)
{
  char v7; // bl
  unsigned __int64 v11; // r8
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // r14
  __int64 v14; // rdx
  __int64 v15; // rcx
  BOOL v16; // eax
  int v17; // eax
  unsigned __int64 v18; // rbx
  struct _KPROCESS *Process; // rdi
  int NameInstance; // [rsp+34h] [rbp-B4h]
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+40h] [rbp-A8h] BYREF
  unsigned __int64 v23; // [rsp+48h] [rbp-A0h] BYREF
  int v24[2]; // [rsp+50h] [rbp-98h] BYREF
  __int128 *v25; // [rsp+58h] [rbp-90h]
  struct _EX_RUNDOWN_REF *v26[2]; // [rsp+60h] [rbp-88h] BYREF
  _DWORD v27[2]; // [rsp+70h] [rbp-78h] BYREF
  __int128 *v28; // [rsp+78h] [rbp-70h]
  PSECURITY_DESCRIPTOR v29; // [rsp+80h] [rbp-68h]
  __int128 v30; // [rsp+98h] [rbp-50h] BYREF

  v7 = a4;
  v11 = a5;
  v26[1] = a7;
  v30 = 0LL;
  v23 = 0LL;
  v26[0] = 0LL;
  v27[1] = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  *(_QWORD *)v24 = 0LL;
  SecurityDescriptor = 0LL;
  v25 = (__int128 *)a5;
  if ( !PreviousMode )
  {
    LOBYTE(a4) = 1;
    NameInstance = SeCaptureSecurityDescriptor((_DWORD)a7, 0, 1, a4, (__int64)&SecurityDescriptor);
    if ( NameInstance < 0 )
      goto LABEL_33;
    goto LABEL_13;
  }
  v14 = 0x7FFFFFFF0000LL;
  v15 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
    v15 = (__int64)a1;
  *(_BYTE *)v15 = *(_BYTE *)v15;
  *(_BYTE *)(v15 + 7) = *(_BYTE *)(v15 + 7);
  if ( a5 )
  {
    if ( a5 < 0x7FFFFFFF0000LL )
      v14 = a5;
    v30 = *(_OWORD *)v14;
    v25 = &v30;
  }
  if ( !a7 )
  {
    NameInstance = -1073741819;
    goto LABEL_33;
  }
  LOBYTE(a4) = 1;
  LOBYTE(v14) = PreviousMode;
  NameInstance = SeCaptureSecurityDescriptor((_DWORD)a7, v14, 1, a4, (__int64)&SecurityDescriptor);
  if ( NameInstance >= 0 )
  {
LABEL_13:
    ExpWnfSpecializeSecurityDescriptor(SecurityDescriptor);
    v16 = a2 < 2 || a2 - 2 <= 1;
    if ( !v16
      || !a2
      || (a3 < 4 || a3 - 4 < 2 ? (v17 = 1) : (v17 = 0),
          !v17 || v7 && ((a3 & 0xFFFFFFFB) != 0 || a2 != 1) || a6 > 0x1000 || a3 == 3 && a2 == 3 || a3 == 5) )
    {
      NameInstance = -1073741811;
    }
    else if ( a2 == 3 || SeSinglePrivilegeCheck(SeCreatePermanentPrivilege, PreviousMode) )
    {
      LOBYTE(a4) = v7;
      NameInstance = ExpWnfGenerateStateName(&v23, a2, a3, a4);
      if ( NameInstance >= 0 )
      {
        v18 = v23;
        *a1 = v23 ^ 0x41C64E6DA3BC0074LL;
        v27[0] = a6;
        v28 = v25;
        v29 = SecurityDescriptor;
        if ( a2 == 3 )
        {
          if ( PreviousMode )
          {
            Process = KeGetCurrentThread()->ApcState.Process;
            v18 = v23;
          }
          else
          {
            Process = PsInitialSystemProcess;
          }
          NameInstance = ExpWnfResolveScopeInstance((struct _EX_RUNDOWN_REF **)v24, (__int64)Process, 0LL, a3, 0LL);
          if ( NameInstance >= 0 )
          {
            NameInstance = ExpWnfCreateNameInstance(*(unsigned __int64 *)v24, v18, (__int64)v27, Process, v26);
            if ( NameInstance >= 0 )
              ExReleaseRundownProtection_0(v26[0] + 1);
          }
        }
        else
        {
          NameInstance = ExpWnfRegisterPermanentName(v18, v27);
        }
      }
    }
    else
    {
      NameInstance = -1073741727;
    }
  }
LABEL_33:
  if ( *(_QWORD *)v24 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)v24 + 8LL));
  if ( SecurityDescriptor && SecurityDescriptor != a7 )
  {
    LOBYTE(v11) = 1;
    LOBYTE(v14) = PreviousMode;
    SeReleaseSecurityDescriptor(SecurityDescriptor, v14, v11, a4);
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)NameInstance;
}
