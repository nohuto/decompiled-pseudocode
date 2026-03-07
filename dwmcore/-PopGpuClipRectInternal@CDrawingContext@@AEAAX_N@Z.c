void __fastcall CDrawingContext::PopGpuClipRectInternal(CDrawingContext *this, char a2)
{
  CDrawingContext *v2; // r8
  int v3; // eax
  _BYTE v4[24]; // [rsp+20h] [rbp-18h] BYREF

  v2 = this;
  if ( a2 )
    CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop((char *)this + 368, v4, this);
  v3 = *((_DWORD *)v2 + 796);
  if ( v3 )
    *((_DWORD *)v2 + 796) = v3 - 1;
  --*(_QWORD *)(*((_QWORD *)v2 + 113) - 184LL);
  *((_BYTE *)v2 + 8169) = 1;
}
