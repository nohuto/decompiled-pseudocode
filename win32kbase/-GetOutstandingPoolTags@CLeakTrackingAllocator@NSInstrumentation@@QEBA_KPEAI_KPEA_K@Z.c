unsigned __int64 __fastcall NSInstrumentation::CLeakTrackingAllocator::GetOutstandingPoolTags(
        NSInstrumentation::CLeakTrackingAllocator *this,
        unsigned int *a2,
        unsigned __int64 a3,
        unsigned __int64 *a4)
{
  NSInstrumentation::CPointerHashTable *v6; // rcx
  _QWORD v7[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]
  unsigned __int64 v9; // [rsp+38h] [rbp-10h]

  if ( *(_DWORD *)this == 1 )
  {
    v6 = (NSInstrumentation::CPointerHashTable *)*((_QWORD *)this + 1);
    v8 = 0LL;
    v9 = 0LL;
    v7[0] = a2;
    v7[1] = a3;
    NSInstrumentation::CPointerHashTable::Enumerate(
      v6,
      lambda_f2915f0acc4cc36207654c5dacc62844_::_lambda_invoker_cdecl_,
      v7);
    if ( a4 )
      *a4 = v9;
    return v8;
  }
  else if ( *(_DWORD *)this == 2 )
  {
    return NSInstrumentation::CLeakTrackingAllocator::PoolTagModeGetOutstandingPoolTags(this, a2, a3, a4);
  }
  else
  {
    return 0LL;
  }
}
