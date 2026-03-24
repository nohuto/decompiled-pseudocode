/*
 * XREFs of NtUserUnregisterClass @ 0x1C0069630
 * Callers:
 *     <none>
 * Callees:
 *     _UnregisterClass @ 0x1C0069788 (_UnregisterClass.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C016D990 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _W32ExceptionHandler @ 0x1C025CF24 (_W32ExceptionHandler.c)
 */

__int64 __fastcall NtUserUnregisterClass(ULONG64 a1, __int64 a2, ULONG64 a3)
{
  int v6; // ecx
  ULONG64 v7; // rbx
  ULONG64 v8; // rdx
  _BYTE **v9; // rax
  ULONG64 v10; // rcx
  int v11; // ebx
  __int128 v13; // [rsp+38h] [rbp-20h] BYREF
  __int64 v14; // [rsp+48h] [rbp-10h]
  int v15; // [rsp+78h] [rbp+20h]

  v13 = 0LL;
  v14 = 0LL;
  EnterCrit(0LL, 1LL);
  if ( a1 >= MmUserProbeAddress )
    a1 = MmUserProbeAddress;
  v6 = *(_DWORD *)a1;
  v15 = *(_DWORD *)a1;
  v7 = *(_QWORD *)(a1 + 8);
  if ( (v7 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    if ( (v7 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v8 = (unsigned __int16)v6 + v7 + 2;
    v9 = (_BYTE **)MmUserProbeAddress;
    if ( v8 < MmUserProbeAddress && (unsigned __int16)v6 <= HIWORD(v15) )
    {
      if ( (v6 & 1) != 0 )
        goto LABEL_11;
      if ( v8 > v7 )
        goto LABEL_13;
    }
    if ( (v6 & 1) == 0 )
    {
LABEL_12:
      **v9 = 0;
      goto LABEL_13;
    }
LABEL_11:
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 10151LL);
    v9 = (_BYTE **)MmUserProbeAddress;
    goto LABEL_12;
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
