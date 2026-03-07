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
