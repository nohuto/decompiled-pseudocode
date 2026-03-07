void __fastcall rimUserMemAllocNodeFree(struct _RTL_AVL_TABLE *Table, char *Buffer)
{
  if ( Buffer )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, Buffer);
}
