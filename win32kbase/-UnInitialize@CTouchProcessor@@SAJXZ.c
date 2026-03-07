__int64 __fastcall CTouchProcessor::UnInitialize(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  VirtualTouchpadProcessor *v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  void *v18; // rbx

  if ( *(_QWORD *)(SGDGetUserSessionState(a1, a2, a3, a4) + 3424) )
  {
    DelayZonePalmRejection::Uninitialize(v5, v4, v6, v7);
    v12 = VirtualTouchpadProcessor::s_instance;
    if ( VirtualTouchpadProcessor::s_instance )
    {
      VirtualTouchpadProcessor::~VirtualTouchpadProcessor(VirtualTouchpadProcessor::s_instance);
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v12);
      VirtualTouchpadProcessor::s_instance = 0LL;
    }
    v13 = SGDGetUserSessionState(v9, v8, v10, v11);
    v18 = *(void **)(v13 + 3424);
    if ( v18 )
    {
      CTouchProcessor::~CTouchProcessor(*(CTouchProcessor **)(v13 + 3424));
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v18);
    }
    *(_QWORD *)(SGDGetUserSessionState(v15, v14, v16, v17) + 3424) = 0LL;
  }
  return 0LL;
}
