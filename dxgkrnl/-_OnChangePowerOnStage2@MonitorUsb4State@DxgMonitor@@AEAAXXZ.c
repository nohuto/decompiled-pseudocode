void __fastcall DxgMonitor::MonitorUsb4State::_OnChangePowerOnStage2(DxgMonitor::MonitorUsb4State *this)
{
  __int64 v2; // rcx
  __int64 *v3; // rax
  unsigned int v4; // edi
  __int64 v5; // rbx
  unsigned int v6; // eax
  char v7; // [rsp+40h] [rbp+8h] BYREF

  if ( !*((_BYTE *)this + 8) )
    WdLogSingleEntry0(1LL);
  v2 = *(_QWORD *)this;
  *((_BYTE *)this + 56) = 0;
  v3 = (__int64 *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v2 + 8LL))(v2, &v7);
  v4 = *((unsigned __int8 *)this + 56);
  v5 = *v3;
  v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 16LL))(*(_QWORD *)this);
  DxgkLogCodePointPacket(0x7Au, v6, v4, 0, v5);
}
