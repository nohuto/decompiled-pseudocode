/*
 * XREFs of ?DeviceAcceleratorInitialize@@YAJXZ @ 0x1C0096ECC
 * Callers:
 *     InputInitialize @ 0x1C0096C0C (InputInitialize.c)
 * Callees:
 *     ApiSetEditionGetDefaultMouseSensitivity @ 0x1C0096F58 (ApiSetEditionGetDefaultMouseSensitivity.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DeviceAcceleratorInitialize(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  __int64 i; // rbx
  unsigned int DefaultMouseSensitivity; // esi
  __int64 v7; // rax

  v4 = 0;
  for ( i = SGDGetUserSessionState(a1, a2, a3, a4) + 16008; ; i += 24LL )
  {
    DefaultMouseSensitivity = ApiSetEditionGetDefaultMouseSensitivity(v4);
    if ( *(_DWORD *)(i + 8) != v4 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 34LL);
    if ( *(_QWORD *)i )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 35LL);
    v7 = (*(__int64 (__fastcall **)(_QWORD))(i - 8))(DefaultMouseSensitivity);
    *(_QWORD *)i = v7;
    if ( !v7 )
      break;
    if ( ++v4 >= 2 )
      return 0LL;
  }
  return 3221225473LL;
}
