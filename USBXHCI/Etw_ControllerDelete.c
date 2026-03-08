/*
 * XREFs of Etw_ControllerDelete @ 0x1C004A8F0
 * Callers:
 *     Controller_WdfEvtCleanupCallback @ 0x1C0036620 (Controller_WdfEvtCleanupCallback.c)
 * Callees:
 *     McTemplateK0pqqqqqqqsssxqqqt_EtwWriteTransfer @ 0x1C004B3B8 (McTemplateK0pqqqqqqqsssxqqqt_EtwWriteTransfer.c)
 */

__int64 __fastcall Etw_ControllerDelete(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 2) != 0 )
    return McTemplateK0pqqqqqqqsssxqqqt_EtwWriteTransfer(
             (int)a2 + 314,
             (unsigned int)&USBXHCI_ETW_EVENT_CONTROLLER_DELETE,
             (int)a2 + 309,
             *(_QWORD *)(a2 + 8),
             *(_DWORD *)(a2 + 244),
             *(_DWORD *)(a2 + 260),
             *(_WORD *)(a2 + 264),
             *(_WORD *)(a2 + 268),
             *(_WORD *)(a2 + 248),
             *(_WORD *)(a2 + 252),
             *(_BYTE *)(a2 + 256),
             a2 + 304,
             a2 + 309,
             a2 + 314,
             *(_QWORD *)(a2 + 328),
             *(_DWORD *)(a2 + 464),
             *(_DWORD *)(a2 + 392),
             *(_DWORD *)(a2 + 176),
             *(_BYTE *)(a2 + 600));
  return result;
}
