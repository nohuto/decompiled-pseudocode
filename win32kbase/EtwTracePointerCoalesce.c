/*
 * XREFs of EtwTracePointerCoalesce @ 0x1C0163BD0
 * Callers:
 *     ?CoalesceNodeWithPrevious@CTouchProcessor@@AEAA_KPEBUCPointerInputFrame@@0PEAUCPointerInfoNode@@KH@Z @ 0x1C01EBFCC (-CoalesceNodeWithPrevious@CTouchProcessor@@AEAA_KPEBUCPointerInputFrame@@0PEAUCPointerInfoNode@@.c)
 * Callees:
 *     McTemplateK0hhq_EtwWriteTransfer @ 0x1C0165640 (McTemplateK0hhq_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTracePointerCoalesce(int a1, char a2, int a3)
{
  __int64 result; // rax

  if ( a3 )
  {
    if ( (Microsoft_Windows_Win32kEnableBits & 0x80000) != 0 )
      return McTemplateK0hhq_EtwWriteTransfer(
               a1,
               (unsigned int)&PointerDelegateCoalesce,
               a3,
               (unsigned __int16)a1,
               a2,
               0);
  }
  else if ( (Microsoft_Windows_Win32kEnableBits & 0x80000) != 0 )
  {
    return McTemplateK0hhq_EtwWriteTransfer(a1, (unsigned int)&PointerCoalesce, 0, (unsigned __int16)a1, a2, 0);
  }
  return result;
}
