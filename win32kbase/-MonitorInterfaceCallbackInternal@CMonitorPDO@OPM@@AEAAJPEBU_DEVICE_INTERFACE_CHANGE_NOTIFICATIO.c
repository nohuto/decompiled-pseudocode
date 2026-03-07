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
