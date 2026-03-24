/*
 * XREFs of _SetWatermarkStrings @ 0x1C01335A0
 * Callers:
 *     <none>
 * Callees:
 *     ?RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1C000CCB4 (-RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C016E324 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall SetWatermarkStrings(__int64 a1)
{
  int v3; // eax
  unsigned int v4; // edi
  __int64 v5; // rbx
  __int64 v6; // rsi
  ULONG64 v7; // rdx
  int v8; // ecx
  WCHAR *v9; // r8
  ULONG64 v10; // rdx
  _BYTE **v11; // rax
  struct _UNICODE_STRING *v12; // rbx
  unsigned __int64 Length; // rcx
  unsigned __int64 NumberOfMapRegisters_low; // rax
  int v15; // [rsp+20h] [rbp-48h]
  UNICODE_STRING SourceString; // [rsp+30h] [rbp-38h] BYREF
  int v17; // [rsp+80h] [rbp+18h]

  SourceString = 0LL;
  if ( PsGetCurrentProcessId() != (HANDLE)gpidLogon )
    return 0LL;
  v3 = 0;
  v4 = 1;
  while ( 1 )
  {
    v15 = v3;
    v5 = v3;
    if ( (unsigned __int64)v3 >= 1 )
      break;
    v6 = 2LL * v3;
    v7 = a1 + 16LL * v3;
    if ( v7 >= MmUserProbeAddress )
      v7 = MmUserProbeAddress;
    v8 = *(_DWORD *)v7;
    v17 = *(_DWORD *)v7;
    *(_DWORD *)&SourceString.Length = *(_DWORD *)v7;
    v9 = *(WCHAR **)(v7 + 8);
    SourceString.Buffer = v9;
    if ( ((unsigned __int8)v9 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v10 = (ULONG64)v9 + (unsigned __int16)v8 + 2;
    v11 = (_BYTE **)MmUserProbeAddress;
    if ( v10 < MmUserProbeAddress && (unsigned __int16)v8 <= HIWORD(v17) )
    {
      if ( (v8 & 1) != 0 )
        goto LABEL_14;
      if ( v10 > (unsigned __int64)v9 )
        goto LABEL_16;
    }
    if ( (v8 & 1) != 0 )
    {
LABEL_14:
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 91LL);
      v11 = (_BYTE **)MmUserProbeAddress;
    }
    **v11 = 0;
LABEL_16:
    *((_QWORD *)&WPP_MAIN_CB.Queue.Wcb.DeviceObject + v6) = (char *)&gWatermarkStrings + 256 * v5;
    v12 = (struct _UNICODE_STRING *)(&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters + 2 * v6);
    v12->Length = 0;
    v12->MaximumLength = 256;
    RtlCopyUnicodeString(v12, &SourceString);
    Length = v12->Length;
    if ( Length >= (unsigned __int64)v12->MaximumLength - 2 )
      Length = *((unsigned __int16 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters + 4 * v6 + 1) - 2LL;
    *(_WORD *)(*((_QWORD *)&WPP_MAIN_CB.Queue.Wcb.DeviceObject + v6) + 2 * (Length >> 1)) = 0;
    v3 = v15 + 1;
  }
  if ( *(_DWORD *)(gpsi + 2164LL) )
  {
    NumberOfMapRegisters_low = 126LL;
    if ( LOWORD(WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters) <= 0x7Eu )
      NumberOfMapRegisters_low = LOWORD(WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters);
    gSafeModeStrLen = NumberOfMapRegisters_low >> 1;
    if ( (int)RtlStringCchCopyNW(
                (char *)gwszSafeModeStr,
                64LL,
                (char *)WPP_MAIN_CB.Queue.Wcb.DeviceObject,
                gSafeModeStrLen) < 0 )
      return 0;
  }
  return v4;
}
