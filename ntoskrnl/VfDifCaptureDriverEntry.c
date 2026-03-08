/*
 * XREFs of VfDifCaptureDriverEntry @ 0x1403035E8
 * Callers:
 *     IopLoadDriver @ 0x14072A9DC (IopLoadDriver.c)
 *     IopInitializeBuiltinDriver @ 0x140B58C28 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     VfTargetDriversGetNode @ 0x140303628 (VfTargetDriversGetNode.c)
 *     ViDifCheckCallbackInterception @ 0x140303BC8 (ViDifCheckCallbackInterception.c)
 *     ViDifCaptureDriverEntry @ 0x1405CCB2C (ViDifCaptureDriverEntry.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

char __fastcall VfDifCaptureDriverEntry(__int64 a1)
{
  __int64 Node; // rax
  __int64 Pool2; // rax

  if ( *(_QWORD *)(a1 + 88) )
  {
    Node = VfTargetDriversGetNode();
    if ( Node )
      *(_QWORD *)(Node + 48) = a1;
  }
  if ( !(unsigned __int8)ViDifCheckCallbackInterception(a1) )
    return 0;
  Pool2 = ExAllocatePool2(64LL, 256LL, 1229940310LL);
  if ( !Pool2 )
    return 0;
  *(_QWORD *)(*(_QWORD *)(a1 + 48) + 64LL) = Pool2;
  ViDifCaptureDriverEntry(a1);
  return 1;
}
