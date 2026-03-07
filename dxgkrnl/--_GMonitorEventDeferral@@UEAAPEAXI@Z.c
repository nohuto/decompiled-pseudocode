MonitorEventDeferral *__fastcall MonitorEventDeferral::`scalar deleting destructor'(MonitorEventDeferral *P, char a2)
{
  MonitorEventDeferral::~MonitorEventDeferral(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
