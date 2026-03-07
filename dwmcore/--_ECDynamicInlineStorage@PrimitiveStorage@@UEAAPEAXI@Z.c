PrimitiveStorage::CDynamicInlineStorage *__fastcall PrimitiveStorage::CDynamicInlineStorage::`vector deleting destructor'(
        PrimitiveStorage::CDynamicInlineStorage *this,
        char a2)
{
  HANDLE ProcessHeap; // rax

  --CHWDrawListEngineMetrics::s_cDrawListPrimitives;
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      __global_delete(this, 0x70uLL);
    }
    else if ( this )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, this);
    }
  }
  return this;
}
