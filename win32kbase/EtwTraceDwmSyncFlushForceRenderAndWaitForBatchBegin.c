/*
 * XREFs of EtwTraceDwmSyncFlushForceRenderAndWaitForBatchBegin @ 0x1C01620C0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0d_EtwWriteTransfer @ 0x1C016524C (McTemplateK0d_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceDwmSyncFlushForceRenderAndWaitForBatchBegin(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    return McTemplateK0d_EtwWriteTransfer(a1, &DwmSyncFlushForceRenderAndWaitForBatchBegin, a3, (unsigned int)a1);
  return result;
}
