__int64 __fastcall CHitTestContext::HitTestTreeWalk(__int64 a1, __int64 a2, float a3, float a4, int a5)
{
  __int64 v7; // r8
  int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // ebx

  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_DWORD *)(a1 + 240) = a5;
  *(_QWORD *)(a1 + 144) = *(_QWORD *)(a1 + 136);
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_QWORD *)(a1 + 168) = 0LL;
  *(float *)(a1 + 88) = a3;
  *(float *)(a1 + 92) = a4;
  *(_BYTE *)(a1 + 128) = 0;
  CWatermarkStack<enum MilBackfaceVisibility::Enum,64,2,10>::Push(a1 + 176, &CRenderState::sc_DefaultBackfaceVisibility);
  v7 = *(_QWORD *)(a2 + 64);
  *(_QWORD *)(a1 + 72) = a2;
  v8 = CVisualTreeIterator::WalkSubtree<CHitTestContext>(a1 + 8, *(_QWORD *)(a2 + 64), v7, a1);
  v10 = v8;
  if ( v8 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x22Fu, 0LL);
  return v10;
}
