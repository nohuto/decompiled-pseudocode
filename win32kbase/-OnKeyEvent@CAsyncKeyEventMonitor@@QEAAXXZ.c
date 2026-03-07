void __fastcall CAsyncKeyEventMonitor::OnKeyEvent(CAsyncKeyEventMonitor *this)
{
  unsigned __int64 v2; // rdx

  ExAcquirePushLockExclusiveEx((char *)this + 96, 0LL);
  if ( *(_DWORD *)this && *((_BYTE *)this + 88) )
    CAsyncKeyEventMonitor::ReportGetAsyncKeyStateAnomaly(
      this,
      ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - *(_DWORD *)this);
  v2 = MEMORY[0xFFFFF78000000320] * MEMORY[0xFFFFF78000000004];
  *((_BYTE *)this + 88) = 0;
  *(_DWORD *)this = v2 >> 24;
  ExReleasePushLockExclusiveEx((char *)this + 96, 0LL);
}
