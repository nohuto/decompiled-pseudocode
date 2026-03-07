PVOID CmpAllocateKeyControlBlock()
{
  PVOID v0; // rax
  PVOID v1; // rbx

  _InterlockedIncrement64(&CmPerfCounters);
  v0 = ExAllocateFromLookasideListEx(&CmpKcbLookaside);
  v1 = v0;
  if ( v0 )
  {
    _InterlockedIncrement64(qword_140D55300);
    memset(v0, 0, 0x138uLL);
  }
  return v1;
}
