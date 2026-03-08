/*
 * XREFs of ??_GMonitorEventDeferral@@UEAAPEAXI@Z @ 0x1C006B230
 * Callers:
 *     <none>
 * Callees:
 *     ??1MonitorEventDeferral@@UEAA@XZ @ 0x1C01FB908 (--1MonitorEventDeferral@@UEAA@XZ.c)
 */

MonitorEventDeferral *__fastcall MonitorEventDeferral::`scalar deleting destructor'(MonitorEventDeferral *P, char a2)
{
  MonitorEventDeferral::~MonitorEventDeferral(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
