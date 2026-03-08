/*
 * XREFs of ?MonitorInterfaceCallbackInternal@CMonitorPDO@OPM@@AEAAJPEBU_DEVICE_INTERFACE_CHANGE_NOTIFICATION@@@Z @ 0x1C017ECE0
 * Callers:
 *     ?MonitorInterfaceCallback@CMonitorPDO@OPM@@CAJPEAX0@Z @ 0x1C017ECC0 (-MonitorInterfaceCallback@CMonitorPDO@OPM@@CAJPEAX0@Z.c)
 * Callees:
 *     ?Lock@CMutex@OPM@@QEAAXXZ @ 0x1C00B0000 (-Lock@CMutex@OPM@@QEAAXXZ.c)
 *     memcmp @ 0x1C00E17D0 (memcmp.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall OPM::CMonitorPDO::MonitorInterfaceCallbackInternal(
        OPM::CMonitorPDO *this,
        const struct _DEVICE_INTERFACE_CHANGE_NOTIFICATION *a2)
{
  GUID *p_Event; // rdx
  __int64 v5; // r8
  void **v6; // rbx
  bool v7; // si

  p_Event = &a2->Event;
  v5 = *(_QWORD *)&GUID_DEVICE_INTERFACE_REMOVAL.Data1 - *(_QWORD *)&p_Event->Data1;
  if ( *(_QWORD *)&GUID_DEVICE_INTERFACE_REMOVAL.Data1 == *(_QWORD *)&p_Event->Data1 )
    v5 = *(_QWORD *)GUID_DEVICE_INTERFACE_REMOVAL.Data4 - *(_QWORD *)p_Event->Data4;
  if ( v5 )
  {
    memcmp(&GUID_DEVICE_INTERFACE_ARRIVAL, p_Event, 0x10uLL);
  }
  else
  {
    v6 = (void **)*((_QWORD *)this + 1);
    v7 = 0;
    OPM::CMutex::Lock(v6);
    if ( *((_QWORD *)this + 4) )
      v7 = RtlCompareUnicodeString((PCUNICODE_STRING)((char *)this + 24), a2->SymbolicLinkName, 0) == 0;
    if ( *v6 )
      KeReleaseMutex((PRKMUTEX)*v6, 0);
    if ( v7 )
      (*(void (__fastcall **)(OPM::CMonitorPDO *))(*(_QWORD *)this + 8LL))(this);
  }
  return 0LL;
}
