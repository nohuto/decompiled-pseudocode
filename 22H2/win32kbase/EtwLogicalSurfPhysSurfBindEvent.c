/*
 * XREFs of EtwLogicalSurfPhysSurfBindEvent @ 0x1C00AA4C0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0xx_EtwWriteTransfer @ 0x1C014D1B4 (McTemplateK0xx_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwLogicalSurfPhysSurfBindEvent(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
    return McTemplateK0xx_EtwWriteTransfer(a1, &LogicalSurfPhysSurfBindEvent, a3, a1, a2);
  return result;
}
