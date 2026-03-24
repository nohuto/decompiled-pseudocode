/*
 * XREFs of NtUserGetWOWClass @ 0x1C01FC570
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C016E324 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _GetWOWClass @ 0x1C01E92D4 (_GetWOWClass.c)
 */

_QWORD *__fastcall NtUserGetWOWClass(__int64 a1, ULONG64 a2)
{
  __int64 ThreadWin32Thread; // rsi
  int v5; // ecx
  char *v6; // rbx
  ULONG64 v7; // rdx
  _BYTE **v8; // rax
  _QWORD *WOWClass; // rax
  __int64 v10; // rcx
  _QWORD *v11; // rbx
  int v13; // [rsp+60h] [rbp+18h]

  EnterSharedCrit(0LL, 1LL);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( a2 >= MmUserProbeAddress )
    a2 = MmUserProbeAddress;
  v5 = *(_DWORD *)a2;
  v13 = *(_DWORD *)a2;
  v6 = *(char **)(a2 + 8);
  if ( ((unsigned __int8)v6 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v7 = (ULONG64)&v6[(unsigned __int16)v5 + 2];
  v8 = (_BYTE **)MmUserProbeAddress;
  if ( v7 < MmUserProbeAddress && (unsigned __int16)v5 <= HIWORD(v13) )
  {
    if ( (v5 & 1) != 0 )
    {
LABEL_10:
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 2408);
      v8 = (_BYTE **)MmUserProbeAddress;
      goto LABEL_11;
    }
    if ( v7 > (unsigned __int64)v6 )
      goto LABEL_12;
  }
  if ( (v5 & 1) != 0 )
    goto LABEL_10;
LABEL_11:
  **v8 = 0;
LABEL_12:
  WOWClass = GetWOWClass(a1, v6);
  v11 = WOWClass;
  if ( WOWClass )
    v11 = (_QWORD *)(WOWClass[1] - *(_QWORD *)(ThreadWin32Thread + 472));
  UserSessionSwitchLeaveCrit(v10);
  return v11;
}
