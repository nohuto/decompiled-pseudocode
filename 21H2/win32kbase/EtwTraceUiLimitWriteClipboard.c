/*
 * XREFs of EtwTraceUiLimitWriteClipboard @ 0x1C014F230
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0qm_EtwWriteTransfer @ 0x1C00CB650 (McTemplateK0qm_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall EtwTraceUiLimitWriteClipboard(__int64 a1, __int64 a2, __int64 a3)
{
  NTSTATUS result; // eax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x80000000000LL) != 0 )
    return McTemplateK0qm_EtwWriteTransfer(a1, &UiLimitWriteClipboard, a3, a1, a2);
  return result;
}
