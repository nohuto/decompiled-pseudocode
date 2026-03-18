/*
 * XREFs of NtUserResolveDesktopForWOW @ 0x1C01D9F00
 * Callers:
 *     <none>
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0024460 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C00621E0 (PushW32ThreadLock.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C01410D8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memmove @ 0x1C0141300 (memmove.c)
 *     xxxResolveDesktopForWOW @ 0x1C01BEC58 (xxxResolveDesktopForWOW.c)
 */

__int64 __fastcall NtUserResolveDesktopForWOW(struct _UNICODE_STRING *a1)
{
  ULONG64 v2; // rax
  int v3; // ecx
  WCHAR *v4; // rdi
  ULONG64 v5; // r8
  WCHAR *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // edi
  __int64 v10; // r8
  __int64 v11; // r9
  int v13; // [rsp+20h] [rbp-68h]
  UNICODE_STRING SourceString; // [rsp+40h] [rbp-48h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-38h] BYREF
  __int128 v16; // [rsp+60h] [rbp-28h] BYREF
  __int64 v17; // [rsp+70h] [rbp-18h]
  int v18; // [rsp+98h] [rbp+10h]

  SourceString = 0LL;
  DestinationString = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v13 = 0;
  EnterCrit(0LL, 0LL);
  v2 = (ULONG64)a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v2 = MmUserProbeAddress;
  v3 = *(_DWORD *)v2;
  v18 = *(_DWORD *)v2;
  *(_DWORD *)&SourceString.Length = *(_DWORD *)v2;
  v4 = *(WCHAR **)(v2 + 8);
  SourceString.Buffer = v4;
  if ( ((unsigned __int8)v4 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v5 = (ULONG64)v4 + HIWORD(v18);
  if ( v5 <= (unsigned __int64)v4 || v5 >= MmUserProbeAddress )
    ExRaiseAccessViolation();
  if ( (unsigned __int16)v3 > HIWORD(v18) )
  {
    if ( (v3 & 1) == 0 )
      goto LABEL_18;
    goto LABEL_17;
  }
  if ( (v3 & 1) != 0 )
  {
LABEL_17:
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1141);
LABEL_18:
    ExRaiseAccessViolation();
  }
  DestinationString = SourceString;
  if ( HIWORD(v18) )
  {
    v6 = (WCHAR *)Win32AllocPoolWithQuotaZInit(HIWORD(v18), 2037674837LL);
    SourceString.Buffer = v6;
    if ( !v6 )
      ExRaiseStatus(-1073741801);
    v13 = 1;
    PushW32ThreadLock((__int64)v6, &v16, (__int64)Win32FreePool);
    memmove(SourceString.Buffer, v4, SourceString.Length);
  }
  else
  {
    SourceString.Buffer = 0LL;
  }
  v9 = xxxResolveDesktopForWOW(&SourceString);
  if ( v9 >= 0 )
  {
    RtlCopyUnicodeString(&DestinationString, &SourceString);
    *a1 = DestinationString;
  }
  if ( v13 )
    PopAndFreeAlwaysW32ThreadLock((__int64)&v16);
  UserSessionSwitchLeaveCrit(v8, v7, v10, v11);
  return (unsigned int)v9;
}
