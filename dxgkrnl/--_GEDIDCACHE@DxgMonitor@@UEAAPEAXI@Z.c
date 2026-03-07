DxgMonitor::EDIDCACHE *__fastcall DxgMonitor::EDIDCACHE::`scalar deleting destructor'(
        DxgMonitor::EDIDCACHE *P,
        char a2)
{
  DxgMonitor::EDIDCACHE::~EDIDCACHE(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
