void __fastcall TypeIsolationFactory<NSInstrumentation::CTypeIsolation<81920,320>,NSInstrumentation::CTypeIsolation<913408,3568>,NSInstrumentation::CTypeIsolation<32768,128>,NSInstrumentation::CTypeIsolation<233472,912>>::Destroy(
        _QWORD *a1)
{
  void *v1; // rdi
  void *v3; // rdi
  void *v4; // rdi
  void *v5; // rbx

  v1 = (void *)a1[4];
  if ( v1 )
  {
    NSInstrumentation::CTypeIsolation<81920,320>::~CTypeIsolation<81920,320>(a1[4]);
    ExFreePoolWithTag(v1, 0);
  }
  v3 = (void *)a1[6];
  if ( v3 )
  {
    NSInstrumentation::CTypeIsolation<913408,3568>::~CTypeIsolation<913408,3568>(a1[6]);
    ExFreePoolWithTag(v3, 0);
  }
  v4 = (void *)a1[7];
  if ( v4 )
  {
    NSInstrumentation::CTypeIsolation<32768,128>::~CTypeIsolation<32768,128>(a1[7]);
    ExFreePoolWithTag(v4, 0);
  }
  v5 = (void *)a1[5];
  if ( v5 )
  {
    NSInstrumentation::CTypeIsolation<233472,912>::~CTypeIsolation<233472,912>(v5);
    ExFreePoolWithTag(v5, 0);
  }
}
