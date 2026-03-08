/*
 * XREFs of MiLogRemoveWsleEvent @ 0x140619EE0
 * Callers:
 *     MiRemoveWsleList @ 0x1402824E0 (MiRemoveWsleList.c)
 *     MiRemoveWsle @ 0x140325790 (MiRemoveWsle.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x14035F4C0 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     MiFillPageExtraInfo @ 0x140619DB4 (MiFillPageExtraInfo.c)
 */

void __fastcall MiLogRemoveWsleEvent(__int64 a1, int a2)
{
  unsigned __int64 v2; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int64 *v3; // [rsp+38h] [rbp-20h] BYREF
  int v4; // [rsp+40h] [rbp-18h]
  int v5; // [rsp+44h] [rbp-14h]

  v2 = 0LL;
  MiFillPageExtraInfo(&v2, a2, a1);
  v5 = 0;
  v3 = &v2;
  v4 = 8;
  EtwTraceKernelEvent((__int64)&v3, 1u, 0x28000000u, 0x283u, 0x11401B02u);
}
