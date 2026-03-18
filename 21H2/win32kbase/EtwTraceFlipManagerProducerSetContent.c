/*
 * XREFs of EtwTraceFlipManagerProducerSetContent @ 0x1C014DDE0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0qppq_EtwWriteTransfer @ 0x1C00D8418 (McTemplateK0qppq_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall EtwTraceFlipManagerProducerSetContent(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  NTSTATUS result; // eax

  if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
    return McTemplateK0qppq_EtwWriteTransfer(a1, a2, a3, a1, a2, a3, a4);
  return result;
}
