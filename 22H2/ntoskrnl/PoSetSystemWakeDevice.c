/*
 * XREFs of PoSetSystemWakeDevice @ 0x140583BC0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F5D0 (ObfDereferenceObjectWithTag.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x140302A88 (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     PopUpdateWakeSource @ 0x14058E7A8 (PopUpdateWakeSource.c)
 */

void *__fastcall PoSetSystemWakeDevice(__int64 a1)
{
  void *result; // rax
  void *v2; // rbx

  result = IoGetDeviceAttachmentBaseRefWithTag(a1, 0x72496F50u);
  v2 = result;
  if ( result )
  {
    PopUpdateWakeSource(result);
    return (void *)ObfDereferenceObjectWithTag(v2, 0x72496F50u);
  }
  return result;
}
