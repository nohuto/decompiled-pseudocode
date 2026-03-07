__int64 __fastcall CStructDynamicArray<InjectManipulationArgs>::~CStructDynamicArray<InjectManipulationArgs>(
        __int64 a1)
{
  __int64 i; // rdi
  char *v3; // rdx

  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 8); i = (unsigned int)(i + 1) )
  {
    v3 = *(char **)(*(_QWORD *)a1 + 8 * i);
    if ( v3 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v3);
  }
  CDynamicArray<InjectManipulationArgs *,2003858261>::Reset(a1);
  return CDynamicArray<InjectManipulationArgs *,2003858261>::Reset(a1);
}
