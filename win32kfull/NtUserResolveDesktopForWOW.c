__int64 __fastcall NtUserResolveDesktopForWOW(struct _UNICODE_STRING *a1)
{
  ULONG64 v2; // rax
  int v3; // ecx
  WCHAR *v4; // rdi
  ULONG64 v5; // r8
  WCHAR *v6; // rax
  __int64 v7; // rcx
  int v8; // edi
  int v10; // [rsp+20h] [rbp-68h]
  UNICODE_STRING SourceString; // [rsp+40h] [rbp-48h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-38h] BYREF
  __int128 v13; // [rsp+60h] [rbp-28h] BYREF
  __int64 v14; // [rsp+70h] [rbp-18h]
  int v15; // [rsp+98h] [rbp+10h]

  SourceString = 0LL;
  DestinationString = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v10 = 0;
  EnterCrit(0LL, 0LL);
  v2 = (ULONG64)a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v2 = MmUserProbeAddress;
  v3 = *(_DWORD *)v2;
  v15 = *(_DWORD *)v2;
  *(_DWORD *)&SourceString.Length = *(_DWORD *)v2;
  v4 = *(WCHAR **)(v2 + 8);
  SourceString.Buffer = v4;
  if ( ((unsigned __int8)v4 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v5 = (ULONG64)v4 + HIWORD(v15);
  if ( v5 <= (unsigned __int64)v4 || v5 >= MmUserProbeAddress )
    ExRaiseAccessViolation();
  if ( (unsigned __int16)v3 > HIWORD(v15) )
  {
    if ( (v3 & 1) == 0 )
      goto LABEL_18;
    goto LABEL_17;
  }
  if ( (v3 & 1) != 0 )
  {
LABEL_17:
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1182);
LABEL_18:
    ExRaiseAccessViolation();
  }
  DestinationString = SourceString;
  if ( HIWORD(v15) )
  {
    v6 = (WCHAR *)Win32AllocPoolWithQuotaZInit(HIWORD(v15), 2037674837LL);
    SourceString.Buffer = v6;
    if ( !v6 )
      ExRaiseStatus(-1073741801);
    v10 = 1;
    PushW32ThreadLock((__int64)v6, &v13, (__int64)Win32FreePool);
    memmove(SourceString.Buffer, v4, SourceString.Length);
  }
  else
  {
    SourceString.Buffer = 0LL;
  }
  v8 = xxxResolveDesktopForWOW(&SourceString);
  if ( v8 >= 0 )
  {
    RtlCopyUnicodeString(&DestinationString, &SourceString);
    *a1 = DestinationString;
  }
  if ( v10 )
    PopAndFreeAlwaysW32ThreadLock((__int64)&v13);
  UserSessionSwitchLeaveCrit(v7);
  return (unsigned int)v8;
}
