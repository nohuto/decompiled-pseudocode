/*
 * XREFs of EtwpSystemTraceWdf @ 0x1405FBEF0
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceKernelEvent @ 0x14035F4C0 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

void __fastcall EtwpSystemTraceWdf(__int64 a1, int a2, unsigned int a3, unsigned __int16 a4, unsigned __int8 a5)
{
  __int64 v5; // [rsp+30h] [rbp-28h] BYREF
  int v6; // [rsp+38h] [rbp-20h]
  int v7; // [rsp+3Ch] [rbp-1Ch]

  v7 = 0;
  v5 = a1;
  v6 = a2;
  EtwTraceKernelEvent((__int64)&v5, 1u, a3, a4, a5 | 0x401903);
}
