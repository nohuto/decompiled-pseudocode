/*
 * XREFs of EtwTranslationUpdateOffset @ 0x1C0198760
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C0165DC4 (McTemplateK0pqq_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall EtwTranslationUpdateOffset(__int64 a1, int a2, __int64 a3)
{
  NTSTATUS result; // eax
  int v5; // [rsp+28h] [rbp-10h]

  if ( (Microsoft_Windows_Win32kEnableBits & 0x200) != 0 )
  {
    v5 = a3;
    return McTemplateK0pqq_EtwWriteTransfer(a1, &TranslationUpdateOffset, a3, a1, a2, v5);
  }
  return result;
}
