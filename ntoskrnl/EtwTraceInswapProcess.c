/*
 * XREFs of EtwTraceInswapProcess @ 0x1405FA9FC
 * Callers:
 *     KiInSwapProcesses @ 0x1402C0180 (KiInSwapProcesses.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x14035F4C0 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

void __fastcall EtwTraceInswapProcess(__int64 a1)
{
  int v1; // eax
  unsigned __int64 v2; // [rsp+30h] [rbp-38h] BYREF
  int v3; // [rsp+38h] [rbp-30h]
  int v4; // [rsp+3Ch] [rbp-2Ch]
  unsigned __int64 *v5; // [rsp+40h] [rbp-28h] BYREF
  int v6; // [rsp+48h] [rbp-20h]
  int v7; // [rsp+4Ch] [rbp-1Ch]

  v1 = *(_DWORD *)(a1 + 1088);
  v4 = 0;
  v3 = v1;
  v2 = *(_QWORD *)(a1 + 40) & 0xFFFFFFFFFFFFF000uLL;
  v5 = &v2;
  v7 = 0;
  v6 = 12;
  EtwTraceKernelEvent((__int64)&v5, 1u, 0x20000800u, 0x323u, 0x501902u);
}
