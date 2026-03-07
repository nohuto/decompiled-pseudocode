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
