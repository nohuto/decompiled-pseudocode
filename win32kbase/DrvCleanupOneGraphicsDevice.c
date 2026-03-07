void __fastcall DrvCleanupOneGraphicsDevice(__int64 a1)
{
  char *v1; // rdx
  char *v3; // rdx
  char *v4; // rdx
  char *v5; // rdx
  char *v6; // rdx

  v1 = *(char **)(a1 + 176);
  if ( v1 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v1);
  v3 = *(char **)(a1 + 192);
  if ( v3 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v3);
  v4 = *(char **)(a1 + 208);
  if ( v4 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v4);
  v5 = *(char **)(a1 + 200);
  if ( v5 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v5);
  if ( *(_QWORD *)(a1 + 224) )
  {
    if ( (*(_DWORD *)(a1 + 164) & 2) != 0 )
      bSetDeviceSessionUsage(a1, 0);
    ObfDereferenceObject(*(PVOID *)(a1 + 224));
  }
  v6 = *(char **)(a1 + 264);
  if ( v6 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v6);
    *(_QWORD *)(a1 + 264) = 0LL;
  }
  NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)a1);
}
