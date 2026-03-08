/*
 * XREFs of NtUserfnDWORD @ 0x1C00CCEB0
 * Callers:
 *     NtUserfnPARENTNOTIFY @ 0x1C01E3E20 (NtUserfnPARENTNOTIFY.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C0130974 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserfnDWORD(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  __int64 v10; // rax

  v10 = SGDGetUserSessionState(a1);
  if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v10 + 8)) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 207LL);
  PsGetThreadWin32Thread(KeGetCurrentThread());
  return (*((__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64))&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink
          + ((a6 + 6) & 0x1F)))(
           a1,
           a2,
           a3,
           a4,
           a5);
}
