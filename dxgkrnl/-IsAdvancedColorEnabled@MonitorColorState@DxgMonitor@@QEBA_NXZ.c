bool __fastcall DxgMonitor::MonitorColorState::IsAdvancedColorEnabled(DxgMonitor::MonitorColorState *this)
{
  char v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0;
  DxgkIsConsoleSessionDispBrokerEnabled(&v3);
  if ( v3 )
    return 0;
  else
    return *((_BYTE *)this + 384);
}
