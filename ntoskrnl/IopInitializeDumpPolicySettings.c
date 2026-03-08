/*
 * XREFs of IopInitializeDumpPolicySettings @ 0x14085D5A4
 * Callers:
 *     IopCrashDumpPolicyChangeWnfCallback @ 0x140940B30 (IopCrashDumpPolicyChangeWnfCallback.c)
 *     IopLiveDumpPolicyChangeWnfCallback @ 0x14094BB10 (IopLiveDumpPolicyChangeWnfCallback.c)
 *     IoInitSystemPreDrivers @ 0x140B409E8 (IoInitSystemPreDrivers.c)
 * Callees:
 *     EtwWrite @ 0x1402338C0 (EtwWrite.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140243F90 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     CmIsStateSeparationEnabled @ 0x1402FBD38 (CmIsStateSeparationEnabled.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     _tlgKeywordOn @ 0x14035F490 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     IopDumpIsTracingEnabled @ 0x140550448 (IopDumpIsTracingEnabled.c)
 *     IopGetRegistryValue @ 0x1406C18D4 (IopGetRegistryValue.c)
 *     IopOpenRegistryKey @ 0x1407803E0 (IopOpenRegistryKey.c)
 *     ExSubscribeWnfStateChange @ 0x14078C4C0 (ExSubscribeWnfStateChange.c)
 *     ObCloseHandle @ 0x1407F0D20 (ObCloseHandle.c)
 *     IopLiveDumpRegisterWnfNotificationCallback @ 0x14085D704 (IopLiveDumpRegisterWnfNotificationCallback.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall IopInitializeDumpPolicySettings(char a1)
{
  UNICODE_STRING *p_DestinationString; // r8
  NTSTATUS result; // eax
  HANDLE Handle; // [rsp+38h] [rbp-29h] BYREF
  PVOID P; // [rsp+40h] [rbp-21h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-19h] BYREF
  UNICODE_STRING v7; // [rsp+58h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp+7h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+78h] [rbp+17h] BYREF
  PVOID *p_P; // [rsp+98h] [rbp+37h]
  int v11; // [rsp+A0h] [rbp+3Fh]
  int v12; // [rsp+A4h] [rbp+43h]

  Handle = 0LL;
  P = 0LL;
  HIDWORD(UserData.Ptr) = 0;
  DestinationString = 0LL;
  v7 = 0LL;
  if ( !CmIsStateSeparationEnabled() )
  {
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CrashControl");
    goto LABEL_3;
  }
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\OSDATA\\System\\CurrentControlSet\\Control\\CrashControl");
  if ( IopOpenRegistryKey(&Handle, 0LL, &DestinationString, 0x20019u, 0) < 0 )
  {
    RtlInitUnicodeString(
      &DestinationString,
      L"\\Registry\\Machine\\OSBOOT\\System\\CurrentControlSet\\Control\\CrashControl");
LABEL_3:
    if ( IopOpenRegistryKey(&Handle, 0LL, &DestinationString, 0x20019u, 0) < 0 )
      goto LABEL_6;
  }
  if ( IopGetRegistryValue(Handle, L"AllowCrashDump", 4, &P) >= 0 )
  {
    if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) == 4 )
      AllowCrashDump = *(_DWORD *)((char *)P + *((unsigned int *)P + 2)) != 0;
    ExFreePoolWithTag(P, 0);
  }
  ObCloseHandle(Handle, 0);
LABEL_6:
  if ( !CmIsStateSeparationEnabled() )
  {
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\LiveDump");
    p_DestinationString = &DestinationString;
    goto LABEL_8;
  }
  RtlInitUnicodeString(&v7, L"\\Registry\\Machine\\OSDATA\\System\\CurrentControlSet\\Control\\LiveDump");
  if ( IopOpenRegistryKey(&Handle, 0LL, &v7, 0x20019u, 0) < 0 )
  {
    RtlInitUnicodeString(&v7, L"\\Registry\\Machine\\OSBOOT\\System\\CurrentControlSet\\Control\\LiveDump");
    p_DestinationString = &v7;
LABEL_8:
    result = IopOpenRegistryKey(&Handle, 0LL, p_DestinationString, 0x20019u, 0);
    if ( result < 0 )
      goto LABEL_9;
  }
  if ( IopGetRegistryValue(Handle, L"AllowLiveDump", 4, &P) >= 0 )
  {
    if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) == 4 )
      AllowLiveDump = *(_DWORD *)((char *)P + *((unsigned int *)P + 2)) != 0;
    ExFreePoolWithTag(P, 0);
  }
  result = ObCloseHandle(Handle, 0);
LABEL_9:
  if ( a1 )
  {
    if ( (int)ExSubscribeWnfStateChange(
                (__int64)&P,
                (__int64)&WNF_DUMP_ALLOW_CRASHDUMP_POLICY_VALUE_CHANGED,
                1,
                0,
                (__int64)IopCrashDumpPolicyChangeWnfCallback,
                0LL) < 0 )
    {
      if ( IopDumpIsTracingEnabled() )
      {
        UserData.Reserved = 0;
        UserData.Ptr = (ULONGLONG)"Failed to subscribe for policy value change notification";
        UserData.Size = 56;
        EtwWrite(IopDumpEtwRegHandle, &DUMP_EVENT_CRASHDUMP_POLICY_OPERATION_FAILURE, 0LL, 1u, &UserData);
      }
      if ( (unsigned int)dword_140C06248 > 5 )
      {
        if ( tlgKeywordOn((__int64)&dword_140C06248, 0x400000000000LL) )
        {
          v12 = 0;
          p_P = &P;
          P = (PVOID)0x1000000;
          v11 = 8;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140C06248,
            (unsigned __int8 *)word_14002B4F2,
            0LL,
            0LL,
            3u,
            &v9);
        }
      }
    }
    return IopLiveDumpRegisterWnfNotificationCallback();
  }
  return result;
}
