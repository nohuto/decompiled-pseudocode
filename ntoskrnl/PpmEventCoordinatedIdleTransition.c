/*
 * XREFs of PpmEventCoordinatedIdleTransition @ 0x14045AC8A
 * Callers:
 *     PpmIdleExecuteTransition @ 0x14022D7D0 (PpmIdleExecuteTransition.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x14035F4C0 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

void __fastcall PpmEventCoordinatedIdleTransition(char a1, int a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // eax
  unsigned __int16 v5; // cx
  unsigned int v6; // edx
  __int64 v7; // [rsp+30h] [rbp-38h] BYREF
  int v8; // [rsp+38h] [rbp-30h]
  int v9; // [rsp+3Ch] [rbp-2Ch]
  __int64 v10; // [rsp+40h] [rbp-28h]
  int v11; // [rsp+48h] [rbp-20h]
  int v12; // [rsp+4Ch] [rbp-1Ch]

  if ( a2 && (WORD4(PerfGlobalGroupMask) & 0x8000) != 0 )
  {
    v9 = 0;
    v7 = a3;
    v8 = 4 * a2;
    if ( a1 )
    {
      v4 = 1538;
      v5 = 4671;
      v6 = 1;
    }
    else
    {
      v12 = 0;
      v4 = 1539;
      v5 = 4672;
      v10 = a4;
      v6 = 2;
      v11 = 4;
    }
    EtwTraceKernelEvent((__int64)&v7, v6, 0x40008000u, v5, v4);
  }
}
