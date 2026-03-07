__int64 __fastcall NtUserGetWindowPlacement(__int64 a1, ULONG64 a2)
{
  struct tagWND *v4; // r9
  _BYTE *v5; // rdx
  unsigned int WindowPlacement; // ebx
  __int128 v8; // [rsp+48h] [rbp-40h]

  v8 = 0LL;
  EnterCrit(0LL, 1LL);
  v4 = (struct tagWND *)ValidateHwnd(a1);
  if ( v4 )
  {
    v5 = (_BYTE *)a2;
    if ( a2 >= MmUserProbeAddress )
      v5 = (_BYTE *)MmUserProbeAddress;
    *v5 = *v5;
    v5[43] = v5[43];
    LODWORD(v8) = *(_DWORD *)a2;
    WindowPlacement = GetWindowPlacement(v4);
    if ( WindowPlacement )
    {
      *(_OWORD *)a2 = v8;
      *(_OWORD *)(a2 + 16) = 0LL;
      *(_QWORD *)(a2 + 32) = 0LL;
      *(_DWORD *)(a2 + 40) = 0;
    }
  }
  else
  {
    WindowPlacement = 0;
  }
  UserSessionSwitchLeaveCrit();
  return WindowPlacement;
}
