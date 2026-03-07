__int64 __fastcall TypeIsolationFactory<NSInstrumentation::CTypeIsolation<40960,160>,NSInstrumentation::CTypeIsolation<49152,192>,NSInstrumentation::CLookAsideTypeIsolation<36864,144>,NSInstrumentation::CTypeIsolation<81920,320>,NSInstrumentation::CTypeIsolation<913408,3568>,NSInstrumentation::CTypeIsolation<32768,128>,NSInstrumentation::CTypeIsolation<233472,912>>::Destroy(
        _QWORD *a1)
{
  void *v1; // rdi
  void *v3; // rdi
  __int64 v4; // rdi

  v1 = (void *)a1[2];
  if ( v1 )
  {
    NSInstrumentation::CTypeIsolation<40960,160>::~CTypeIsolation<40960,160>(a1[2]);
    ExFreePoolWithTag(v1, 0);
  }
  v3 = (void *)a1[3];
  if ( v3 )
  {
    NSInstrumentation::CTypeIsolation<49152,192>::~CTypeIsolation<49152,192>(a1[3]);
    ExFreePoolWithTag(v3, 0);
  }
  v4 = a1[1];
  if ( v4 )
  {
    ExDeleteLookasideListEx((PLOOKASIDE_LIST_EX)(v4 + 48));
    NSInstrumentation::CTypeIsolation<36864,144>::~CTypeIsolation<36864,144>(v4);
    ExFreePoolWithTag((PVOID)v4, 0);
  }
  return TypeIsolationFactory<NSInstrumentation::CTypeIsolation<81920,320>,NSInstrumentation::CTypeIsolation<913408,3568>,NSInstrumentation::CTypeIsolation<32768,128>,NSInstrumentation::CTypeIsolation<233472,912>>::Destroy(a1);
}
