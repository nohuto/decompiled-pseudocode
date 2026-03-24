/*
 * XREFs of ?MonitorInterfaceCallbackInternal@CMonitorPDO@OPM@@AEAAJPEBU_DEVICE_INTERFACE_CHANGE_NOTIFICATION@@@Z @ 0x1C013C110
 * Callers:
 *     ?MonitorInterfaceCallback@CMonitorPDO@OPM@@CAJPEAX0@Z @ 0x1C013C0F0 (-MonitorInterfaceCallback@CMonitorPDO@OPM@@CAJPEAX0@Z.c)
 * Callees:
 *     ?Lock@CMutex@OPM@@QEAAXXZ @ 0x1C00870E0 (-Lock@CMutex@OPM@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall OPM::CMonitorPDO::MonitorInterfaceCallbackInternal(
        OPM::CMonitorPDO *this,
        const struct _DEVICE_INTERFACE_CHANGE_NOTIFICATION *a2)
{
  __int64 v4; // r8
  void **v5; // rbx
  bool v6; // si

  v4 = *(_QWORD *)&GUID_DEVICE_INTERFACE_REMOVAL.Data1 - *(_QWORD *)&a2->Event.Data1;
  if ( *(_QWORD *)&GUID_DEVICE_INTERFACE_REMOVAL.Data1 == *(_QWORD *)&a2->Event.Data1 )
    v4 = *(_QWORD *)GUID_DEVICE_INTERFACE_REMOVAL.Data4 - *(_QWORD *)a2->Event.Data4;
  if ( !v4 )
  {
    v5 = (void **)*((_QWORD *)this + 1);
    v6 = 0;
    OPM::CMutex::Lock(v5);
    if ( *((_QWORD *)this + 4) )
      v6 = RtlCompareUnicodeString((PCUNICODE_STRING)((char *)this + 24), a2->SymbolicLinkName, 0) == 0;
    if ( *v5 )
      KeReleaseMutex((PRKMUTEX)*v5, 0);
    if ( v6 )
      (*(void (__fastcall **)(OPM::CMonitorPDO *))(*(_QWORD *)this + 8LL))(this);
  }
  return 0LL;
}
