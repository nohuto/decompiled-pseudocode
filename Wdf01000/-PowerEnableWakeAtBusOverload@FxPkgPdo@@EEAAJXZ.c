/*
 * XREFs of ?PowerEnableWakeAtBusOverload@FxPkgPdo@@EEAAJXZ @ 0x1C0080680
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

int (__fastcall *__fastcall FxPkgPdo::PowerEnableWakeAtBusOverload(FxPkgPdo *this))(WDFDEVICE__ *, _SYSTEM_POWER_STATE)
{
  unsigned __int64 ObjectHandleUnchecked; // rcx
  int (__fastcall *result)(WDFDEVICE__ *, _SYSTEM_POWER_STATE); // rax
  FxDeviceBase *m_DeviceBase; // rcx
  __int64 v5; // rdx

  ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
  result = this->m_DeviceEnableWakeAtBus.m_Method;
  if ( !result
    || (result = (int (__fastcall *)(WDFDEVICE__ *, _SYSTEM_POWER_STATE))((__int64 (__fastcall *)(unsigned __int64))result)(ObjectHandleUnchecked),
        (int)result >= 0) )
  {
    m_DeviceBase = this->m_DeviceBase;
    this->m_EnableWakeAtBusInvoked = 1;
    v5 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)&m_DeviceBase[1].m_ObjectFlags + 648LL) + 888LL);
    if ( v5 )
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 904));
  }
  return result;
}
