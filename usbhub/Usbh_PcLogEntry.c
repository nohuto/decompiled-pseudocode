/*
 * XREFs of Usbh_PcLogEntry @ 0x1C0036580
 * Callers:
 *     UsbhHubSyncSuspendPortEvent @ 0x1C0033EBC (UsbhHubSyncSuspendPortEvent.c)
 * Callees:
 *     Usbh_UsbdReadFrameCounter @ 0x1C00031B0 (Usbh_UsbdReadFrameCounter.c)
 */

__int64 __fastcall Usbh_PcLogEntry(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, __int16 a6, char a7, char a8)
{
  int v8; // eax
  __int64 v9; // rbx
  __int64 v10; // rbx

  v8 = *(_DWORD *)(a2 + 400);
  v9 = ((unsigned __int8)*(_DWORD *)(a2 + 856) + 1) & 0xF;
  *(_DWORD *)(a2 + 856) = v9;
  v10 = a2 + 32 * (v9 + 27);
  *(_DWORD *)v10 = v8;
  *(_BYTE *)(v10 + 18) = a7;
  *(_WORD *)(v10 + 16) = a6;
  *(_DWORD *)(v10 + 4) = a4;
  *(_QWORD *)(v10 + 8) = a3;
  *(_BYTE *)(v10 + 19) = a8;
  *(_DWORD *)(v10 + 20) = a5;
  *(_DWORD *)(v10 + 28) = 1;
  if ( !a8 )
    *(_DWORD *)(v10 + 24) = Usbh_UsbdReadFrameCounter(a1) - a5;
  return v10;
}
