/*
 * XREFs of KdpCloseFileCallback @ 0x140AAD0A0
 * Callers:
 *     <none>
 * Callees:
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 */

NTSTATUS __fastcall KdpCloseFileCallback(__int64 a1)
{
  void *v1; // rcx
  NTSTATUS result; // eax

  v1 = *(void **)(a1 + 16);
  if ( v1 )
    return ZwClose(v1);
  return result;
}
