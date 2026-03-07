MONITOR_MGR *__fastcall MONITOR_MGR::`vector deleting destructor'(MONITOR_MGR *P, char a2)
{
  MONITOR_MGR::~MONITOR_MGR(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
