/*
 * XREFs of EtwTraceContactVisualizationInfo @ 0x1C0161C90
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0d_EtwWriteTransfer @ 0x1C016524C (McTemplateK0d_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceContactVisualizationInfo(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x20000) != 0 )
    return McTemplateK0d_EtwWriteTransfer(a1, &ContactVisualizationInfo, a3, (unsigned int)a1);
  return result;
}
