/*
 * XREFs of UsbhEtwLogDeviceIrpEvent @ 0x1C000E150
 * Callers:
 *     UsbhSyncResetDeviceInternal @ 0x1C0003078 (UsbhSyncResetDeviceInternal.c)
 *     UsbhCompletePdoWakeIrp @ 0x1C000F058 (UsbhCompletePdoWakeIrp.c)
 *     UsbhPdoPower_WaitWake @ 0x1C001EA50 (UsbhPdoPower_WaitWake.c)
 *     UsbhFdoResetPdoPort @ 0x1C002FF70 (UsbhFdoResetPdoPort.c)
 *     UsbhCompleteCanceledPdoWakeIrp @ 0x1C003C040 (UsbhCompleteCanceledPdoWakeIrp.c)
 *     UsbhPdoPnp_StartDevice @ 0x1C0055CA0 (UsbhPdoPnp_StartDevice.c)
 *     UsbhIdleIrp_NoIrp @ 0x1C0057830 (UsbhIdleIrp_NoIrp.c)
 *     UsbhIdleIrp_ReleaseIrp @ 0x1C0057B74 (UsbhIdleIrp_ReleaseIrp.c)
 * Callees:
 *     UsbhEtwWrite @ 0x1C000CB00 (UsbhEtwWrite.c)
 *     __security_check_cookie @ 0x1C001F330 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001F4F0 (_guard_dispatch_icall_nop.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002D6A8 (UsbhTrapFatal_Dbg.c)
 */

void __fastcall UsbhEtwLogDeviceIrpEvent(__int64 a1, __int64 a2, const EVENT_DESCRIPTOR *a3, int a4)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  int v8; // [rsp+50h] [rbp-68h] BYREF
  int v9; // [rsp+58h] [rbp-60h] BYREF
  __int16 v10; // [rsp+5Ch] [rbp-5Ch]
  __int16 v11; // [rsp+5Eh] [rbp-5Ah]
  __int16 v12; // [rsp+60h] [rbp-58h]
  __int16 v13; // [rsp+62h] [rbp-56h]
  __int64 v14; // [rsp+68h] [rbp-50h] BYREF
  __int16 v15; // [rsp+70h] [rbp-48h]
  __int16 v16; // [rsp+72h] [rbp-46h]
  int v17; // [rsp+74h] [rbp-44h]
  int v18; // [rsp+78h] [rbp-40h]
  int v19; // [rsp+7Ch] [rbp-3Ch]
  int v20; // [rsp+80h] [rbp-38h]
  int v21; // [rsp+84h] [rbp-34h]
  int v22; // [rsp+88h] [rbp-30h]
  int v23; // [rsp+8Ch] [rbp-2Ch]
  int v24; // [rsp+90h] [rbp-28h]
  GUID v25; // [rsp+98h] [rbp-20h] BYREF

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
      UsbhEtwWrite(a3, &v25, &v9, 12LL, &v14, 44LL, &v8, 4LL, 0LL);
    else
      UsbhEtwWrite(a3, 0LL, &v9, 12LL, &v14, 44LL, &v8, 4LL, 0LL);
  }
}
