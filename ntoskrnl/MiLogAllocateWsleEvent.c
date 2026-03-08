/*
 * XREFs of MiLogAllocateWsleEvent @ 0x140619E1C
 * Callers:
 *     MiAllocateWsle @ 0x14026D1B0 (MiAllocateWsle.c)
 * Callees:
 *     MiIdentifyPfnWrapper @ 0x14025C920 (MiIdentifyPfnWrapper.c)
 *     EtwTraceKernelEvent @ 0x14035F4C0 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     MiFillPageExtraInfo @ 0x140619DB4 (MiFillPageExtraInfo.c)
 */

void __fastcall MiLogAllocateWsleEvent(__int64 a1, int a2, __int64 a3)
{
  unsigned __int16 v6; // ax
  int v7; // ecx
  __int128 v8; // [rsp+30h] [rbp-48h] BYREF
  __int128 v9; // [rsp+40h] [rbp-38h] BYREF
  __int128 *v10; // [rsp+50h] [rbp-28h] BYREF
  int v11; // [rsp+58h] [rbp-20h]
  int v12; // [rsp+5Ch] [rbp-1Ch]

  v8 = 0LL;
  v9 = 0LL;
  MiIdentifyPfnWrapper(a1, (__int64)&v8);
  if ( *(__int64 *)(a1 + 40) >= 0 )
  {
    v6 = 630;
    v7 = 24;
  }
  else
  {
    MiFillPageExtraInfo((unsigned __int64 *)&v9 + 1, a2, a3);
    v6 = 642;
    v7 = 32;
  }
  v12 = 0;
  v10 = &v8;
  v11 = v7;
  EtwTraceKernelEvent((__int64)&v10, 1u, 0x28000001u, v6, 0x11401B04u);
}
