/*
 * XREFs of MiLogAllocateWsleEvent @ 0x140530478
 * Callers:
 *     MiAllocateWsle @ 0x140211C80 (MiAllocateWsle.c)
 * Callees:
 *     MiIdentifyPfnWrapper @ 0x1402C9880 (MiIdentifyPfnWrapper.c)
 *     EtwTraceKernelEvent @ 0x14035C1F0 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     MI_PFN_IS_PROTO @ 0x1403F3F48 (MI_PFN_IS_PROTO.c)
 *     MiFillPageExtraInfo @ 0x140530428 (MiFillPageExtraInfo.c)
 */

void __fastcall MiLogAllocateWsleEvent(__int64 a1, int a2, __int64 a3, _DWORD *a4)
{
  unsigned __int16 v7; // ax
  int v8; // ecx
  __int128 v9; // [rsp+30h] [rbp-48h] BYREF
  __int128 v10; // [rsp+40h] [rbp-38h] BYREF
  __int128 *v11; // [rsp+50h] [rbp-28h] BYREF
  int v12; // [rsp+58h] [rbp-20h]
  int v13; // [rsp+5Ch] [rbp-1Ch]

  v9 = 0LL;
  v10 = 0LL;
  MiIdentifyPfnWrapper(a1, (__int64)&v9, a3, a4);
  if ( MI_PFN_IS_PROTO(a1) )
  {
    MiFillPageExtraInfo((unsigned __int64 *)&v10 + 1, a2, a3);
    v7 = 642;
    v8 = 32;
  }
  else
  {
    v7 = 630;
    v8 = 24;
  }
  v13 = 0;
  v11 = &v9;
  v12 = v8;
  EtwTraceKernelEvent((__int64)&v11, 1u, 0x28000001u, v7, 0x11401B02u);
}
