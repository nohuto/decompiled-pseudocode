__int64 __fastcall CDrawingContext::PushEffectiveAlphaForNode(
        CDrawingContext *this,
        const struct CVisual *a2,
        float a3,
        char a4)
{
  char v4; // si
  char *v5; // rbp
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v13; // r8
  __int128 v14; // [rsp+30h] [rbp-18h] BYREF
  float v15; // [rsp+60h] [rbp+18h] BYREF

  v15 = a3;
  v4 = 0;
  v5 = (char *)this + 368;
  if ( a4 )
  {
    *((_QWORD *)&v14 + 1) = a2;
    LODWORD(v14) = 8;
    v7 = CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Push((unsigned int *)this + 92, &v14);
    v9 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x11C7u, 0LL);
      return v9;
    }
    v4 = 1;
  }
  v10 = CWatermarkStack<float,64,2,10>::Push((unsigned int *)this + 812, &v15);
  v9 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x11CBu, 0LL);
    if ( v4 )
      CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop(v5, 0LL, v13);
  }
  return v9;
}
