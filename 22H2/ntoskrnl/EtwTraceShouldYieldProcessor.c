/*
 * XREFs of EtwTraceShouldYieldProcessor @ 0x1405FD53C
 * Callers:
 *     MiWalkPageTablesRecursively @ 0x14025C050 (MiWalkPageTablesRecursively.c)
 *     MiGetPageChain @ 0x14026C5E0 (MiGetPageChain.c)
 *     MiQueryAddressState @ 0x140271AE0 (MiQueryAddressState.c)
 *     MiDecommitPages @ 0x14027F6B0 (MiDecommitPages.c)
 *     MiConvertEntireLargePageToSmall @ 0x1402D2AD0 (MiConvertEntireLargePageToSmall.c)
 *     MiInitializeMdlBatchPages @ 0x1402F9310 (MiInitializeMdlBatchPages.c)
 *     KeShouldYieldProcessor @ 0x140333AD0 (KeShouldYieldProcessor.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140211EFC (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 */

__int64 __fastcall EtwTraceShouldYieldProcessor(int a1, int a2, int a3)
{
  _DWORD v4[4]; // [rsp+30h] [rbp-38h] BYREF
  _DWORD *v5; // [rsp+40h] [rbp-28h] BYREF
  int v6; // [rsp+48h] [rbp-20h]
  int v7; // [rsp+4Ch] [rbp-1Ch]

  v4[0] = a1;
  v4[1] = a2;
  v5 = v4;
  v7 = 0;
  v4[2] = a3;
  v6 = 12;
  return EtwTraceKernelEvent((int)&v5, 1, 0x24000000u, 3949, 4196866);
}
