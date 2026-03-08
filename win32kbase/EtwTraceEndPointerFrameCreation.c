/*
 * XREFs of EtwTraceEndPointerFrameCreation @ 0x1C01623C0
 * Callers:
 *     ?PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@KPEAURIMCOMPLETEFRAME@@@Z @ 0x1C01FD690 (-PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@KPEAURIMCOMPLET.c)
 * Callees:
 *     McTemplateK0qqq_EtwWriteTransfer @ 0x1C00EE3C8 (McTemplateK0qqq_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall EtwTraceEndPointerFrameCreation(__int64 a1, char a2, __int64 a3)
{
  NTSTATUS result; // eax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x80000) != 0 )
    return McTemplateK0qqq_EtwWriteTransfer(a1, &EndPointerFrameCreation, a3, a1, a2, a3);
  return result;
}
