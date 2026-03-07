_QWORD *__fastcall MONITOR_MGR::AcquireMonitorShared(_QWORD *a1, __int64 a2)
{
  if ( a2 )
  {
    *a1 = a2;
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)(a2 + 24), 1u);
  }
  else
  {
    *a1 = 0LL;
  }
  return a1;
}
