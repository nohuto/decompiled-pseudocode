/*
 * XREFs of EtwPhysicalSurfCreateEvent @ 0x1C00B0D80
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0xqxq_EtwWriteTransfer @ 0x1C0198D24 (McTemplateK0xqxq_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwPhysicalSurfCreateEvent(int a1, int a2, int a3, char a4)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
    return McTemplateK0xqxq_EtwWriteTransfer(a1, a2, a3, a1, a2, a3, a4);
  return result;
}
