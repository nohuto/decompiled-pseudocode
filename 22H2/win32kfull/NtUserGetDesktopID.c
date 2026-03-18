/*
 * XREFs of NtUserGetDesktopID @ 0x1C00A7760
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 */

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
  __int64 v11; // rdx
  ULONG64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // edi
  int v16; // edi
  _QWORD *v18; // rax

  v3 = a2;
  v4 = a1;
  v5 = 0;
  v6 = 0LL;
  EnterSharedCrit(a1, a2, a3);
  CurrentProcess = PsGetCurrentProcess(v8, v7, v9);
  if ( !(unsigned int)IsProcessDwm(CurrentProcess) )
  {
    UserSetLastError(5LL);
    goto LABEL_10;
  }
  v15 = v4 - 1;
  if ( v15 )
  {
    v16 = v15 - 1;
    if ( v16 )
    {
      if ( v16 == 2 )
        v6 = (_QWORD ***)grpdeskLogon;
      goto LABEL_6;
    }
    v18 = (_QWORD *)grpdeskIODefault;
  }
  else
  {
    v18 = (_QWORD *)grpdeskRitInput;
  }
  v6 = (_QWORD ***)*v18;
LABEL_6:
  if ( v6 )
  {
    v11 = **v6[1];
    v12 = MmUserProbeAddress;
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (_QWORD *)MmUserProbeAddress;
    *v3 = v11;
    v5 = 1;
  }
LABEL_10:
  UserSessionSwitchLeaveCrit(v12, v11, v13, v14);
  return v5;
}
