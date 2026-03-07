__int64 __fastcall WerKernelSubmitReport(HANDLE KeyHandle)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  NTSTATUS RegistryKey; // eax
  int v6; // ebx
  __int64 v7; // r9
  const CHAR *v8; // r8
  _DWORD *PoolWithTag; // rsi
  NTSTATUS started; // eax
  __int64 v11; // r9
  const CHAR *v12; // r8
  char v13; // dl
  __int64 *v14; // rdi
  size_t v15; // r9
  size_t v16; // r9
  int v17; // eax
  PULONG ResultLength; // [rsp+28h] [rbp-E0h]
  PULONG ResultLengtha; // [rsp+28h] [rbp-E0h]
  int v20; // [rsp+30h] [rbp-D8h]
  int v21; // [rsp+38h] [rbp-D0h]
  int v22; // [rsp+40h] [rbp-C8h]
  int v23; // [rsp+48h] [rbp-C0h]
  int v24; // [rsp+50h] [rbp-B8h]
  ULONG Length; // [rsp+68h] [rbp-A0h] BYREF
  size_t cchToCopy; // [rsp+6Ch] [rbp-9Ch] BYREF
  HANDLE KeyHandlea; // [rsp+78h] [rbp-90h] BYREF
  __int64 SystemInformation; // [rsp+80h] [rbp-88h] BYREF
  PVOID P; // [rsp+88h] [rbp-80h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp-78h] BYREF
  __int64 v31; // [rsp+98h] [rbp-70h] BYREF
  STRSAFE_PCNZWCH pszSrc; // [rsp+A0h] [rbp-68h] BYREF
  STRSAFE_PCNZWCH v33; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v34; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v35; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v36; // [rsp+C8h] [rbp-40h]
  __int128 v37; // [rsp+D8h] [rbp-30h]
  struct _UNICODE_STRING DestinationString; // [rsp+E8h] [rbp-20h] BYREF
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+F8h] [rbp-10h] BYREF
  _QWORD v40[10]; // [rsp+108h] [rbp+0h] BYREF
  _DWORD v41[352]; // [rsp+158h] [rbp+50h] BYREF
  _DWORD v42[352]; // [rsp+6D8h] [rbp+5D0h] BYREF

  Handle = 0LL;
  memset(v41, 0, 0x578uLL);
  memset(v42, 0, 0x578uLL);
  v34 = 0LL;
  P = 0LL;
  *(_QWORD *)&v37 = 0LL;
  DWORD2(v37) = 0;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  DestinationString = 0LL;
  v31 = 0LL;
  v35 = 0LL;
  Length = 0;
  v36 = 0LL;
  pszSrc = 0LL;
  v33 = 0LL;
  cchToCopy = 0LL;
  KeyHandlea = 0LL;
  memset(v40, 0, 0x48uLL);
  SystemInformation = 0LL;
  if ( !KeyHandle )
    return 3221225485LL;
  RegistryKey = WerpGetRegistryKey(KeyHandle, v2, v3, &KeyHandlea);
  v6 = RegistryKey;
  if ( RegistryKey >= 0 )
  {
    ZwDeleteKey(KeyHandlea);
    ZwClose(KeyHandlea);
    KeyHandlea = 0LL;
    RegistryKey = ZwQueryKey(KeyHandle, KeyNameInformation, 0LL, 0, &Length);
    v6 = RegistryKey;
    if ( RegistryKey != -2147483643 && RegistryKey != -1073741789 )
    {
      v7 = 1001LL;
      v8 = "WERLIVEKERNELREPORTING:%u: ERROR ZwQueryKey failed while determining the size with 0x%x\n";
      goto LABEL_5;
    }
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)1025, (int)Length, 0x7765726Bu);
    if ( !PoolWithTag )
    {
      DbgPrintEx(0x96u, 0, "WERLIVEKERNELREPORTING:%u: ERROR OOM\n", 1009);
      v6 = -1073741801;
      goto LABEL_49;
    }
    started = ZwQueryKey(KeyHandle, KeyNameInformation, PoolWithTag, Length, &Length);
    v6 = started;
    if ( started >= 0 )
    {
      started = WerpParseKeyName(
                  (int)PoolWithTag + 4,
                  *PoolWithTag >> 1,
                  (unsigned int)&pszSrc,
                  (unsigned int)&cchToCopy,
                  (__int64)&v33,
                  (__int64)&cchToCopy + 4);
      v6 = started;
      if ( started >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, L"\\WindowsErrorReportingServicePort");
        v40[2] = 1400LL;
        v6 = WerpAllocateAndInitializeSid(
               &IdentifierAuthority,
               (int)ResultLengtha,
               v20,
               v21,
               v22,
               v23,
               v24,
               (__int64)&P);
        if ( v6 < 0 )
          goto LABEL_48;
        started = WerStartSystemErrorHandler();
        v6 = started;
        if ( started >= 0 )
        {
          started = ZwQuerySystemInformation(SystemErrorPortTimeouts, &SystemInformation, 8u, 0LL);
          v6 = started;
          if ( started >= 0 )
          {
            started = WerWaitForSystemErrorHandler((unsigned int)SystemInformation);
            v6 = started;
            if ( started >= 0 )
            {
              if ( started == 258 )
              {
                started = -1073740973;
                v12 = "WERLIVEKERNELREPORTING:%u: ERROR WerWaitForSystemErrorHandler timed out, failing the call with 0x%x\n";
                v6 = -1073740973;
                v11 = 1101LL;
              }
              else
              {
                v37 = 0LL;
                LODWORD(v35) = 48;
                *((_QWORD *)&v35 + 1) = 0LL;
                DWORD2(v36) = 512;
                *(_QWORD *)&v36 = 0LL;
                if ( HIDWORD(SystemInformation) == -1 )
                {
                  v13 = 1;
                }
                else
                {
                  v13 = 0;
                  v31 = -10000LL * SHIDWORD(SystemInformation);
                }
                v14 = &v31;
                if ( v13 )
                  v14 = 0LL;
                started = ZwAlpcConnectPort(&Handle, &DestinationString, &v35, v40, 0x20000, P, 0LL, 0LL, 0LL, 0LL, v14);
                v6 = started;
                if ( started >= 0 )
                {
                  if ( started == 258 )
                  {
                    started = -1073740973;
                    v12 = "WERLIVEKERNELREPORTING:%u: ERROR ZwAlpcConnectPort timed out, failing the call with 0x%x\n";
                    v6 = -1073740973;
                    v11 = 1138LL;
                  }
                  else
                  {
                    v15 = 15LL;
                    v41[0] = 91751760;
                    v41[10] = 1610612736;
                    LOWORD(v41[1]) = 0;
                    v41[12] = 0;
                    if ( (unsigned int)cchToCopy <= 0xF )
                      v15 = (unsigned int)cchToCopy;
                    started = RtlStringCchCopyNW((NTSTRSAFE_PWSTR)&v41[14], 0x10uLL, pszSrc, v15);
                    v6 = started;
                    if ( started >= 0 )
                    {
                      v16 = 39LL;
                      if ( HIDWORD(cchToCopy) <= 0x27 )
                        v16 = HIDWORD(cchToCopy);
                      started = RtlStringCchCopyNW((NTSTRSAFE_PWSTR)&v41[22], 0x28uLL, v33, v16);
                      v6 = started;
                      if ( started >= 0 )
                      {
                        v42[0] = 91751760;
                        v34 = 1400LL;
                        v17 = ZwAlpcSendWaitReceivePort(Handle, 0LL, v41, 0LL, v42, &v34, 0LL, v14);
                        v6 = v17;
                        if ( v17 < 0 || v17 == 258 )
                        {
                          DbgPrintEx(
                            0x96u,
                            0,
                            "WERLIVEKERNELREPORTING:%u: ERROR ZwAlpcSendWaitReceivePort failed\n",
                            1194);
                        }
                        else if ( v42[11] >= 0 )
                        {
                          v6 = 0;
                        }
                        else
                        {
                          DbgPrintEx(0x96u, 0, "WERLIVEKERNELREPORTING:%u: ERROR Service returned failure\n", 1200);
                          v6 = -1073741823;
                        }
                        goto LABEL_48;
                      }
                      v11 = 1175LL;
                      v12 = "WERLIVEKERNELREPORTING:%u: ERROR StringCchCopy failed for id with 0x%x\n";
                    }
                    else
                    {
                      v11 = 1163LL;
                      v12 = "WERLIVEKERNELREPORTING:%u: ERROR StringCchCopy failed for key with 0x%x\n";
                    }
                  }
                }
                else
                {
                  v11 = 1131LL;
                  v12 = "WERLIVEKERNELREPORTING:%u: ERROR ZwAlpcConnectPort failed with 0x%x\n";
                }
              }
            }
            else
            {
              v11 = 1094LL;
              v12 = "WERLIVEKERNELREPORTING:%u: ERROR WerWaitForSystemErrorHandler failed with 0x%x\n";
            }
          }
          else
          {
            v11 = 1087LL;
            v12 = "WERLIVEKERNELREPORTING:%u: ERROR ZwQuerySysInfo(ErrorPortTimeouts) failed with 0x%x\n";
          }
        }
        else
        {
          v11 = 1073LL;
          v12 = "WERLIVEKERNELREPORTING:%u: ERROR WerStartSystemErrorHandler failed with 0x%x\n";
        }
      }
      else
      {
        v11 = 1040LL;
        v12 = "WERLIVEKERNELREPORTING:%u: ERROR ParseKeyName failed with 0x%x\n";
      }
    }
    else
    {
      v11 = 1027LL;
      v12 = "WERLIVEKERNELREPORTING:%u: ERROR ZwQueryKey failed with 0x%x\n";
    }
    LODWORD(ResultLengtha) = started;
    DbgPrintEx(0x96u, 0, v12, v11, ResultLengtha);
LABEL_48:
    ExFreePoolWithTag(PoolWithTag, 0);
    goto LABEL_49;
  }
  v7 = 979LL;
  v8 = "WERLIVEKERNELREPORTING:%u: ERROR WerpGetRegistryKey failed for the busy key 0x%x\n";
LABEL_5:
  LODWORD(ResultLength) = RegistryKey;
  DbgPrintEx(0x96u, 0, v8, v7, ResultLength);
LABEL_49:
  if ( KeyHandlea )
  {
    ZwClose(KeyHandlea);
    KeyHandlea = 0LL;
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v6;
}
