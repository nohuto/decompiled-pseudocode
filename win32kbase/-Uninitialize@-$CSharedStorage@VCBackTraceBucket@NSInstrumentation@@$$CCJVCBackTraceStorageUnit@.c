void __fastcall NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucket,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Uninitialize(
        __int64 a1)
{
  unsigned int v1; // eax
  NSInstrumentation::CBackTraceBucket **v3; // r14
  NSInstrumentation::CBackTraceBucket **v4; // rdi
  __int64 v5; // rbp
  NSInstrumentation::CBackTraceBucket *v6; // rsi
  void *v7; // rcx

  v1 = *(_DWORD *)(a1 + 32);
  v3 = *(NSInstrumentation::CBackTraceBucket ***)(a1 + 48);
  if ( v1 )
  {
    v4 = v3 + 1;
    v5 = v1;
    do
    {
      v6 = *v4;
      if ( *v4 )
      {
        NSInstrumentation::CBackTraceBucket::~CBackTraceBucket(*v4);
        ExFreePoolWithTag(v6, 0);
      }
      v4 += 2;
      --v5;
    }
    while ( v5 );
  }
  ExFreePoolWithTag(v3, 0);
  v7 = *(void **)(a1 + 40);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_DWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 36) = 0;
}
