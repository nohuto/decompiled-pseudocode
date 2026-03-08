/*
 * XREFs of CmpDoesBufferRequireCapturing @ 0x1407A97FC
 * Callers:
 *     NtDeleteValueKey @ 0x1406B9280 (NtDeleteValueKey.c)
 *     CmpCaptureKeyValueArray @ 0x1407A8A44 (CmpCaptureKeyValueArray.c)
 *     NtSetValueKey @ 0x1407A9030 (NtSetValueKey.c)
 *     NtRenameKey @ 0x140A0B350 (NtRenameKey.c)
 * Callees:
 *     CmpIsBufferGloballyVisible @ 0x1406B18D8 (CmpIsBufferGloballyVisible.c)
 */

bool __fastcall CmpDoesBufferRequireCapturing(int a1, unsigned __int64 a2)
{
  if ( a1 )
    return 1;
  if ( *((_QWORD *)&CmpRegistryProcess + 1) )
    return !CmpIsBufferGloballyVisible(a2);
  return 0;
}
