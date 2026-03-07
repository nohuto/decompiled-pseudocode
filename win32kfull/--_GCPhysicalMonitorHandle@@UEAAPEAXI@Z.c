CPhysicalMonitorHandle *__fastcall CPhysicalMonitorHandle::`scalar deleting destructor'(
        CPhysicalMonitorHandle *P,
        char a2)
{
  CPhysicalMonitorHandle::~CPhysicalMonitorHandle(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0x63326947u);
  return P;
}
