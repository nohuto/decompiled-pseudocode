PVOID __fastcall GDIEngUserMemAllocNodeAlloc(struct _RTL_AVL_TABLE *Table, CLONG ByteSize)
{
  PVOID result; // rax

  result = 0LL;
  if ( ByteSize )
    return (PVOID)NSInstrumentation::CLeakTrackingAllocator::Allocate(
                    gpLeakTrackingAllocator,
                    260LL,
                    ByteSize,
                    0x616D5547u);
  return result;
}
