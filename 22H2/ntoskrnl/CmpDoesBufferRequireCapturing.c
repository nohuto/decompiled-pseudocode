/*
 * XREFs of CmpDoesBufferRequireCapturing @ 0x1406DD3DC
 * Callers:
 *     NtSetValueKey @ 0x1406DCBB0 (NtSetValueKey.c)
 *     CmpCaptureKeyValueArray @ 0x1406DFEF0 (CmpCaptureKeyValueArray.c)
 *     NtDeleteValueKey @ 0x1406E1EF0 (NtDeleteValueKey.c)
 *     NtRenameKey @ 0x140868C80 (NtRenameKey.c)
 * Callees:
 *     CmpIsBufferGloballyVisible @ 0x140678780 (CmpIsBufferGloballyVisible.c)
 */

bool __fastcall CmpDoesBufferRequireCapturing(int a1, unsigned __int64 a2)
{
  return a1 || *((_QWORD *)&CmpRegistryProcess + 1) && !CmpIsBufferGloballyVisible(a2);
}
