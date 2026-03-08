/*
 * XREFs of AsyncCallBack @ 0x1C00543D8
 * Callers:
 *     InsertReadyQueue @ 0x1C00057E4 (InsertReadyQueue.c)
 *     RunContext @ 0x1C0053F34 (RunContext.c)
 *     ParseNestedContext @ 0x1C005BB50 (ParseNestedContext.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 *     LogSchedEvent @ 0x1C004E3AC (LogSchedEvent.c)
 *     RestartContext @ 0x1C00512E8 (RestartContext.c)
 */

int __fastcall AsyncCallBack(_QWORD *a1, unsigned int a2)
{
  _QWORD *v2; // rax
  __int64 (__fastcall *v5)(); // rsi
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(); // rax

  v2 = (_QWORD *)a1[13];
  if ( v2 )
  {
    v5 = (__int64 (__fastcall *)())v2[11];
    v6 = v2[4];
    v7 = v2[12];
    v8 = v2[13];
  }
  else
  {
    v5 = (__int64 (__fastcall *)())a1[21];
    v6 = a1[9];
    v7 = a1[22];
    v8 = a1[23];
  }
  v9 = EvalMethodComplete;
  if ( v5 == EvalMethodComplete )
  {
    LogSchedEvent(1146048069, (__int64)a1, v6, (int)a2, v8);
    *(_DWORD *)v8 = a2;
    *(_QWORD *)(v8 + 8) = a1;
    LODWORD(v9) = KeSetEvent((PRKEVENT)(v8 + 16), 0, 0);
  }
  else if ( a2 == 32771 )
  {
    LODWORD(v9) = RestartContext((__int64)a1, 0);
  }
  else if ( v5 )
  {
    LogSchedEvent(1095975746, (__int64)a1, v6, (int)a2, v8);
    LODWORD(v9) = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64))v5)(v6 + 120, a2, v7, v8);
  }
  return (int)v9;
}
