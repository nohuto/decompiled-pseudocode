void __fastcall FreeSystemRelativePath(__int64 a1)
{
  char *v1; // rdx

  v1 = *(char **)(a1 + 8);
  if ( v1 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v1);
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_DWORD *)a1 = 0;
}
