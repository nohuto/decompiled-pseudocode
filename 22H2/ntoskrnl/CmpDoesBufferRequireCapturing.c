/*
 * XREFs of CmpDoesBufferRequireCapturing @ 0x1406D327C
 * Callers:
 *     CmpCaptureKeyValueArray @ 0x1406D24C8 (CmpCaptureKeyValueArray.c)
 *     NtSetValueKey @ 0x1406D2AB0 (NtSetValueKey.c)
 *     NtDeleteValueKey @ 0x14070EAF0 (NtDeleteValueKey.c)
 *     NtRenameKey @ 0x140A0E060 (NtRenameKey.c)
 * Callees:
 *     CmpIsBufferGloballyVisible @ 0x14073EBA0 (CmpIsBufferGloballyVisible.c)
 */

bool __fastcall CmpDoesBufferRequireCapturing(int a1, __int64 a2)
{
  if ( a1 )
    return 1;
  if ( *((_QWORD *)&CmpRegistryProcess + 1) )
    return (unsigned __int8)CmpIsBufferGloballyVisible(a2) == 0;
  return 0;
}
