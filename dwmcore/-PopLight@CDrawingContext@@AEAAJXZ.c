__int64 __fastcall CDrawingContext::PopLight(CDrawingContext *this)
{
  __int64 v1; // r8
  int v2; // eax
  unsigned int v3; // ecx
  unsigned int v4; // ebx
  _BYTE v6[24]; // [rsp+30h] [rbp-18h] BYREF

  CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop((char *)this + 368, v6, this);
  v2 = CLightStack::Pop((CLightStack *)(v1 + 560));
  v4 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v2, 0x18D3u, 0LL);
  return v4;
}
