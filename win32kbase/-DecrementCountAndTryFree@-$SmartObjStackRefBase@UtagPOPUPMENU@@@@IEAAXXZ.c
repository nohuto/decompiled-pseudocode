void __fastcall SmartObjStackRefBase<tagPOPUPMENU>::DecrementCountAndTryFree(
        NSInstrumentation::CLeakTrackingAllocator *a1)
{
  if ( *(_UNKNOWN **)a1 != &gSmartObjNullRef && !--*(_DWORD *)(*(_QWORD *)a1 + 8LL) )
  {
    if ( *(_BYTE *)(*(_QWORD *)a1 + 12LL) )
      NSInstrumentation::CLeakTrackingAllocator::FreeToPagedLookasideList(a1, (char *)gpStackRefLookAside, *(char **)a1);
  }
}
