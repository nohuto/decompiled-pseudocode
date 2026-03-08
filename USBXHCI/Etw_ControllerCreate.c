/*
 * XREFs of Etw_ControllerCreate @ 0x1C001A430
 * Callers:
 *     Controller_WdfEvtDeviceAdd @ 0x1C006FA60 (Controller_WdfEvtDeviceAdd.c)
 * Callees:
 *     McTemplateK0pqqqqqqqsssxqqqtn_EtwWriteTransfer @ 0x1C004B5C8 (McTemplateK0pqqqqqqqsssxqqqtn_EtwWriteTransfer.c)
 */

__int64 __fastcall Etw_ControllerCreate(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 2) != 0 )
    return McTemplateK0pqqqqqqqsssxqqqtn_EtwWriteTransfer(
             *(unsigned __int8 *)(a2 + 600),
             *(unsigned __int16 *)(a2 + 268),
             (int)a2 + 314,
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
