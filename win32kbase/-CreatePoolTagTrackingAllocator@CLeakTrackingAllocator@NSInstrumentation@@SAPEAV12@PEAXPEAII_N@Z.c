struct NSInstrumentation::CLeakTrackingAllocator *__fastcall NSInstrumentation::CLeakTrackingAllocator::CreatePoolTagTrackingAllocator(
        void *a1,
        unsigned int *a2,
        unsigned int a3)
{
  struct NSInstrumentation::CLeakTrackingAllocator *Common; // rax
  int *v4; // rdx
  unsigned int v5; // r8d
  struct NSInstrumentation::CLeakTrackingAllocator *v6; // r9
  __int64 v7; // r10
  int v8; // eax

  if ( a3 > 8 )
    return 0LL;
  Common = NSInstrumentation::CLeakTrackingAllocator::CreateCommon(a1);
  v6 = Common;
  if ( !Common )
    return 0LL;
  *(_DWORD *)Common = 2;
  if ( v5 )
  {
    v7 = v5;
    do
    {
      *((_DWORD *)v6 + (unsigned int)(*((_DWORD *)v6 + 21))++ + 12) = *v4;
      v8 = *v4++;
      *((_DWORD *)v6 + 20) |= v8;
      --v7;
    }
    while ( v7 );
  }
  return v6;
}
