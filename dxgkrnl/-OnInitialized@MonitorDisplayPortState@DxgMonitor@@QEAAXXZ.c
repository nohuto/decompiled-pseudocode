void __fastcall DxgMonitor::MonitorDisplayPortState::OnInitialized(DxgMonitor::MonitorDisplayPortState *this)
{
  __int64 v2; // rax
  __int64 v3; // rax
  int v4; // eax

  if ( (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)this + 48LL))(*(_QWORD *)this) == 1
    && ((*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)this + 40LL))(*(_QWORD *)this) == 10
     || (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)this + 40LL))(*(_QWORD *)this) == 11) )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 32LL))(*(_QWORD *)this);
    if ( (*(int (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2) >= 3000 )
    {
      v3 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 24LL))(*(_QWORD *)this);
      v4 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v3 + 72LL))(v3, (char *)this + 12);
      if ( v4 >= 0 )
      {
        *((_BYTE *)this + 8) = 1;
      }
      else
      {
        *((_BYTE *)this + 8) = 0;
        WdLogSingleEntry1(3LL, v4);
      }
      if ( *((_BYTE *)this + 24) > 0xFu )
        WdLogSingleEntry0(1LL);
    }
  }
}
