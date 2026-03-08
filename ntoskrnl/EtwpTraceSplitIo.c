/*
 * XREFs of EtwpTraceSplitIo @ 0x1405FC5D0
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceKernelEvent @ 0x14035F4C0 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

void __fastcall EtwpTraceSplitIo(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  __int64 v3; // [rsp+30h] [rbp-38h] BYREF
  int v4; // [rsp+38h] [rbp-30h]
  int v5; // [rsp+3Ch] [rbp-2Ch]
  __int64 v6; // [rsp+40h] [rbp-28h]
  int v7; // [rsp+48h] [rbp-20h]
  int v8; // [rsp+4Ch] [rbp-1Ch]

  v5 = 0;
  v8 = 0;
  v3 = a1;
  v6 = a2;
  v4 = 8;
  v7 = 8;
  EtwTraceKernelEvent((__int64)&v3, 2u, 0x200000u, a3, 0x401802u);
}
