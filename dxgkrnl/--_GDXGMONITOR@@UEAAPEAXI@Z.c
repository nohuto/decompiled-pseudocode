DXGMONITOR *__fastcall DXGMONITOR::`scalar deleting destructor'(DXGMONITOR *P, char a2)
{
  DXGMONITOR::~DXGMONITOR(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
