DxgMonitor::MonitorDataStore *__fastcall DxgMonitor::MonitorDataStore::`scalar deleting destructor'(
        DxgMonitor::MonitorDataStore *P,
        char a2)
{
  DxgMonitor::MonitorDataStore::~MonitorDataStore(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
