/*
 * XREFs of _SetWatermarkStrings @ 0x1C011E1C0
 * Callers:
 *     NtUserSetWatermarkStrings @ 0x1C011E180 (NtUserSetWatermarkStrings.c)
 * Callees:
 *     ?RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1C00D28E0 (-RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0147E84 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall SetWatermarkStrings(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // edi
  __int64 v4; // rbx
  __int64 v5; // rsi
  unsigned int *v6; // rdx
  __int64 v7; // rcx
  WCHAR *v8; // r8
  ULONG64 v9; // rdx
  _BYTE **v10; // rax
  struct _UNICODE_STRING *v11; // rbx
  unsigned __int64 Length; // rcx
  unsigned __int64 DeviceRoutine_low; // rax
  int v15; // [rsp+20h] [rbp-38h]
  UNICODE_STRING SourceString; // [rsp+30h] [rbp-28h] BYREF
  int v17; // [rsp+68h] [rbp+10h]

  SourceString = 0LL;
  if ( PsGetCurrentProcessId() != (HANDLE)gpidLogon )
    return 0LL;
  v2 = 0;
  v3 = 1;
  while ( 1 )
  {
    v15 = v2;
    v4 = v2;
    if ( (unsigned __int64)v2 >= 1 )
      break;
    v5 = 2LL * v2;
    v6 = (unsigned int *)(a1 + 16LL * v2);
    if ( (unsigned __int64)v6 >= MmUserProbeAddress )
      v6 = (unsigned int *)MmUserProbeAddress;
    v7 = *v6;
    v17 = *v6;
    *(_DWORD *)&SourceString.Length = *v6;
    v8 = (WCHAR *)*((_QWORD *)v6 + 1);
    SourceString.Buffer = v8;
    if ( ((unsigned __int8)v8 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v9 = (ULONG64)v8 + (unsigned __int16)v7 + 2;
    v10 = (_BYTE **)MmUserProbeAddress;
    if ( v9 < MmUserProbeAddress && (unsigned __int16)v7 <= HIWORD(v17) )
    {
      if ( (v7 & 1) != 0 )
        goto LABEL_16;
      if ( v9 > (unsigned __int64)v8 )
        goto LABEL_11;
    }
    if ( (v7 & 1) != 0 )
    {
LABEL_16:
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v7);
      v10 = (_BYTE **)MmUserProbeAddress;
    }
    **v10 = 0;
LABEL_11:
    *((_QWORD *)&WPP_MAIN_CB.Queue.Wcb.DeviceContext + v5) = (char *)&gWatermarkStrings + 256 * v4;
    v11 = (struct _UNICODE_STRING *)(&WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + v5);
    v11->Length = 0;
    v11->MaximumLength = 256;
    RtlCopyUnicodeString(v11, &SourceString);
    Length = v11->Length;
    if ( Length >= (unsigned __int64)v11->MaximumLength - 2 )
      Length = *((unsigned __int16 *)&WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 4 * v5 + 1) - 2LL;
    *(_WORD *)(*((_QWORD *)&WPP_MAIN_CB.Queue.Wcb.DeviceContext + v5) + 2 * (Length >> 1)) = 0;
    v2 = v15 + 1;
  }
  if ( *(_DWORD *)(gpsi + 2164LL) )
  {
    DeviceRoutine_low = 126LL;
    if ( LOWORD(WPP_MAIN_CB.Queue.Wcb.DeviceRoutine) <= 0x7Eu )
      DeviceRoutine_low = LOWORD(WPP_MAIN_CB.Queue.Wcb.DeviceRoutine);
    gSafeModeStrLen = DeviceRoutine_low >> 1;
    if ( (int)RtlStringCchCopyNW(
                (char *)gwszSafeModeStr,
                64LL,
                (char *)WPP_MAIN_CB.Queue.Wcb.DeviceContext,
                gSafeModeStrLen) < 0 )
      return 0;
  }
  return v3;
}
