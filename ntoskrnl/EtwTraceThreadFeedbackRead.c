/*
 * XREFs of EtwTraceThreadFeedbackRead @ 0x1405FB260
 * Callers:
 *     KiUpdateThreadHgsFeedback @ 0x140576260 (KiUpdateThreadHgsFeedback.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x14035F4C0 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

void __fastcall EtwTraceThreadFeedbackRead(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD v3[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v4; // [rsp+38h] [rbp-30h]
  _DWORD *v5; // [rsp+40h] [rbp-28h] BYREF
  int v6; // [rsp+48h] [rbp-20h]
  int v7; // [rsp+4Ch] [rbp-1Ch]

  v3[0] = *(_DWORD *)(a1 + 1232);
  v3[1] = *(_DWORD *)(a2 + 36);
  v5 = v3;
  v7 = 0;
  v4 = a3;
  v6 = 16;
  EtwTraceKernelEvent((__int64)&v5, 1u, 0xA0000080, 0xF78u, 0x202u);
}
