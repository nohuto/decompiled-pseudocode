/*
 * XREFs of EtwTraceBeginTranslateMessage @ 0x1C00D08D0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0cd_EtwWriteTransfer @ 0x1C00EDF1C (McTemplateK0cd_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceBeginTranslateMessage(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x800) != 0 )
  {
    LOBYTE(a4) = a1;
    return McTemplateK0cd_EtwWriteTransfer(a1, &BeginTranslateMessage, a3, a4, a2);
  }
  return result;
}
