/*
 * XREFs of PopDirectedDripsNotifyTransitionFailed @ 0x140980AFC
 * Callers:
 *     PoBroadcastSystemState @ 0x140AA38F8 (PoBroadcastSystemState.c)
 * Callees:
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x140240954 (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     PopDirectedDripsDiagTraceBroadcastFailureDevice @ 0x14099C0DC (PopDirectedDripsDiagTraceBroadcastFailureDevice.c)
 */

LONG_PTR __fastcall PopDirectedDripsNotifyTransitionFailed(__int64 a1)
{
  LONG_PTR result; // rax
  void *v2; // rbx

  result = (LONG_PTR)IoGetDeviceAttachmentBaseRefWithTag(a1, 0x67696450u);
  v2 = (void *)result;
  if ( result )
  {
    if ( *(_QWORD *)(*(_QWORD *)(result + 312) + 40LL) )
      PopDirectedDripsDiagTraceBroadcastFailureDevice();
    result = ObfDereferenceObjectWithTag(v2, 0x67696450u);
  }
  byte_140C3EFB4 = 1;
  return result;
}
