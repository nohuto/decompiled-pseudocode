/*
 * XREFs of EtwTraceFlipManagerPresentConfirmed @ 0x1C014D4F0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0qx_EtwWriteTransfer @ 0x1C01517C0 (McTemplateK0qx_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceFlipManagerPresentConfirmed(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
    return McTemplateK0qx_EtwWriteTransfer(a1, &FlipManagerPresentConfirmed, a3, (unsigned int)a1, a2);
  return result;
}
