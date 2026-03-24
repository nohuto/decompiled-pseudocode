/*
 * XREFs of TraceDxgkBlockThread @ 0x1C001AE00
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 */

__int64 __fastcall TraceDxgkBlockThread(__int64 a1)
{
  __int64 result; // rax

  if ( (_DWORD)a1 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    return McTemplateK0q_EtwWriteTransfer(a1, &EventBlockThread);
  return result;
}
