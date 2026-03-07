__int64 __fastcall PipSetGuestAssignedProperty(__int64 a1, char a2)
{
  unsigned int v2; // ebx
  bool v3; // zf
  __int64 v4; // rdx
  char v6; // [rsp+68h] [rbp+10h] BYREF

  v2 = 0;
  v3 = a2 == 0;
  v4 = *(_QWORD *)(a1 + 48);
  if ( v3 )
  {
    PnpSetObjectProperty(
      *(__int64 *)&PiPnpRtlCtx,
      v4,
      1u,
      0LL,
      0LL,
      (__int64)DEVPKEY_Device_AssignedToGuest,
      0,
      0LL,
      0,
      0);
  }
  else
  {
    v6 = -1;
    return (unsigned int)PnpSetObjectProperty(
                           *(__int64 *)&PiPnpRtlCtx,
                           v4,
                           1u,
                           0LL,
                           0LL,
                           (__int64)DEVPKEY_Device_AssignedToGuest,
                           17,
                           (__int64)&v6,
                           1u,
                           0);
  }
  return v2;
}
