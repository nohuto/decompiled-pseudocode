/*
 * XREFs of PopFxDeliverDevicePowerRequired @ 0x14036D95C
 * Callers:
 *     PopFxProcessWork @ 0x140312454 (PopFxProcessWork.c)
 *     PopFxIdleTimeoutDpcRoutine @ 0x14036B940 (PopFxIdleTimeoutDpcRoutine.c)
 *     PopFxDeviceWork @ 0x14058A000 (PopFxDeviceWork.c)
 * Callees:
 *     PopFxCompleteDevicePowerRequired @ 0x140310900 (PopFxCompleteDevicePowerRequired.c)
 *     PopDiagTraceFxDevicePowerRequirement @ 0x140312870 (PopDiagTraceFxDevicePowerRequirement.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 */

char __fastcall PopFxDeliverDevicePowerRequired(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  void (__fastcall *v4)(_QWORD); // rax

  if ( *(_DWORD *)(BugCheckParameter2 + 36) == 2 )
  {
    PopDiagTraceFxDevicePowerRequirement(*(_QWORD *)(BugCheckParameter2 + 48), 0, 1u);
    v4 = *(void (__fastcall **)(_QWORD))(BugCheckParameter2 + 136);
    if ( v4 )
      v4(*(_QWORD *)(BugCheckParameter2 + 192));
    else
      _InterlockedDecrement((volatile signed __int32 *)(BugCheckParameter2 + 36));
    _InterlockedAnd((volatile signed __int32 *)(BugCheckParameter2 + 32), 0xFFFFFFBF);
  }
  return PopFxCompleteDevicePowerRequired(BugCheckParameter2, a2);
}
