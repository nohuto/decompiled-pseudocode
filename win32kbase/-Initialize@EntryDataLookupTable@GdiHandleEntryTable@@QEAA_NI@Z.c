char __fastcall GdiHandleEntryTable::EntryDataLookupTable::Initialize(
        GdiHandleEntryTable::EntryDataLookupTable *this,
        unsigned int a2)
{
  unsigned __int64 v2; // rbx
  unsigned __int8 v4; // si
  __int64 v5; // rdx
  unsigned __int64 v6; // rbx
  _QWORD *v7; // rax

  v2 = a2;
  v4 = a2;
  v5 = *(_QWORD *)this;
  v6 = v2 >> 8;
  if ( !*(_QWORD *)(*(_QWORD *)this + 8 * v6) )
  {
    *(_QWORD *)(*(_QWORD *)this + 8 * v6) = NSInstrumentation::CLeakTrackingAllocator::Allocate(
                                              gpLeakTrackingAllocator,
                                              260LL,
                                              0x1000uLL,
                                              0x636C6547u);
    v5 = *(_QWORD *)this;
    if ( !*(_QWORD *)(*(_QWORD *)this + 8 * v6) )
      return 0;
  }
  v7 = (_QWORD *)(*(_QWORD *)(v5 + 8 * v6) + 16LL * v4);
  *v7 = 0LL;
  v7[1] = 0LL;
  return 1;
}
