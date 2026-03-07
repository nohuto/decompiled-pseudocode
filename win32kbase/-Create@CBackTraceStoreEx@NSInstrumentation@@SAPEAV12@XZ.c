struct NSInstrumentation::CBackTraceStoreEx *NSInstrumentation::CBackTraceStoreEx::Create(void)
{
  __int64 Pool2; // rax
  void *v1; // rbx

  Pool2 = ExAllocatePool2(262LL, 56LL, 860451669LL);
  v1 = (void *)Pool2;
  if ( !Pool2 )
    return 0LL;
  if ( !(unsigned __int8)NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucket,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Initialize(Pool2) )
  {
    ExFreePoolWithTag(v1, 0);
    return 0LL;
  }
  return (struct NSInstrumentation::CBackTraceStoreEx *)v1;
}
