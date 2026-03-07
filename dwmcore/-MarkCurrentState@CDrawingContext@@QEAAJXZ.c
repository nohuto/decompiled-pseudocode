__int64 __fastcall CDrawingContext::MarkCurrentState(CDrawingContext *this)
{
  int v1; // eax
  unsigned int v2; // ecx
  unsigned int v3; // ebx
  __int128 v5; // [rsp+30h] [rbp-18h] BYREF

  *((_QWORD *)&v5 + 1) = -1LL;
  LODWORD(v5) = 12;
  v1 = CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Push((unsigned int *)this + 92, &v5);
  v3 = v1;
  if ( v1 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v2, 0LL, 0, v1, 0x103Du, 0LL);
  return v3;
}
