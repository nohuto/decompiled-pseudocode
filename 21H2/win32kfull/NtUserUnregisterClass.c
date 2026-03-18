/*
 * XREFs of NtUserUnregisterClass @ 0x1C0070F40
 * Callers:
 *     <none>
 * Callees:
 *     _UnregisterClass @ 0x1C0071084 (_UnregisterClass.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0147E84 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserUnregisterClass(unsigned int *a1, __int64 a2, ULONG64 a3)
{
  __int64 v6; // rcx
  ULONG64 v7; // rbx
  ULONG64 v8; // rdx
  _BYTE **v9; // rax
  ULONG64 v10; // rcx
  int v11; // ebx
  __int128 v13; // [rsp+50h] [rbp-28h] BYREF
  __int64 v14; // [rsp+60h] [rbp-18h]
  int v15; // [rsp+98h] [rbp+20h]

  v13 = 0LL;
  v14 = 0LL;
  EnterCrit(0LL, 0LL);
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (unsigned int *)MmUserProbeAddress;
  v6 = *a1;
  v15 = *a1;
  v7 = *((_QWORD *)a1 + 1);
  if ( (v7 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    if ( (v7 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v8 = (unsigned __int16)v6 + v7 + 2;
    v9 = (_BYTE **)MmUserProbeAddress;
    if ( v8 < MmUserProbeAddress && (unsigned __int16)v6 <= HIWORD(v15) )
    {
      if ( (v6 & 1) != 0 )
        goto LABEL_10;
      if ( v8 > v7 )
        goto LABEL_13;
    }
    if ( (v6 & 1) == 0 )
    {
LABEL_11:
      **v9 = 0;
      goto LABEL_13;
    }
LABEL_10:
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6);
    v9 = (_BYTE **)MmUserProbeAddress;
    goto LABEL_11;
  }
LABEL_13:
  v11 = UnregisterClass(v7, a2, &v13);
  if ( v11 )
  {
    v10 = MmUserProbeAddress;
    if ( a3 >= MmUserProbeAddress )
      a3 = MmUserProbeAddress;
    *(_OWORD *)a3 = v13;
    *(_QWORD *)(a3 + 16) = v14;
  }
  UserSessionSwitchLeaveCrit(v10);
  return v11;
}
