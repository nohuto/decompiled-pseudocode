__int64 __fastcall NSInstrumentation::CLeakTrackingAllocator::AllocatePriority(
        NSInstrumentation::CLeakTrackingAllocator *this,
        __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        enum _EX_POOL_PRIORITY a5)
{
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  enum _EX_POOL_PRIORITY *v7; // [rsp+30h] [rbp-18h]
  __int64 v8; // [rsp+58h] [rbp+10h] BYREF
  unsigned int v9; // [rsp+68h] [rbp+20h] BYREF

  v9 = a4;
  v8 = a2;
  *(_QWORD *)&v6 = &v8;
  *((_QWORD *)&v6 + 1) = &v9;
  v7 = &a5;
  return NSInstrumentation::CLeakTrackingAllocator::AllocateCommon__lambda_0557cbb2832d1680ca92e9237d413628___(
           gpLeakTrackingAllocator,
           a3,
           a4,
           &v6);
}
