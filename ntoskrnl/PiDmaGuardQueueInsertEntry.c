__int64 __fastcall PiDmaGuardQueueInsertEntry(PVOID Object, int a2)
{
  unsigned int v4; // ebx
  __int64 Pool2; // rdi

  v4 = 0;
  Pool2 = ExAllocatePool2(256LL, 32LL, 1685089872LL);
  if ( Pool2 )
  {
    ObfReferenceObjectWithTag(Object, 0x64706E50u);
    *(_QWORD *)(Pool2 + 16) = Object;
    *(_DWORD *)(Pool2 + 24) = a2;
    PipDgqInsertEntry(Pool2);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v4;
}
