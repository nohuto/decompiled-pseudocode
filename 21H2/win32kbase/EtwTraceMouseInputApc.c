/*
 * XREFs of EtwTraceMouseInputApc @ 0x1C0123440
 * Callers:
 *     ?ProcessInput@CMouseProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x1C01C125C (-ProcessInput@CMouseProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_D.c)
 * Callees:
 *     McTemplateK0_EtwWriteTransfer @ 0x1C0124580 (McTemplateK0_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceMouseInputApc(__int64 a1)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x20000000) != 0 )
    return McTemplateK0_EtwWriteTransfer(a1, &MouseInputApc, &W32kControlGuid);
  return result;
}
