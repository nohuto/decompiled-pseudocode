void __fastcall NSInstrumentation::CLeakTrackingAllocator::~CLeakTrackingAllocator(
        NSInstrumentation::CLeakTrackingAllocator *this)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rdi
  void *v5; // rcx

  v2 = (void *)*((_QWORD *)this + 11);
  if ( v2 )
    NSInstrumentation::CPointerHashTable::Destroy(v2);
  v3 = (void *)*((_QWORD *)this + 12);
  if ( v3 )
    NSInstrumentation::CSortedVector<void *,void *>::Destroy(v3);
  v4 = (void *)*((_QWORD *)this + 13);
  if ( v4 )
  {
    NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucket,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Uninitialize(*((_QWORD *)this + 13));
    ExFreePoolWithTag(v4, 0);
  }
  v5 = (void *)*((_QWORD *)this + 1);
  if ( v5 )
    NSInstrumentation::CPointerHashTable::Destroy(v5);
}
