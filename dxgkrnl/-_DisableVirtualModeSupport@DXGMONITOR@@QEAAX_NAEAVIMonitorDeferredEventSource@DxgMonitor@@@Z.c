void __fastcall DXGMONITOR::_DisableVirtualModeSupport(
        DXGMONITOR *this,
        unsigned __int8 a2,
        struct DxgMonitor::IMonitorDeferredEventSource *a3)
{
  unsigned int v4; // esi
  __int64 v6; // rax
  __int64 *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  HANDLE Handle; // [rsp+40h] [rbp+8h] BYREF

  v4 = a2;
  if ( (*((_BYTE *)this + 176) & 2) != 0 )
    WdLogSingleEntry0(1LL);
  v6 = *((_QWORD *)this + 26);
  *((_BYTE *)this + 176) = ((_BYTE)v4 << 7) | *((_BYTE *)this + 176) & 0x7F;
  v7 = *(__int64 **)(v6 + 16);
  v8 = *v7;
  Handle = 0LL;
  if ( (*(int (__fastcall **)(__int64 *, _QWORD, HANDLE *))(v8 + 8))(v7, 0LL, &Handle) >= 0 )
    DxgMonitor::MonitorDataStore::WriteData<unsigned long>(v9, Handle, L"VMSDisabled", v4);
  if ( Handle )
    ZwClose(Handle);
  (**(void (__fastcall ***)(struct DxgMonitor::IMonitorDeferredEventSource *, _QWORD, __int64))a3)(
    a3,
    *((unsigned int *)this + 45),
    11LL);
}
