void __fastcall GdiHandleManager::Destroy(struct GdiHandleManager *a1)
{
  char *v1; // rdx

  v1 = (char *)*((_QWORD *)a1 + 3);
  if ( v1 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v1);
  GdiHandleEntryDirectory::Destroy(*((struct GdiHandleEntryDirectory **)a1 + 2));
  NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)a1);
}
