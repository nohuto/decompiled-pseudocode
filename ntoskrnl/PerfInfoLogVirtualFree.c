/*
 * XREFs of PerfInfoLogVirtualFree @ 0x1409E42D4
 * Callers:
 *     MiFreeVadRange @ 0x1402D5634 (MiFreeVadRange.c)
 *     MmFreeVirtualMemory @ 0x1406EC820 (MmFreeVirtualMemory.c)
 *     MiPreparePlaceholderVadReplacement @ 0x140A451C8 (MiPreparePlaceholderVadReplacement.c)
 * Callees:
 *     PsGetProcessServerSilo @ 0x1402637E0 (PsGetProcessServerSilo.c)
 *     EtwTraceSiloKernelEvent @ 0x14035EC20 (EtwTraceSiloKernelEvent.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

void __fastcall PerfInfoLogVirtualFree(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v4; // eax
  __int64 ProcessServerSilo; // rax
  _QWORD v6[2]; // [rsp+30h] [rbp-38h] BYREF
  int v7; // [rsp+40h] [rbp-28h]
  int v8; // [rsp+44h] [rbp-24h]
  _QWORD *v9; // [rsp+48h] [rbp-20h] BYREF
  int v10; // [rsp+50h] [rbp-18h]
  int v11; // [rsp+54h] [rbp-14h]

  v4 = *(_DWORD *)(a3 + 1088);
  v6[0] = a1;
  v6[1] = a2;
  v7 = v4;
  v9 = v6;
  v11 = 0;
  v10 = 24;
  v8 = a4;
  ProcessServerSilo = PsGetProcessServerSilo(a3);
  EtwTraceSiloKernelEvent(ProcessServerSilo, (__int64)&v9, 1u, 0x20008000u, 0x263u, 0x501902u);
}
