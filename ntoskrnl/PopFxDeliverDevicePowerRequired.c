/*
 * XREFs of PopFxDeliverDevicePowerRequired @ 0x14030207C
 * Callers:
 *     PopFxIdleTimeoutDpcRoutine @ 0x140300BB0 (PopFxIdleTimeoutDpcRoutine.c)
 *     PopFxProcessWork @ 0x1403060C4 (PopFxProcessWork.c)
 *     PopFxDeviceWork @ 0x140587AD0 (PopFxDeviceWork.c)
 * Callees:
 *     PopFxCompleteDevicePowerRequired @ 0x140304EE0 (PopFxCompleteDevicePowerRequired.c)
 *     PopDiagTraceFxDevicePowerRequirement @ 0x1403064E0 (PopDiagTraceFxDevicePowerRequirement.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PopFxDeliverDevicePowerRequired(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3)
{
  void (__fastcall *v4)(_QWORD); // rax

  if ( *(_DWORD *)(BugCheckParameter2 + 36) == 2 )
  {
    LOBYTE(a3) = 1;
    PopDiagTraceFxDevicePowerRequirement(*(_QWORD *)(BugCheckParameter2 + 48), 0LL, a3);
    v4 = *(void (__fastcall **)(_QWORD))(BugCheckParameter2 + 136);
    if ( v4 )
      v4(*(_QWORD *)(BugCheckParameter2 + 192));
    else
      _InterlockedDecrement((volatile signed __int32 *)(BugCheckParameter2 + 36));
    _InterlockedAnd((volatile signed __int32 *)(BugCheckParameter2 + 32), 0xFFFFFFBF);
  }
  return PopFxCompleteDevicePowerRequired(BugCheckParameter2);
}
