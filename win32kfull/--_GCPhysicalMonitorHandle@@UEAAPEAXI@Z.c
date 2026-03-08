/*
 * XREFs of ??_GCPhysicalMonitorHandle@@UEAAPEAXI@Z @ 0x1C026B450
 * Callers:
 *     <none>
 * Callees:
 *     ??1CPhysicalMonitorHandle@@UEAA@XZ @ 0x1C026B3F8 (--1CPhysicalMonitorHandle@@UEAA@XZ.c)
 */

CPhysicalMonitorHandle *__fastcall CPhysicalMonitorHandle::`scalar deleting destructor'(
        CPhysicalMonitorHandle *P,
        char a2)
{
  CPhysicalMonitorHandle::~CPhysicalMonitorHandle(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0x63326947u);
  return P;
}
