/*
 * XREFs of PiProcessClearDeviceProblem @ 0x140956400
 * Callers:
 *     PnpDeviceActionWorker @ 0x140203020 (PnpDeviceActionWorker.c)
 * Callees:
 *     PipClearDevNodeFlags @ 0x14068816C (PipClearDevNodeFlags.c)
 *     PiPnpRtlEndOperation @ 0x1406CCB7C (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x1406CDF98 (PiPnpRtlBeginOperation.c)
 *     PipClearDevNodeProblem @ 0x14086666C (PipClearDevNodeProblem.c)
 *     PnpRestartDeviceNode @ 0x140955D4C (PnpRestartDeviceNode.c)
 *     PipIsProblemReadonly @ 0x140956954 (PipIsProblemReadonly.c)
 */

__int64 __fastcall PiProcessClearDeviceProblem(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // ebx
  _DWORD *v3; // rdi
  int v4; // edx
  int v5; // r8d
  int v6; // r9d
  int v7; // r8d
  PVOID P; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  v2 = 0;
  P = 0LL;
  v3 = *(_DWORD **)(*(_QWORD *)(v1 + 312) + 40LL);
  v4 = v3[75];
  if ( (unsigned int)(v4 - 769) > 3 && v4 != 788 )
  {
    if ( (unsigned int)(v4 - 789) <= 1 )
      return (unsigned int)-1073741738;
    return v2;
  }
  v5 = v3[99];
  if ( (v5 & 0x6000) == 0 )
    return v2;
  v6 = *(_DWORD *)(a1 + 24);
  if ( v6 == 1 )
  {
    if ( (unsigned int)PipIsProblemReadonly(v3, (unsigned int)v3[101]) )
      return (unsigned int)-1073741584;
    goto LABEL_13;
  }
  if ( v6 != 3 )
  {
LABEL_13:
    v7 = v5 & 0x2000;
    goto LABEL_14;
  }
  v7 = v3[99] & 0x2000;
  if ( !v7 || v3[101] != 47 )
    return (unsigned int)-1073741808;
LABEL_14:
  if ( v6 == 25 && (!v7 || v3[101] != 55) )
    return (unsigned int)-1073741808;
  PiPnpRtlBeginOperation((__int64 **)&P);
  PipClearDevNodeFlags((__int64)v3, 0x4000);
  PipClearDevNodeProblem((__int64)v3);
  if ( (unsigned int)(v3[75] - 769) > 1 )
    PnpRestartDeviceNode((__int64)v3);
  if ( P )
    PiPnpRtlEndOperation((PVOID **)P);
  return v2;
}
