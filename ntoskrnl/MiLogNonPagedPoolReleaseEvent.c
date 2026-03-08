/*
 * XREFs of MiLogNonPagedPoolReleaseEvent @ 0x14063F350
 * Callers:
 *     MiClearNonPagedPtes @ 0x14020DF88 (MiClearNonPagedPtes.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x14035F4C0 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

void __fastcall MiLogNonPagedPoolReleaseEvent(_QWORD *a1)
{
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  __int128 v4; // [rsp+30h] [rbp-38h] BYREF
  __int64 v5; // [rsp+40h] [rbp-28h]
  __int128 *v6; // [rsp+48h] [rbp-20h] BYREF
  int v7; // [rsp+50h] [rbp-18h]
  int v8; // [rsp+54h] [rbp-14h]

  do
  {
    v4 = 0LL;
    v5 = 0LL;
    v2 = a1[1] | 0x8000000000000000uLL;
    v3 = v2;
    do
    {
      a1 = (_QWORD *)*a1;
      v2 -= 8LL;
    }
    while ( a1 && (a1[1] | 0x8000000000000000uLL) == v2 );
    v8 = 0;
    *(_QWORD *)&v4 = v4 & 0xFFFFFFFFFFFFFFF0uLL | 5;
    v5 = (__int64)(v3 - v2) >> 3;
    v7 = 24;
    *((_QWORD *)&v4 + 1) = (__int64)((v2 << 25) + 0x10000000) >> 16;
    v6 = &v4;
    EtwTraceKernelEvent((__int64)&v6, 1u, 0x20000001u, 0x279u, 0x11401B04u);
  }
  while ( a1 );
}
