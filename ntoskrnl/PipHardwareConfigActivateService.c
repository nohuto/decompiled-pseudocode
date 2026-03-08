/*
 * XREFs of PipHardwareConfigActivateService @ 0x140875A78
 * Callers:
 *     PiDevCfgConfigureDevice @ 0x14087384C (PiDevCfgConfigureDevice.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     PipOpenServiceEnumKeys @ 0x1406C1280 (PipOpenServiceEnumKeys.c)
 *     _RegRtlDeleteTreeInternal @ 0x140868B00 (_RegRtlDeleteTreeInternal.c)
 *     PiOpenDriverRedirectedStateKey @ 0x140875B5C (PiOpenDriverRedirectedStateKey.c)
 */

__int64 __fastcall PipHardwareConfigActivateService(PCWSTR SourceString)
{
  __int64 v1; // rdx
  int v2; // eax
  int v3; // ebx
  __int64 v4; // rcx
  __int64 v5; // r8
  HANDLE v6; // rdi
  UNICODE_STRING v8; // [rsp+30h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp+8h] BYREF

  Handle = 0LL;
  v8 = 0LL;
  if ( !SourceString )
    return (unsigned int)-1073741811;
  RtlInitUnicodeString(&v8, SourceString);
  v2 = PiOpenDriverRedirectedStateKey(&v8, v1, &Handle);
  if ( v2 == -1073741275 )
  {
    v3 = 0;
  }
  else if ( v2 >= 0 || (v3 = PipOpenServiceEnumKeys(&v8, 0x10000u, &Handle, 0LL, 0), v3 >= 0) )
  {
    if ( *(_QWORD *)&PiPnpRtlCtx && (v4 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL)) != 0 )
      v5 = *(_QWORD *)(v4 + 8);
    else
      v5 = 0LL;
    v6 = Handle;
    v3 = RegRtlDeleteTreeInternal(Handle, L"StartOverride", v5, 0);
    if ( v3 == -1073741772 )
      v3 = 0;
    goto LABEL_10;
  }
  v6 = Handle;
LABEL_10:
  if ( v6 )
    ZwClose(v6);
  return (unsigned int)v3;
}
