void __fastcall NullifyLookasideRef(_DWORD *a1)
{
  bool v1; // zf

  *(_QWORD *)a1 = 0LL;
  v1 = a1[2] == 0;
  *((_BYTE *)a1 + 12) = 1;
  if ( v1 )
    NSInstrumentation::CLeakTrackingAllocator::FreeToPagedLookasideList(
      (NSInstrumentation::CLeakTrackingAllocator *)a1,
      (char *)gpStackRefLookAside,
      (char *)a1);
}
