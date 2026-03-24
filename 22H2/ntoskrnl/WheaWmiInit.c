/*
 * XREFs of WheaWmiInit @ 0x1405BD7BC
 * Callers:
 *     WheaInitialize @ 0x140A6305C (WheaInitialize.c)
 * Callees:
 *     IoWMIRegistrationControl @ 0x140754720 (IoWMIRegistrationControl.c)
 */

NTSTATUS WheaWmiInit()
{
  *(_QWORD *)&WheapDispatchPtr.Type = WheaWmiDispatch;
  return IoWMIRegistrationControl(&WheapDispatchPtr, 0x80000001);
}
