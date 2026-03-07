__int64 __fastcall NSInstrumentation::CBackTraceStoreEx::AcquireBackTrace(
        NSInstrumentation::CBackTraceStoreEx *this,
        struct NSInstrumentation::CBackTrace *a2,
        unsigned int *a3)
{
  __int64 v7; // rcx

  if ( !a2 )
    return 0LL;
  v7 = NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucket,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Lookup(
         this,
         a2);
  if ( v7
    || (v7 = NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucket,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Insert(
               this,
               a2)) != 0 )
  {
    if ( a3 )
      *a3 = *(_DWORD *)(v7 + 180);
  }
  return v7;
}
