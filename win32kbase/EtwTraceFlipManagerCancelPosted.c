/*
 * XREFs of EtwTraceFlipManagerCancelPosted @ 0x1C0162660
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0qp_EtwWriteTransfer @ 0x1C016624C (McTemplateK0qp_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceFlipManagerCancelPosted(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
    return McTemplateK0qp_EtwWriteTransfer(a1, &FlipManagerCancelPosted, a3, (unsigned int)a1, a2);
  return result;
}
