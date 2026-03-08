/*
 * XREFs of EtwpTraceProcessorTrace @ 0x140600834
 * Callers:
 *     EtwpLogKernelEvent @ 0x1403149F0 (EtwpLogKernelEvent.c)
 *     EtwpLogSystemEventUnsafe @ 0x14036F9F8 (EtwpLogSystemEventUnsafe.c)
 *     EtwpLogContextSwapEvent @ 0x140384C90 (EtwpLogContextSwapEvent.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

struct _KPRCB *__fastcall EtwpTraceProcessorTrace(__int64 a1, _QWORD *a2, struct _KTHREAD *a3, int a4)
{
  struct _KTHREAD *CurrentThread; // r10
  struct _KPRCB *result; // rax
  _QWORD *v6; // rcx
  _QWORD v7[2]; // [rsp+20h] [rbp-48h] BYREF
  int CycleTime; // [rsp+30h] [rbp-38h]
  unsigned int CurrentRunTime; // [rsp+34h] [rbp-34h]
  __int64 v10; // [rsp+38h] [rbp-30h]
  __int128 v11; // [rsp+40h] [rbp-28h]
  int v12; // [rsp+50h] [rbp-18h]
  int v13; // [rsp+54h] [rbp-14h]

  v13 = 0;
  v11 = 0LL;
  CurrentThread = KeGetCurrentThread();
  result = KeGetCurrentPrcb();
  if ( result->IdleThread != CurrentThread && (a4 & 0x1800) != 0 )
  {
    v7[0] = a1;
    v6 = *(_QWORD **)(a1 + 1032);
    v12 = a4;
    if ( !a3 )
      a3 = CurrentThread;
    CycleTime = a3[1].CycleTime;
    CurrentRunTime = a3[1].CurrentRunTime;
    v7[1] = *a2;
    v10 = v6[1];
    return (struct _KPRCB *)(*(__int64 (__fastcall **)(_QWORD, _QWORD *))(v6[2] + 16LL))(*v6, v7);
  }
  return result;
}
