/*
 * XREFs of VfDifCaptureDriverEntry @ 0x14037DAB4
 * Callers:
 *     IopLoadDriver @ 0x140740A28 (IopLoadDriver.c)
 *     IopInitializeBuiltinDriver @ 0x140A5F618 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     ViDifCheckCallbackInterception @ 0x14037DAE8 (ViDifCheckCallbackInterception.c)
 *     ViDifAllocateCallbackStorage @ 0x1405A0E68 (ViDifAllocateCallbackStorage.c)
 *     ViDifCaptureDriverEntry @ 0x1405A0EAC (ViDifCaptureDriverEntry.c)
 */

char __fastcall VfDifCaptureDriverEntry(__int64 a1)
{
  __int64 v1; // rdi
  __int64 CallbackStorage; // rax

  v1 = *(_QWORD *)(a1 + 48);
  if ( !(unsigned __int8)ViDifCheckCallbackInterception() )
    return 0;
  CallbackStorage = ViDifAllocateCallbackStorage();
  if ( !CallbackStorage )
    return 0;
  *(_QWORD *)(v1 + 64) = CallbackStorage;
  ViDifCaptureDriverEntry(a1);
  return 1;
}
