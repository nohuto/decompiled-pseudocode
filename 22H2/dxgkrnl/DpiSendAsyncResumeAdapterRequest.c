/*
 * XREFs of DpiSendAsyncResumeAdapterRequest @ 0x1C00521E4
 * Callers:
 *     DpiRequestDevicePowerState @ 0x1C0051844 (DpiRequestDevicePowerState.c)
 * Callees:
 *     <none>
 */

LONG __fastcall DpiSendAsyncResumeAdapterRequest(__int64 a1)
{
  __int64 v2; // rax
  _QWORD *v3; // rdx
  _QWORD *v4; // rax

  v2 = WdLogNewEntry5_WdPower();
  *(_QWORD *)(v2 + 24) = a1;
  *(_OWORD *)(v2 + 32) = 0LL;
  WdLogEvent5_WdPower(v2);
  *(_DWORD *)(a1 + 4008) = 2;
  v3 = *(_QWORD **)(a1 + 3968);
  v4 = (_QWORD *)(a1 + 3984);
  if ( *v3 != a1 + 3960 )
    __fastfail(3u);
  *v4 = a1 + 3960;
  *(_QWORD *)(a1 + 3992) = v3;
  *v3 = v4;
  *(_QWORD *)(a1 + 3968) = v4;
  return KeSetEvent((PRKEVENT)(a1 + 3928), 0, 0);
}
