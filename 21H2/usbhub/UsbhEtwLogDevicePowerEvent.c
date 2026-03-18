/*
 * XREFs of UsbhEtwLogDevicePowerEvent @ 0x1C000DFB0
 * Callers:
 *     UsbhPdoUnblockPendedD0IrpWI @ 0x1C00018F0 (UsbhPdoUnblockPendedD0IrpWI.c)
 *     UsbhPdoDevicePowerState @ 0x1C0005200 (UsbhPdoDevicePowerState.c)
 *     UsbhPdoSetD0 @ 0x1C00055F0 (UsbhPdoSetD0.c)
 * Callees:
 *     UsbhEtwWrite @ 0x1C000CB00 (UsbhEtwWrite.c)
 *     __security_check_cookie @ 0x1C001F330 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001F4F0 (_guard_dispatch_icall_nop.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002D6A8 (UsbhTrapFatal_Dbg.c)
 */

void UsbhEtwLogDevicePowerEvent(__int64 a1, __int64 a2, const EVENT_DESCRIPTOR *a3, int a4, ...)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  int v8; // [rsp+60h] [rbp-21h] BYREF
  int v9; // [rsp+68h] [rbp-19h] BYREF
  __int16 v10; // [rsp+6Ch] [rbp-15h]
  __int16 v11; // [rsp+6Eh] [rbp-13h]
  __int16 v12; // [rsp+70h] [rbp-11h]
  __int16 v13; // [rsp+72h] [rbp-Fh]
  __int64 v14; // [rsp+78h] [rbp-9h] BYREF
  __int16 v15; // [rsp+80h] [rbp-1h]
  __int16 v16; // [rsp+82h] [rbp+1h]
  int v17; // [rsp+84h] [rbp+3h]
  int v18; // [rsp+88h] [rbp+7h]
  int v19; // [rsp+8Ch] [rbp+Bh]
  int v20; // [rsp+90h] [rbp+Fh]
  int v21; // [rsp+94h] [rbp+13h]
  int v22; // [rsp+98h] [rbp+17h]
  int v23; // [rsp+9Ch] [rbp+1Bh]
  int v24; // [rsp+A0h] [rbp+1Fh]
  GUID v25; // [rsp+A8h] [rbp+27h] BYREF
  va_list va; // [rsp+100h] [rbp+7Fh] BYREF

  va_start(va, a4);
  v8 = a4;
  v25 = 0LL;
  if ( dword_1C006A690 )
  {
    v6 = *(_QWORD *)(a1 + 1184);
    if ( !v6 )
      UsbhTrapFatal_Dbg(0LL, 0LL);
    v7 = *(_QWORD *)(v6 + 64);
    if ( !v7 )
      UsbhTrapFatal_Dbg(*(_QWORD *)(a1 + 1184), 0LL);
    if ( *(_DWORD *)v7 != 541218120 )
      UsbhTrapFatal_Dbg(*(_QWORD *)(a1 + 1184), v7);
    v9 = *(_DWORD *)(v7 + 5192);
    v10 = *(_WORD *)(v7 + 5196);
    v11 = *(_DWORD *)(v7 + 5200);
    v12 = *(_WORD *)(v7 + 5228);
    v13 = *(_WORD *)(v7 + 5230);
    v14 = *(_QWORD *)(a1 + 1160);
    v15 = *(_WORD *)(a1 + 1408);
    v16 = *(_WORD *)(a1 + 1410);
    v17 = *(_DWORD *)(a1 + 2688);
    v18 = *(_DWORD *)(a1 + 2692);
    v19 = *(_DWORD *)(a1 + 2696);
    v20 = *(_DWORD *)(a1 + 2700);
    v21 = *(_DWORD *)(a1 + 2704);
    v22 = *(_DWORD *)(a1 + 2708);
    v23 = *(_DWORD *)(a1 + 2712);
    v24 = *(_DWORD *)(a1 + 1168);
    if ( a2 && g_IoGetActivityIdIrp && (int)g_IoGetActivityIdIrp(a2, &v25) >= 0 )
      UsbhEtwWrite(a3, &v25, &v9, 12LL, &v14, 44LL, &v8, 4LL, va, 4LL, 0LL);
    else
      UsbhEtwWrite(a3, 0LL, &v9, 12LL, &v14, 44LL, &v8, 4LL, va, 4LL, 0LL);
  }
}
