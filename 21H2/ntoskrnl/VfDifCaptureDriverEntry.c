/*
 * XREFs of VfDifCaptureDriverEntry @ 0x1402D8724
 * Callers:
 *     IopLoadDriver @ 0x14074A178 (IopLoadDriver.c)
 *     IopInitializeBuiltinDriver @ 0x140B11EBC (IopInitializeBuiltinDriver.c)
 * Callees:
 *     VfTargetDriversGetNode @ 0x1402D86CC (VfTargetDriversGetNode.c)
 *     ViDifCheckCallbackInterception @ 0x1402D8764 (ViDifCheckCallbackInterception.c)
 *     ViDifCaptureDriverEntry @ 0x1405FEC4C (ViDifCaptureDriverEntry.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

char __fastcall VfDifCaptureDriverEntry(__int64 a1)
{
  unsigned __int64 v2; // rcx
  _QWORD *Node; // rax
  __int64 Pool2; // rax

  v2 = *(_QWORD *)(a1 + 88);
  if ( v2 )
  {
    Node = VfTargetDriversGetNode(v2);
    if ( Node )
      Node[6] = a1;
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
