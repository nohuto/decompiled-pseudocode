/*
 * XREFs of EtwTraceDpcEnqueueEvent @ 0x1405A7664
 * Callers:
 *     KiInsertQueueDpc @ 0x14021FD20 (KiInsertQueueDpc.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x14035C1F0 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 */

void __fastcall EtwTraceDpcEnqueueEvent(
        __int64 a1,
        void (__fastcall *a2)(struct _KDPC *Dpc, PVOID DeferredContext, unsigned int *SystemArgument1, PVOID SystemArgument2),
        int a3,
        int a4,
        int a5,
        char a6)
{
  __int64 v6; // [rsp+30h] [rbp-30h] BYREF
  int v7; // [rsp+38h] [rbp-28h]
  int v8; // [rsp+3Ch] [rbp-24h]
  int v9; // [rsp+40h] [rbp-20h]
  char v10; // [rsp+44h] [rbp-1Ch]
  __int16 v11; // [rsp+45h] [rbp-1Bh]
  char v12; // [rsp+47h] [rbp-19h]
  _QWORD v13[2]; // [rsp+48h] [rbp-18h] BYREF

  v11 = 0;
  v12 = 0;
  if ( a2 != EtwpStackWalkDpc )
  {
    v9 = a5;
    v10 = a6;
    v11 = 0;
    v12 = 0;
    v6 = a1;
    v7 = a3;
    v8 = a4;
    v13[0] = &v6;
    v13[1] = 24LL;
    EtwTraceKernelEvent((__int64)v13, 1u, 0x20040000u, 0xF64u, 0x501E02u);
  }
}
