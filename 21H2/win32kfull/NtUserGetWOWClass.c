/*
 * XREFs of NtUserGetWOWClass @ 0x1C01F6E90
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0147E84 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     _GetWOWClass @ 0x1C01E38C8 (_GetWOWClass.c)
 */

_QWORD *__fastcall NtUserGetWOWClass(__int64 a1, ULONG64 a2, __int64 a3)
{
  ULONG64 v3; // rbx
  __int64 ThreadWin32Thread; // rdi
  int v6; // ecx
  char *v7; // rbx
  ULONG64 v8; // rdx
  _BYTE **v9; // rax
  _QWORD *WOWClass; // rax
  __int64 v11; // rcx
  _QWORD *v12; // rbx
  int v14; // [rsp+60h] [rbp+18h]

  v3 = a2;
  EnterSharedCrit(a1, a2, a3);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( v3 >= MmUserProbeAddress )
    v3 = MmUserProbeAddress;
  v6 = *(_DWORD *)v3;
  v14 = *(_DWORD *)v3;
  v7 = *(char **)(v3 + 8);
  if ( ((unsigned __int8)v7 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v8 = (ULONG64)&v7[(unsigned __int16)v6 + 2];
  v9 = (_BYTE **)MmUserProbeAddress;
  if ( v8 < MmUserProbeAddress && (unsigned __int16)v6 <= HIWORD(v14) )
  {
    if ( (v6 & 1) != 0 )
    {
LABEL_10:
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
      v9 = (_BYTE **)MmUserProbeAddress;
      goto LABEL_11;
    }
    if ( v8 > (unsigned __int64)v7 )
      goto LABEL_12;
  }
  if ( (v6 & 1) != 0 )
    goto LABEL_10;
LABEL_11:
  **v9 = 0;
LABEL_12:
  WOWClass = GetWOWClass(a1, v7);
  v12 = WOWClass;
  if ( WOWClass )
    v12 = (_QWORD *)(WOWClass[1] - *(_QWORD *)(ThreadWin32Thread + 472));
  UserSessionSwitchLeaveCrit(v11);
  return v12;
}
