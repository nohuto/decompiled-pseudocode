/*
 * XREFs of EtwTraceFlipManagerAddRemoveContent @ 0x1C0162550
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0qp_EtwWriteTransfer @ 0x1C016624C (McTemplateK0qp_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceFlipManagerAddRemoveContent(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // r9
  void *v4; // rdx
  __int64 result; // rax

  if ( (_DWORD)a1 )
  {
    if ( (Microsoft_Windows_Win32kEnableBits & 1) == 0 )
      return result;
    v3 = a2;
    v4 = &FlipManagerAddContent;
  }
  else
  {
    if ( (Microsoft_Windows_Win32kEnableBits & 1) == 0 )
      return result;
    v3 = a2;
    v4 = &FlipManagerRemoveContent;
  }
  return McTemplateK0qp_EtwWriteTransfer(a1, v4, a3, v3, a3);
}
