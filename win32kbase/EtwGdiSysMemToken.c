/*
 * XREFs of EtwGdiSysMemToken @ 0x1C00D4940
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0qqxx_EtwWriteTransfer @ 0x1C01674B8 (McTemplateK0qqxx_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwGdiSysMemToken(int a1, char a2, int a3, char a4)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
    return McTemplateK0qqxx_EtwWriteTransfer(a1, (unsigned int)&GdiSysMemToken, a3, a1, a2, a3, a4);
  return result;
}
