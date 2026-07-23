/*
 * XREFs of WheaWmiInit @ 0x1405BDAAC
 * Callers:
 *     WheaInitialize @ 0x140A6405C (WheaInitialize.c)
 * Callees:
 *     IoWMIRegistrationControl @ 0x1407550F0 (IoWMIRegistrationControl.c)
 */

NTSTATUS WheaWmiInit()
{
  *(_QWORD *)&WheapDispatchPtr.Type = WheaWmiDispatch;
  return IoWMIRegistrationControl(&WheapDispatchPtr, 0x80000001);
}
