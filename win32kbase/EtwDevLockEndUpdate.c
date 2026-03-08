/*
 * XREFs of EtwDevLockEndUpdate @ 0x1C00BADE0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pqqqqqq_EtwWriteTransfer @ 0x1C0198894 (McTemplateK0pqqqqqq_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwDevLockEndUpdate(int a1, char a2, int a3, char a4, char a5, char a6, char a7)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x200) != 0 )
    return McTemplateK0pqqqqqq_EtwWriteTransfer(a1, (unsigned int)&DevLockEndUpdate, a3, a1, a2, a3, a4, a5, a6, a7);
  return result;
}
