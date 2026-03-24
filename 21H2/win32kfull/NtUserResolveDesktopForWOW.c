/*
 * XREFs of NtUserResolveDesktopForWOW @ 0x1C02011F0
 * Callers:
 *     <none>
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00BFD00 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C00BFD80 (PushW32ThreadLock.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C016E324 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memmove @ 0x1C016E4C0 (memmove.c)
 *     xxxResolveDesktopForWOW @ 0x1C01E9C64 (xxxResolveDesktopForWOW.c)
 */

__int64 __fastcall NtUserResolveDesktopForWOW(struct _UNICODE_STRING *a1)
{
  ULONG64 v2; // rax
  int v3; // ecx
  WCHAR *Buffer; // rdi
  ULONG64 v5; // rdx
  _BYTE **v6; // rax
  unsigned __int16 epi16; // ax
  WCHAR *v8; // rax
  __int64 v9; // rcx
  int v10; // edi
  int v12; // [rsp+20h] [rbp-68h]
  UNICODE_STRING SourceString; // [rsp+40h] [rbp-48h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-38h] BYREF
  __int128 v15; // [rsp+60h] [rbp-28h] BYREF
  __int64 v16; // [rsp+70h] [rbp-18h]
  int v17; // [rsp+98h] [rbp+10h]

  SourceString = 0LL;
  DestinationString = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v12 = 0;
  EnterCrit(0LL, 1LL);
  v2 = (ULONG64)a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v2 = MmUserProbeAddress;
  v3 = *(_DWORD *)v2;
  v17 = *(_DWORD *)v2;
  *(_DWORD *)&SourceString.Length = *(_DWORD *)v2;
  Buffer = *(WCHAR **)(v2 + 8);
  SourceString.Buffer = Buffer;
  if ( ((unsigned __int8)Buffer & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v5 = (ULONG64)Buffer + HIWORD(v17);
  v6 = (_BYTE **)MmUserProbeAddress;
  if ( v5 < MmUserProbeAddress && (unsigned __int16)v3 <= HIWORD(v17) )
  {
    if ( (v3 & 1) != 0 )
    {
LABEL_10:
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 922);
      v6 = (_BYTE **)MmUserProbeAddress;
      goto LABEL_11;
    }
    if ( v5 > (unsigned __int64)Buffer )
      goto LABEL_12;
  }
  if ( (v3 & 1) != 0 )
    goto LABEL_10;
LABEL_11:
  **v6 = 0;
  Buffer = SourceString.Buffer;
LABEL_12:
  DestinationString = SourceString;
  epi16 = _mm_extract_epi16((__m128i)SourceString, 1);
  if ( epi16 )
  {
    v8 = (WCHAR *)Win32AllocPoolWithQuota(epi16, 2037674837LL);
    SourceString.Buffer = v8;
    if ( !v8 )
      ExRaiseStatus(-1073741801);
    v12 = 1;
    PushW32ThreadLock((__int64)v8, &v15, (__int64)Win32FreePool);
    memmove(SourceString.Buffer, Buffer, SourceString.Length);
  }
  else
  {
    SourceString.Buffer = 0LL;
  }
  v10 = xxxResolveDesktopForWOW(&SourceString);
  if ( v10 >= 0 )
  {
    RtlCopyUnicodeString(&DestinationString, &SourceString);
    *a1 = DestinationString;
  }
  if ( v12 )
    PopAndFreeAlwaysW32ThreadLock((__int64)&v15);
  UserSessionSwitchLeaveCrit(v9);
  return (unsigned int)v10;
}
