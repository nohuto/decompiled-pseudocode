__int64 __fastcall NtUserGetDesktopID(__int64 a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v3; // r14
  int v4; // edi
  int v5; // ebx
  _QWORD ***v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 CurrentProcess; // rax
  ULONG64 v11; // rcx
  int v12; // edi
  int v13; // edi
  _QWORD *v15; // rax

  v3 = a2;
  v4 = a1;
  v5 = 0;
  v6 = 0LL;
  EnterSharedCrit(a1, a2, a3);
  CurrentProcess = PsGetCurrentProcess(v8, v7, v9);
  if ( !(unsigned int)IsProcessDwm(CurrentProcess) )
  {
    UserSetLastError(5);
    goto LABEL_10;
  }
  v12 = v4 - 1;
  if ( v12 )
  {
    v13 = v12 - 1;
    if ( v13 )
    {
      if ( v13 == 2 )
        v6 = (_QWORD ***)grpdeskLogon;
      goto LABEL_6;
    }
    v15 = (_QWORD *)grpdeskIODefault;
  }
  else
  {
    v15 = (_QWORD *)grpdeskRitInput;
  }
  v6 = (_QWORD ***)*v15;
LABEL_6:
  if ( v6 )
  {
    v11 = MmUserProbeAddress;
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (_QWORD *)MmUserProbeAddress;
    *v3 = **v6[1];
    v5 = 1;
  }
LABEL_10:
  UserSessionSwitchLeaveCrit(v11);
  return v5;
}
