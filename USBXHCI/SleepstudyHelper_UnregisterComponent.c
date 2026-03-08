/*
 * XREFs of SleepstudyHelper_UnregisterComponent @ 0x1C0054D74
 * Callers:
 *     Controller_WdfEvtDeviceReleaseHardware @ 0x1C0079480 (Controller_WdfEvtDeviceReleaseHardware.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 */

__int64 SleepstudyHelper_UnregisterComponent()
{
  unsigned int v0; // ebx
  unsigned int v1; // eax

  v0 = 0;
  if ( qword_1C0064B18 )
    v1 = qword_1C0064B18();
  else
    v1 = -1073741637;
  if ( v1 != -1073741637 )
    return v1;
  return v0;
}
