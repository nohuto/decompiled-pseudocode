/*
 * XREFs of xxxSendPointerMessageWorker @ 0x1C01C68A8
 * Callers:
 *     xxxSendPointerMessage @ 0x1C01C682C (xxxSendPointerMessage.c)
 *     ?xxxNotifyCaptureChangeIfCaptured@@YAH_KPEAUtagWND@@H@Z @ 0x1C01C74C4 (-xxxNotifyCaptureChangeIfCaptured@@YAH_KPEAUtagWND@@H@Z.c)
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x1C01C75BC (-xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 *     EditionPointerParentNotify @ 0x1C01C7B00 (EditionPointerParentNotify.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall xxxSendPointerMessageWorker(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  _BYTE *v6; // rax
  __int64 (__fastcall *v7)(__int64, __int64, __int64, __int64, __int64); // r11

  v6 = *(_BYTE **)(a1 + 40);
  if ( (char)v6[20] < 0 || (char)v6[19] < 0 || (v6[18] & 4) != 0 )
    return 0LL;
  v7 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64, __int64))*((_QWORD *)&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink
                                                                            + ((a6 + 6) & 0x1F));
  if ( (_DWORD)a2 == 528 )
    return v7(a1, 528LL, 582LL, a3, a5);
  else
    return v7(a1, a2, a4, a3, a5);
}
