/*
 * XREFs of InitializePointerDevicesPresenceState @ 0x1C0077D60
 * Callers:
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x1C0078068 (-InitiateWin32kCleanup@@YAHXZ.c)
 * Callees:
 *     ClosePointerDeviceProcessEvents @ 0x1C0077BA8 (ClosePointerDeviceProcessEvents.c)
 *     FreePointerDeviceClientList @ 0x1C0077CE8 (FreePointerDeviceClientList.c)
 */

int __fastcall InitializePointerDevicesPresenceState(__int64 a1)
{
  _QWORD *v1; // rax
  __int64 v2; // rcx

  if ( (_DWORD)a1 )
  {
    v1 = (_QWORD *)(SGDGetUserSessionState(a1) + 16352);
    v1[1] = v1;
    *v1 = v1;
  }
  else
  {
    FreePointerDeviceClientList(a1);
    LODWORD(v1) = ClosePointerDeviceProcessEvents(v2);
  }
  return (int)v1;
}
