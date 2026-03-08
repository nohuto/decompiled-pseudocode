/*
 * XREFs of EtwDirtyRectUpdate @ 0x1C00BADC0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pqqqq_EtwWriteTransfer @ 0x1C00EE7C4 (McTemplateK0pqqqq_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwDirtyRectUpdate(int a1, char a2, int a3, char a4, char a5)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
    return McTemplateK0pqqqq_EtwWriteTransfer(a1, (unsigned int)&DirtyRectUpdate, a3, a1, a2, a3, a4, a5);
  return result;
}
