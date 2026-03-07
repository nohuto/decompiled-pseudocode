__int64 __fastcall SetWatermarkStrings(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // edi
  __int64 v4; // rsi
  ULONG64 v5; // rdx
  int v6; // ecx
  WCHAR *v7; // r8
  ULONG64 v8; // rdx
  struct _UNICODE_STRING *v9; // rbx
  unsigned __int64 Length; // rcx
  unsigned __int64 DeviceObject_low; // rax
  int v13; // [rsp+20h] [rbp-38h]
  UNICODE_STRING SourceString; // [rsp+30h] [rbp-28h] BYREF
  int v15; // [rsp+68h] [rbp+10h]

  SourceString = 0LL;
  if ( PsGetCurrentProcessId() != (HANDLE)gpidLogon )
    return 0LL;
  v2 = 0;
  v3 = 1;
  while ( 1 )
  {
    v13 = v2;
    if ( (unsigned __int64)v2 >= 1 )
      break;
    v4 = 2LL * v2;
    v5 = a1 + 16LL * v2;
    if ( v5 >= MmUserProbeAddress )
      v5 = MmUserProbeAddress;
    v6 = *(_DWORD *)v5;
    v15 = *(_DWORD *)v5;
    *(_DWORD *)&SourceString.Length = *(_DWORD *)v5;
    v7 = *(WCHAR **)(v5 + 8);
    SourceString.Buffer = v7;
    if ( ((unsigned __int8)v7 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v8 = (ULONG64)v7 + (unsigned __int16)v6 + 2;
    if ( v8 <= (unsigned __int64)v7 || v8 >= MmUserProbeAddress )
      ExRaiseAccessViolation();
    if ( (unsigned __int16)v6 > HIWORD(v15) )
    {
      if ( (v6 & 1) != 0 )
LABEL_16:
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 91LL);
      ExRaiseAccessViolation();
    }
    if ( (v6 & 1) != 0 )
      goto LABEL_16;
    *((_QWORD *)&WPP_MAIN_CB.Queue.Wcb.CurrentIrp + 2 * v2) = (char *)&gWatermarkStrings + 256 * (__int64)v2;
    v9 = (struct _UNICODE_STRING *)(&WPP_MAIN_CB.Queue.Wcb.DeviceObject + 2 * v2);
    v9->Length = 0;
    v9->MaximumLength = 256;
    RtlCopyUnicodeString(v9, &SourceString);
    Length = v9->Length;
    if ( Length >= (unsigned __int64)*((unsigned __int16 *)&WPP_MAIN_CB.Queue.Wcb.DeviceObject + 4 * v4 + 1) - 2 )
      Length = *((unsigned __int16 *)&WPP_MAIN_CB.Queue.Wcb.DeviceObject + 4 * v4 + 1) - 2LL;
    *(_WORD *)(*((_QWORD *)&WPP_MAIN_CB.Queue.Wcb.CurrentIrp + v4) + 2 * (Length >> 1)) = 0;
    v2 = v13 + 1;
  }
  if ( *(_DWORD *)(gpsi + 2164LL) )
  {
    DeviceObject_low = 126LL;
    if ( LOWORD(WPP_MAIN_CB.Queue.Wcb.DeviceObject) <= 0x7Eu )
      DeviceObject_low = LOWORD(WPP_MAIN_CB.Queue.Wcb.DeviceObject);
    gSafeModeStrLen = DeviceObject_low >> 1;
    if ( (int)RtlStringCchCopyNW(
                (char *)gwszSafeModeStr,
                64LL,
                (char *)WPP_MAIN_CB.Queue.Wcb.CurrentIrp,
                (unsigned int)gSafeModeStrLen) < 0 )
      return 0;
  }
  return v3;
}
