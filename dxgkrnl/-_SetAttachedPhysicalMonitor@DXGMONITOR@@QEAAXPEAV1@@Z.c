void __fastcall DXGMONITOR::_SetAttachedPhysicalMonitor(DXGMONITOR *this, struct DXGMONITOR *a2)
{
  if ( *((_DWORD *)this + 78) == 1 && a2 )
    WdLogSingleEntry0(1LL);
  *((_QWORD *)this + 40) = a2;
}
