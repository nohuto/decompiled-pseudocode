/*
 * XREFs of EtwTraceDwmManipulationFrameRouted @ 0x1C0121D90
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C01900D0 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     McTemplateK0dq_EtwWriteTransfer @ 0x1C01253EC (McTemplateK0dq_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceDwmManipulationFrameRouted(__int64 a1, int a2, __int64 a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
    return McTemplateK0dq_EtwWriteTransfer(a1, &DwmManipulationFrameRouted, a3, (unsigned int)a1, a2);
  return result;
}
