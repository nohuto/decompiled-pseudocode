/*
 * XREFs of EtwpTraceRedirectedIo @ 0x1405FC520
 * Callers:
 *     <none>
 * Callees:
 *     PsGetThreadServerSilo @ 0x1402637A0 (PsGetThreadServerSilo.c)
 *     EtwTraceSiloKernelEvent @ 0x14035EC20 (EtwTraceSiloKernelEvent.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

void __fastcall EtwpTraceRedirectedIo(__int64 a1, __int64 a2)
{
  __int64 ThreadServerSilo; // rax
  __int64 v4; // [rsp+30h] [rbp-38h] BYREF
  __int64 v5; // [rsp+38h] [rbp-30h]
  __int64 *v6; // [rsp+40h] [rbp-28h] BYREF
  int v7; // [rsp+48h] [rbp-20h]
  int v8; // [rsp+4Ch] [rbp-1Ch]

  ThreadServerSilo = *(_QWORD *)(a1 + 152);
  v4 = a1;
  if ( ThreadServerSilo )
    ThreadServerSilo = PsGetThreadServerSilo(ThreadServerSilo);
  if ( a2 )
    v5 = *(_QWORD *)(a2 + 24);
  else
    v5 = 0LL;
  v8 = 0;
  v6 = &v4;
  v7 = 16;
  EtwTraceSiloKernelEvent(ThreadServerSilo, (__int64)&v6, 1u, 0x300u, 0x110u, 0x11501902u);
}
